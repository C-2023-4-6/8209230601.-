#include<iostream>
using namespace std;
int bt(int t,int a)
{
	if (t == 1) {
		return(a);
	}
	else {
		return bt(t - 1, (a + 1) * 2);
	}
}
int main() {
	int c = 1;
	cout << "���ӵ�һ��һ��ժ��" << bt(10,c) << "������";
	return 0;
}
