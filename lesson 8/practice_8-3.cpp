//8장 3번 문제
//2번 문제의 기능을 레퍼런스를 이용하여 정의하십시오.
/*
2과목 분의 점수를 입력하십시오.
78(입력)
65(입력)
더할 점수를 입력하십시오.
12(입력)
12점을 더했으므로
과목 1은(는) 90점이 되었습니다.
과목 2은(는) 77점이 되었습니다.
*/

#include <iostream>
using namespace std;

void add(int& pX1, int& pX2, int& pA);

int main() {
	int x1 = 0, x2 = 0, a = 0;
	cout << "2과목 분의 점수를 입력하십시오." << endl;
	cin >> x1 >> x2;
	cout << "더할 점수를 입력하십시오." << endl;
	cin >> a;
	add(x1, x2, a);
	cout << a << "점을 더했으므로" << endl;
	cout << "과목 1은(는) " << x1 << "점이 되었습니다." << endl;
	cout << "과목 2은(는) " << x2 << "점이 되었습니다." << endl;

	return 0;

}

void add(int& pX1, int& pX2, int& pA) {
	pX1 += pA;
	pX2 += pA;
}