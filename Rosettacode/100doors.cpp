#include <iostream>
#include <vector>
int main(){

	bool doors[] = {false};

	for(int j=1; j<=100; j++){
		for(int i=1; i<=100; i++){
			if((j%i)==0){
				doors[i] = !(doors[i]);
			}
			//std::cout << i%j << std::endl;
		}
	}

	std::cout << "[";
	for(int i=1; i<=100; i++){
		if((i-1)%10==0){
			std::cout << std::endl;
		}
		std::cout << (doors[i] ? "1" : "0");
	}
	std::cout << std::endl << "]" << std::endl;

	return 0;
}