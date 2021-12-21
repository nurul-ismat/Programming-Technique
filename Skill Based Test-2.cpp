#include<iostream>
#include<string>
using namespace std;
int totall=0;
int hello(string s)
{
    int c=0;
    for(int i=0; i<s.length(); i++)
        if( tolower(s[i])=='a'|| tolower(s[i])=='e'|| tolower(s[i])=='i'|| tolower(s[i])=='o'|| tolower(s[i])=='u')
        {
            c++;
            totall++;
        }

    return c;
}
int main()
{
    int m=1;
    string s,t,*a=&s,*b=&t;
    cout<<"****** term :"<<m <<" ******" <<endl;
    cout<<"Enter a string: ";

    while(cin>>s&& s!="E")
    {
        cout<<"Totall vowel is "<<hello(*a)<<endl<<endl;
        cout<<"Enter a string: ";
        cin>>t;
        cout<<"Totall consonent is "<<(t.length()-hello(*b))<<endl<<endl;
        cout<<"Totall vowels and consonent is  "<<hello(*a)+(t.length()-hello(*b))<<endl<<endl;
        m++;
        cout<<"****** term :"<<m <<" ******" <<endl;
        cout<<"Enter a string: ";
    }

	return 0;
}

