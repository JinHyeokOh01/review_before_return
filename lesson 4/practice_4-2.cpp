//4장 2번 문제
//다음과 같이 높이와 밑변을 입력한 다음, 삼각형의 넓이를 화면에 출력하는 코드를 작성하십시오.
/*
	삼각형의 높이를 입력하십시오.
	3
	삼각형의 밑변을 입력하십시오.
	5
	삼각형의 넓이는 7.5입니다.
*/

#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "삼각형의 높이를 입력하십시오." << endl;
	cin >> a;
	cout << "삼각형의 밑변을 입력하십시오." << endl;
	cin >> b;
	cout << "삼각형의 넓이는 " << (double)a * b / 2 << "입니다.";

	return 0;
}