/*--------------------------------------------------------------------------------*/
//
//			Challange 3
//			Developed by: Franck Cid
//			Challanges from https://projecteuler.net/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <iostream>
#include <math.h>

bool isPrime(unsigned long num){
	for(unsigned long i=2; i<=(int)sqrt(num); i+=2){
		if(num%i==0){
			return false;
		}
		if(i==2)
			i--;
	}
	return true;
}

void lastFractor(unsigned long num){
	std::cout << num << " " << (int)isPrime(num/2) << "\n";
	
	for(unsigned long i=2; i<=num;i+=2){
		if(isPrime(i) && num%i==0){
			std::cout << i << " " << num << std::endl;
			num /= i;
		}else if(i==2){
			i--;
		}
	}
}

int main(){

	lastFractor(600851475143);

	return 0;
}