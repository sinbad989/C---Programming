#include "TemplateQueue.h"
#include <iostream>
#include <vector>

//Use the following main to test your code

int main()

	
{
	
	IntQueue<double> doubleQueue;

	doubleQueue.add(3.14);
	doubleQueue.add(10.675);
	doubleQueue.add(100.678);

	doubleQueue.print();

	doubleQueue.remove();

	doubleQueue.print();
}
