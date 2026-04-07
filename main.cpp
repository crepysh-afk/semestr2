#include <iostream>
#include "Cone.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    try {
        double x,y,z;
        double radius, height;

        cin>>x >>y >>z;
        cin >> radius;
        cin >> height;

        Cone cone(x,y,z, radius, height);

        cout<<"\n Cone created successfully\n";
        cone.print();
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
