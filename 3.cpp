#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	cout << "请输入三角形的三边：";
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		double ss = double_area( side1, side2, side3);
		cout << "三角形的面积是：" << ss;
	}
	else {
		cout << "你输入的三边无法构成三角形";
	}
	return 0;
}