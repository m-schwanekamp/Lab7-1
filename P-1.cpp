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

    double result;
    if (x < y && x < z) {
        result = x;
    }
    if (y < x && y < z) {
        result = y;
    }
    if (z < x && z < y) {
        result = z;
    }
    cout << "Smallest value is " << smallest( x, y, z) << endl;

    double avg;
    avg = (x + y + z) / 3;
    cout << "Average is " << average( x, y, z) << endl;
}

double smallest(double x, double y, double z) {
    double result;
    if (x < y && x < z) {
        result = x;
    }
    if (y < x && y < z) {
        result = y;
    }
    if (z < x && z < y) {
        result = z;
    }
    return result;
}
double average(double x, double y, double z) {
    double avg = 0;
    avg = (x + y + z) / 3;
    return avg;
}
