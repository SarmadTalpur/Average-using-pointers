#include <iostream>

using namespace std;

int main()
{
    int a[5]={5,4,3,2,1}; int b[5]= {6,7,8,9,10}; int c[5]={11,12,13,14,15};
    int *p = a;
    int *q = b;
    int *r = c;
    int avg, avg1, avg2, avg3 = 0;
    for (int i=0; i<5; i++) {
        avg1=avg1+ *(p+i);
        avg2=avg2+ *(q+i);
        avg3=avg3+ *(r+i);
    }
    avg=avg1+avg2+avg3;
        cout<<"Average is " <<avg;
    return 0;
}
