#include<iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    int i=2;
    while (i<num) {
        if (num % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}        

int main() {
    int num=2;
    int h = 0;
    while (h <= 199) {
        if (is_prime(num)) {
            cout << num << '\t';
            h++;
            if (h % 10 == 0) {
                cout << '\n';
            }
        }
        num++;
    }
    return 0;
}

