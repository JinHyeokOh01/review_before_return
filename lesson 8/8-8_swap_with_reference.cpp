#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main() {
	int num1 = 5;
	int num2 = 10;

	cout << "변수 num1의 값은 " << num1 << endl;
	cout << "변수 num2의 값은 " << num2 << endl;

	swap(num1, num2);
	cout << "바뀐 num1 " << num1 << endl;
	cout << "바뀐 num2 " << num2 << endl;

	return 0;

}

//가인수에 const 붙이면 실인수 값 안 바뀐다.

void swap(int& x, int& y) {
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}