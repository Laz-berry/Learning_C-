#include <iostream>
using namespace std;

template<typename T>
class Quad {
    private:
        T a;
        T b;
        T c;
        T d;
    public:
        Quad();
        Quad(T First, T Second, T Third, T Fourth) : a(First), b(Second), c(Third), d(Fourth) {}

        friend ostream& operator<<(ostream &os, const Quad &o) {
         return os<<"Elements are : <" << o.a << ", " << o.b << ", " << o.c << ", " << o.d << ">"; 
        }
};


int main() {
    Quad<int> qi(5, 6, 7, 8);
    Quad<string> qs("hello", "C++", "programming", "language");
    Quad<double> qd(1.1, 2.2, 3.3, 4.4);

    cout << qi << endl;
    cout << qs << endl;
    cout << qd << endl;
}