#include <iostream>
#include <string>
#include "user.h"

using namespace std;

user::user()
{
	//cout << "Конструктор user" << endl;
}
void user::set_login(string log) 
{
	login = log;
}
void user::set_pasw(string pas)  
{
	pasw = pas;
}
void user::set_name(string nam)
{
	name = nam;
}
void user::sent_mes(string s_mes, string r_user)   //Отправка сообщения
{
	sent_2 = sent_1;
	to_2 = to_1;
	sent_1 = s_mes;
	to_1 = r_user;
}
void user::rec_mes(string r_mes, string s_user)   //Получение сообщения
{
	rec_2 = rec_1;
	from_2 = from_1;
	rec_1 = r_mes;
	from_1 = s_user;
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
void user::show_mes()   //Вывод сообщений
{
	cout << endl << "Принятые сообщения:" << endl;
	if (rec_1 != "")
	{
		cout << rec_1 << "   от   " << from_1 << endl;
	}
	if (rec_2 != "")
	{
		cout << rec_2 << "   от   " << from_2 << endl;
	}
	cout << "Отправленные сообщения:" << endl;
	if (sent_1 != "")
	{
		cout << sent_1 << "   кому   " << to_1 << endl;
	}
	if (sent_2 != "")
	{
		cout << sent_2 << "   кому   " << to_2 << endl;
	}
	cout << endl;
}
user::~user()
{
	//cout << "Деструктор user" << endl;
}
