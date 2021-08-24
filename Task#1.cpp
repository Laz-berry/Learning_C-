#include <iostream>
using namespace std;

class Parent {
    public:
        virtual void print() { cout << "In Parent" << endl; }
};

class Child: public Parent {
    public:
        virtual void print() { cout << "In Child" << endl; }
};

void callPrint (Parent* p1, Parent& p2, Parent p3) {
    p1->print();
    p2.print();
    p3.print();
}

int main() {
    Child c;
    callPrint(&c, c, c);
}