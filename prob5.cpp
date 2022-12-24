#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

//the idea is like finding least common multiple of 2 numbers
// In this case we find the LCM of 20 numbers.

// 1. we factorize all 20 numbers into primes with index and exponent.
// 2. Select all primes and their highest exponent.
// 3. Multiple all of them together.

class prime_factor{
    public: int index, exponent;
};

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

prime_factor *factorize(int n)  //this function divides a number n into prime factors
{
    prime_factor *a;
    a = new prime_factor[5];
    int count = -1;
    for(int i = 2; i <= n; i++){
        if (!prime(i))  continue;
        if (n%i != 0)   continue;

        count++;
        (*(a + count)).exponent = 0;
        (*(a + count)).index = i;
        while(n%i == 0){
            n/=i;
            (*(a + count)).exponent ++;
        }
    }
    return a;
}

int main(void){
    prime_factor *a;  //this array store the prime factors of EACH number from 1-20.
                        //this array's length is 2
    for (int i = 0; i<20; i++){
        a = factorize(i+1);
        int t = 2;
        if (prime(i+1))     t = 1;
        cout << i+1 << " = ";
        for (int j = 0; j<t; j++){
            cout << (*(a+j)).index << "^";
            cout << (*(a+j)).exponent << " ";
        }
        cout << endl;  
    }
}