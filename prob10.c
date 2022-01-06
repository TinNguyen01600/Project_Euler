#include <stdio.h>

int prime(int n){
	//Check for cases of 2 and 3
   	if (n <= 1)
      	return 0;
   	if (n <= 3)
      	return 1;
   	// skip checking middle five numbers in the loop
   	if (n % 2 == 0 || n % 3 == 0)
      	return 0;
   	int i = 5;
   	while (i * i <= n){
		if (n % i == 0 || n % (i + 2) == 0)
        	return 0;
    	i = i + 6;
	}
   	return 1;
}

int main(void)
{
    unsigned int i;
    long long int sum = 0;
    for (i = 3; i < 2000000; i+=2){     //start counting prime from 3 to increase step to 2 since no even prime other than 2
        if (prime(i))
            sum += i;
    }
    printf("%lld", sum+2);
}