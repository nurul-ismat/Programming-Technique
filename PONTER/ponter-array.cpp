
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int *new_number(int num)
{
    srand(time(0));
    int *arra;
    if(num<=0)
        return NULL;
    else
        arra=new int[num];

    for(int i=0; i<num; i++)
    {
        arra[i]=10+rand()%100;
    }
    return arra;




}
int main()
{
    int num;
    cout<<"enter array size: ";
    cin>>num;
    int *narray;
    narray=new_number(num);

    cout<<"random values are:"<<endl<<endl;
    for(int i=0; i<num; i++)
        cout<<narray[i]<<endl;




    return 0;
}




