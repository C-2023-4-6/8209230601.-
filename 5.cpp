#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    cout << "������10������" ;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    cout << "��ͬ������" << endl;
    for (int i = 0; i < size; ++i) {
        bool r = false;
        for (int j = 0; j < i; ++j) {
            if (numbers[i] == numbers[j]) {
                r = true;
                break;
            }
        }

        if (!r) {
            cout << numbers[i] << endl;
        }
    }

    return 0;
}
