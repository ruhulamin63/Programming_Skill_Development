#include<iostream>
using namespace std;
class ckt{
protected:
    int R1,R2,V_T,I_T;
public:
virtual calculate (int a,int b,int c,int d){
    R1=a;
    R2=b;
    V_T=c;
    I_T=d;
}};
class VDR:public ckt{
    calculate(int a,int b,int c,int d){
    R1=a;
    R2=b;
    V_T=c;
    I_T=d;
    int V1,V2;
    V1=V_T*(R1/R1+R2);
    V2=V_T-V1;
    cout<<"V1:"<<V1<<endl;
    cout<<"V2:"<<V2<<endl;
}
};
class CDR:public ckt{
public:
    calculate(int a,int b,int c,int d){
    R1=a;
    R2=b;
    V_T=c;
    I_T=d;
    int I1,I2;
    I1=I_T*(R1/R1+R2);
    I2=I_T-I1;
    cout<<"I1:"<<I1<<endl;
    cout<<"I2:"<<I2<<endl;
    }
};
int main()
{
    ckt*p,e;
    VDR f;
    CDR g;
    p=&e;
    p->calculate(7,8,9,6);
    p=&f;
    p->calculate(7,8,9,6);
    p=&g;
    p->calculate(7,8,9,6);
    return 0;
}
