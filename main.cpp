#include <iostream>
using namespace std;

int main() {
  cout << "test" << endl;
}
/* 
Algorithm
----------
1	Prompt the user to enter their car number as an integer.			2	Validate the car number entry:											
		If the user enters a non-integer value, stop the program and     display an error message.										
3	Prompt the user to enter their parking type as a character:				C	Cars									
		T	Trucks									
		S	Senior Citizen									
4	Validate the parking type entry:											
5	If the user enters a value other than C, T, or S, stop the program and display an error message.										
6	Prompt the user to enter the hours parked:										7	Validate the hours entry:											
		If the user enters a non-integer value, stop the program and     display an error message.										
		If the user enters an integer greater than 16, stop the          program and display an error message.										
8	Prompt the user to enter the minutes parked.									9	Validate the minutes entry:											
		If the user enters a non-integer value, stop the program and     display an error message.										
		If the user enters an integer greater than 60, stop the          program and display an error message.										
10 If the minutes entry is greater than or equal to 30, add 1 hour to the hour entry.											
11	Validate the hours entry:											
		If the new hours are greater than 16, stop the program and       display an error message.										
12	Calculate the parking rates by type and time:							
		C	0-2 hours	 $0.00  T	0-2 hours	 $0.00 	S	0-16 hours $0.00
		C	3-5 hours	 $1.00 	T	3-4 hours	 $2.00 				
		C	6-16 hours $0.50 	T	5-16 hours $1.00 				
13	Display the headers for the parking receipt, left-justified:											
			Ticket									
			Car Number									
			Type									
			Hours									
			Minutes									
			Total Due									
14	Print the values entered by the user, right-justified.			15	Print the calculated total due, right-justified, with a dollar sign and 2 decimal points.											
*/