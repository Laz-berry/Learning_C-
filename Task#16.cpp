#include <iostream>
#include <vector>
using namespace std;

class Vector2D {
    private: 
        int x, y;
    public:
        Vector2D();
        Vector2D(int _x, int _y);
        Vector2D operator +(Vector2D &v) {
          return Vector2D(x+v.x, y+v.y);
        }
        Vector2D operator -(Vector2D &v) {
         return Vector2D(x-v.x, y-v.y);
        }
        bool operator ==(Vector2D &v) { return (x==v.x && y==v.y); }
        void output() { cout << "( " << x << ", " << y << " )" << endl; }
};

Vector2D::Vector2D() : x(0), y(0) {}
Vector2D::Vector2D(int _x, int _y) {
    x = _x;
    y = _y;
}

int main() {
    Vector2D v0, v1(2, 2), v2(3, 3), v3;

    v3 = v1 + v2;
    v3.output();

    v3 = v2 - v2;
    v3.output();

    if(v3 == v0) {
        cout << "Operator - work!";
    }
}