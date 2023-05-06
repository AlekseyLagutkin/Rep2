#include <iostream>
#include <string>
#include "chek_us.h"
#include "user.h"

using namespace std;

chek_us::chek_us(user* U, int sizem, int fel) : _U(U), _sizem(sizem), _fel(fel)
{
}
int chek_us::chek_logpas()   //���� ������������
{
	cout << "������� �����:";
	cin >> _log;
	int j = 0;
	bool login = false;
	bool pasw = false;
	for (int i = 0; i < _fel; ++i)
	{
		if (_log == (_U + i)->get_login())
		{
			login = true;
			cout << "������� ������:";
			cin >> _pas;
			if (_pas == (_U + i)->get_pasw())
			{
				pasw=true;
				j = i;
			}
			else
			{
				cout << "�������� ������" << endl;
			}
		}
	}
	if (login == false)
	{
		cout << "�������� �����" << endl;
	}
	if (true && login && pasw)
	{
		return j;
	}
	else
	{
		return -1;
	}
}
int chek_us::chek_in()   //����������� ������������
{
	if (_fel < _sizem)   //�������� �� ������������ �������
	{
		bool login = true;
		string _pas2;
		cout << "������� �����" << endl;
		cin >> _log;
		for (int i = 0; i < _fel; ++i)
		{
			if (_log == (_U + i)->get_login())
			{
				login = false;
				cout << "����� ��� �����" << endl;
				break;
			}
		}
		if (login == true)
		{
			cout << "������� ���� ���:";
			cin >> _name;
			cout << "������� ������:";
			cin >> _pas;
			cout << "����������� ������:";
			cin >> _pas2;
			if (_pas2 == _pas)
			{
				(_U + _fel)->set_login(_log);
				(_U + _fel)->set_name(_name);
				(_U + _fel)->set_pasw(_pas);
				++_fel;
			}
			else
			{
				cout << "�������� ������, ����������� ��������" << endl;
			}
		}
	}
	else
	{
		cout << "��������, ��� ��������\n";
	}
	return _fel;
}
