#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int sum = 0;
    for(unsigned int i = 0; i < n.length(); i++)
        sum += (n[i] - '0');
    string num = to_string(sum);
    for(unsigned int i = 0; i < num.length(); i++)
    {
        if(i != 0) cout<<" ";
        cout << str[num[i] - '0'];
    }
    return 0;
}
