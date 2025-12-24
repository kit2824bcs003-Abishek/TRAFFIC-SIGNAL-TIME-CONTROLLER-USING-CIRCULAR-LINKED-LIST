#include <iostream>
#include <string>
using namespace std;

struct Node {
    string direction;
    int duration; // Time in seconds for each signal
    Node* next;
};

class TrafficSignalController {
private:
    Node* head;
public:
    TrafficSignalController() {
        head = nullptr;
    }

    void addSignal(string dir, int dur) {
        Node* newNode = new Node;
        newNode->direction = dir;
        newNode->duration = dur;
        if (head == nullptr) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void runSignals() {
        Node* current = head;
        if (current == nullptr) {
            cout << "No signals configured." << endl;
            return;
        }
        do {
            cout << "Signal for " << current->direction << " is GREEN for " << current->duration << " seconds." << endl;
            // Simulate waiting
            for (int i = 0; i < current->duration; ++i) {
                // You can add actual delay here using sleep or delay functions
            }
            current = current->next;
        } while (current != head);
    }
};

int main() {
    TrafficSignalController controller;
    controller.addSignal("North", 30);
    controller.addSignal("East", 20);
    controller.addSignal("South", 30);
    controller.addSignal("West", 20);

    controller.runSignals();
    return 0;
}
