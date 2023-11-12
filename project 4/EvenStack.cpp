#include <iostream>
#include <stack>
#include "EvenStack.hpp"
using namespace std;

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        s.push(value);
    } else {
        cout << "Error - can only push even numbers" << std::endl;
    }
}
void EvenStack::pop() {
    if (!s.empty()) {
        s.pop();
    }
}
void EvenStack::getEvenNumbers(const std::stack<int>& src) {
    std::stack<int> temp(src);
    std::stack<int> reversed;
    
    while (!temp.empty()) {
        int value = temp.top();
        temp.pop();
        if (value % 2 == 0) {
            reversed.push(value);
        }
    }
    
    while (!reversed.empty()) {
        this->push(reversed.top());
        reversed.pop();
    }
}
void EvenStack::emptyStack() {
    cout << "Removing the following: ";
    while (!s.empty()) {
        cout << s.top()<< " ";
        s.pop();
    }
    cout << endl;
}

