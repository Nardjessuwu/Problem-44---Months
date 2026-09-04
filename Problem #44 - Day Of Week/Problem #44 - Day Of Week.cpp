#include <iostream>
using namespace std;

enum enMonths { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, Augest = 8, September = 9, October = 10, November = 11, December = 12 };

void ShowMenue()
{
	cout << "------------------------------------------\n";
	cout << "                  Months                  \n";
	cout << "------------------------------------------\n";
	cout << "1 : January\n";
	cout << "2 : February\n";
	cout << "3 : March\n";
	cout << "4 : April\n";
	cout << "5 : May\n";
	cout << "6 : June\n";
	cout << "7 : July\n";
	cout << "8 : August\n";
	cout << "9 : September\n";
	cout << "10 : October\n";
	cout << "11 : November\n";
	cout << "12 : December\n";
}

enMonths ReadMonth()
{
	enMonths Months;
	int Month;
	cout << "Enter Number Of Month: \n";
	cin >> Month;
	return (enMonths)Month;
}

string PrintMonth(enMonths Months)
{
	switch (Months) {

	case enMonths::January:
		return "January";
		break;

	case enMonths::February:
		return "February";
		break;

	case enMonths::March:
		return "Match";
		break;

	case enMonths::April:
		return "April";
		break;

	case enMonths::May:
		return "May";
		break;

	case enMonths::June:
		return "June";
		break;

	case enMonths::July:
		return "July";
		break;

	case enMonths::Augest:
		return "Augest";
		break;

	case enMonths::September:
		return "September";
		break;

	case enMonths::October:
		return "October";
		break;

	case enMonths::November:
		return "November";
		break;

	case enMonths::December:
		return "December";
		break;

	default:
		return "Not A Month!\n";
	}
}


int main()
{

	ShowMenue();


	cout << "This Month Is: " << PrintMonth(ReadMonth()) << endl;



	return 0;
}
