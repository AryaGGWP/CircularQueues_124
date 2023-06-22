#include <iostream>
using namespace std;

class Queues {
    int Front, Rear, max = 5;
    int queue_array[5];

public:
    Queues() {
        Front = -1;
        Rear = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;

        //cek apakah antrian penuh
        if ((Front == 0 && Rear == max - 1) || (Front == Rear + 1)) {
            cout << "\nQueue overflow\n";
            return;
        }
        //cek apakah antrian kosong
        if (Front == -1) {
            Front = 0;
            Rear = 0;
        }
        else {
            // Jika Rear berada di posisi terkhir array, kembali ke awal array
            if (Rear == max - 1)
                Rear = 0;
            else
                Rear = Rear + 1;
        }
        queue_array[Rear] = num;
    }

    void remove() {
        //cek apakah antrian kosong
        if (Front == -1) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe Element deleted from the queue is: " << queue_array[Front] << "\n";

        // Cek Jika antrian hanya memiliki satu elemen
        if (Front == Rear) {
            Front = -1;
            Rear = -1;
        }
        else {
            // jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array
            if (Front == max - 1)
                Front = 0;
            else
                Front = Front + 1;
        }
    }

    void display() {
        int Front_position = Front;
        int Rear_position = Rear;
        
        // Cek apakah antrian kosong 
        if (Front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "\nElements in the queue are...\n";

        //jika Front_position <= Rear_position, iterasi dari front hingga Rear
        if (Front_position <= Rear_position) {
            while (Front_position <= Rear_position) {
                cout << queue_array[Front_position] << "   ";
                Front_position++;
            }
            cout << endl;
        }
    }
};

int main() {
    Queues q;
    char ch;

    while
}
{
    std::cout << "Hello World!\n";
}
