#pragma once
#include <string>

using namespace std;

class user {
public:
	void set_login(string log);
	void set_pasw(string pas);
	void set_name(string nam);
	string get_login();
	string get_pasw();
	string get_name();

private:
	string login;
	string pasw;
	string name;
	string otp_1;
	string otp_2;
	string pr_1;
	string pr_2;
};
