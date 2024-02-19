#include <iostream>
using namespace std;

main() {
	//	Tastk 1
	//	int n, sum = 0, i = 1;
	//	cout << "Enter the number to find the sum to n terms: ";
	//	cin >> n;
	//	while (i <= n) {
	//		sum = sum + i;
	//		i = i + 1;
	//	};
	//	cout << "The sum of " << n << " is " << sum;
	
	
	
	// Task 2 (reverse method)
	
	//	int n, sum = 0, i;
	//	cout << "Enter the number to find the sum to n terms: ";
	//	cin >> n;
	//	i = n;
	//	while (i > 0) {
	//		sum = sum + i;
	//		i = i - 1;
	//	};
	//	cout << "The sum of " << n << " is " << sum;
	
	// Task 3
	
	//	int n, i, sum = 0, endNum, startNum;
	//	cout << "Enter the number to find the sum to n terms: ";
	//	cin >> n;
	//	cout << "Enter the starting number: ";
	//	cin >> i;
	//	startNum = i;
	//	endNum = n + i;
	//	while (i < endNum) {
	//		sum = sum + i;
	//		i = i + 1;		
	//	};
	//	cout << "The sum of " << startNum << " to " << n << " terms is " << sum;	
	

	// Task 4
	
	//	int n, i, sum = 0;
	//	
	//	cout << "Enter the number to find the sum to n terms: ";
	//	cin >> n;
	//	cout << "Enter the starting number: ";
	//	cin >> i;
	//	n = n + i;
	//	while (i < n) {
	//		sum = sum + i;
	//		i += 1;
	//	}
	//	cout << "The sum is " << sum;
	
	
	// Task 5
	
	//	int n, i, sum = 0;
	//	cout << "Enter the number to find the sum to n terms: ";
	//	cin >> n;
	//	cout << "Enter the starting number: ";
	//	cin >> i;
	//	while (n > 0) {
	//		sum += i;
	//		i += 1;
	//		n -= 1;
	//	};
	//	cout << "The sum is " << sum;
	
	// Task 6
	
	//	char inpVar;
	//	cout << "Enter a single Character:";
	//	cin >> inpVar;
	//	cout << "\nYou Entered " << inpVar;
	//	while (inpVar != 'A') {
	//		cout << "\nEnter a single Character:";
	//		cin >> inpVar;
	//		cout << "\nYou Entered " << inpVar;
	//	};
	//	
	//	cout << "\nYou entered " << inpVar << " to exit the program.";
	
	
	
	
	// Task 7
	
//	char inpVar;
//	cout << "\nEnter a single Character:";
//	cin >> inpVar;
//	cout << "\nYou ASCII code of " << inpVar << " is " << int(inpVar);
//	while (int(inpVar) != 45) {
//		cout << "\nEnter a single Character:";
//		cin >> inpVar;
//		cout << "\nYou ASCII code of " << inpVar << " is " << int(inpVar);
//	};
//			
//	cout << "\nYou entered -1 to exit the program.";


	// Task 8
	
//	char inpVar, contOrNot;
//	cout << "\nEnter a single character to find whether it is vowel or constant: ";
//	cin >> inpVar;
//	
//	
//	if (inpVar == 'a' || inpVar == 'e' || inpVar == 'i' || inpVar == '0' || 
//	inpVar == 'u' || inpVar == 'A' || inpVar == 'E' || inpVar == 'I' || inpVar == 'O'
//	|| inpVar == 'U'
//	) 
//	{
//		cout << "\n" << inpVar << " is a vowel.";
//	} 
//	else 
//	{
//		cout << "\n" << inpVar << " is a consonant.";
//	}
//	
//	cout << "\nDo you want to continue? (y/Y)";
//	cin >> contOrNot;
//	
//	while (contOrNot == 'Y' || contOrNot == 'y') {
//		cout << "\nEnter a single character to find whether it is vowel or constant: ";
//		cin >> inpVar;
//	
//		if (inpVar == 'a' || inpVar == 'e' || inpVar == 'i' || inpVar == '0' || 
//		inpVar == 'u' || inpVar == 'A' || inpVar == 'E' || inpVar == 'I' || inpVar == 'O'
//		|| inpVar == 'U'
//		) 
//		{
//			cout << "\n" << inpVar << " is a vowel.";
//		} 
//		else {
//			cout << "\n" << inpVar << " is a consonant.";
//		}
//		
//		cout << "\nDo you want to continue? (y/Y)";
//		cin >> contOrNot;		
//	}
//	cout << "\nProgram exits.";
	
	
	// Task 9 (sum of first n odd numbers)
	
//	int n, sum = 0, i = 1, j = 1;
//	cout << "Enter a number to find sum to that odd number: ";
//	cin >> n;
//	while (j <= n) 
//	{
//		sum = sum + i;
//		i = i + 2;
//		j = j + 1;
//	};
//	
//	cout << "Sum = " << sum;
	
	// Task 10 (table of any n number)
	
//	int n, i = 1, res;
//	cout << "Enter a number to show its table to 10: ";
//	cin >> n;
//	while (i <= 10) 
//	{
//		res = n * i;
//		cout <<"\n" << n << " x " << i << " = " << res;
//		i = i + 1;
//	}
	
	// Task 11
	
//	int n, fact = 1, nCopy, i = 1;
//	cout << "Enter a number to find its factorial: ";
//	cin >> n;
//	nCopy = n;
//	
//	while (i <= n) 
//	{
//		fact = fact * i;
//		i = i + 1;	
//	};
//	
//	cout << "The factorial is " << fact;
	
	
	
	// Task 12
	
//	int n, fact = 1, nCopy, i = 1;
//	cout << "Enter a number to find its factorial: ";
//	cin >> n;
//	nCopy = n;
//	
//	while (n > 0) 
//	{
//		fact = fact * n;
//		n -= 1;
//	};
//	
//	cout << "The factorial of " << nCopy << " is " << fact;
	
	// Task 13
	
//	int n, m, i = 1, res = 1;
//	
//	cout << "Enter the values to find n power to m: ";
//	cout << "\nEnter the value of n: ";
//	cin >> n;
//	cout << "\nEnter the value of m: ";
//	cin >> m;
//	
//	while (i <= m) 
//	{
//		res = res * n;
//		i += 1;
//	};
//	
//	cout << n << " raise to power " << m << " is " << res;
	
	
	// Task 14
	
	char inpVar, contOrNot;
	
	cout << "Enter a character to change its case: ";
	cin >> inpVar;
	
	if (inpVar >= 'A' && inpVar <= 'Z') 
	{
		cout << "\nThe previous case: " << inpVar;
		
		cout << "\nThe current case: " << char(inpVar + 32);
	}
	else if (inpVar >= 'a' && inpVar <= 'z')
	{
		cout << "\nThe previous case: " << inpVar;
		
		cout << "\nThe current case: " << char(inpVar - 32);
	} 
	else {
		cout << "\nThe character: " << inpVar;
	}
	
	cout << "\nDo you want to continue? (y/Y)";
	cin >> contOrNot;
	
	while (contOrNot == 'Y' || contOrNot == 'y') 
	{
		
		cout << "Enter a character to change its case: ";
		cin >> inpVar;
		
		if (inpVar >= 'A' && inpVar <= 'Z') 
		{
			cout << "\nThe previous case: " << inpVar;
			
			cout << "\nThe current case: " << char(inpVar + 32);
		}
		else if (inpVar >= 'a' && inpVar <= 'z')
		{
			cout << "\nThe previous case: " << inpVar;
			
			cout << "\nThe current case: " << char(inpVar - 32);
		} 
		else 
		{
			cout << "\nThe character: " << inpVar;
		}
		
		cout << "\nDo you want to continue? (y/Y)";
		cin >> contOrNot;
	};
	
	cout << "Program exits...";
	
	
	
	
	
	
	
	
	
	
	
}
