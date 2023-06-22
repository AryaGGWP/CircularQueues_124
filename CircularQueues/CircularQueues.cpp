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

    while (true) {
        try {
            cout << "Menu" << endl;
            cout << "1. Implement insert operation" << endl;
            cout << "2. Implement delete operation" << endl;
            cout << "3. Display values" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice (1-4): ";
            cin >> ch;
            cout << endl;

            switch (ch) {
            case '1': {

                q.insert();
                break;
            }
            case '2': {
                q.remove();
                break;
            }
            case '3': {
                q.display();
                break;
            }
            case '4': {
                return 0;
            }
            default: {
                cout << "Invalid option!" << endl;
                break;
            }
            }
        }
        catch (exception& e) {
            cout << "Check for the values entered." << endl;
        }
    }
    return 0;
}

