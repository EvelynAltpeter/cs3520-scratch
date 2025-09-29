#Sep 29
/*
Use gcov to determine how many times the lines commented LINE 1 and LINE 2 are executed (each).

You can paste the code into scratch.cpp from the demo to run in VS Code.

Hint: You may need to change your Makefile.
*/

/* ANSWER:
LINE 1: 100
LINE 2: 3363
*/

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    for (int ii = 0; ii < 100; ++ ii) {
        x = ((x + 1) * 7) % 97; // LINE 1
        for (int jj = 0; jj < x; ++ jj) {
            y = ((y + 1) * 5) % 97; // LINE 2
        }
    }
    cout << x << " " << y << endl;
}


#include <iostream>
using namespace std;

void mystery1() {
    int x = 0;
    int y = 0;
    for (int ii = 0; ii < 1000000; ++ ii) {
        x = ((x + 1) * 7) % 97;
        for (int jj = 0; jj < x; ++ jj) {
            y = ((y + 1) * 5) % 97;
        }
    }
    cout << x << " " << y << endl;
}

void mystery2() {
    int x = 0;
    int y = 0;
    for (int ii = 0; ii < 100000; ++ ii) {
        x = ((x + 1) * 7) % 5011;
        for (int jj = 0; jj < x; ++ jj) {
            y = ((y + 1) * 5) % 97;
        }
    }
    cout << x << " " << y << endl;
}

int main() {
    mystery1();
    mystery2();
}