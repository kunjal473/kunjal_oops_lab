//Kunjal Sharma 1024150078

//Write a program to swap private values of two classes using a friend function.
#include <iostream>
using namespace std;

class B;  

class A{
private:
    int x;

public:
    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "Value of x in class A: " << x << endl;
    }

    friend void swapData(A &, B &);
};

class B
{
private:
    int y;

public:
    void setData(int b){
        y = b;
    }

    void showData(){
        cout << "Value of y in class B: " << y << endl;
    }

    friend void swapData(A &, B &);
};

void swapData(A &obj1, B &obj2)
{
    int temp;
    temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main()
{
    A objA;
    B objB;

    objA.setData(10);
    objB.setData(20);

    cout << "Before Swapping:" << endl;
    objA.showData();
    objB.showData();

    swapData(objA, objB);

    cout << "\nAfter Swapping:" << endl;
    objA.showData();
    objB.showData();

    return 0;
}



//Write a program to add data objects of two different classes using friend functions
#include <iostream>
using namespace std;

class ClassB;  

class ClassA{
    int a;

public:
    void setA(int x){
        a = x;
    }

    friend void add(ClassA, ClassB); 
};

class ClassB{
    int b;

public:
    void setB(int y){
        b = y;
    }

    friend void add(ClassA, ClassB);  
};

void add(ClassA obj1, ClassB obj2){
    int sum = obj1.a + obj2.b;
    cout << "Sum = " << sum << endl;
}

int main(){
    ClassA objA;
    ClassB objB;

    objA.setA(10);
    objB.setB(20);

    add(objA, objB);  
    return 0;
}



//Write a program to demonstrate the working of friend class.
#include <iostream>
using namespace std;

class B;  

class A{
    int x;   

public:
    void setData(int a){
        x = a;
    }

    friend class B;
};

class B{
public:
    void showData(A obj){
        cout << "Value of x = " << obj.x << endl;
    }
};

int main()
{
    A objA;
    B objB;
    objA.setData(100);
    objB.showData(objA); 

    return 0;
}



//Write a program using Array of Objects to display area of multiple rectangles.
#include <iostream>
using namespace std;

class Rectangle{
private:
    float length, breadth;

public:
    void setData(float l, float b){
        length = l;
        breadth = b;
    }

    float getArea(){
        return length * breadth;
    }
};

int main(){
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[n];  

    for(int i = 0; i < n; i++){
        float l, b;
        cout << "\nEnter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        r[i].setData(l, b);
    }

    cout << "\nAreas of Rectangles:\n";
    for(int i = 0; i < n; i++){
        cout << "Area of rectangle " << i + 1 << " = " << r[i].getArea() << endl;
    }
    return 0;
}




//Write a program to define function cube() as inline for calculating cube of a number.
#include <iostream>
using namespace std;

inline int cube(int x){
    return x * x * x;
}

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " = " << cube(num) << endl;
    return 0;
}




//Write a program to pass an object as an argument and return the object from a function. 
//a. Use pass-by-value b. Use pass-by reference
#include <iostream>
using namespace std;

class Number{
public:
    int x;

    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "Value = " << x << endl;
    }
};

Number addTen(Number n){
    n.x = n.x + 10;   
    return n;        
}

int main(){
    Number n1, n2;

    n1.setData(10);
    cout << "Before function call:" << endl;
    n1.showData();

    n2 = addTen(n1);   
    cout << "After function call (returned object):" << endl;
    n2.showData();
    cout << "Original object:" << endl;
    n1.showData();

    return 0;
}
