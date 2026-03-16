
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    // implementation
    return new;
}

//same point
bool samePoint(Point p1, Point p2){
    return (p1.x == p2.x)&&(p1.y == p2.y);
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

//line funciton 
Line makeLine(Point p1, Point p2){
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

//line length
float lengthLine(Line l){
    float dx = l.p[1].x - l.p[0].x;
    float dy = l.p[1].y - l.p[0].y;
    return sqrt((dx*dx)+(dy*dy));

}

//find if a point is in the line
bool pointInLine(Point p, Line l){
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}


//Triangle function
Triangle makeTriangle(Point p1, Point p2, Point p3){
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

//find the area of the triangle
float triangleArea(Triangle t){
    float x0 = t.p[0].x;
    float y0 = t.p[0].y;
    float x1 = t.p[1].x;
    float y1 = t.p[1].y;
    float x2 = t.p[2].x;
    float y2 = t.p[2].y;
    return fabs((x0*(y1-y2) + x1*(y2-y0) + x2*(0-y1))/ 2.0);
}

//point in the triangle
bool pointInTriangle(Point p, Triangle t){
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}