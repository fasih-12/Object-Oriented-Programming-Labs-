# include <iostream>
using namespace std;

class Locker
{
	public:
		Locker(){
			cout << "Locker Allocated to Customer. " << endl;
		}
		
		~Locker() {
			cout << "Locker Returned by Customer." << endl;
		}
};
int main (){
	
{	Locker l1;
}
	
	Locker* l2 = new Locker();
	delete l2;
	return 0;
}
