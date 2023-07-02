//인수의 개수 및 형이 다르면서 이름만 같은 함수를 여러 개 정의하는 행위
//함수의 오버로드(중복정의)

#include <iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

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

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

double max(double x, double y) {
	if (x > y)
		return x;
	else
		return y;
}

//오버로드 사용 시 주의점
//오버로드할 함수는 인수의 형태와 개수가 기존에 선언된 함수와 달라야 한다.