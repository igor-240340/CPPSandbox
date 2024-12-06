/*
 * page 10 in
 * [Hands-On Design Patterns with C++. Second Edition. F. Pikus]
 */

#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <memory>

class Empty {
public:
    void useful_function() { std::cout << "useful_function()\n"; };
};

class Derived : private Empty {
    int i = 0;
};

class Composed {
    int i;
    Empty e;
};

int main() {
    std::cout << "sizeof(Empty): " << sizeof(Empty) << std::endl;
    std::cout << "sizeof(Derived): " << sizeof(Derived) << std::endl;
    std::cout << "sizeof(Composed): " << sizeof(Composed) << std::endl;
}