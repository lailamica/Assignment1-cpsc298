#include <iostream> 

using namespace std; 

int main (int argc, char **argv)
	{
		int maxRoomCapacity;
		int numPeopleAttending; 

		cout << "Enter the maximum room capacity and number of people attending" << endl;
		cin >> maxRoomCapacity;
		cin >> numPeopleAttending;

		if (numPeopleAttending <= maxRoomCapacity) //checks if there are less people than the capacity
		{
			cout << "It is legal to hold the meeting" << endl;
			if ((maxRoomCapacity - numPeopleAttending) == 1) //if only 1 more person can attend
				cout << (maxRoomCapacity - numPeopleAttending) << " more person can attend" << endl;
			else //anything other than one bc wording
				cout << (maxRoomCapacity - numPeopleAttending) << " more people can attend" << endl;
		}
		else //if there are more people than is capacity
		{
			cout << "This meeting cannot be held as planned due to fire regulations" << endl;
			if ((numPeopleAttending - maxRoomCapacity) == 1) //again checks so wording sounds right
				cout << (numPeopleAttending - maxRoomCapacity) << " person must be excluded to meet fire regulations" << endl;
			else
				cout << (numPeopleAttending - maxRoomCapacity) << " people must be excluded to meet fire regulations" << endl;
		} 
				
		return 0;
	}
