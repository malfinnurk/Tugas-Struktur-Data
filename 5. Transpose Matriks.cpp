#include <iostream>

using namespace std;

int main(int argc, char *argv)
{
  int matA [2][2]= {4,8,2,10};
  int tranpose [2][2]={};
  int j,k;

cout<< "Matriks A"<<endl;
for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<matA[i][j]<<" ";
    tranpose[j][i]=matA[i][j];
}
cout<<endl;
}
cout<<"Hasil tranpose Matriks A  "<<endl;
for (int i=0; i<2; i++)
    {
    for (int j=0; j<2; j++)
    {
    cout<<tranpose[i][j]<<" ";
    }
 cout<<endl;
}
return 0;
}
