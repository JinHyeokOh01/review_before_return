//5�� 2�� ����
//Ű����� 2���� �������� �Է¹��� ��, ��쿡 ���� ������ ���� �޽����� ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�.
/*
���� ���� ��� -> "�� ���ڴ� �����ϴ�."
���� �ٸ� ��� -> "O���� X�� Ů�ϴ�." (��, O, X�� �Է��� ����, O < X)
*/

#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "2���� ������ �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cin >> b;
	if (a == b)
		cout << "�� ���ڴ� �����ϴ�." << endl;
	else if (a > b)
		cout << b << "���� " << a << "�� Ů�ϴ�." << endl;
	else
		cout << a << "���� " << b << "�� Ů�ϴ�." << endl;

	return 0;
}