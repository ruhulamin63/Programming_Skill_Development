#include<iostream>
using namespace std;

class destination
{
    int a,b,m,n,o,p,q,r,s,u;
    double f,g,h;

public:
    void Dhanmondi();
};

void destination::Dhanmondi()
{
    cout<<"1.CNG or 2.Pathoa:"<<endl;
    cin>>m;

    cout<<"The time is 1.morning 2.afternoon 3.eveing:"<<endl;
    cin>>n;

    if(m==1 && n==1)
    {
        a=40;
        cout<<"How much km:"<<endl;
        cin>>o;

        cout<<"Wating time:"<<endl;
        cin>>p;
        q=a+o*12+p*2;
        cout<<"Total amount:"<<q<<endl;
    }

    else if(m==1 && n==2)
    {
          a=40;
        cout<<"How much km:"<<endl;
        cin>>o;

        cout<<"Wating time:"<<endl;
        cin>>p;
        r=a+o*12+p*2;
        cout<<"Total amount:"<<r<<endl;
    }

      else if(m==1 && n==3)
    {
          a=40;
        cout<<"How much km:"<<endl;
        cin>>o;

        cout<<"Wating time:"<<endl;
        cin>>p;
        s=a+o*12+p*2;
        cout<<"Total amount:"<<s<<endl;
    }

    else if(m==2 && n==1)
      {
        b=50;
        cout<<"How much km:"<<endl;
        cin>>o;

        cout<<"Service charge:"<<endl;
        cin>>u;

        cout<<"Wating time:"<<endl;
        cin>>p;

        f=b+o*20+p*2.5+u*1;

        cout<<"Total amount:"<<f<<endl;
    }

    else if(m==2 && n==2)
    {
          b=50;
        cout<<"How much km:"<<endl;
        cin>>o;

        cout<<"Service charge:"<<endl;
        cin>>u;

        cout<<"Wating time:"<<endl;
        cin>>p;

        g=b+o*12+p*2.5+u*1;
        cout<<"Total amount:"<<g<<endl;
    }

      else if(m==2 && n==3)
    {
          b=50;
        cout<<"How much km:"<<endl;
        cin>>o;

        cout<<"Service charge:"<<endl;
        cin>>u;

        cout<<"Wating time:"<<endl;
        cin>>p;

        h=b+o*12+p*2.5+u*1;
        cout<<"Total amount:"<<h<<endl;
    }
}

int main()
{
    destination ob;
    ob.Dhanmondi();

    return 0;
}










