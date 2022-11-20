#include <iostream>
using namespace std;
int main()
{
    //using for loop
    int i,j,count=1,b=0;
    cout<<"First ten prime numbers are: \n"<<"2";
    for(i=3;i>0;++i)
    {
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<"\n"<<i;
            count++;
        }
        b=0;
        if(count==10)
        break;
    }
    

    //using while loop
    int ct=0,n=0,p=1,q=1;
    cout<<endl<<"The first ten prime numbers are:\n";
    while(n<10)
    {
        q=1;
        ct=0;
        while(q<=p)
        {
            if(p%q==0)
            {
                ct++;
            }
            q++;
        }
        if(ct==2)
        {
            cout<<p<<endl;
            n++;
        }
        p++;
    }
return 0;
}


  
