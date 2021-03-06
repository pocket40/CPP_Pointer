#include <iostream>

int main() {
	//delete 연산자
	/*
	사용한 메모리를 다시 메모리 폴로 환수
	환수된 메모리는 프로그램의 다른 부분이 다시 사용
	*/

	int* ps = new int;
	//메모리 사용
	delete ps;

	/*
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
	2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
	3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
	4. 대괄호를 사용하지 않았다면 delete도  대괄호를 사용하지 않아야 한다.
	*/

	using namespace std;

	double* p3 = new double[3]; // double형 데이터 3개를 저장할 수 있는 공간을 대입한다.
	p3[0] = 0.2;				// p3를 배열 이름처럼 취급한다.
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p1[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;				// 포인터를 증가시킨다.

	cout << "Now p3[0] is " << p3[0] << " and ";

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;				// 다시 시작 위치를 시작한다.
	delete[] p3;				// 배열 메모리를 해제한다.
	// cin.get();

	return 0;
}