//inout library 
#include <iostream>
//name space type std
using namespace std;
//Choice between "y" or "no" option
char choice;
//interger a set to 0 because you have not choose the "n" option
int a = 0;
//how many times you submited to the cin "y" option
int counter = 0;
//how many times cout should print "really" 
int counter2 = 0;
// main class 
int main () {
//while loop keeps going untill int a is greater than a number lest then one
     while ( a < 1 ){
//cout first part of message 
        cout << "Would you "; 
//for command 
//for when this is something do this
//for counter equal to 0, counter less then counter 2, incress counter interger by 1 cout "really"
//first time you cin "y" the counter is at 0 at this point so it will cout nothing
//secound time your cin "y" the counter is now at 1 so it cout "really" one time
        for (counter = 0 ; counter < counter2 ; counter++) cout << "really "; 
//secound part of the message \n is a break in the line
        cout << "like to continue this program?" << "\n"; 
        cout << "Type 'y' for yes and 'n' for no \n"; 
//cin your choice "y" or "n"
        cin >> choice;
//if you typed "y", a stays a, counter2 goes up by 1 interger, cout line break Really total count and counter number + 1 
        if (choice == 'y') { a = a; counter2++; cout << "\n" << "Really Total Count " << counter+1 << "\n";
        }
//if you typed in "n" it says have a great day and breaks the program

        else if (choice == 'n'){cout <<"Great your staying!"; break;}
    }
   return 0;
}
