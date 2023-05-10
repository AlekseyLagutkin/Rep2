#include <iostream>
#include <string>
#include "user.h"
#include "chek_us.h"
#include "in_chat.h"

using namespace std;



int main()
{
	setlocale(LC_ALL,"");
	int sizem = 5;   //������ ������� - ���������� �������������
	int fel = 0;   //���������� ����������� ��������� �������
	int my_num = 0;   //������� ����� ������������
	user* A = new user[sizem];   //��������� ������ ��� ������� �������������
	//cout << sizeof(*A) << endl;
	
	cout << "����� ���������� � ���!\n";
	char in = 0;
	string str;
	while (true)
	{
		cout << "��� ����� � ��� ������� 1, ��� ����������� ������� 2, ��� ���������� ������ ������� 3:" << endl;
		cin >> in;
		if (in == '3')
		{
			break;
		}
		if (in == '1')
		{
			chek_us User(A, sizem, fel);
			my_num = User.chek_logpas();   //�������� ������ � ������
			if (my_num >= 0)
			{
				in_chat Uchat(A, my_num, fel);
				Uchat.s_mes();   //�������� ���������
			}

		}
		if (in == '2')
		{
			chek_us User(A, sizem, fel);
			try
			{
				fel = User.chek_in();   //���������� ������ ������������
			}
			catch (const char* except)
			{
				cout << "����������: " << except << endl;
			}
		}
	}
	delete [] A;
	return 0;
}