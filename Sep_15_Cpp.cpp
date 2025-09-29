
#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    double favNum;
    char favLetter;
    string favFoods;

    cout << "Enter your favorite number:" << endl;
    cin >> favNum;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your favorite letter:" << endl;
    cin >> favLetter;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter some of your favorite foods:" << endl;
    getline(cin, favFoods);

    cout << "Favorites:" << endl;
    cout << "number: " << favNum << endl;
    cout << "letter: " << favLetter << endl;
    cout << "foods:  " << favFoods << endl;

    return 0;
}

