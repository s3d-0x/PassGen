#include <iostream>
#include<time.h>
#include<cstdlib>

using namespace std;



int main()
{
	srand(time(0));
	string password;
	string data = "abcdefghijklmnopqrstuvwxyz"
	               "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	              	"0123456789"
		            "!@#$%^&*()}{?><";

		int n;
	cout << "Enter the length of password : \n";
	cin >> n;


	for (int i = 1; i <= n; i++)

	{
		password = password + data[rand() % 93];
	}
	cout << "Your password is : " << password;
	return 0;



}

