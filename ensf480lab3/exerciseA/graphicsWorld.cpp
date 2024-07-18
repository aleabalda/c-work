/*
 * File Name: graphicsWorld.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#include "graphicsWorld.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "curveCut.h"
#include <iostream>

using namespace std;

void GraphicsWorld::run()
{
#if 0  // Change 0 to 1 to test Point
    Point m(6, 8);
    Point n(6, 8);
    n.setX(9);
    cout << "\nExpected to display the distance between m and n is: 3";
    cout << "\nThe distance between m and n is: " << m.distanceTo(n);
    cout << "\nExpected second version of the distance function also print: 3";
    cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
#endif // end of block to test Point

#if 1 // Change 0 to 1 to test Square
    cout << "\n\nTesting Functions in class Square:" << endl;
    Point p(5, 7);
    Square s(p, "SQUARE - S", 12);
    s.display();
#endif // end of block to test Square

#if 1 // Change 0 to 1 to test Rectangle
    cout << "\nTesting Functions in class Rectangle:";
    Point p1(5, 7);
    Rectangle a(p1, "RECTANGLE A", 12, 15);
    a.display();
    Point p2(16, 7);
    Rectangle b(p2, "RECTANGLE B", 8, 9);
    b.display();
    double d = a.distance(b);
    cout << "\nDistance between square a, and b is: " << d << endl;
    Rectangle rec1 = a;
    rec1.display();

    cout << "\nTesting assignment operator in class Rectangle:" << endl;
    Point p3(3, 4);
    Rectangle rec2(p3, "RECTANGLE rec2", 11, 7);
    rec2.display();
    rec2 = a;
    a.setSideB(200);
    a.setSideA(100);
    cout << "\nExpected to display the following values for object rec2: " << endl;
    cout << "Rectangle Name: RECTANGLE A\n"
         << "X-coordinate: 5\n"
         << "Y-coordinate: 7\n"
         << "Side a: 12\n"
         << "Side b: 15\n"
         << "Area: 180\n"
         << "Perimeter: 54\n";
    cout << "\nIf it doesn't there is a problem with your assignment operator.\n"
         << endl;
    rec2.display();

    cout << "\nTesting copy constructor in class Rectangle:" << endl;
    Rectangle rec3(a);
    rec3.display();
    a.setSideB(300);
    a.setSideA(400);
    cout << "\nExpected to display the following values for object rec2: " << endl;
    cout << "Rectangle Name: RECTANGLE A\n"
         << "X-coordinate: 5\n"
         << "Y-coordinate: 7\n"
         << "Side a: 100\n"
         << "Side b: 200\n"
         << "Area: 20000\n"
         << "Perimeter: 600\n";
    cout << "\nIf it doesn't there is a problem with your assignment operator.\n"
         << endl;
    rec3.display();
#endif // end of block to test Rectangle

#if 1 // Change 0 to 1 to test using array of pointer and polymorphism
    cout << "\nTesting array of pointers and polymorphism:" << endl;
    Shape *sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
#endif // end of block to test array of pointer and polymorphism
#if 1
    cout << "\nTesting Functions in class Circle:" << endl;
    Point cp(3, 5);
    Circle c(p, "CIRCLE C", 9);
    c.display();
    cout << "the area of " << c.getName() << " is: " << c.area() << endl;
    cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << endl;
    d = a.distance(c);
    cout << "\nThe distance between rectangle a and circle c is: " << d;
    Point ccp1(6, 5);
    CurveCut rc(ccp1, "CurveCut rc", 10, 12, 9);
    rc.display();
    cout << "the area of " << rc.Rectangle::getName() << " is: " << rc.area();
    cout << "the perimeter of " << rc.Circle::getName() << " is: " << rc.perimeter();
    d = rc.Shape::distance(c);
    cout << "\nThe distance between rc and c is: " << d;
    // Using array of Shape pointers:
    Shape *sh[4];
    sh[0] = &s;
    sh[1] = &a;
    sh[2] = &c;
    sh[3] = &rc;
    sh[0]->display();
    cout << "\nthe area of " << sh[0]->getName() << "is: " << sh[0]->area();
    cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[0]->perimeter();
    sh[1]->display();
    cout << "\nthe area of " << sh[1]->getName() << "is: " << sh[1]->area();
    cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[1]->perimeter();
    sh[2]->display();
    cout << "\nthe area of " << sh[2]->getName() << "is: " << sh[2]->area();
    cout << "\nthe circumference of " << sh[2]->getName() << " is: " << sh[2]->perimeter();
    sh[3]->display();
    cout << "\nthe area of " << sh[3]->getName() << "is: " << sh[3]->area();
    cout << "\nthe perimeter of " << sh[3]->getName() << " is: " << sh[3]->perimeter();

    cout
        << "\nTesting copy constructor in class CurveCut:" << endl;
    CurveCut cc = rc;
    cc.display();
    cout << "\nTesting assignment operator in class CurveCut:" << endl;
    Point ccp2(2, 5);
    CurveCut cc2(ccp2, "CurveCut cc2", 100, 12, 9);
    cc2.display();
    cc2 = cc;
    cc2.display();
#endif
}
