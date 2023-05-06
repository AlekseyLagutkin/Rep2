#pragma once
#include <string>
#include "user.h"

using namespace std;

class chek_us   
{
public:
	chek_us(user* U, int sizem, int fel);   //”казатель на массив пользователей, размер массива, число зарегестрированных пользователей
	int chek_logpas();   //ѕроверка логина и парол€
	int chek_in();   //–егистраци€ нового пользовател€
private:
	user* _U;
	int _fel;
	int _sizem;
	string _log;
	string _pas;
	string _name;
};