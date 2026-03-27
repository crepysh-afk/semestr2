#include <iostream>
#include "Cone.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    try {
        Cone cone(0, 0, 0, 5, 12);
        cone.print();

    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}