//3장 3번 문제
//다음과 같이 화면에 출력하는 코드를 작성하십시오.
/*
	키와 몸무게를 입력하십시오.
	165.2
	52.5
	키는 165.2 센티미터입니다.
	몸무게는 52.5 킬로그램입니다.
*/

#include <iostream>
using namespace std;

int main() {
	double tall = 0, weight = 0;
	cout << "키와 몸무게를 입력하십시오.\n";
	cin >> tall;
	cin >> weight;
	cout << "키는 " << tall << " 센티미터입니다.\n";
	cout << "몸무게는 " << weight << " 킬로그램입니다.\n";
	return 0;
}