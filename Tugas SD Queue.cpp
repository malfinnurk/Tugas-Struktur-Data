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

void enqueue() {
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;

		cout << "Masukkan Data : ";cin >> data;
		Q.data[Q.rear] = data;

		Q.rear++;
		cout << "Data ditambahkan\n";
		printQueue();
	}
}

void dequeue() {
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

void Tampil (){
cout << "QUEUE : ";
		for (int i = Q.front; i < Q.rear; i++)

			cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",");
		cout << endl;
}

void Clear (){
Q.front=Q.rear=-1;
cout << "Data clear" <<endl;
}

void Banyak_data (){
int data;
    cout << "Masukkan Data : ";cin >> data;
    Q.data[Q.rear] = data;

    Q.rear++;
    cout << "Data ditambahkan\n";
    printQueue();
}

void Jumlah_data(){
cout << "QUEUE : ";
		for (int i = Q.front; i < Q.rear; i++)

			cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",");
		cout << endl;
}

void Rata_rata(){
int data, rerata;
cout <<"enqueue= "<<data<<"\n";
rerata=(double)data;
cout<<"nilai rata rata ="<<rerata<<endl;
}

int main() {
	int choose, tampil;
	do
	{

		cout << "-------------------\n"
			<< "   Menu Antrian \n"
			<< "-------------------\n"
			<< " 1. Enqueue \n"
			<< " 2. Dequeue \n"
			<< " 3. Tampil  \n"
			<< " 4. Clear   \n"
			<< " 5. Banyak data \n"
			<< " 6. Jumlah data \n"
			<< " 7. Rata-rata \n"
			<< " 8. Exit  \n\n"
			<< "-------------------\n"
			<< "Pilihan anda : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
        case 3:
            Tampil();
            break;
        case 4:
            Clear();
            break;
        case 5:
            Banyak_data();
            break;
        case 6:
            Jumlah_data();
            break;
        case 7:
            Rata_rata();
            break;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (choose !=20);
	return 0;
}
