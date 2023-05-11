#include<iostream>
#include <string>
#include "in_chat.h"
#include "user.h"

using namespace std;

in_chat::in_chat(user* U, int my_num, int fel) : _U(U), _my_num(my_num), _fel(fel)
{
	//cout << "Конструктор in_chat" << endl;
	my_log = (_U + _my_num)->get_login();
	my_name = (_U + _my_num)->get_name();
	cout << "Логин:" << my_log << endl;
	cout << "Имя:" << my_name << endl << endl;
	//cout << "Номер:" << _my_num << endl;
}
void in_chat::s_mes()   //Отправка сообщений
{
	bool log_us = false;   //Метка поиска логина получателя
	char in = 0;
	int i = 0;
	string login;
	string mes;
	while (true)
	{
		(_U+_my_num)->show_mes();   //Вывод отправленных и полученных сообщений
		cout << "Для отправки сообщения введите 1, для выхода введите 2:" << endl;
		cin >> in;
		if (in == '1')
		{
			cout << "Введите логин пользователя, которому вы хотите отправить сообщение,\n";
			cout << "или введите all для отправки всем пользователям:\n";
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
				cout << "Введите сообщение:";
				cin >> mes;
				(_U + i)->rec_mes(mes, my_log);   //Отправка сообщения получателю
				(_U + _my_num)->sent_mes(mes, login);   //Сохранение отправленного сообщения
			}
			else if (login == "all")
			{
				cout << "Введите сообщение:";
				cin >> mes;
				for (i = 0; i < _fel; ++i)
				{
					if (i == _my_num)
					{
						continue;
					}
					(_U + i)->rec_mes(mes, my_log);
				}
				(_U + _my_num)->sent_mes(mes, "всем");   //Сохранение отпраленного сообщения 
			}
			else
			{
				cout << "Такого пользователя не существует." << endl;
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
	//cout << "Деструктор in_chat" << endl;
}
