#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

bool ArmstrongNum(int n){
    int sum = 0;
    int temp = n;
    int num_digit = (int)log10(n) + 1; // total numbers of all digit
    int digit;
    while (temp > 0){
        digit = temp % 10; // take the last digit out
        sum += pow(digit, num_digit);
        temp /= 10;
    }
    if (sum == n) return true;
    else return false;
}

int main(int arg, char** argv){
    ifstream ifs;
	ifs.open("testcase.txt");
	int N;
	try
	{
		ifs >> N;
        printf("%s\n", ArmstrongNum(N)?"true":"false");
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}
