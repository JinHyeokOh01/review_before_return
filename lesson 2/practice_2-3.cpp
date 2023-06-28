//2장 3번 문제
//문자와 숫자 등을 사용하여 다음과 같이 화면에 출력하는 코드를 작성하시오.
/*
123
\100 받았다
내일 또 만나요
*/

#include <iostream>
using namespace std;

int main() {
	cout << 123 << '\n';
	cout << '\\' << 100 << " 받았다" << '\n';
	cout << "내일 또 만나요";
	return 0;
}