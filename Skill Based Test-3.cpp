#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
const int NUM_STATE=14;
const int NUM_YEAR=10;
long int ma_x=-1;
int c;
string city[14]= {"PERLIS","KEDAH","PULAU PINANG","PERAK","SELANGOR","KUALA LUMPUR","NEGERI SEMBILAN","MELAKA","JOHOR","PAHANG","KELANTAN","TERENGGANU","SABAH","SARAWAK"};


struct dataAcc
{
    string state;
    float avg;
    long int numAcc[NUM_YEAR];

} surv[NUM_STATE];


//finding average
long int cal_Avg(dataAcc surv[NUM_STATE])
{
    for(int i=0; i<NUM_STATE; i++)
    {
        long int sum=0;
        for(int j=0; j<NUM_YEAR; j++)
        {
            sum+=surv[i].numAcc[j];

        }

        surv[i].avg=sum/(float)NUM_YEAR;
    }


}

//finding max value
void find_HighLow(dataAcc surv[NUM_STATE])
{
    for(int i=0; i<NUM_STATE; i++)
    {
        long int sum=0;
        for(int j=0; j<NUM_YEAR; j++)
        {
            if(ma_x<surv[i].numAcc[j])
            {
                city[0]=city[i];
                ma_x=surv[i].numAcc[j];
                c=j;
            }

        }

    }
}
ofstream out;


//print
void displayLine(dataAcc surv[NUM_STATE])
{
    out.open("out.txt");


    out<<" STATE"<<setw(20);
    for(int i=0; i<10; i++)
    {

        out<<i+2006<<"  ";
    }

    out<<"AVERAGE"<<endl<<endl;

    for(int i=0; i<NUM_STATE; i++)
    {

        out<<surv[i].state<<setw(20);


        for(int j=0; j<NUM_YEAR; j++)
        {

            out<<surv[i].numAcc[j]<<" ";

        }

        out<<surv[i].avg<<endl;

    }


    out<<endl<<endl<<"The highest number of road accidents = "<<ma_x<<" at "<<city[0]<<" on "<<2006+c<<endl;


}



int main()
{
    ifstream input("input.txt");
    for(int i=0; i<NUM_STATE; i++)
    {
        for(int j=0; j<NUM_YEAR; j++)
        {
            input>>surv[i].numAcc[j];
        }

        getline(input,surv[i].state);

    }



    cal_Avg(surv);
    find_HighLow(surv);
    displayLine(surv);


    return 0;
}


