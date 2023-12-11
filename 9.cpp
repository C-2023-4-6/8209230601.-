#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }

    return -1;
}

int main() {
    const int MAXSIZE = 100;
    char s1[MAXSIZE], s2[MAXSIZE];

    cout << "Enter the first string: ";
    cin.getline(s1, MAXSIZE);

    cout << "Enter the second string: ";
    cin.getline(s2, MAXSIZE);

    int result = indexOf(s1, s2);

    if (result != -1) {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    }
    else {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is -1" << endl;
    }

    return 0;
}
