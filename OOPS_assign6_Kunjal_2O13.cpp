//q1
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int ISBN;
};

class Library
{
public:
    Book arr[10];
    int count = 0;

    bool addNewBook(string &title, string &author, int &ISBN);
    bool removeBooks(int &ISBN);
    void displayDetails();
};

bool Library ::addNewBook(string &title, string &author, int &ISBN)
{
    if (count >= 10)
        return false;

    arr[count].title = title;
    arr[count].author = author;
    arr[count].ISBN = ISBN;

    count++;
    return true;
}

bool Library::removeBooks(int &ISBN) {
    for (int i = 0; i < count; i++) {
        if (arr[i].ISBN == ISBN) {
            
           
            for (int j = i; j < count - 1; j++) {
                arr[j] = arr[j + 1];
            }

            count--;
            return true;
        }
    }
    return false;
}

void Library ::displayDetails()
{

    for (int i = 0; i < count; i++)
    {
        cout << "Book" << i + 1 << endl;
        cout << arr[i].title << endl;
        cout << arr[i].author << endl;
        cout << arr[i].ISBN << endl;
        
    }
}

int main()
{
    Library L;

    for (int i = 0; i < 2; i++)
    {
        string t;
        string a;
        int is;
        cout << "Enter the  details of book " << i + 1 << endl;
        cout << "Enter book title: ";
        cin >> t;
        cout << "Enter book author: ";
        cin >> a;
        cout << "Enter ISBN :";
        cin >> is;
        L.addNewBook(t, a, is);
    }

    L.displayDetails();

    int i;
    cout<<"Enter the book ISBN u want to delete";
    cin>>i;

    L.removeBooks(i);
    
     L.displayDetails();

}

//q2
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int ISBN;

    // Default Const
    Book()
    {
        this->title = "";
        this->author = "";
        this->ISBN = 0;
    }

    // Parameterized Const
    Book(string title, string author, int ISBN)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    // Copy Const
    Book(const Book &b)
    {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library
{
public:
    Book arr[10];
    int count;

    Library()
    {
        this->count = 0;
    }

    bool addNewBook(string &title, string &author, int &ISBN);
    bool removeBooks(int &ISBN);
    void displayDetails();
};

bool Library::addNewBook(string &title, string &author, int &ISBN)
{
    if (this->count >= 10)
        return false;

    // Using parameterized constructor
    this->arr[this->count] = Book(title, author, ISBN);

    this->count++;
    return true;
}

bool Library::removeBooks(int &ISBN)
{
    for (int i = 0; i < this->count; i++)
    {
        if (this->arr[i].ISBN == ISBN)
        {
            for (int j = i; j < this->count - 1; j++)
            {
                this->arr[j] = this->arr[j + 1];
            }
            this->count--;
            return true;
        }
    }
    return false;
}

void Library::displayDetails()
{
    for (int i = 0; i < this->count; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Title: " << this->arr[i].title << endl;
        cout << "Author: " << this->arr[i].author << endl;
        cout << "ISBN: " << this->arr[i].ISBN << endl;
    }
}

int main()
{
    Library L;

    // Input books
    for (int i = 0; i < 2; i++)
    {
        string t, a;
        int is;

        cout << "Enter details of book " << i + 1 << endl;
        cout << "Title: ";
        cin >> t;
        cout << "Author: ";
        cin >> a;
        cout << "ISBN: ";
        cin >> is;

        L.addNewBook(t, a, is);
    }

    L.displayDetails();

    int del;
    cout << "\nEnter ISBN to delete: ";
    cin >> del;

    L.removeBooks(del);

    cout << "\nAfter Deletion:\n";
    L.displayDetails();

    Book b1("C++", "Bjarne", 101);
    Book b2("DSA", "CLRS", 102);

    Book b3 = b1;

    Book *dynBook = new Book("OOP", "Stroustrup", 103);

    cout << "Dynamic Book: " << dynBook->title << endl;

    delete dynBook;

    return 0;
}

//q3
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    const long accNo;
    long txnId;
    string type;
    double bal;

    static long nextId;

public:
    Account(long a, double b) : accNo(a) {
        this->bal = b;
        this->txnId = 0;
        this->type = "None";
    }

    long depositAmount(const long to, const long from, const double amt) {
        if (this->accNo == to) {
            this->bal += amt;
            this->type = "Credit";
            this->txnId = ++nextId;
        }
        return this->txnId;
    }

    long creditAmount(const long to, const long from, const double amt) {
        if (this->accNo == from && this->bal >= amt) {
            this->bal -= amt;
            this->type = "Debit";
            this->txnId = ++nextId;
        }
        return this->txnId;
    }

    void displayDetails() const {
        cout << "\nAcc No: " << this->accNo;
        cout << "\nBal: " << this->bal;
        cout << "\nTxn Id: " << this->txnId;
        cout << "\nType: " << this->type << endl;
    }
};

long Account::nextId = 1000;

int main() {
    Account a1(101, 5000), a2(102, 3000), a3(103, 7000),
            a4(104, 2000), a5(105, 9000);

    a1.depositAmount(101, 102, 1000);
    a2.creditAmount(101, 102, 500);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}

//q4
#include <iostream>
using namespace std;

class B;

class A
{
private:
    int x;

public:
    A(int a)
    {
        this->x = a;
    }

    friend int add(A a, B b);
};

class B
{
private:
    int y;

public:
    B(int b)
    {
        this->y = b;
    }

    friend int add(A a, B b);
};

int add(A a, B b)
{
    return a.x + b.y;
}

int main()
{
    A a1(10);
    B b1(20);

    cout << "Sum = " << add(a1, b1);

    return 0;
}

//q5
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex(const Complex &c)
    {
        real = c.real;
        imag = c.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    void sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Copy of First: ";
    c3.display();

    Complex result(0, 0);
    result.sum(c1, c2);

    cout << "Sum: ";
    result.display();

    return 0;
}
