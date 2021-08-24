#include <iostream>
#include <vector>
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
    vector<int> point1; // 점을 표시
    vector<int> point2;
    vector<int> point3;
    vector<string> figure; // 도형 표시
    int x1, x2, y1, y2, z1, z2;
    int b;
    string fig;
        cout << "Enter figure type or draw: ";
        cin >> fig;
        cout << "Enter x, y coordinates of P1: ";
        cin >> x1 >> x2;
        point1.push_back(x1);
        point1.push_back(x2);
        cout << "Enter x, y coordinates of P2: ";
        cin >> y1 >> y2;
        point2.push_back(y1);
        point2.push_back(y2);
        Point p1(point1[0], point1[1]), p2(point2[0], point2[1]);
        Rectangle r1(p1, p2);

        cout << "Enter figure type or draw: ";
        cin >> fig;
        cout << "Enter x, y coordinates of the center: ";
        cin >> z1 >> z2;
        point3.push_back(z1);
        point3.push_back(z2);
        cout << "Enter the radius: ";
        cin >> b;
        Point p3(point3[0], point3[1]);
        Circle c1(p3, b);

        r1.draw();
        c1.draw();
}