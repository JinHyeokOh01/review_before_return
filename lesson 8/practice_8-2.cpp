//8장 2번 문제
//두 과목의 시험 점수(x1, x2)에 a점을 더하는 함수 add()를 포인터를 사용하여 정의하십시오.
//키보드로 x1, x2, a를 입력받은 후, 다음과 같이 출력하는 코드를 작성하십시오.
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

void add(int* pX1, int* pX2, int* pA);

int main() {
	int x1 = 0, x2 = 0, a = 0;
	cout << "2과목 분의 점수를 입력하십시오." << endl;
	cin >> x1 >> x2;
	cout << "더할 점수를 입력하십시오." << endl;
	cin >> a;
	add(&x1, &x2, &a);
	cout << a << "점을 더했으므로" << endl;
	cout << "과목 1은(는) " << x1 << "점이 되었습니다." << endl;
	cout << "과목 2은(는) " << x2 << "점이 되었습니다." << endl;

	return 0;

}

void add(int* pX1, int* pX2, int* pA) {
	*pX1 += *pA;
	*pX2 += *pA;
}