#include <iostream>
#include "BMI.h"
using namespace std;

int main() {
    BMI bmil("John Doe", 18, 145, 70);
    cout << "The BMI for " << bmil.getName() << " is "
    << bmil.getBMI() << " " << bmil.getStatus() << endl;

    BMI bmil2("Susan King", 215, 70);
    cout << "The BMI for " << bmil2.getName() << " is "
    << bmil2.getBMI() << " " << bmil2.getStatus() << endl;

    return 0;
}
