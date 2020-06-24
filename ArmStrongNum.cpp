#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

bool ArmstrongNum(int n){
    #TODO
}

int main(int arg, char** argv){
    ifstream ifs;
	ifs.open(argv[1]);
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