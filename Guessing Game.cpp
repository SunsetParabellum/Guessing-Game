#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
int selector(int number) {
    srand(time(0));
    number  = rand() % 10 + 1;
    return number;
}
int main() {
    using namespace std::this_thread;
    using namespace std::chrono;
    selector(0);
    cout << "Random number selected betweeen 1 - 10 \n";
    cout << "Input number: ";
    for (int counter = 0; counter < 11; counter++) {
        int userInput;
        cin >> userInput;
        if (counter >= 9) {
            cout << "You lost!";
            break;
        } else if (userInput == selector(0)) {
            cout << "You won!";
            sleep_for(seconds(3));
            break;
        } else if (userInput != selector(0)) {
            cout << "Incorrect, try again: ";
        }
    }
}