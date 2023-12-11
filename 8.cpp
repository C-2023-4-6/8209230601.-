#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 || j < size2) {
        if (i < size1 && (j == size2 || list1[i] < list2[j]))
            list3[k++] = list1[i++];
        else
            list3[k++] = list2[j++];
    }

    // 升序排序，使用冒泡排序
    int m = 0;
    while (m < k - 1) {
        int n = 0;
        while (n < k - m - 1) {
            if (list3[n] > list3[n + 1]) {
                int t = list3[n];
                list3[n] = list3[n + 1];
                list3[n + 1] = t;
            }
            n++;
        }
        m++;
    }
}

int main() {
    int size1, size2;
    int i = 0;
    cout << "输入第一个数组: ";
    cin >> size1;
    int list1[80];
    while (i < size1) {
        cin >> list1[i];
        ++i;
    }

    i = 0;
    cout << "输入第二个数组: ";
    cin >> size2;
    int list2[80];
    while (i < size2) {
        cin >> list2[i];
        ++i;
    }

    int Size = size1 + size2;
    int List[80];

    merge(list1, size1, list2, size2, List);

    cout << "合并后的已排序数组为: ";
    int m = 0;
    while (m < Size) {
        cout << List[m] << " ";
        m++;
    }

    return 0;
}
