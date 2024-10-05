#include <iostream>
#include "GeometricObject.h" // toString() is defined virtual now
#include "DerivedCircle.h"
#include "DerivedRectangle.h"

using namespace std;

void displayGeometricObject(const GeometricObject* g) {
    cout << (*g).toString() << endl;
}

int main() {
    GeometricObject geo;
    Circle circle1(5);
    Rectangle rec(4, 6);
    displayGeometricObject(&geo);
    displayGeometricObject(&circle1);
    displayGeometricObject(&rec);

    return 0;
}