//Lab7-1 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double smallest(double x, double y, double z);
double average(double x, double y, double z);

int main() {
    double x;
    double y;
    double z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << endl;
    
    double small;
    if (x < y && x < z) {
        small = x;
    }
    if (y < x && y < z) {
        small = y;
    }
    if (z < x && z < y) {
        small = z;
    }
    cout << "Smallest value is " << small << endl;
    
    double avg;
    avg = (x + y + z) / 3;
    cout << "Average is " << avg << endl;
}