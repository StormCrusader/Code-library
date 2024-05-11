#pragma once

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    ~LinkedList();
    // Function declarations
};
