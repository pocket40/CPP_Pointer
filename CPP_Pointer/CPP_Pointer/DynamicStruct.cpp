#include <iostream>

struct MyStruct
{
	char name[20];
	int age;
};

int main()
{
	using namespace std;

	//���� ����ü ����
	//temp* ps = new temp;

	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << temp->age << "�� �̱���!";

	return 0;
} 