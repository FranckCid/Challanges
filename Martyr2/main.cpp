/*--------------------------------------------------------------------------------*/
//
//			Challanges from 1 to 5
//			Developed by: Franck Cid
//			Challanges from http://www.dreamincode.net/forums/topic/78802-
//			martyr2s-mega-project-ideas-list/
//			and
//			https://www.reddit.com/r/learnprogramming/comments/2a9ygh/
//			1000_beginner_programming_projects_xpost/
//
/*--------------------------------------------------------------------------------*/
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::string classStringReverse(std::string str);
std::string pigLatin(std::string str);
int vowel(std::string str);
bool palindrome(std::string str, bool ignoreSpace=true);
std::vector<std::string> explode(std::string str, const char c);
int countWords(std::string str);
int countWordsFromFile(std::string path);

int main(int argc, char* args[]){

	std::cout << countWordsFromFile(args[1]) << std::endl;

	return 0;
}

//Reverse string IDEA:::::: TRY TO CREATE THE SAME FUNCTION USING C STRING
std::string classStringReverse(std::string str){
	std::string nStr;
	for(int i=str.length(); i>=0; i--){
		nStr += str[i];
	}
	return nStr;
}

std::string pigLatin(std::string str){
	std::string nStr;

	for(int i=1; i<str.length(); i++){
		nStr += str[i];
	}
	nStr += str[0];
	nStr += "-ay";

	return nStr;
}

int vowel(std::string str){
	int qnt=0;
	for(int i=0; i<str.length(); i++){
		switch(str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				qnt++;
				break;
			default:
				break;
		}
	}
	return  qnt;
}

//IDEA :::::: MAKE IGNORE SPACE WORKS
bool palindrome(std::string str, bool ignoreSpace){
	int j=str.length();
	for(int i=0; i<str.length(); i++){
		if(str[i] != str[--j]){
			return false;
		}
	}
	return true;
}

std::vector<std::string> explode(std::string str, const char c){
	std::string buff("");
	std::vector<std::string> v;
	for(char n : str){
		if(n!=c){
			buff += n;
		}else if(n == c && buff != ""){
			v.push_back(buff);
			buff = "";
		}
	}
	if(buff != ""){
		v.push_back(buff);
	}
	return v;
}

int countWords(std::string str){
	std::vector<std::string> v = explode(str, ' ');
	return v.size();
}

int countWordsFromFile(std::string path){
	std::string str, line;
	std::ifstream file;
	file.open(path);
	while(std::getline(file, line)){
		str += line;
	}
	return countWords(str);
}