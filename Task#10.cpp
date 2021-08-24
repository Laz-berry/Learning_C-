#include <iostream>
using namespace std;

void fillArray(int* arr, int a)
{
    cout << "Put array elements: ";
    for(int i = 0; i < a; i++)
    {
        cin >> *(arr+i);
    }
}

void printArray(int *arr, int a)
{
    cout << "Array elements are ";

    for(int i = 0; i < a; i++)
    {
        cout << " " << *(arr+i);
    }
}

int main()
{
   int arr[5];
   fillArray (arr, 5);
   printArray (arr, 5);
}