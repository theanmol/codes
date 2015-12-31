#include<iostream>
using namespace std;
int res[500]={0};
int size;
void mult(int a){
int x;
int carry=0;
for(int i=0;i<size;i++)
{
x=res[i]*a+carry;
res[i]=x%10;
carry=x/10;
}

while(carry)
{

res[size]=carry%10;
carry=carry/10;
size++;
}

}
void fact(int n)
{

 res[0]=1;
 size=1;

for(int x=2;x<=n;x++)
{
  mult(x);
}
for(int i=size-1;i>=0;i--)
{
cout<<res[i];

}
}

int main()

{
    fact(100);
cout<<"\n";
    return 0;
}
