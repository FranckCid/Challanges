#include <iostream>
#include <math.h>

int isPrime(int num){

	if(num<=0){
		return 0;
	}

	if(num==2)
		return num;

	for(int i=3; i<=sqrt(num); i+=2){
		if(num%i==0)
			return 0;
	}
	return num;
}

int main(){

	unsigned long long res = 2;
	for(int i=3; i <= 2000 * 1000; i+=2){
		res += isPrime(i);
	}

	std::cout << res << std::endl;

	return 0;
}