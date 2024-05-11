#pragma once

template <typename T>
class Queue {
public:
    virtual void enqueue(const T& value) = 0;
    virtual T dequeue() = 0;
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;
    virtual T peek() const = 0;
    virtual ~Queue() {}
};
