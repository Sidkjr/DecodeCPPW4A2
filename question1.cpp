#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int product;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int *product_pointer = &product;

    *product_pointer = num1 * num2;

    cout << "The Product is: " << product << "\n";
}