#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    cout << "请输入10个数：" ;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    cout << "不同的数：" << endl;
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
