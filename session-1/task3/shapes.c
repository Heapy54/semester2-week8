
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point p = {2,4};
    Rectangle r = makeRectangle(p, 5, 10);
    printf("The area is : %.2f\n",area(r));
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r = {.p = p, .width = width, .height = height};
    return r;
}

float area( Rectangle r ) {
    float a = r.width*r.height;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x +=dp.x;
    r->p.y +=dp.y;
    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->width = r->width*scale;
    r->height = r->height*scale;
    return;
}
