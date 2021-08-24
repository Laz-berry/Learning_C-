#include <iostream>
using namespace std;

class Figure {
    public:
        virtual void draw() = 0;
};

class Point {
    public:
        int x;
        int y;
        Point(int a, int b) : x(a), y(b) {}
};


class Rectangle : public Figure {
    private:
        Point* p1;
        Point* p2;
    public:
        Rectangle(Point& pnt1, Point& pnt2) : p1(&pnt1), p2(&pnt2) {}
        void draw();
};
void Rectangle::draw() {
    cout << "A rectangle from " << "(" << p1->x << "," << p1->y << ")" << " to (" << p2->x << "," << p2->y << ")" << endl;
}

class Circle : public Figure {
    private:
        Point* p1;
        int r;
    public:
        Circle(Point& pnt1, int rad) : p1(&pnt1), r(rad) {}
        void draw();

};
void Circle::draw() {
     cout << "A Circle with the center of " << "(" << p1->x << "," << p1->y << ")" << " and the radius of " << r;
}

void draw2figues (Figure& f1, Figure& f2) {
    cout << "First figure is: ";
    f1.draw();
    cout << "Second figure is: ";
    f2.draw();
}

 

int main() {
    Point p1(0, 0), p2(2, 2);
    Rectangle r1(p1, p2);
    Circle c1(p1, 2);
    draw2figues(r1, c1);
}