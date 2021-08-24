#include <iostream>
using namespace std;

int* allocArray(int a) {
    typedef int* array;
    array y;
    y = new int[a];

    return y;
}

void printArray(int *array, int b) {
    for (int i=0; i<b; i++) {
        cout << array[i] << " ";
    }
}

void freeArray(int *array) {
    delete[] array;
}

int main() {
    int* arr;
    int size;

    cout << "Enter the array size: ";
    cin >> size;
    arr = allocArray(size);

    for (int i=0; i<size; i++) {
        cout << "Put an array element: ";
        cin >> arr[i];
    }
    printArray(arr, size);
    freeArray(arr);
    return 0;
}