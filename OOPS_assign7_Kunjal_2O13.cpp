//q1
#include <iostream>

using namespace std;
class Polygon
{

public:
    int width;
    int height;
    void set_values(int w, int h)
    {
        this->width = w;
        this->height = h;
    }
    virtual void calculate_area() = 0;
};

class Rectangle : public Polygon
{

public:
    void calculate_area()
    {
        cout << width * height << " ";
    }
};

class Triangle : public Polygon
{
public:
    void calculate_area()
    {
        cout << (height * width) / 2 << " ";
    }
};

int main()
{
   Polygon *p;

    Rectangle r;
    Triangle t;

    // Rectangle
    p = &r;
    p->set_values(10, 20);
    p->calculate_area();

    // Triangle
    p = &t;
    p->set_values(10, 20);
    p->calculate_area();

    return 0;
}

//q2
#include <iostream>
using namespace std;

// Base Class
class Shape
{
public:
    // Virtual functions
    virtual void area() = 0;
    virtual void display() = 0;
};

// Derived Class: Circle
class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }

    void display()
    {
        cout << "Shape: Circle" << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    void display()
    {
        cout << "Shape: Rectangle" << endl;
    }
};

// Derived Class: Triangle
class Triangle : public Shape
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void area()
    {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }

    void display()
    {
        cout << "Shape: Triangle" << endl;
    }
};

int main()
{
    Shape *s;

    Circle c(5);
    Rectangle r(10, 4);
    Triangle t(6, 3);

    // Circle
    s = &c;
    s->display();
    s->area();

    // Rectangle
    s = &r;
    s->display();
    s->area();

    // Triangle
    s = &t;
    s->display();
    s->area();

    return 0;
}

//q3
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    double area(double base, double height)
    {
        return 0.5 * base * height;
    }

    double area(double side)
    {
        return (sqrt(3) / 4) * side * side;
    }

    double area(double equalSide, double base, bool isIsosceles)
    {
        double height = sqrt(equalSide * equalSide - (base * base) / 4);
        return 0.5 * base * height;
    }
};

int main()
{
    Triangle t;

    cout << "Right Triangle Area = " << t.area(6, 4) << endl;
    cout << "Equilateral Triangle Area = " << t.area(5) << endl;
    cout << "Isosceles Triangle Area = " << t.area(5, 6, true) << endl;

    return 0;
}

//q4
#include <iostream>
using namespace std;

// Abstract Base Class
class Student
{
public:
    string name;

    virtual void getData() = 0;
    virtual void display() = 0;
};

// Derived Class: Engineering
class Engineering : public Student
{
    string branch;

public:
    void getData()
    {
        cout << "Enter Engineering Student Name: ";
        cin >> name;
        cout << "Enter Branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "Engineering Student -> Name: " << name 
             << ", Branch: " << branch << endl;
    }
};

// Derived Class: Medicine
class Medicine : public Student
{
    string specialization;

public:
    void getData()
    {
        cout << "Enter Medicine Student Name: ";
        cin >> name;
        cout << "Enter Specialization: ";
        cin >> specialization;
    }

    void display()
    {
        cout << "Medicine Student -> Name: " << name 
             << ", Specialization: " << specialization << endl;
    }
};

// Derived Class: Science
class Science : public Student
{
    string subject;

public:
    void getData()
    {
        cout << "Enter Science Student Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void display()
    {
        cout << "Science Student -> Name: " << name 
             << ", Subject: " << subject << endl;
    }
};

int main()
{
    Student* s[3];   // Array of base class pointers

    Engineering e;
    Medicine m;
    Science sc;

    // Assign objects
    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    // Input data
    for(int i = 0; i < 3; i++)
    {
        s[i]->getData();
    }

  

    // Display data
    for(int i = 0; i < 3; i++)
    {
        s[i]->display();
    }

    return 0;
}

//q5
#include <iostream>

using namespace std;


class Time  {
    private: 
    int h,m,s;
    public: 
    Time (int h , int m , int s) {
        this->h = h;
        this->m =m;
        this->s = s;
    }
    Time () {
    
    }

    void show () {
        cout<<h<<":"<<m<<":"<<s;
    }

   Time operator+(Time t2) {
     Time temp;
     temp.h = this->h + t2.h;
     temp.m = this->m + t2.m;
     temp.s = this->s + t2.s;

     

     return temp;
   }

};

int main () {

    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1+t2;
    t3.show();
}

//q6
#include <iostream>
#include <cstring>
using namespace std;

class STRING
{
    char str[100];

public:

    STRING() {}

    STRING(char s[])
    {
        strcpy(str, s);
    }

    bool operator==(STRING s)
    {
        return strcmp(str, s.str) == 0;
    }

    STRING operator+(STRING s)
    {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display()
    {
        cout << str << endl;
    }
};

int main()
{
    STRING s1("Hello "), s2("World"), s3;

    if (s1 == s2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    s3 = s1 + s2;
    s3.display();
}

//q7
#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:

    void input()
    {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> a[i][j];
    }

    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};

Matrix operator*(Matrix m1, Matrix m2)
{
    Matrix temp;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            temp.a[i][j]=0;
            for(int k=0;k<2;k++)
                temp.a[i][j]+=m1.a[i][k]*m2.a[k][j];
        }
    }
    return temp;
}

int main()
{
    Matrix m1, m2, m3;
    m1.input();
    m2.input();
    m3 = m1 * m2;
    m3.display();
}

//q8
#include <iostream>
using namespace std;

class Array
{
    int arr[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    int operator[](int i)
    {
        if (i < 0 || i >= 5)
        {
            cout << "Out of bounds\n";
            return -1;
        }
        return arr[i];
    }
};

int main()
{
    Array a;
    a.input();
    cout << a[2] << endl;
    cout << a[10];
}

//q9
#include <iostream>
using namespace std;

class Test
{
public:
    void operator()(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
};

int main()
{
    Test t;
    t(1, 2, 3);
}

//q10
#include <iostream>
using namespace std;

class Test
{
    int x;

public:

    friend istream& operator>>(istream &in, Test &t)
    {
        in >> t.x;
        return in;
    }

    friend ostream& operator<<(ostream &out, Test &t)
    {
        out << t.x;
        return out;
    }
};

int main()
{
    Test t;
    cin >> t;
    cout << t;
}

//q11
#include <iostream>
using namespace std;

class Test
{
    float x;

public:

    Test(float a)
    {
        x = a;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    float a = 5.5;
    Test t = a;
    t.display();
}

//q12
#include <iostream>
using namespace std;

class Test
{
    float x;

public:
    Test(float a)
    {
        x = a;
    }

    operator float()
    {
        return x;
    }
};

int main()
{
    Test t(7.5);
    float a = t;
    cout << a;
}

//q13
#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
public:
    int r, theta;

    Polar(int a, int b)
    {
        r = a;
        theta = b;
    }
};

class Cartesian
{
    int x, y;

public:
    Cartesian() {}

    Cartesian(Polar p)
    {
        x = p.r * cos(p.theta);
        y = p.r * sin(p.theta);
    }

    void show()
    {
        cout << x << " " << y;
    }
};

int main()
{
    Polar p(10, 5);
    Cartesian c = p;
    c.show();
}