// IT number
//name 

#include "Registered_User.h"
#include"Guest.h"
#include<iostream>
using namespace std;


register_user::register_user()
{
	userName = "";
	password = "";
}
register_user::register_user(string puserName, string ppassword, int pUserID, string pUserAddress, string pUserEmail)
{
	userName = puserName;
	password = ppassword;
	UserID = pUserID;
	UserAddress = pUserAddress;
	UserEmail = pUserEmail;
}
void register_user::displayDetails()
{

}
void register_user::login()
{

}
void register_user::logout()
{

}
string register_user::checkLoginDetails()
{
	return 0;
}
register_user::~register_user()
{
	//Destructor
}

