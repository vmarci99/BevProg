#include <iostream>

using namespace std;

int main()
{
	//1.
	cout << "Enter the name of the person you want to write to\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	//2.
	cout << "How are you?\nI am fine. I miss you...\n";
	//3.
	cout << "Give me a name of your friend!\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	//4.
	char friend_sex = '0';
	do
	{
           cout << "Is your friend male or female?\nGive me an f or an m   \n";
	   cin >> friend_sex;
	}while(friend_sex != 'f' && friend_sex != 'm');
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	//5.
	int age;
	cout << "Tell your age!\n";
	cin >> age;
	if (age > 0 && age < 110)
	{
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	} else 
	{
		perror("you're kidding!");
	}
	//6.
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << ".\n";
	} else if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	} else if (age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	//7.
	cout << "Yours sincerely,\n\n\nMarcell Varjas";
}
