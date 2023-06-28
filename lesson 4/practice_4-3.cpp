//4장 3번 문제
//키보드로 다섯 과목의 시험 점수를 입력받은 후, 다음과 같이 합계와 평균을 출력하는 코드를 작성하십시오.

#include <iostream>
using namespace std;

int main() {
	double input = 0;
	double sum = 0;
	double avg = 0;

	cout << "과목 1의 점수를 입력하십시오." << endl;
	cin >> input;
	sum += input;
	cout << "과목 2의 점수를 입력하십시오." << endl;
	cin >> input;
	sum += input;
	cout << "과목 3의 점수를 입력하십시오." << endl;
	cin >> input;
	sum += input;
	cout << "과목 4의 점수를 입력하십시오." << endl;
	cin >> input;
	sum += input;
	cout << "과목 5의 점수를 입력하십시오." << endl;
	cin >> input;
	sum += input;
	avg = sum / 5;

	cout << "5과목의 합계는 " << sum << " 점입니다." << endl;
	cout << "5과목의 평균은 " << avg << " 점입니다." << endl;

	return 0;

}