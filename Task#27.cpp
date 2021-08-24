#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> info;
    map<int, string>::iterator it;
    int a;
    int f;
    string name;

    while(1) {
        cout << "Enter the ID number: ";
        cin >> a;
        if(a == 0) {
            break;
        }
        else {
            cout << "Enter the student name: ";
            cin >> name;
            info.insert(pair<int, string>(a, name));
        }  
    }
    cout << "Enter the searching ID number: ";
    cin >> f;
    cout << "The student name is " << info.find(f)->second;

    return 0;
}