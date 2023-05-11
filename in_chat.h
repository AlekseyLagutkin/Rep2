#pragma once
#include <string>
#include "user.h"

using namespace std;

class in_chat
{
public:
	in_chat(user* U, int my_num, int fel);   //Указатель на массив, номер пользователя и количество заполненных ячеек
	void s_mes();   //Отправка сообщений
	~in_chat();
private:
	user* _U;
	int _my_num;
	int _fel;
	string my_log;
	string my_name;
};
