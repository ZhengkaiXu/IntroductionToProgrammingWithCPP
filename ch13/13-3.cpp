#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // open a file
    ifstream input("score.txt");

    if (input.fail()) {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    double sum = 0;
    double number;
    while (input >> number) { // Continue if not end of file
        cout << number << " "; // Display data
        sum += number;
    }

    input.close();

    cout << "\nSum is " << sum << endl;

    return 0;
}