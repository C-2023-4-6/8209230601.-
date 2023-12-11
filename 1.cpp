#include <iostream>
using namespace std;

void bt(int n, int m, int& q, int& p) {

	int a = n, b = m;
	while (b != 0) {//辗转相除法
		int c = b;
		b = a % b;
		a = c;
	}
	q = a;//最大公约数
	p = (n * m) / q;//最小公倍数
}

int main() {
	int n, m;
	cout << "请输入两个整数：";
	cin >> n >> m;

	int q, p;

	bt(n, m, q, p);

	cout << "最大公约数为：" << q << endl;
	cout << "最小公倍数为：" << p << endl;
	return 0;
}
