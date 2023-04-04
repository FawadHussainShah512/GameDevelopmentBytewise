#include <iostream>
using namespace std;
void greet(){
 cout<<"*************welcome user******************"<<endl;
}
int main() {
 int choice;
 int i=1;
 
 do {
 cout<<"please choose from the menu"<<endl;
 cout << "Please choose an option:\n";
 cout << "1. Print greeting message!'\n";
 cout << "2. Print the numbers 1-5\n";
 cout << "3. Print the even numbers from 2 to 10\n";
 cout << "4. Exit the program\n";
 cout << "Your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 greet();
 break;
 case 2:
 
 while (i <= 5) {
 cout << i << endl;
 i++;
 }
 break;
 case 3:
 for (int j = 2; j <= 10; j += 2) {
 cout << j << endl;
 }
 break;
 case 4:
 cout << "Exiting program...\n";
 break;
 default:
 cout << "Invalid choice. Please try again.\n";
 continue;
 }
 } while (choice != 4);
 return 0;
}
