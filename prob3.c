#include<stdio.h>
#include<math.h>

int prime(long long int n,long long int i){
	if(i==1) return 1;
	else{
	   if(n%i==0) return 0;
	   else return prime(n,i-1);
	}
}

int main(void){
    long long int n = 600851475143, i, k;
    long long factor[100];
    int count  = 0;
    //Get the first half of the total factors
    //This will save 1/2 the time to calculate all factors
    for (i = 1; i < sqrt(n); i++){
        if (n % i == 0){
            factor[count] = i;
            count++;
        }
    }

    //get the second half of factors by dividing n by the first half
    int half_count = count;
    for (i = 0; i < half_count; i++){
        factor[count] = n / factor[i];
        count++;
    }

    //re-arrange the factors into descending order
    for (i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
		   if(factor[i]<factor[j]){
			   k=factor[i];
			   factor[i]=factor[j];
			   factor[j]=k;
		    }
		}
	}

    for (i = 1; i< count; i++){
        printf("%lld ", factor[i]);
    }
}