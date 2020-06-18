#pragma once

template <typename T>
class UnaryNode{
public:
    UnaryNode<T>* next;
    T value;

    UnaryNode(T value)
        : next(nullptr), value(value){}

    UnaryNode(UnaryNode<T> &next, T value)
        : next(&next), value(value){}

    void setValue(T value)
    {
        this->value = value;
    }

    void setNext(UnaryNode<T> &next)
    {
        this->next = &next;
    }
};


