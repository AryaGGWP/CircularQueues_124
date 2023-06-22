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
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
