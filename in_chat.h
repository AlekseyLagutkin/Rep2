#pragma once
#include <string>
#include "user.h"

using namespace std;

class in_chat
{
public:
	in_chat(user* U, int my_num, int fel);   //”казатель на массив, номер пользовател€ и количество заполненных €чеек
	void s_mes();   //ќтправка сообщений
	~in_chat();
private:
	user* _U;
	int _my_num;
	int _fel;
	string my_log;
	string my_name;
};
