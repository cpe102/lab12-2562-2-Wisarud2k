#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double a[],int n,double b[]){
    double sum=0,sd,av,max=a[0],min=a[0],xpow=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        xpow+=pow(a[i],2);
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }

    }
    av=sum/n;
    sd=sqrt((xpow/n)-pow(av,2));
    b[0]=av;
    b[1]=sd;
    b[2]=max;
    b[3]=min;
    
}
