//main.cpp
//Garrison Travis
#include <iostream>
#include <exception>
#include "Deque.cpp"

int main() {
    
    //Testing Deque initialized with parameterized constructor
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
}
