#include <iostream>
#include <string>
#include "user.h"
#include "chek_us.h"
#include "in_chat.h"

using namespace std;



int main()
{
	setlocale(LC_ALL,"");
	int sizem = 5;   //Размер массива - количество пользователей
	int fel = 0;   //Количество заполненных элементов массива
	int my_num = 0;   //Текущий номер пользователя
	user* A = new user[sizem];   //Выделение памяти для массива пользователей
	//cout << sizeof(*A) << endl;
	
	cout << "Добро пожаловать в чат!\n";
	char in = 0;
	string str;
	while (true)
	{
		cout << "Для входа в чат введите 1, для регистрации введите 2, для завершения работы введите 3:" << endl;
		cin >> in;
		if (in == '3')
		{
			break;
		}
		if (in == '1')
		{
			chek_us User(A, sizem, fel);
			my_num = User.chek_logpas();   //Проверка логина и пароля
			if (my_num >= 0)
			{
				in_chat Uchat(A, my_num, fel);
				Uchat.s_mes();   //Отправка сообщений
			}

		}
		if (in == '2')
		{
			chek_us User(A, sizem, fel);
			try
			{
				fel = User.chek_in();   //Добавление нового пользователя
			}
			catch (const char* except)
			{
				cout << "Исключение: " << except << endl;
			}
		}
	}
	delete [] A;
	return 0;
}