#include<iostream>
using namespace std;
class temperature{
	public:
		float celsius;
		float convert(){
			return (celsius*9/5)+32;
			
		}
	void display(){
		cout<<"Temperature in Fahrenheit:"<<convert()<<endl;
	}	
};
int main(){
	temperature t;
	cout<<"Enter Temperature in Celsius :";
	cin>>t.celsius;
	t.display();
	
}

