#include <iostream>
#define MAX 20

using namespace std;

struct Queue {
	int i, front, rear, data[MAX];
}Q;

bool isFull() {
	return Q.rear == MAX;
}

bool isEmpty() {
	return Q.rear == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
  }
}

void Antrian_parkir_mobil(){
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;

		cout << "Masukkan plat nomor mobil : ";cin >> data;
		Q.data[Q.rear] = data;

		Q.rear++;
		cout << "Data ditambahkan\n";
		printQueue();
	}
}

void Keluarkan_mobil() {
	if (isEmpty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Q.data[Q.front] << "\"..." << endl;

		for (int i = Q.front; i < Q.rear; i++)
			Q.data[i] = Q.data[i + 1];

		Q.rear--;
		printQueue();
	}
}

void Tampilkan_antrian_mobil (){
cout << "QUEUE : ";
		for (int i = Q.front; i < Q.rear; i++)

			cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",");
		cout << endl;
}

int main() {
	int choose, tampil;
	do
	{

		cout<< "----------------------------\n"
            << "   ANTRIAN PARKIRAN MOBIL\n"
            << "----------------------------\n"
			<< " 1. Antrian parkir mobil       \n"
			<< " 2. Keluarkan mobil            \n"
			<< " 3. Tampilkan antrian mobil    \n"
			<< " 4. Exit                       \n"
			<< "----------------------------\n"
			<< "Pilihan anda : "; cin >> choose;
		switch (choose)
		{
		case 1:
            Antrian_parkir_mobil();
			break;
		case 2:
			Keluarkan_mobil();
			break;
        case 3:
            Tampilkan_antrian_mobil();
            break;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (choose !=20);
	return 0;
}
