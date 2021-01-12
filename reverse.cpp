// https://repl.it/join/yzyehhnl-harmankalair123

// broke down the problem and started with pre-entered values.
// used a for loop to swap the first character with last and 2nd one with the 2nd last and // so on.
// created a simple prompt in the main and passed the reverse function inside the main also.
// splitting the main seemed ideal as, it becomes easier to debug.

#include <iostream>
#include <string>
using namespace std;


// Function to reverse a string 
 void reverse(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
  
// Driver program 
int main() 
{ 
    string str; 
    cout << "Please enter a word: ";
    cin >> str;
    
    reverse(str); 
    cout << "Programming spelt backwards is: " << str; 
    return 0; 
} 
