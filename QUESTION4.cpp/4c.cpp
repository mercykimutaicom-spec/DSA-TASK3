//finding the nth term of fibonacci series using recursion
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter the term position: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative position.";
    } else {
        cout << "Fibonacci term = " << fibonacci(n);
    }

    return 0;
}
