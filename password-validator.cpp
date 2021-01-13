// https://repl.it/join/jmkjyrxr-harmankalair123

// decomposed the problem and began some research on structure in C++
// created a simple structure, containing name, username and password
// declared variables and added values in {} for the matching structure.
// decided to use if/else statements to check the user input against the structure.

#include <iostream>
using namespace std;

struct User {
  string name;
  string username;
  string password;
};


int main ()
{
    string userName;
    string userPassword;
    User mike = {"Mike","mike@ada.ac.uk", "AdaRocks" };
    User kalair = {"Kalair","kalair@ada.ac.uk", "AdaRocks" };
    
  
        cout << "Username: ";
        cin >> userName;
        cout << "Password: ";
        cin >> userPassword;

        if (userName == mike.username && userPassword == mike.password)
        {
            cout << "Welcome " << mike.name << "!\n";
      
        }
        else if (userName == kalair.username && userPassword == kalair.password)
        {
            cout << "Welcome " << kalair.name << "!\n";
        
        }
        else
        {
            cout << "Failed to Authenticate.\n" << '\n';
        }
        return 0;
    }
