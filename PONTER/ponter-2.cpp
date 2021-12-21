//swap num
#include<iostream>
using namespace std;
void swa_p(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;//we can print here
}
int main()
{

    int a,b;
    cin>>a>>b;
    swa_p(&a,&b);

    cout<<a<<"  "<<b;//here also we can print


    return 0;
}