#include <iostream>
#include <string>
#include "user.h"

using namespace std;

void user::set_login(string log)  //Запись логина
{
	login = log;
}
void user::set_pasw(string pas)  //Запись пароля
{
	pasw = pas;
}
void user::set_name(string nam)  //Запись имени
{
	name = nam;
}
string user::get_login()  //Получение логина
{
	return login;
}
string user::get_pasw()  //Получение пароля
{
	return pasw;
}
string user::get_name()  //Получение имени
{
	return name;
}