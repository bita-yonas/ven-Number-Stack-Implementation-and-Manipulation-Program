//
//  EvenStack.hpp
//  project 4
//
//  Created by bita yonas on 11/12/23.
//

#ifndef EvenStack_hpp
#define EvenStack_hpp

#include <stdio.h>

#endif /* EvenStack_hpp */

#include <stack>

class EvenStack {
private:
    std::stack<int> s;

public:
    EvenStack() {}

    bool empty() const { return s.empty(); }
    size_t size() const { return s.size(); }
    int top() const { return s.top(); }
    void push(int value);
    void pop();
    void getEvenNumbers(const std::stack<int>& src);
    void emptyStack();
};



