#include <iostream>

int evenly(int num, int div){
	if(num % div != 0){
		return false;
	}
	return true;
}

int main(){

	for(int i=1; i<2000001000; i++){
		for(int j=1; j<21; j++){
			if(!evenly(i, j)){
				//std::cout << "FALSE " << i << ":" << j << std::endl;
				break;
			}
			if(j>=19){
				std::cout << "TRUE " << i << ":" << j << std::endl;
			}
			//std::cout << (evenly(i, j) ? "UES" : "MO") << std::endl;
		}
	}

	return 0;
}