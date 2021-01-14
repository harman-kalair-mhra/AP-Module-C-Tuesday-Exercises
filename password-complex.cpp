// https://repl.it/join/ashtpyde-harmankalair123

// conducted some research and used online resources on stack-overflow
// began with declaring variables as booleans and set it to false.
// used for loop to check the number charcaters and set it to true once, it has reached 
// it's limit.
// simple if and else statments to check the strength.
// prompt from user called in main, as it was recomended from the resources.

#include <iostream> 
using namespace std; 

void printStrongNess(string& input) 
{ 
	int n = input.length(); 

	// Checking lower alphabet in string 
	bool hasLower = false, hasUpper = false; 
	bool hasDigit = false, specialChar = false; 
	string normalChars = "abcdefghijklmnopqrstu"
		"vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "; 

	for (int i = 0; i < n; i++) { 
		if (islower(input[i])) 
			hasLower = true; 
		if (isupper(input[i])) 
			hasUpper = true; 
		if (isdigit(input[i])) 
			hasDigit = true; 

		size_t special = input.find_first_not_of(normalChars); 
		if (special != string::npos) 
			specialChar = true; 
	} 

	// Strength of password 
	cout << "Strength of password:-"; 
	if (hasLower && hasUpper && hasDigit && 
		specialChar && (n >= 8)) 
		cout << "The password " << "'" << input << "'" << " is Strong" << endl; 
  else if ((hasLower && hasUpper && hasDigit && specialChar && 
			 (n >= 8)))
		cout <<"The password " << "'" << input << "'" <<  " is Very Strong" << endl; 
	else if ((hasLower || hasUpper) && 
			specialChar && (n >= 4)) 
		cout <<"The password " << "'" << input << "'" <<  " is Moderate" << endl; 
	else
		cout << "The password " << "'" << input << "'" << " is Weak" << endl; 
} 

int main() 
{ 
	string input;

  cout << "Enter Password: ";
  cin >> input; 
	printStrongNess(input); 
	return 0; 
}
