#include <iostream>

using namespace std;

double avg(int t[]);

int main() {
	int test[5];

	cout << "5명의 시험 점수를 입력하십시오." << endl;
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double ans = avg(test);
	cout << "5명의 평균 점수는 " << ans << "점입니다." << endl;

	return 0;
}

double avg(int t[]) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}