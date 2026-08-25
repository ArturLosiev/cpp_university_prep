#include <iostream>

int main() {
    int stack_val = 42;

    int* ptr_to_stack = &stack_val;

    std::cout << "Stack address " << ptr_to_stack << std::endl;
    std::cout << "Stack value " << *ptr_to_stack << std::endl;


    // Heap memory allocation
    int* heap_prt = new int(100);

    std::cout << "Heap address " << heap_prt << std::endl;
    std::cout << "Heap value " << *heap_prt << std::endl;

    delete heap_prt; // Free the allocated memory

    heap_prt = nullptr; // Avoid dangling pointer

    return 0;
}