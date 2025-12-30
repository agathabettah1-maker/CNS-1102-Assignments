#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci of n
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: fib(0) = 0, fib(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}
