//11�� 2�� ����
/* 1�� ������ �����ϴ� ����ü�� �����͸� �μ��� ���� ����, ���̸� �ϳ��� �ø��� �Լ� void aging(Person* p)
�� �ۼ��Ͻʽÿ�. ������ 1�� ���� ������ �Է� ���� ����, 1�� ���� ���̸� ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�.
*/

#include <iostream>
using namespace std;

struct Person {
	int age;
	double weight;
	double height;
};

void aging(Person* p);

int main() {
	Person per1;
	cout << "���̸� �Է��Ͻʽÿ�." << endl;
	cin >> per1.age;
	cout << "�����Ը� �Է��Ͻʽÿ�." << endl;
	cin >> per1.weight;
	cout << "Ű�� �Է��Ͻʽÿ�." << endl;
	cin >> per1.height;

	cout << "1���� �������ϴ�." << endl;
	aging(&per1);
	cout << "���� " << per1.age << " ������ " << per1.weight << " Ű " << per1.height << "�Դϴ�." << endl;
	return 0;
}

void aging(Person* p) {
	p->age++;
}