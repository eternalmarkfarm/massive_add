#include <iostream>


int* add(int* arr, int size, int n) {
    int* temp = new int[size+1];
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[i];
    }

    temp[size] = n;
    delete[] arr;
    int* mass = new int[size + 1];
    for (int i = 0; i < size + 1; ++i) {
        mass[i] = temp[i];
    }
    delete[] temp;

    
    return mass;
}


int main() {
    int number = 0;
    int size = 1;
    int* mass = new int[size] {};
    std::cout << "Please input one number: \n";
    std::cin >> number;
    mass[size-1] = number;
    
    for (;;) {
        std::cout << "Please input one number: \n";
        std::cin >> number;
        mass = add(mass, size, number);
        
        for (int i = 0; i < size+1; ++i) 
            std::cout << i + 1 << " element has " << mass[i] << std::endl;
        ++size;

    }
    return 0;
}




