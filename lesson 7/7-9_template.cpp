//함수 템플릿을 선언하고 정의한다.
//함수를 호출한다(함수가 자동으로 만들어진다.)

//다루는 형을 제외한 다른 요소가 완전히 동일한 함수를 단 한번만 정의할 수 있다.
//다형성(polymorphism) : 하나의 이름이 상황에 맞추어 다른 기능을 가지는 것

#include <iostream>

using namespace std;

template <class T>
T maxt(T x, T y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int a = 0, b = 0;
	double da = 0, db = 0;

	cout << "정수 2개 입력" << endl;
	cin >> a >> b;
	cout << "소수 2개 입력" << endl;
	cin >> da >> db;

	cout << "정수 최댓값은 " << max(a, b) << "입니다." << endl;
	cout << "소수 최댓값은 " << max(da, db) << "입니다." << endl;

	return 0;
}