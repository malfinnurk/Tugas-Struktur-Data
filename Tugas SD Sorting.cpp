#include<iostream>
#define n 11

using namespace std;

int main()
{
char a[n] = {'f' , 'z' , 'h' , 't' , 'u' , 'q'};
char x,y,z;
cout<<"\tProgram Mengurutkan karakter Sesuai Alphabet"<<endl;
cout<<"\t============================================"<<endl;
cout<<"\nSebelum Di-Urutkan   : \t";
for (y=0; y<=n-1; y++)
cout<<a[y];
cout<<endl;

z=0;
while(z<=n-2)
{
y=0;
while(y<=n-2-z)
{
if(a[y]>a[y+1])
{
x=a[y];
a[y]=a[y+1];
a[y+1]=x;
}
y++;
}
z++;
}
cout<<"\nSesudah Di-Urutkann  :\t";
for(y=0; y<=n-1; y++)
cout<<a<<a[y];
}
