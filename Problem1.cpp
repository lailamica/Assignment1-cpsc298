#include <iostream>  

using namespace std; 

int main (int argc, char **argv)
	{ 
		double weightInOunces;
		double weightInMetricTons;
		double numCerealBoxes;

		cout << "Enter weight of breakfast cereal in ounces" << endl;
		cin >> weightInOunces;		

		weightInMetricTons = (weightInOunces / 35273.92); //divides oz by 35,273oz bc there that many in 1 metric ton

		numCerealBoxes = 1 / weightInMetricTons; //divides 1 metric ton by howver much the cereal box is 

		cout << "Weight in metric tons: " << weightInMetricTons << endl;
		cout << "Number of boxes needed for one metric ton of cereal: " << numCerealBoxes << endl;

		return 0;
	}
