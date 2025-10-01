using namespace std;

#include <iostream>
using namespace std;
/*
int main() {
    const int size = 5;   // define grid size
    const int wy = 3;
    int px = 1, py = 1;
    int cx = 2, cy = 2;
    int tx = 4, ty = 0;
    int wx = 3;

    for (int yy = 0; yy < size; ++yy) {
        for (int xx = 0; xx < size; ++xx) {
            if (xx == px && yy == py) {
                cout << '@';
            } else if (xx == cx && yy == cy) {
                cout << "#";
            } else if (xx == tx && yy == ty) {
                cout << '0';
            } else if (xx == wx && yy == wy) {
                cout << 'X';
            } else {
                cout << '_';
            }
        }
        cout << endl;
    }
}

*/

/*
Write a program that prompts the user to enter an integer.  It prints out "even" or "odd" if the integer is even or odd, respectively (hint: use the mod % operator).  Then, if the integer is not negative, it prints out the square root of the integer (hint: use sqrt).  Don't worry about error handling for now.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer:" << endl;
    cin >> n;

    if (n % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    if (n >= 0) {
        cout << "Square Root:" << sqrt(n) << endl;
    }

    return 0;
}