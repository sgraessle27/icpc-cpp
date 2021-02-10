#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n, testCases;
	cin >> testCases;

	for (int i = 0; i < testCases; i++)
	{
		cin >> n;
		if (n % 2 == 0)
			cout << n << " is even\n";
		else
			cout << n << " is odd\n";
	}

	//system("pause");
	return 0;
}
