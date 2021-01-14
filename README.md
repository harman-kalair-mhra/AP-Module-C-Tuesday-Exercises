# AP-Module-C-Tuesday-Exercises

This repository includes challenges presented on Tuesday. C++ is the chosen langauge for this 'Advance Programming' Module. Replit link has been provided on each file.

## 1: Reverse Word
This C++ program reverses a user entered word. The program prompt the user for a single word. Once entered, the program displays the word in reverse.

Example format shown below:
```
Please enter a word: Programming
Programming spelt backwards is: gnimmargorP
```

## 2: Lower Case Converter
This C++ program converts a user entered word to lower case. The program prompt the user for a single word. Once entered, the program displays the message below and shows the word in lower case.

Example format shown below:
```
Please enter a word: MaDaM
MaDaM converted to lower case is: madam
```
## 3: Palindrome Checker
In-progress

## PRIMER: Password Validator
This C++ program validates user login credentials. The program prompt the user for a username and password and compare them against already known credentials. If the username provided exists and the password matches the program displays “Welcome” followed by the users first name. If the username does not exist or the password is incorrect a “Failed to Authenticate” message is shown.

Example format shown below:
```
Username: mike@ada.ac
Password: AdaRocks
Welcome Mike
--OR--
Username: casper@ada.ac
Password: AdaRocks
Failed to Authenticate
```

## PRIMER: Password Complexity Checker
This C++ program determines the complexity of password based on the following rules:

* Weak (value: 1) – only numeric or only alphabetic characters
* Moderate (value: 2) – at least 4 characters and is not ‘Weak’, ‘Strong’ or ‘Very Strong’
* Strong (value: 3) – at least 8 characters; including at least 2 numeric and at least 4 alphabetic
* Very Strong (value: 4) – at least 8 characters; including at least 2 numeric, at least 4 alphabetic and 1 special

Example format shown below:
```
The password ‘12345678’ is Weak
The password ‘AB235’ is Moderate
The password ‘Password2021’ is Strong
The password ‘Password2021!’ is Very Strong
```
