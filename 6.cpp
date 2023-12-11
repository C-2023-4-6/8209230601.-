#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int  listSize = 10;
	int list[10];
	cout << "输入十个数：";
	for (int i = 0; i < listSize; i++) {
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "排序后的数组：";
    for (int i = 0; i < listSize; i++) {
        cout << list[i] << " ";
    }
	return 0;
}