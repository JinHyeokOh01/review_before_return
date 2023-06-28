#include <iostream>

using namespace std;

int main() {
	int a = 1;
	int b = 0;

	cout << "short int 형의 크기는 " << sizeof(short int) << "바이트입니다. \n";
	cout << "변수 a의 크기는 " << sizeof(a) << "바이트입니다. \n";

	return 0;

	//sizeof는 다양한 형의 크기와 식의 판별값 크기를 알 수 있다.
	//형과 식의 크기를 모르면 풀 수 없는 문제에 부딪힐 때, sizeof를 사용하여 확인
}