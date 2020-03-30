#include <iostream>
#include <string.h>

using namespace std;

main()
{
    char kata[100];
    int belakang;
    bool palindrome = true;
    int panjang_kata, i, jumlah_huruf, kalimat;
    struct tumpukan;

    cout<<"-==STACK MEMBALIKKAN KALIMAT==-\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout<<"Masukkan kalimat :\n ";
    cin.getline(kata, sizeof(kata));

    cout<<"\nJumlah huruf : "<<endl;
    jumlah_huruf= 0;
    for (int i = 0; kata[i]; i++)
        jumlah_huruf++;
    cout<<""<<strlen(kata)<<" huruf "<<endl;

    panjang_kata=strlen(kata);

    cout<<endl<<"Kalimat asli :\n "<<kata<<endl;

    cout<<"\nKalimat setelah dibalik :\n ";
    for(i=panjang_kata;i>=1;i--)
    {
        char stack=kata[i-1];
        cout<<stack;
    }

    int panjang= strlen(kata);
    belakang = panjang_kata-1;

    for (int a=0; a<panjang_kata; a++)
    {
        if((char)tolower(kata[a])!=(char)tolower(kata[belakang]))
        {
            palindrome = false;
            break;
        }
        belakang--;
    }

    if(palindrome)
    cout<<"\nPalindrome"<<endl;
    else
    cout<<"\nBukan Palindrome"<<endl;

    system("pause");
}

