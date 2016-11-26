/*--------------------------------------------------------------------------------*/
//
//			Challange 7
//			Developed by: Franck Cid
//			Challanges from https://projecteuler.net/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <iostream>

bool isPrime(unsigned long num){
	for(unsigned int i=2; i<num/2; i+=2){
		if(num%i==0){
			return false;
		}else if(i==2){
			i--;
		}
	}
	return true;
}

int main(){

	unsigned long index = 1;
	int primes = 0;

	while(true){
		index++;
		if(isPrime(index)){
			primes++;
			std::cout << primes-1 << "º = " << index << std::endl;
		}
		if(primes > 13){
			break;
		}
	}

	return 0;
}