/*--------------------------------------------------------------------------------*/
//
//			Challange 2
//			Developed by: Franck Cid
//			Challanges from https://projecteuler.net/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <iostream>

int main(){

	int last = 1;
	int actual = 1;
	int next = 0;
	int sum = 0;

	for(;next<4*1000*1000;){
		next = actual + last;
		std::cout << "A: " << actual << " " << "L: " << last << " " << "N: " << next << "\n";
		last = actual;
		if(actual%2==0){
			sum += actual;
		}
		actual = next;
	}
	std::cout << sum << std::endl;

	return 0;
}