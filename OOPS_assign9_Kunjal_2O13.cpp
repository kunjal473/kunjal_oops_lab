//q1
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream fout;
    fout.open("NUM.txt");

    for (int i = 1; i <= 200; i++)
    {
        fout << i << endl;
    }
    fout.close();
}
//q2

#include <iostream>
#include <fstream>

using namespace std;

void CountnDisp(ifstream &fin)
{
    char c;
    c = fin.get();
    int i = 1;
    while (!fin.eof())
    {
        if (c != ' ')
            cout << i << ". " << c << endl;
        c = fin.get();
        if (c != ' ')
            i++;
    }
}

int main()
{
    ifstream fin;
    fin.open("NOTES.txt");

    CountnDisp(fin);
}
//q3
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin;
    ofstream fout;

    fout.open("Copy.txt");
    fin.open("NOTES.txt");

    char c;
    c = fin.get();

    while (!fin.eof())
    {
        fout << c;
        c = fin.get();
    }
}
//q4
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string str;
    cout << "Enter string: ";
    getline(cin, str);

    // length
    int len = str.length();
    cout << "Length = " << len << endl;

    // write to file
    ofstream f;
    f.open("DATA.txt", ios::out);

    for (int i = 0; i < str.length(); i++)
    {
        f.put(str[i]); // character by character
    }

    f.close();

    // read from file
    ifstream f2;
    f2.open("data.txt", ios::in);

    char ch;
    cout << "Data from file: ";

    while (f2.get(ch))
    {
        cout << ch;
    }

    f2.close();
}
//q5(a,b,c,d)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream f;
    f.open("a_z.txt", ios::out | ios::in);
    f.seekg(10, ios::beg);
    char c, last;
    f >> c;
    cout << c << endl;
    f.seekp(4, ios::beg);
    f << 'M';
    f.seekg(0, ios::end);
    cout << f.tellg() << endl;
    f.seekg(-1, ios::end);
    f >> last;
    cout << last;
    f.close();
}
//q5(e)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream fi;
    fi.open("5e.txt");
    fi.seekg(10, ios::beg);
    cout << fi.tellp();

    while (!fi.eof())
    {
        char c;
        fi >> c;
        cout << c;
    }
    fi.close();
}
//q6
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream f;
    f.open("hello.txt", ios::out | ios::in);
    f << "Hello World";

    cout << f.tellp();

    f.seekp(6, ios::beg);
    f << "C++  ";
    f.close();
}