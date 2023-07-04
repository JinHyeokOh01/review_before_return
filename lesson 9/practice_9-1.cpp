//9장 1번 문제
//5개의 요소를 가진 배열을 받아서, 그 최댓값을 리턴하는 int max(int x[]) 함수를 정의하십시오.
//키보드로 학생 수와 시험점수를 입력받은 후, max() 함수를 사용하여 최고점수를 출력하는 코드를 작성하십시오.

#include <iostream>
using namespace std;

int max(int x[]);

int main() {
	int score[5];

	int maxValue = 0;
	cout << "시험 점수를 입력하십시오." << endl;
	for (int i = 0; i < 5; i++)
		cin >> score[i];

	maxValue = max(score);

	cout << "가장 높은 점수는 " << maxValue << "점입니다." << endl;
	return 0;
}

int max(int x[]) {
	int max = x[0];
	int size = 0;
	while (x[size] != NULL)
		size++;
	size--;
	for (int j = 1; j < size; j++) {
		if (max < x[j])
			max = x[j];
	}

	return max;
}