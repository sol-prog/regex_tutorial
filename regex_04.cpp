// Removing leading spaces from every line of a file
#include <iostream>
#include <string>
#include <fstream>
#include <regex>

using namespace std;

int main()
{
    ifstream inp;
    ofstream out;
    regex leading_spaces("[[:space:]]*(.+)");
    string line;
    inp.open("spaces.txt");
    out.open("clear_spaces.txt");
    if(inp.is_open())
    {
        while(inp.good())
        {
            getline(inp,line);
            smatch result;
            regex_search(line,result,leading_spaces);
            if(result[1].str().length()>0)
            {
                out<<result[1].str()<<endl;
            }
        }
    }
    inp.close();
    out.close();
    return(0);
}
