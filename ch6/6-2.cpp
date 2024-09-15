#include <iostream>
using namespace std;

// Print grade for the score
void printGrade(double score) {
    if (score >= 90) {
        cout << 'A' << endl;
    } else if (score >= 80) {
        cout << 'B' << endl;
    } else if (score >= 70) {
        cout << 'C' << endl;
    } else if (score >= 60) {
        cout << 'D' << endl;
    } else {
        cout << 'F' << endl;
    }
}

int main() {
    cout << "Enter a score: ";
    double score;
    cin >> score;

    cout << "The grade is ";
    printGrade(score);

    return  0;
}