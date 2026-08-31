    #include <iostream>

    int main(){
        int student_age = 21;
        
        int university_gpa = 3.8;

        std::cout << student_age << std::endl;
        std::cout << university_gpa << std::endl;

        std::cout << "Size of student_age: " << sizeof(student_age) << " bytes" << std::endl;
        std::cout << "Size of university_gpa: " << sizeof(university_gpa) << " bytes" << std::endl;

        std::cout << "Address of student_age: " << &student_age << std::endl;
        std::cout << "Address of university_gpa: " << &university_gpa << std::endl;

        return 0;
    }