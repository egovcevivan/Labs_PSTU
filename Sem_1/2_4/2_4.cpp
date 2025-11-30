#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int spaces = n / 2;
    int stars = 1;

    if (n % 2 == 1 && n > 3) {
        for (int i = 1; i <= (n + 1) / 2; i++) {
            for (int j = 1; j <= spaces; j++) {
                cout << " "; 
            }
            spaces--;

            for (int j = 1; j <= stars; j++) {
                cout << "*"; 
            }
            stars += 2;

            cout << endl;
        }
    }
    else {
        cout << "Невозможно построить равнобедренный треугольник, так как N чётный или меньше 3"  << endl;
    }

    return 0;
}