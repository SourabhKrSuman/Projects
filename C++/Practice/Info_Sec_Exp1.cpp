#include <iostream>
using namespace std;

string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
            if (isupper(text[i]))
                result += char(int(text[i] + s - 65) % 26 + 'A');
            else
                result += char(int(text[i] + s - 97) % 26 + 'a');
    }
    return result;
}

string decrypt(string text,int s)
{
	string result="";
	for(int i=0;i<text.length();i++)
	{
		if(isupper(text[i]))
			result+=char(int(text[i]+s-65)%26 +65);
	else
		result+=char(int(text[i]+s-97)%26 +97);
	}
	return result;
}


int main()
{
    string text,s1;
    cout << "Enter plain text: ";
    getline(cin, text);
    int s = 4;
    cout << "Text : " << text << endl;
    cout << "Shift: " << s << endl;
    cout << "Cipher: " << encrypt(text, s)<<endl<<endl;
    cout<<"Enter cipher text: ";
    getline(cin,s1);
    cout << "Text : " << s1 << endl;
    cout << "Shift: " << s << endl;
    cout << "Decrypted message: " << encrypt(s1, 26-s);

    return 0;
}