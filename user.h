#pragma once
#include <string>

using namespace std;

class user {
public:
	user();
	void set_login(string log);
	void set_pasw(string pas);
	void set_name(string nam);
	void sent_mes(string s_mes, string r_user);   
	void rec_mes(string r_mes, string s);
	string get_login();
	string get_pasw();
	string get_name();
	void show_mes();   //����� ������������ � �������� ���������
	string qw;
	~user();
private:
	string login;
	string pasw;
	string name;
	string sent_1;   //������������ ��������� 1
	string sent_2;   //������������ ��������� 2
	string to_1;     //���� ���������� ��������� 1
	string to_2;     //���� ���������� ��������� 2
	string rec_1;    //�������� ��������� 1
	string rec_2;    //�������� ��������� 2
	string from_1;   //�� ���� ������� ��������� 1
	string from_2;   //�� ���� ������� ��������� 2
};
