#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  int matA [2][2]= {4,8,2,10};
  int matB [2][2]= {-5,4,8,-12};
  int j,k=5;

cout<< "Matriks A"<<endl;
for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<matA[i][j]<<" ";
}
cout<<endl;
}
/*cout<< "Matriks B"<<endl;
for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
    cout<<matB[i][j]<<" ";
}
 cout<<endl;
}*/
cout<<"Hasil Perkalian Matriks A dengan eksponen 5"<<endl;
for (int i=0; i<2; i++)
    {
    for (int j=0; j<2; j++)
    {

    cout <<pow( matA[i][j],5)<<" ";
    }
 cout<<endl;
 }
 return 0;
}


