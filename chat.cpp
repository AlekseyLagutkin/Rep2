#include <iostream>
#include <string>
#include <stdlib.h>
#include "user.h"
#include "chek_us.h"

using namespace std;



int main()
{
	setlocale(LC_ALL,"");
	int sm = 10;   //������ ������� - ���������� �������������
	int fuel = 0;   //���������� ����������� ��������� �������
	user* A = new user[sm];   //��������� ������ ��� ������� �������������
	cout << sizeof(*A) << endl;
	
	cout << "����� ���������� � ���!\n";
	char in = 0;
	string str;
	while (true)
	{
		cout << "��� ����� � ��� ������� 1, ��� ����������� ������� 2, ��� ���������� ������ ������� 3" << endl;
		cin >> in;
		if (in == '3')
		{
			break;
		}
		if (in == '1')
		{
			chek_us CU(A, sm, fuel);
			cout << CU.chek_logpas() << endl;
		}
		if (in == '2')
		{
			chek_us CU(A, sm, fuel);
			fuel = CU.chek_in();
		}
	}
	delete [] A;
	return 0;
}