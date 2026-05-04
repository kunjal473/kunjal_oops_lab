//q1
#include <iostream>

using namespace std;

template <typename s>

void swapi(s &a, s &b)
{
    s temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
    return;
}
int main()
{
    int x = 3;
    int y = 5;
    swapi(x, y);

    char n = 'c';
    char m = 'd';
    swapi(n, m);
}

//q2
#include <iostream>

using namespace std;

template <typename s>

void swapi(s &a, s &b)
{
    s temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
    return;
}
int main()
{
    int x = 3;
    int y = 5;
    swapi(x, y);

    char n = 'c';
    char m = 'd';
    swapi(n, m);
}

//q3
#include <iostream>
#include <vector>
using namespace std;

template <typename m>
void bubbleSort(vector<m> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }

        if (!flag)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1, 0, -3, -6};
    bubbleSort(arr);

    return 0;
}

//q4
#include <iostream>
#include <vector>
using namespace std;

template <typename s>

void linSearch(vector<s> arr, s target)
{
    bool flag = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            flag = true;
        }
    }
    if (flag)
        cout << "Target found";
    else
    {
        cout << "Target not found";
    }
}
int main()
{

    vector<int> arr = {1, 3, 4, 5};
    linSearch(arr, 9);
}

//q5
#include <iostream>
using namespace std;

template <typename T>
void process(T a)
{
    cout << a << endl;
}

template <typename T>
void process(T a, T b)
{
    cout << a << " " << b << endl;
}

template <typename T, typename U>
void process(T a, U b)
{
    cout << a << " " << b << endl;
}

int main()
{
    process(5);
    process(10, 20);
    process(5, 3.14);
    return 0;
}