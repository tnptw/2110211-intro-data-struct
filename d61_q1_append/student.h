#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> tmp;
        for (size_t i = 0; i < s.mSize; i++) {
            tmp.push(s.mData[i]);
        }
        for (size_t i = 0; i < mSize; i++) {
            tmp.push(mData[i]);
        }
        *this = tmp;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> tmp, tmp2;
        while (!q.empty()) {
            tmp.push(q.front());
            q.pop();
        }
        while (!tmp.empty()) {
            tmp2.push(tmp.top());
            tmp.pop();
        }
        for (size_t i = 0; i < mSize; i++) {
            tmp2.push(mData[i]);
        }
        *this = tmp2;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while (!s.empty()) {
            this->push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while (!q.empty()) {
            this->push(q.front());
            q.pop();
        }
    }
}