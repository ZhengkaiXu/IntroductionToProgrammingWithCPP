#include <iostream>
#include "CircleWithDestructor.h"
using namespace std;

int main() {
    Circle* pCircle1 = new Circle();
    Circle* pCircle2 = new Circle();
    Circle* pCircle3 = new Circle();
    cout << "Number of circle objects created: "
    << Circle::getNumebrOfObjects() << endl;

    delete pCircle1;

    cout << "Number of circle objects created: "
    << Circle::getNumebrOfObjects() << endl;

    return 0;
}