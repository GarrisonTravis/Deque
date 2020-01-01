//main.cpp
//Garrison Travis
#include <iostream>
#include <exception>
#include "Deque.cpp"

int main() {
    
    //Testing Deque initialized with parameterized constructor
    cout << "Testing first deque: push_front, push_back, pop_front, pop_back, getSize, front, and back" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    Deque<int> deq1(3);
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Push Front: 2" << endl;
    deq1.push_front(2);
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Push Front: 1" << endl;
    deq1.push_front(1);
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Push Back: 4" << endl;
    deq1.push_back(4);
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Push Back: 5" << endl;
    deq1.push_back(5);
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Pop Front ..." << endl;
    deq1.pop_front();
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Pop Back ..." << endl;
    deq1.pop_back();
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Pop Front ..." << endl;
    deq1.pop_front();
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    cout << "Pop Back ..." << endl;
    deq1.pop_back();
    deq1.print();
    cout << "Size: " << deq1.getSize() << endl;
    cout << "Front: " << deq1.front() << endl;
    cout << "Back: " << deq1.back() << endl << endl;

    try {
        cout << "Pop Front ..." << endl;
        deq1.pop_front();
        deq1.print();
        cout << "Size: " << deq1.getSize() << endl;
        cout << "Front: " << deq1.front() << endl;
        cout << "Back: " << deq1.back() << endl << endl;
    }
    catch (exception & e) {
        cout << "Exception Caught. " << e.what() << endl;
    }

    cout << "\nTesting second deque: clear" << endl;
    cout << "------------------" << endl;
    Deque<int> deq2;
    deq2.push_back(1);
    deq2.push_back(2);
    deq2.push_back(3);
    deq2.push_back(4);
    deq2.push_back(5);
    deq2.print();

    cout << "Clearing Deque ..." << endl;
    deq2.clear();
    deq2.print();
}
