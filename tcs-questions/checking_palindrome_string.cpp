#include <iostream>
#include <string>
using namespace std;

bool check_palindrome(string st)
{
    int l = 0;
    int r = st.length() - 1;
    while (l <= r)
    {
        if (st.at(l) != st.at(r))
            return 0;
        else
        {
            l++;
            r--;
        }
        
    }
    return 1;
}

int main(){
    string s ="abbbba";
    bool result= check_palindrome(s);
    cout<<result<<endl;
    return 0;
}