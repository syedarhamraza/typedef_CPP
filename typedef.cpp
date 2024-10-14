#include<iostream>
using namespace std;

//define a  any datatype like string here a new name
typedef string firstname;
typedef string lastname;
typedef string fullname;

int main() {

firstname myfirstname = "Syed Arham";
lastname mylastname = " Raza";
fullname myfullname = myfirstname + mylastname;

cout << "My full name is: " << myfullname << endl;

return 0;
}