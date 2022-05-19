// IT21333552
// Abeysinghe I. U.

#include "Admin.h"
#include<iostream>
using namespace std;


Admin::Admin() {
	Aname = "";
	A_ID = 0;
}

Admin::Admin(string pAname, int PA_ID) {

	Aname = pAname;
	A_ID = PA_ID;
}
void Admin::AdminDetails()
{
	cout << "Enter name : ";
	cin >> Aname;

	cout << "Enter ID : ";
	cin >> A_ID;
}
void Admin::packageDetails(string pNew_packages, int pnew_packageID, double pnew_price, int pnew_night, string pnew_inclusions)
{
	new_packages = pNew_packages;
	new_packageID = pnew_packageID;
	new_price = pnew_price;
	new_night = pnew_night;
	new_inclusions = pnew_inclusions;
}

void Admin::inputPackage() {

	cout << "Enter New Package  : ";
	cin >> new_packages;

	cout << "Enter package number :";
	cin >> new_packageID;

	cout << "Enter price  :";
	cin >> new_price;

	cout << "Enter how many nigths person can stay :";
	cin >> new_night;

	cout << "Enter inclusions : ";
	cin >> new_inclusions;
}
void Admin::setUpdateDate()
{
	cout << "Day :";
	cin >> day;
	cout << "Month :";
	cin >> month;
	cout << "Year :";
	cin >> year;
}
int Admin::getDay()
{
	return day;

}
int Admin::getMonth()
{
	return month;

}
int Admin::getYear()
{
	return year;

}
void Admin::RemovePackages() {}

string Admin::AddNewUser() {}

Admin::~Admin()
{
	cout << "new package deleted." << endl;
}
