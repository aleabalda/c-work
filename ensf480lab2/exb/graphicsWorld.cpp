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

#if 0  // Change 0 to 1 to test Square
    cout << "\n\nTesting Functions in class Square:" << endl;
    Point p(5,7);
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

#if 0  // Change 0 to 1 to test using array of pointer and polymorphism
    cout << "\nTesting array of pointers and polymorphism:" << endl;
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
#endif // end of block to test array of pointer and polymorphism
}
