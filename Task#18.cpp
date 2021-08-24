#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Vector2D {
    private: 
        int x, y;
    public:
        Vector2D();
        Vector2D(int _x, int _y);

        friend Vector2D operator +(Vector2D &v, Vector2D &s) {
            return Vector2D(v.x+s.x, v.y+s.y);
        }
        friend Vector2D operator -(Vector2D &v, Vector2D &s) {
            return Vector2D(v.x-s.x, v.y-s.y);
        }
        friend Vector2D operator *(int a, Vector2D &v) {
            return Vector2D(a*v.x, a*v.y);
        }
        double operator *(Vector2D &v) {
            return (sqrt(x*x+y*y)*sqrt(v.x*v.x+v.y*v.y));
        }
        friend ostream& operator <<(ostream &os , const Vector2D &v) {
            return os<<"("<<v.x<<" , "<<v.y<<")";
        }
        friend bool operator ==(Vector2D &v, Vector2D &s) { return (v.x==s.x && v.y==s.y); }
};

Vector2D::Vector2D() : x(0), y(0) {}
Vector2D::Vector2D(int _x, int _y) {
    x = _x;
    y = _y;
}

int main() {
    Vector2D v0, v1(2, 2), v2(3, 3), v3;
    
    cout << v1 << endl;
    cout << v1+v2 << endl;
}