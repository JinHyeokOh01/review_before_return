//9�� 1�� ����
//5���� ��Ҹ� ���� �迭�� �޾Ƽ�, �� �ִ��� �����ϴ� int max(int x[]) �Լ��� �����Ͻʽÿ�.
//Ű����� �л� ���� ���������� �Է¹��� ��, max() �Լ��� ����Ͽ� �ְ������� ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�.

#include <iostream>
using namespace std;

int max(int x[]);

int main() {
	int score[5];

	int maxValue = 0;
	cout << "���� ������ �Է��Ͻʽÿ�." << endl;
	for (int i = 0; i < 5; i++)
		cin >> score[i];

	maxValue = max(score);

	cout << "���� ���� ������ " << maxValue << "���Դϴ�." << endl;
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