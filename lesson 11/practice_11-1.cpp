//11장 1번 문제
/*구조체 Person형을 선언하고 사람의 나이(int형 age)와 몸무게(double형 weight), 그리고 키(double형 height)를
관리하는 코드를 작성하십시오. 실제로 2명 분의 나이, 체중, 키를 입력받은 후, 출력하는 코드를 작성하십시오.
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

	cout << "나이를 입력하십시오." << endl;
	cin >> per1.age;
	cout << "몸무게를 입력하십시오." << endl;
	cin >> per1.weight;
	cout << "키를 입력하십시오." << endl;
	cin >> per1.height;
	cout << "나이를 입력하십시오." << endl;
	cin >> per2.age;
	cout << "몸무게를 입력하십시오." << endl;
	cin >> per2.weight;
	cout << "키를 입력하십시오." << endl;
	cin >> per2.height;
	cout << "나이 " << per1.age << " 몸무게 " << per1.weight << " 키 " << per1.height << "입니다." << endl;
	cout << "나이 " << per2.age << " 몸무게 " << per2.weight << " 키 " << per2.height << "입니다." << endl;

	return 0;
}