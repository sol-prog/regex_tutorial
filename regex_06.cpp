#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    //This should match any real number
    regex number("((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?((e|E)((\\+|-)?)[[:digit:]]+)?");
    //This should match any word
    regex word("[[:alpha:]]+");
    string input,clean_words,clean_numbers;
    //Replace with an empty string
    const string format="";
    getline(cin,input);
    //Split the input string in numbers and words
    clean_numbers=regex_replace(input,number,format,regex_constants::format_default);
    clean_words=regex_replace(input,word,format,regex_constants::format_default);
    //Print the results
    cout<<clean_words<<endl;
    cout<<clean_numbers<<endl;
    return(0);
}

