#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

// return the number of characters in the string
string::size_type strlength(const string& s)
{
    return s.size();
}

int main ()
{
    string s = "Hello World";
    cout << strlength(s) << endl;
    
    return 0;
}

