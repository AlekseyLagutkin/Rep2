#pragma once
#include <string>
#include "user.h"

using namespace std;

class chek_us   
{
public:
	chek_us(user* U, int sizem, int fel);   //��������� �� ������ �������������, ������ �������, ����� ������������������ �������������
	int chek_logpas();   //�������� ������ � ������
	int chek_in();   //����������� ������ ������������
	~chek_us();
private:
	user* _U;
	int _fel;
	int _sizem;
	string _log;
	string _pas;
	string _name;
};