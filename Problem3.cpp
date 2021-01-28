#include <iostream> 
#include <iomanip>

using namespace std; 

int main (int argc, char **argv)
	{
		int hoursWorked;
		double grossPay;
		double socialSecurity;
		double federalIncome;
		double stateIncome;
		const double MEDICAL_INSURANCE = 10.0; //sets to $10 bc its constant no matter the hours worked
		double takeHomePay;
		
		cout << "Enter the number of hours worked this week" << endl;
		cin >> hoursWorked;

		if (hoursWorked > 40) //checks if need to pay overtime
		{
			grossPay = hoursWorked * 16.0; //multiplies all hours worked by $16
			hoursWorked -= 40; //finds how many hours worked in overtime
			grossPay += hoursWorked * 8.0; //multiplies the overtime hours by an extra $8 and adds it to the pay
		}
		else //if no overtime is worked just finds the normal pay
		{
			grossPay = hoursWorked * 16.0;
		}

		//finds the amount of each tax
		socialSecurity = grossPay * 0.06; 
		federalIncome = grossPay * 0.14;
		stateIncome = grossPay * 0.05;

		takeHomePay = grossPay - (socialSecurity + federalIncome + stateIncome + MEDICAL_INSURANCE); //subtracts all taxs from the gross pay

		//outputs each pay and tax with only two decimal points
		cout << "Gross pay: $" << fixed << setprecision(2) << grossPay << endl; 
		cout << "Social Security tax: $" << socialSecurity << endl;
		cout << "Federal Income tax: $" << federalIncome << endl;
		cout << "State Income tax: $" << stateIncome << endl;
		cout << "Medical Insurance: $" << MEDICAL_INSURANCE << endl;
		cout << "Net Take-Home pay: $" << takeHomePay << endl;

		return 0;
	}
