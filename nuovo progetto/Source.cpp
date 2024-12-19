#include<iostream>
#include<stack>
#include <cstdlib>  // For srand() and rand()
#include <ctime> 
using namespace std;

int generateRandomNumbers(int min, int max) {
        int randomNumber = min + (std::rand() % (max - min + 1));
		return randomNumber;
}



int main()
{
	//stack
	stack<int> primostack;

	int a = 5;

	primostack.push(a);
	primostack.pop();

	for (int i = 0; i < 10; i++)
	{
		primostack.push(generateRandomNumbers(5, 100));
	}

	int contenitore;

	int sizestack = primostack.size();

	for (; !primostack.empty();)
	{
		contenitore = primostack.top();
		primostack.pop();
		cout << contenitore << endl;
	}






}