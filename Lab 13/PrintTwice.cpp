# include <iostream>
# include <string>
using namespace std;

template <typename T>
void printTwice(T val){
	cout << val << endl;
	cout << val << endl;
}

int main(){
	cout << "---Print Twice---" << endl;
	printTwice(103);
	printTwice(3.124);
	printTwice(string("Hello"));
	
	return 0;
}
