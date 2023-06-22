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

    }
};

int main()
{
    std::cout << "Hello World!\n";
}
