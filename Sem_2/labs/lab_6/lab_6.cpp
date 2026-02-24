#include <iostream>

using namespace std;

int main() {
    string s = "12job34a";

    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = 0; j < s.size() - 1; j++) {
            if (isdigit(s[j]) && !isdigit(s[j + 1])) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    cout << s << endl;

    return 0;
}