#include <iostream>
using namespace std;

int main()
{
    cout << "20170363_박준석_고프_Task#7과제" << endl;
    
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    int *ptr = a;

    for (int i = 0; i < n-2 ; i++)
    cout << *(a+i) + *(a+i+1) + *(a+i+2) << endl;

    return 0;
}