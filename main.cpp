#include <iostream>
#include <fstream>
using namespace std;

int main(){
	// locating the compiled filed
	ofstream file("/home/mohamed/Desktop/test.cpp");
	if(!file){
		cout << "Error ! failed to open file\n";
		return 1;
	}/*else{
		cout << "jawk behi" << endl;
	}*/ 






	file.close();
	return 0;
}
