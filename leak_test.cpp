#include <iostream>

void create_memory_leak() {
    int* broken_array = new int[100];
    
    broken_array[0] = 42;
    std::cout << "Array allocated. First value is: " << broken_array[0] << "\n";
}

int main() {
    std::cout << "=== Starting Leak Simulator ===" << std::endl;
    
    // Call the function that leaks memory
    create_memory_leak();
    
    return 0;
}