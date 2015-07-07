#include <iostream>

using namespace std;

int main()
{
	int n,c=0,first=0,second=1,next; 
	cout << "Enter n value:" << endl;
	cin >> n; 
	
	do{
	
	if (c <= 1)
	{
		next = c;
	}
	else
	{
		next = first + second;
		first = second; 
		second = next;  	
	
	}
		cout << next <<endl;
		c = c + 1;	
	}
	while(c<n);
	
	
	return 0;
}

