

#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
void wait( int seconds)
{
    clock_t endwait;
    endwait = clock () + seconds * CLOCKS_PER_SEC ;
    while (clock() < endwait) {}
}
int main()
{
    int s,h,m,hour,m1,sec,op;

    char country [20];
    cout<<"enter your hour = ";
    cin>>hour;
    cout<<"what are the minutes  = ";
    cin>>m1;
    cout<<"what are the seconds running  =";
    cin>>sec;
    for(h=hour; h<13; h++)
    {
        if(m=59)

            for(m=m1; m<60; m++)
            {
                if(s=59)
                    for(s=sec; s<60; s++)
                    {


                        cout<<"\t \t \t \t \t\n\n\n\t\t\t\t\t\t "<<h<<":"<<m<<":"<<s;
                        wait(1);
                        system("cls");


                    }
            }
    }

    getchar();
    return 0 ;
}

