#include <iostream>
#include <string>
#include "chek_us.h"
#include "user.h"

using namespace std;

chek_us::chek_us(user* U, int sizem, int fel) : _U(U), _sizem(sizem), _fel(fel)
{
	//cout << "Конструктор chek_us" << endl;
}
int chek_us::chek_logpas()   //Вход пользователя
{
	cout << "Введите логин:";
	cin >> _log;
	int j = 0;
	bool login = false;
	bool pasw = false;
	for (int i = 0; i < _fel; ++i)
	{
		if (_log == (_U + i)->get_login())   //Проверка логина
		{
			login = true;
			cout << "Введите пароль:";
			cin >> _pas;
			if (_pas == (_U + i)->get_pasw())   //Проверка пароля
			{
				pasw=true;
				j = i;
				break;
			}
			else
			{
				cout << "Неверный пароль" << endl;
			}
		}
	}
	if (login == false)
	{
		cout << "Неверный логин" << endl;
	}
	if (login && pasw && true)
	{
		cout << "Вход выполнен\n" << endl;
		return j;
	}
	else
	{
		return -1;
	}
}
int chek_us::chek_in()   //Регистрация пользователя
{
	if (_fel >= _sizem)   //Проверка на переполнение массива 
	{
		throw "Извините, чат заполнен.\n";
	}
	else
	{
		bool login = true;   
		string _pas2;
		cout << "Введите логин:" << endl;
		cin >> _log;
		for (int i = 0; i < _fel; ++i)
		{
			if (_log == (_U + i)->get_login())
			{
				login = false;
				cout << "Логин уже занят" << endl;
				break;
			}
		}
		if (login == true)
		{
			cout << "Введите ваше имя:";
			cin >> _name;
			cout << "Введите пароль:";
			cin >> _pas;
			cout << "Подтвердите пароль:";
			cin >> _pas2;
			if (_pas2 == _pas)
			{
				(_U + _fel)->set_login(_log);
				(_U + _fel)->set_name(_name);
				(_U + _fel)->set_pasw(_pas);
				cout << "Регистрация прошла успешно!" << endl;
				++_fel;   //Увеличение количества заполненных элементов
			}
			else
			{
				cout << "Неверный пароль, регистрация прервана." << endl;
			}
		}
	}	
	return _fel;
}
chek_us::~chek_us()
{
	//cout << "Деструктор chek_us" << endl;
}
