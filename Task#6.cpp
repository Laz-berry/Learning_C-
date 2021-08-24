#include <iostream>
using namespace std;

int main() {
    cout << "20170363_박준석_고프_Task#6과제";
    int a[4][4] = {10, 20, 30, 40, 5, 4, 3, 99, 55, 100, 42, 100, 0, 105, 2, 11};
    int temp;

    for(int step=0; step <16-1; step++)
    {
        for(int i=0; i<16-1-step; i++)
        {
            if (a[0][i] > a[0][i+1])
            {
                temp = a[0][i];
                a[0][i] = a[0][i+1];
                a[0][i+1] = temp;
            }
        }
    }

    for(int step=0; step<4; step++)
    {
        for(int i=0; i<4; i++)
        {
            cout << a[step][i] << "   ";
        }
        cout << endl;
    }
    cout << "The largest number is " << a[3][3] << endl;
    cout << "The second-largest number is " << a[3][2];

    return 0;
}