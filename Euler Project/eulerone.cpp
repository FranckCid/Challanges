/*--------------------------------------------------------------------------------*/
//
//			Challange 1
//			Developed by: Franck Cid
//			Challanges from https://projecteuler.net/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <iostream>

int main(){
	
	int sum;
	for(int i=0; i<1000; i++){
		if(i%3==0 || i%5==0){				// Se i for divisível por 3 ou 5
			std::cout << i << std::endl;	// Imprima-o.
			sum += i;						// Soma o atual número ao total anterior.
		}
	}

	std::cout << sum << std::endl;			// Imprime a soma de todos os números divisíveis por 3 ou 5.

	return 0;
}