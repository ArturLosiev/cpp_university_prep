#include <iostream>

class DynamicArray {
private:
    int* data;
    int size;

public:
    DynamicArray(int requiredSize) : size(requiredSize) {
        data = new int[size];
    }

    ~DynamicArray() {
        delete[] data;
        data = nullptr;
    }

    DynamicArray(const DynamicArray& source) : size(source.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = source.data[i];
        }
    }

    DynamicArray& operator=(const DynamicArray& source) {
        if (this == &source) {
            return *this; 
        }

        delete[] data;

        size = source.size;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = source.data[i];
        }

        return *this;
    }
};

int main() {
    std::cout << "Creating arr1...\n";
    DynamicArray arr1(5); 

    std::cout << "Copying arr1 into arr2...\n";
    DynamicArray arr2 = arr1; 

    std::cout << "Creating arr3...\n";
    DynamicArray arr3(10); 

    std::cout << "Assigning arr1 to arr3...\n";
    arr3 = arr1; 

    std::cout << "Program finishing, destructors will now run...\n";
    return 0;
}