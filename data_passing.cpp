#include <iostream>

void modify_by_value(int value) {
    value += 10;
    std::cout << "Inside modify_by_value: " << value << std::endl;
}

void modify_by_pointer(int* ptr) {
    if (ptr != nullptr) {
        *ptr += 10;
        std::cout << "Inside modify_by_pointer: " << *ptr << std::endl;
    }
}

void modify_by_reference(int& ref) {
    ref += 10;
    std::cout << "Inside modify_by_reference: " << ref << std::endl;
}

int main() {
    int original_value = 5;

    std::cout << "Original value: " << original_value << std::endl;

    modify_by_value(original_value);
    std::cout << "After modify_by_value: " << original_value << std::endl;

    modify_by_pointer(&original_value);
    std::cout << "After modify_by_pointer: " << original_value << std::endl;

    modify_by_reference(original_value);
    std::cout << "After modify_by_reference: " << original_value << std::endl;

    return 0;
}

