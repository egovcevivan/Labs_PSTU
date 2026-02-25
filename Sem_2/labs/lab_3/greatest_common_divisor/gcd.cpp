#include <iostream>

using namespace std;

unsigned int gcd(unsigned int a, unsigned int b) {
    if (a == b) {
        return a;
    }
    else if (a > b) {
        return gcd(a - b, b);
    }
    else {
        return gcd(a, b - a);
    }

}

int main() {
    unsigned int fst_n, snd_n;

    cout << "Entre a and b: ";
    cin >> fst_n >> snd_n;

    if ((fst_n == 0 && snd_n != 0) || (fst_n != 0 && snd_n == 0)) {
        cout << (fst_n > snd_n ? fst_n : snd_n) << endl;
    }
    else if (fst_n == 0 && snd_n == 0) {
        cout << "Error!" << endl;
    }
    else {
        cout << gcd(fst_n, snd_n) << endl;
    }

    return 0;
}