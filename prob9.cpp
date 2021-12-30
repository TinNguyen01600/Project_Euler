#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int a,b,c;
    for (a = 1; a<500; a++){
        for (b = a; b<500; b++){
            for (c = b; c<500; c++){
                if(a*a + b*b - c*c == 0 && a+b+c == 1000){
                    cout << a << " " << b << " " << c << endl;
                    cout << a*b*c;
                }
            }
        }
    }
}