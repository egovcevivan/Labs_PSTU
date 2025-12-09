#include <iostream>

using namespace std;

int main() {
    float n;
    float * ptr = &n;

    cin >> n;

    cout << n << endl;

    cin >> n;

    *ptr = n;

    cout << "New value n = " << n << endl;

    return 0;
}