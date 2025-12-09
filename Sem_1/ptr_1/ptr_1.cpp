#include <iostream>

using namespace std;

int main() {
    float n = 1.1;
    float * ptr = &n;

    cout << "Now value n = " << n << " Enter new value for n:" << endl;
    cin >> n;

    *ptr = n;

    cout << "New value n = " << n << endl;

    return 0;
}