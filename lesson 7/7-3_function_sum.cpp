#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x + y;
}

int main(){
	int num1 = 0, num2 = 0;

	cout << "ù ��° ���� �Է�" << endl;
	cin >> num1;

	cout << "�� ��° ���� �Է�" << endl;
	cin >> num2;

	cout << "�� ���� ���� " << sum(num1, num2) << "�Դϴ�." << endl;

	return 0;

}