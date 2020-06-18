#include <iostream>
#include "LinkedList.h"

using string = std::string;

int main() {
    LinkedList<int> ll;
    ll.add(10);
    ll.add(5);

    std::cout << ll.length << std::endl;
    std::cout << "Hello World" << std::endl;

    return 0;
}
