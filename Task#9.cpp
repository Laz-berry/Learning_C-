#include <iostream>
using namespace std;

void sort_three (int& a, int& b, int& c)
{
    int t;

    if(a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    if(a < b)
    {
        t = a;
        a = b;
        b = t;
    }
}

int main ()
{
   int i1 = 100, i2 = 90, i3 = 500;

   sort_three (i1, i2, i3);

   cout << "Three numbers are: " << i1 << " , " << i2 << " , " << i3 << endl;
}
