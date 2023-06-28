//3장 2번 문제
//다음과 같이 화면에 출력하는 코드를 작성하십시오.
/*
	알파벳 첫 글자는 무엇입니까?
	a↓
	알파벳 첫 글자는 a입니다.
*/

#include <iostream>
using namespace std;

int main() {
	char a = 0;

	cout << "알파벳 첫 글자는 무엇입니까?\n";
	cin >> a;
	cout << "알파벳 첫 글자는 " << a << "입니다.";
	return 0;
}