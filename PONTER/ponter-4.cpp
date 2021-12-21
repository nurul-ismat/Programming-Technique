//pay rate for employee

#include<iostream>
using namespace std;
void rates(const double *a,int sige)
{

    for(int i=0; i<sige; i++)
    {
        cout<<"pay rate for employee "<<i+1<<" is $ "<<a[i]<<endl;

         //or
             //cout<<"pay rate for employee "<<i+1<<" is $ "<<*(a+i)<<endl;
    }

}
int main()
{
    const int sige=6;
    const double payrates[sige]= {18.55,17.45,12.85,14.97,10.35,18.89};

    retes(payrates,sige);




    return 0;
}