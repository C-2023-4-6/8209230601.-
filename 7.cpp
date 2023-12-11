#include <iostream>
using namespace std;

int main() {
    bool a[101] = { 0 };
    int i = 1;

    while (i <= 100) {
        int j = i;
        while (j <= 100) {
            a[j] = 1 - a[j];
            j = j + i;
        }
        i++;
    }

    int k = 1;
        while(k <= 100){
            if (a[k] == 1)
            cout << k << ' '; 
            k++;
    }
    
    return 0;
}
