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
    int count = 2;
    unsigned int i, arr[15000];
    
    for (i = 3; i < 150000; i+=2){
        if(prime(i)){
            arr[count] = i;
            count++;
        }
    }
    printf("%u", arr[10001]);
}