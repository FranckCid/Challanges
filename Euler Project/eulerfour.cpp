/*--------------------------------------------------------------------------------*/
//
//			Challange 4
//			Developed by: Franck Cid
//			Challanges from https://projecteuler.net/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <iostream>
#include <string>

bool isPalindrome(int num){
	std::string aux = std::to_string(num);
	int j = aux.length();
	for(int i=0; i<aux.length(); i++){
		if(aux[i] != aux[--j]){
			//std::cout << i/j << std::endl;
			return false;
		}
	}	
	return true;
}

int main(){

	int last = 0;

	for(int i=0; i<1000; i++){
		for(int j=0; j<1000; j++){
			//std::cout << (isPalindrome(i*j) ? "YES " : "NO ") << j*i << std::endl;
			if(isPalindrome(i*j)){
				if(i*j > last){
					last = i*j;
					std::cout << "YES " << i*j << std::endl;
				}
			}
		}
	}


	return 0;
}