// Sum of Even Fibonacci numbers
// whose values do not exceed four million

#include<iostream>


using namespace std;

int main()
{
	int count = 0, prime_number=0, i=2 ;
	while (count < 10001) {
	bool prime = true;
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime){ 
			prime_number = i;
			count++;
		}
		i++;
	}
	cout << prime_number;
	
	system("pause");

	return 0;
}
