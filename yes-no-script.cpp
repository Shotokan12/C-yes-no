#include <iostream>
using namespace std;
char choice;
int a = 0;
int counter = 0;
int counter2 = 0;
int main () {
     while ( a < 1 ){
        cout << "Would you "; 
        for (counter = 0 ; counter < counter2 ; counter++) cout << "really "; 
        cout << "like to continue this program?" << "\n"; 
        cin >> choice;
        if (choice == 'y') { a = a; counter2++; cout << "\n" << "Really Total Count " << counter+1 << "\n";
        }
        else if (choice == 'n'){cout <<"Great your staying!"; break;}
    }
   return 0;
}
