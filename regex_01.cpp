// Example 1 - integer test 
// see www.solarianprogrammer.com "C++11 regex tutorial" for more informations
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string input;
	regex integer("(\\+|-)?[[:digit:]]+");
	//As long as the input is correct ask for another number
	while(true)
	{
		cout<<"Give me a number!"<<endl;
		cin>>input;
		//Exit when the user inputs q
		if(input=="q")
			break;
		if(regex_match(input,integer))
			cout<<"integer"<<endl;
		else
		{
			cout<<"Invalid input"<<endl;
		}
	}
}
