#include <iostream>

using namespace std;

int main() {
    int width, height;

    cout << "Enter the width of the window: ";
    cin >> width;

    cout << "Enter the height of the window: ";
    cin >> height;

    // Print the window
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            char ch = (i + j) % 2 == 0 ? '#' : '$';
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << ch;
            }
        else {
            cout << ' ';
        }
    }
    cout << endl;
    }

    return 0;
}


