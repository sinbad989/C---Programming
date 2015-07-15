#include <iostream>

using namespace std;


class Example{
	public:
		int total;
		void accumulate(int x){
			total +=x;
		}
};

class Example2{
	public:
		int total;
		Example2 (int intial_value): total(initial_value){};
		void accumulate(int x) {
			total +=x;
		};
};

int main(){
	
	Example ex;

	cout <<"\n";
	return 0;
}
