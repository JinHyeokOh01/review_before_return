//11장 2번 문제
/* 1번 문제에 등장하는 구조체의 포인터를 인수로 받은 다음, 나이를 하나씩 늘리는 함수 void aging(Person* p)
를 작성하십시오. 실제로 1명 분의 정보를 입력 받은 다음, 1년 후의 나이를 출력하는 코드를 작성하십시오.
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
	cout << "나이를 입력하십시오." << endl;
	cin >> per1.age;
	cout << "몸무게를 입력하십시오." << endl;
	cin >> per1.weight;
	cout << "키를 입력하십시오." << endl;
	cin >> per1.height;

	cout << "1년이 지났습니다." << endl;
	aging(&per1);
	cout << "나이 " << per1.age << " 몸무게 " << per1.weight << " 키 " << per1.height << "입니다." << endl;
	return 0;
}

void aging(Person* p) {
	p->age++;
}