//11�� 1�� ����
/*����ü Person���� �����ϰ� ����� ����(int�� age)�� ������(double�� weight), �׸��� Ű(double�� height)��
�����ϴ� �ڵ带 �ۼ��Ͻʽÿ�. ������ 2�� ���� ����, ü��, Ű�� �Է¹��� ��, ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�.
*/

#include <iostream>
using namespace std;

struct Person {
	int age;
	double weight;
	double height;
};

int main() {
	Person per1;
	Person per2;

	cout << "���̸� �Է��Ͻʽÿ�." << endl;
	cin >> per1.age;
	cout << "�����Ը� �Է��Ͻʽÿ�." << endl;
	cin >> per1.weight;
	cout << "Ű�� �Է��Ͻʽÿ�." << endl;
	cin >> per1.height;
	cout << "���̸� �Է��Ͻʽÿ�." << endl;
	cin >> per2.age;
	cout << "�����Ը� �Է��Ͻʽÿ�." << endl;
	cin >> per2.weight;
	cout << "Ű�� �Է��Ͻʽÿ�." << endl;
	cin >> per2.height;
	cout << "���� " << per1.age << " ������ " << per1.weight << " Ű " << per1.height << "�Դϴ�." << endl;
	cout << "���� " << per2.age << " ������ " << per2.weight << " Ű " << per2.height << "�Դϴ�." << endl;

	return 0;
}