#include <iostream>
using namespace std;

void bt(int n, int m, int& q, int& p) {

	int a = n, b = m;
	while (b != 0) {//շת�����
		int c = b;
		b = a % b;
		a = c;
	}
	q = a;//���Լ��
	p = (n * m) / q;//��С������
}

int main() {
	int n, m;
	cout << "����������������";
	cin >> n >> m;

	int q, p;

	bt(n, m, q, p);

	cout << "���Լ��Ϊ��" << q << endl;
	cout << "��С������Ϊ��" << p << endl;
	return 0;
}
