//q1
#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if (top == 99)
        {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow\n";
            return;
        }
        top--;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();
}

//q2
#include <iostream>
using namespace std;

template <class T>
class Queue
{
    T arr[100];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(T x)
    {
        if (rear == 99)
        {
            cout << "Overflow\n";
            return;
        }
        arr[++rear] = x;
    }

    void dequeue()
    {
        if (front > rear)
        {
            cout << "Underflow\n";
            return;
        }
        front++;
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();
}

//q3
#include <iostream>
using namespace std;

template <class T>
class Pair
{
    T a, b;

public:
    void set(T x, T y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Pair<int> p;
    p.set(10, 20);
    p.display();
}

//q4
#include <iostream>
using namespace std;

template <class T>
class Calc
{
public:

    T add(T a, T b)
    {
        return a + b;
    }

    T sub(T a, T b)
    {
        return a - b;
    }

    T mul(T a, T b)
    {
        return a * b;
    }

    T divi(T a, T b)
    {
        return a / b;
    }
};

int main()
{
    Calc<int> c;

    cout << c.add(10, 5) << endl;
    cout << c.sub(10, 5) << endl;
    cout << c.mul(10, 5) << endl;
    cout << c.divi(10, 5) << endl;
}

//q5
#include <iostream>
using namespace std;

template <class T>
class Array
{
    T arr[100];
    int n;

public:
    void input(int size)
    {
        n = size;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void display()
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array<int> a;

    a.input(5);
    a.display();
}