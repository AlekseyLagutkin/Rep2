#include <iostream>
#include <string>
#include <stdlib.h>
#include "user.h"
#include "chek_us.h"

using namespace std;



int main()
{
	setlocale(LC_ALL,"");
	int sm = 10;   //Размер массива - количество пользователей
	int fuel = 0;   //Количество заполненных элементов массива
	user* A = new user[sm];   //Выделение памяти для массива пользователей
	cout << sizeof(*A) << endl;
	
	cout << "Добро пожаловать в чат!\n";
	char in = 0;
	string str;
	while (true)
	{
		cout << "Для входа в чат введите 1, для регистрации введите 2, для завершения работы введите 3" << endl;
		cin >> in;
		if (in == '3')
		{
			break;
		}
		if (in == '1')
		{
			chek_us CU(A, sm, fuel);
			cout << CU.chek_logpas() << endl;
		}
		if (in == '2')
		{
			chek_us CU(A, sm, fuel);
			fuel = CU.chek_in();
		}
	}
	delete [] A;
	return 0;
}