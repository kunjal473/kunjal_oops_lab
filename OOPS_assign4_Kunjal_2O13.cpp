//q1
#include <iostream>

using namespace std;

class Rectangle
{

private:
    float l;
    float b;

public:
    Rectangle()
    {
        l = b = 0;
    }

    Rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }

    Rectangle(float a)
    {
        l = b = a;
    }
    float area()
    {
        return l * b;
    }
};

int main()
{

    Rectangle r1;
    Rectangle r2(11.2);
    Rectangle r3(12, 13.2);

    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
}

//q2
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float l;
    float b;

public:
    // Constructor with no pArameter
    Rectangle()
    {
        this->l = l;
        this->b = b;
        cout << "Constructor called\n";
    }

    // Constructor for square
    Rectangle(float a)
    {
        l = b = a;
        cout << "Square constructor called\n";
    }


    // contrcutor with 2 varibaless
     Rectangle(float l,float b)
    {
      this->l = l;
      this->b = b;
        
    }


    // area CalCulation 
    float area()
    {
        return l * b;
    }

    // Destructor 
    ~Rectangle()
    {
        cout << "Destructor called\n";
    }
};

int main()
{
    // Array 
    Rectangle arr[3] = {
        Rectangle(),        // default constructor
        Rectangle(5, 4),    // parameterized constructor
        Rectangle(3)        // square constructor
 };

 
    for (int i = 0; i < 3; i++)
    {
        cout << "Area of rectangle " << i + 1 << " = " << arr[i].area() << endl;
    }

    return 0;
}

//q3
#include <iostream>

using namespace std;

class base {
  
public:
    // a) it should start with ~tilde sign otherwise  it will become constrcuctor
    ~base(){
      cout<<"The working destructor"<<endl;
    };

    // b) again error there cannot be 2 destructors 
    // ~base () {

    // };

//c)  error there cannot be any parameter involved in destrcutor
    // ~base (int x) {

    // };

//d error because there in no return type of destructor 
 // int ~base (int x) {
           //return x;
    // };



};




int main () {

 base b;
}

//q4
#include <iostream>

using namespace std;
class Rectangle
{
private:
    float l;
    float b;

public:
    // Constructor with no pArameter
    Rectangle()
    {
        this->l = l;
        this->b = b;
        cout << "Constructor called\n";
    }

    // Constructor for square
    Rectangle(float a)
    {
        l = b = a;
        cout << "Square constructor called\n";
    }

    // contrcutor with 2 varibaless
    Rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }

    // area CalCulation
    float area()
    {
        return l * b;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called\n";
    }
};

int main()
{

    int *n = new int(10);
    float *x = new float(11.3);
    int *arr = new int[10];
    float *arr2 = new float[10];

    Rectangle *r1 = new Rectangle();
    Rectangle *r2 = new Rectangle[10];

    delete n;
    delete x;
    delete[] arr;
    delete[] arr;
    delete r1;
    delete[] r2;
}
