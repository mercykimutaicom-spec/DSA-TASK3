
#include <iostream>
using namespace std;

void printFibonacci(int n, int first, int second) {
    if (n == 0) {
        return;
    }

    cout << first << " ";

    printFibonacci(n - 1, second, first + second);
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number.";
    } else {
        printFibonacci(n, 0, 1);
    }

    return 0;
}
