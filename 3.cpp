#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	cout << "�����������ε����ߣ�";
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		double ss = double_area( side1, side2, side3);
		cout << "�����ε�����ǣ�" << ss;
	}
	else {
		cout << "������������޷�����������";
	}
	return 0;
}