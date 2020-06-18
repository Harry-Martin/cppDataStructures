#pragma once

#include "UnaryNode.h"

template <typename T>
class LinkedList {
public:
    UnaryNode<T>* head;
    int length;

    LinkedList() : head(nullptr), length(0){}

    void add(T value)
    {
        length++;
        if (head == nullptr)
        {
            head = new UnaryNode<T>(value);
        }
        else
        {
            UnaryNode<T>* target = head;
            while(target->next != nullptr)
            {
                target = target->next;
            }
            target->next = new UnaryNode<T>(value);
        }
    }

};