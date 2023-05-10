#include<iostream>
#include <string>
#include "in_chat.h"
#include "user.h"

using namespace std;

in_chat::in_chat(user* U, int my_num, int fel) : _U(U), _my_num(my_num), _fel(fel)
{
	//cout << "����������� in_chat" << endl;
	my_log = (_U + _my_num)->get_login();
	my_name = (_U + _my_num)->get_name();
	cout << "�����:" << my_log << endl;
	cout << "���:" << my_name << endl << endl;
	//cout << "�����:" << _my_num << endl;
}
void in_chat::s_mes()   //�������� ���������
{
	bool log_us = false;   //����� ������ ������ ����������
	char in = 0;
	int i = 0;
	string login;
	string mes;
	while (true)
	{
		(_U+_my_num)->show_mes();   //����� ������������ � ���������� ���������
		cout << "��� �������� ��������� ������� 1, ��� ������ ������� 2:" << endl;
		cin >> in;
		if (in == '1')
		{
			cout << "������� ����� ������������, �������� �� ������ ��������� ���������,\n";
			cout << "��� ������� all ��� �������� ���� �������������:\n";
			cin >> login;
			for (i = 0; i < _fel; ++i)
			{
				if (login == (_U + i)->get_login())
				{
					log_us = true;
					break;
				}
			}
			if (log_us == true)
			{
				cout << "������� ���������:";
				cin >> mes;
				(_U + i)->rec_mes(mes, my_log);   //�������� ��������� ����������
				(_U + _my_num)->sent_mes(mes, login);   //���������� ������������� ���������
			}
			else if (login == "all")
			{
				cout << "������� ���������:";
				cin >> mes;
				for (i = 0; i < _fel; ++i)
				{
					if (i == _my_num)
					{
						continue;
					}
					(_U + i)->rec_mes(mes, my_log);
				}
				(_U + _my_num)->sent_mes(mes, "����");   //���������� ������������ ��������� 
			}
			else
			{
				cout << "������ ������������ �� ����������." << endl;
			}


		}
		if (in == '2')
		{
			break;
		}


	}
}
in_chat::~in_chat()
{
	//cout << "���������� in_chat" << endl;
}
