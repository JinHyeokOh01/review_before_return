//������ = new ����;
//�������� Ȯ�������� �� �ּҸ� ����Ͽ� ���� �����ؾ���.
//delete ������ ��;

#include <iostream>
using namespace std;

int main() {
	int* pA;
	pA = new int;
	cout << "�������� �޸𸮸� Ȯ����." << endl;
	*pA = 10;
	cout << "�������� Ȯ���� �޸𸮸� ����Ͽ� " << *pA << "�� ����߽��ϴ�." << endl;
	delete pA;
	cout << "Ȯ���� �޸𸮸� �����߽��ϴ�." << endl;

	return 0;
}