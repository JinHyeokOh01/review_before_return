//������ �����ϸ� �޸𸮰� Ȯ���ǰ�, ������ ���� ���� �� ��¿� �̿�ǰ�, �޸𸮰� �����ȴ�.
//�Ϲ����� ���� ������ ����� ��, �Լ��� ����� �������� ���� ������ �� �ִ�.

#include <iostream>
using namespace std;

void func();

int a = 0; //���� ���� a

int main() {
	for (int i = 0; i < 5; i++)
		func();

	return 0;
}

void func() {
	int b = 0; //���� ���� b
	static int c = 0; //static ���� ���� c -> static�� ���̸�, ���� ������ ���� ��� ����. ���α׷��� ���������� �ı����� �ʴ´�.
	//���� ������ ���� ���� ����
	cout << "a : " << a << " b : " << b << " c : " << c << endl;
	a++;
	b++;
	c++;

	//b�� �Լ��� ȣ��ɶ����� 0�� ����ǰ� �Լ��� ���������� �ı��ȴ�.
}