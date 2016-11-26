#include <iostream>

short matrix[20][20] = {
    {8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8},
    {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 4, 56, 62, 0},
    {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65},
    {52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91},
    {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
    {24, 47, 32, 60, 99, 3, 45, 2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
    {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
    {67, 26, 20, 68, 2, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21},
    {24, 55, 58, 5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
    {21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95},
    {78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 4, 62, 16, 14, 9, 53, 56, 92},
    {16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 0, 17, 54, 24, 36, 29, 85, 57},
    {86, 56, 0, 48, 35, 71, 89, 7, 5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
    {19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40},
    {4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
    {88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
    {4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36},
    {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16},
    {20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54},
    {1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48}
};

void draw(short number){
	if(number < 10){
		std::cout << 0;
	}
	std::cout << number;
}

void draw(const char* txt){
	std::cout << txt;
}

int biggest(int nums[]){
	int b = 0;
	short arrsize = sizeof(nums) / sizeof(int);
	for(int i=0; i < arrsize; i++){
		if(nums[i] > b)
			b = nums[i];
	}
	return b;
}

int table(short A, short B){

	short lu[] = {(matrix[A-1][B-1]), (matrix[A-2][B-2]), (matrix[A-3][B-3])};
	short ru[] = {(matrix[A-1][B+1]), (matrix[A-2][B+2]), (matrix[A-3][B+3])};

	short ld[] = {(matrix[A+1][B-1]), (matrix[A+2][B-2]), (matrix[A+3][B-3])};
	short rd[] = {(matrix[A+1][B+1]), (matrix[A+2][B+2]), (matrix[A+3][B+3])};

	short tp[] = {(matrix[A-3][B]), (matrix[A-2][B]), (matrix[A-1][B])};
	short bt[] = {(matrix[A+3][B]), (matrix[A+2][B]), (matrix[A+1][B])};

	short lt[] = {(matrix[A][B-3]), (matrix[A][B-2]), (matrix[A][B-1])};
	short rt[] = {(matrix[A][B+3]), (matrix[A][B+2]), (matrix[A][B+1])};

	short mid = (matrix[A][B]);

	//Sums 
	int sLu = mid * lu[0] * lu[1] * lu[2];
	int sRu = mid * ru[0] * ru[1] * ru[2];

	int sLd = mid * ld[0] * ld[1] * ld[2];
	int sRd = mid * rd[0] * rd[1] * rd[2];

	int sTp = mid * tp[0] * tp[1] * tp[2];
	int sBt = mid * bt[0] * bt[1] * bt[2];

	int sLt = mid * lt[0] * lt[1] * lt[2];
	int sRt = mid * rt[0] * rt[1] * rt[2];

	//Header  ------------------------------------------------------------
	draw("----------------------------\n");
	//Top  ------------------------------------------------------------
	//Left 1
	draw(lu[2]);
	draw("       ");
	draw(tp[0]);
	//Right 1
	draw("       ");
	draw(ru[2]);
	draw("\n");


	//Left 2
	draw("   ");
	draw(lu[1]);
	draw("    ");
	draw(tp[1]);
	//Right 2
	draw("    ");
	draw(ru[1]);
	draw("    \n");


	//Left 3
	draw("      ");
	draw(lu[0]);
	draw(" ");
	draw(tp[2]);
	//Right 3
	draw(" ");
	draw(ru[0]);
	draw("       \n");


	//Left ------------------------------------------------------------
	draw(lt[0]);
	draw(" ");
	draw(lt[1]);
	draw(" ");
	draw(lt[2]);
	draw(" ");

	//Middle ------------------------------------------------------------
	draw(mid);
	draw(" ");

	//Right ------------------------------------------------------------
	draw(rt[2]);
	draw(" ");
	draw(rt[1]);
	draw(" ");
	draw(rt[0]);
	draw("\n");

	//Bottom -----------------------------------------------------------
	
	//Left 1
	draw("      ");
	draw(ld[0]);
	draw(" ");
	draw(bt[2]);
	//Right 1
	draw(" ");
	draw(rd[0]);
	draw("       \n");

	//Left 2
	draw("   ");
	draw(ld[1]);
	draw("    ");
	draw(bt[1]);
	//Right 2
	draw("    ");
	draw(rd[1]);
	draw("    \n");

	//Left 2
	draw(ld[2]);
	draw("       ");
	draw(bt[0]);
	//Right 3
	draw("       ");
	draw(rd[2]);
	draw("\n");

	//Footer  ------------------------------------------------------------
	draw("---------------------------- Product(If it's big): ");

	int sums[8] = {sLu, sRu, sLd, sRd, sTp, sBt, sLt, sRt};

	int big = biggest(sums);

	return (big);
}

int main(){

	unsigned long biggest = 0;

	for(int y=0; y<20; y++){
		for(int x=0; x<20; x++){
			int sums = table(y, x);
			if(sums > biggest){
				biggest = sums;
			}

		}
	}


	std::cout << biggest << std::endl;

	return 0;
}