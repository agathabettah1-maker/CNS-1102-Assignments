#include <iostream>
#include <cmath>
using namespace std;

void roots(double a, double b, double c) {
    double d = b*b - 4*a*c;
    if (d >= 0) {
        cout << "Root 1 = " << (-b + sqrt(d)) / (2*a) << endl;
        cout << "Root 2 = " << (-b - sqrt(d)) / (2*a) << endl;
    } else {
        cout << "Root 1 = " << -b/(2*a) << " + " << sqrt(-d)/(2*a) << "i\n";
        cout << "Root 2 = " << -b/(2*a) << " - " << sqrt(-d)/(2*a) << "i\n";
    }
}

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0) cout << "Not a quadratic equation.\n";
    else roots(a, b, c);
    return 0;
}
