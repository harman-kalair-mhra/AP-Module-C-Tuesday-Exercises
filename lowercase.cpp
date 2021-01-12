// https://repl.it/join/yexlsipu-harmankalair123

// decomposed the problem and began with a simple prompt implementation.
// after some research decided to use the built in function known as transform.
// transform applies an operation sequentially to the elements of one (1) or two (2) 
// ranges and stores the result in the range that begins at result.



#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// sl is the string which is converted to lowercase 
		string strlower; 
    cout << "Please enter a word: ";
    cin >> strlower;

	// using transform() function and ::tolower
	transform(strlower.begin(), strlower.end(), strlower.begin(), ::tolower); 
	cout << strlower << " converted to lower case is: " << strlower << endl; 

	return 0; 
} 
