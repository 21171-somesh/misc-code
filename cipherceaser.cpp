// A C++ program to illustrate Caesar Cipher Technique
// Reference from GeeksForGeeks

#include <iostream>
using namespace std;

string encrypter(string text, int s)
{
    string result = "";
    for (int i=0;i<text.length();i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
     else
        result += char(int(text[i]+s-97)%26 +97);
    }
 
    return result;
}
 

int main()
{
    string text;
	cout<<"Enter String\n";
	cin>>text;
    int s = 32;
	cout<<"Default shifts 32 , enter another if desired:\n";
	cin>>s;
    cout << "\nThe Text : " << text;
    cout << "\nThe Shift: " << s;
    cout << "\nAfter Cipher Encryption: " << encrypter(text, s);
    return 0;
}