#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tuition = 10000; // Year 1
    int year = 1;
    while (tuition < 20000) {
        tuition = tuition * 1.07;
        cout << tuition << endl;
        year++;
    }

    cout << "Tuition will be doubled in " << year << " years" << endl;
    cout << setprecision(2) << fixed << showpoint <<
    "Tuition will be $" << tuition << " in "
    << year << " years" << endl;

    return 0;
}