//q1
#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int rno ;
    string degree;
    float cgpa;
    string hostel;

    void updateDetails(string s, int r , string d , float cg ) {
      name = s;
      rno = r;
      degree = d;
      cgpa = cg;
    }

   
        void addDetails() {
       

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your roll number: ";
        cin >> rno;

        cin.ignore();

        cout << "Enter your degree: ";
        getline(cin, degree);

        cout << "Enter your CGPA: ";
        cin >> cgpa;

        cin.ignore();

        cout << "Enter your hostel name: ";
        getline(cin, hostel);

        cout << endl;
    }

    


    void updateCgpa(float cg) {

        cgpa = cg;

    }

    
     void updateHostel(string h ) {
        hostel = h;

    }


    void displaydetails() {

        cout<<"Name : "<<name<<endl;
        cout<<"Roll no.: "<<rno<<endl;
        cout<<"Degree : "<<degree<<endl;
         cout<<"CGPA: "<<cgpa<<endl;
         cout<<"Hostel : "<<hostel<<endl;

         cout<<endl;

    }

}s[2];


int main () {

   

    for (int i = 0 ; i<2;i++) {
        s[i].addDetails();
    }


    for (int i = 0 ; i<2;i++) {
        s[i].displaydetails();
    }
}

//q2
#include <iostream>

using namespace std;

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    float cgpa;
    int rno;

public:
    string name;
    string degree;
    string hostel;

    void updateDetails(string s, int r, string d, float cg)
    {
        name = s;
        rno = r;
        degree = d;
        cgpa = cg;
    }

    void addDetails()
    {

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your roll number: ";
        cin >> rno;

        cin.ignore();

        cout << "Enter your degree: ";
        getline(cin, degree);

        cout << "Enter your CGPA: ";
        cin >> cgpa;

        cin.ignore();

        cout << "Enter your hostel name: ";
        getline(cin, hostel);

        cout << endl;
    }

    void updateCgpa(float cg)
    {

        cgpa = cg;
    }

    void updateHostel(string h)
    {
        hostel = h;
    }

    void displaydetails()
    {

        cout << "Name : " << name << endl;
        cout << "Roll no.: " << rno << endl;
        cout << "Degree : " << degree << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Hostel : " << hostel << endl;

        cout << endl;
    }

} s[2];

int main()
{

    for (int i = 0; i < 2; i++)
    {
        s[i].addDetails();
    }

    for (int i = 0; i < 2; i++)
    {
        s[i].displaydetails();
    }
}

//q3
#include <iostream>
using namespace std;

class Student
{

public:
    void Marks(int m)
    {
        setMarks(m);
    }

    void disp()
    {
        cout << marks;
    }

private:
    int marks;
    void setMarks(int m)
    {
        marks = m;
    }
};

int main()
{

    Student s1;
    s1.Marks(10);
    s1.disp();
}

//q4
#include <iostream>

using namespace std;

class Rectangle {

    public:
    float lenght;
    float breadth;

    void getdata () {
     int l,b;
     cout<<"Enter length :";
     cin>>l;

     cout<<"Enter breadth :";
     cin>>b;

     lenght = l;
     breadth = b;

    }

    void calculatearea () {
        cout<<lenght*breadth<<endl;
    }

    void perimeter () {
        cout<<2*(lenght+breadth)<<endl;
    }

};
int main () {
   

Rectangle r1 ;

r1.getdata();
r1.calculatearea();
r1.perimeter();
}

//q5

#include <iostream>

using namespace std;

class Complex {
    public : 
    float real;
    float imaginary;

void setComplex(float r , float i) {
    real = r;
     imaginary = i;
}
void display (){
    cout<<real<<" + "<<imaginary<<"i"<<endl;
}


};

Complex Add (Complex c1, Complex c2) {
    
    c1.real = c1.real + c2.real;
    c1.imaginary = c1.imaginary + c2.imaginary;
    return c1;
}
int main () {

    Complex c1;
    c1.setComplex(10,4);
    c1.display();

    Complex c2;
    c2.setComplex(13,4);
    c2.display();


    Complex c3 = Add(c1,c2);

    c3.display();


}

//q6
#include <iostream>

using namespace std;

class Student {

    public : 
    void show ();
    static int a;

};

int Student :: a = 100;

void  Student :: show (){
cout<<"Defined out of class";
}

int x = 20;

int main () {

Student s1;
s1.show();

int x = 10;

cout<<"local variable : "<<x<<endl;
cout<<"Global variable : "<<::x<<endl;

cout<<s1.a<<endl;


}

//q6_2
#include <iostream>

int main( ){
    int x; 
    std :: cout<<"Enter a number :";
    std :: cin>>x;
    std :: cout<<x;
}

//q7
#include <iostream>
using namespace std;

namespace SectionA {
    int value = 10;
    void display() {
        cout << "SectionA value = " << value << endl;
    }
}

namespace SectionB {
    int value = 20;
    void display() {
        cout << "SectionB value = " << value << endl;
    }
}


namespace SectionK {
    int value = 30;
    void display() {
        cout << "SectionK value = " << value << endl;
    }
}

int main() {
    cout << SectionA::value << endl;
    cout << SectionB::value << endl;
    cout<< SectionK :: value <<endl;

    SectionA::display();
    SectionB::display();

    return 0;
}
