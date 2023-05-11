#pragma once
#include <string>
#include "user.h"

using namespace std;

class chek_us   
{
public:
	chek_us(user* U, int sizem, int fel);   //Указатель на массив пользователей, размер массива, число зарегестрированных пользователей
	int chek_logpas();   //Проверка логина и пароля
	int chek_in();   //Регистрация нового пользователя
	~chek_us();
private:
	user* _U;
	int _fel;
	int _sizem;
	string _log;
	string _pas;
	string _name;
};