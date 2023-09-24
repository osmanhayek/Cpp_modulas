#include <iostream>
#include <thread>

void deneme(void* data)
{
    int *array = static_cast<int *>(data);
    int size = sizeof(array) / sizeof(int); // This line is incorrect
    for (int i = 0; i < size; i++)
        std::cout << array[i] << std::endl;
}

int main()
{
    int a = 10;
    int b = 20;
    int array[] = {a, b}; // Create an integer array

    std::thread a1(deneme, array); // Pass the array to the thread

    if (a1.joinable())
        a1.join();

    return 0;
}
