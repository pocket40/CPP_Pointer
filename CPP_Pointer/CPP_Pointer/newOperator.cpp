#include <iostream>

using namespace std;

int main() {
	//new 연산자
	/*
	어떤 데이터형을 원하는지 new 연산자에게 알려주면,
	new 연산자는 그에 알맞은 크기의 메모리 블록을
	 찾아내고 그 블록의 주소를 리턴합니다.
	*/

	int a;
	int* b = &a;

	int* pointer = new (int);
	 

	return 0;
}