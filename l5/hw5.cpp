
#include "Shapes.h"

using namespace NickSchantz;

const int shapes_count = 4;

int main()
{
    // define array of 4 pointers to Shapes
    Shape* shapes[shapes_count];

    // dynamically allocate one of each class. Store pointers in array
    shapes[0] = new Circle(10);
    shapes[1] = new Square(15);
    shapes[2] = new Sphere(20);
    shapes[3] = new Cube(25);

    // display each object in array, then destroy it.
    for (int sc = 0; sc < shapes_count; sc++)
    {
        shapes[sc]->display();
        delete shapes[sc];
    }

    return 0;
}
