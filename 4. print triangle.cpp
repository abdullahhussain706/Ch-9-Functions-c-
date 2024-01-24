#include <iostream>
using namespace std;

void printAsteriskTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < height - i; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int height;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    printAsteriskTriangle(height);

    return 0;
}

