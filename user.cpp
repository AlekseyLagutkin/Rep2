#include <iostream>
#include <string>
#include "user.h"

using namespace std;

void user::set_login(string log)  //������ ������
{
	login = log;
}
void user::set_pasw(string pas)  //������ ������
{
	pasw = pas;
}
void user::set_name(string nam)  //������ �����
{
	name = nam;
}
string user::get_login()  //��������� ������
{
	return login;
}
string user::get_pasw()  //��������� ������
{
	return pasw;
}
string user::get_name()  //��������� �����
{
	return name;
}