/*--------------------------------------------------------------------------------*/
//
//			Challange 6
//			Developed by: Franck Cid
//			Challanges from https://projecteuler.net/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <iostream>

float pot(float num, float p){
	for(int i=1; i<p; i++){
		num *= num;
	}
	return num;
}

unsigned long sumsquares(float range1, float range2, float p){
	float res = 0;
	for(int i=range1; i<=range2; i++){
		res += pot(i, p);
	}
	return res;
}

unsigned long squaresums(float range1, float range2, float p){
	float res=0;
	for(int i=range1; i<=range2; i++){
		res += i;
	}
	res = pot(res, p);
	return res;
}

int main(){

	std::cout << squaresums(1, 100, 2) - sumsquares(1, 100, 2) << std::endl;

	return 0;
}