#include<cstdlib>
#include<iostream>
using namespace std;

void func(void) {
    cout << "exiting..." << endl;
}

int main(int argc, char *argv[]) {
    // string conversion - atoi() atol() atod()
    char s[]  = "76.866";
    cout << atoi(s) << " " << atol(s) << " " << atof(s) << endl; // string to int / long / double - 76 76 76.866

    // dynamic memory management - malloc() realloc() calloc() free()
    char* buffer = (char*)malloc(sizeof(char) * 256); // alloc memory block
    cout << "Please enter a string: ";
    cin >> buffer;
    cout << buffer << endl;
    buffer = (char*)realloc(buffer, sizeof(char) * 128); // reallocate memory block
    buffer = (char*)calloc(64, sizeof(char)); // allocate and zero-initialize array
    cout << buffer[50] << endl;
    free(buffer); // free memory block

    // other algorithms - abs()
    cout << abs(-1.2) << endl; // 1.2

    // macro constants
    cout << EXIT_FAILURE << " " << EXIT_SUCCESS << " " << endl; // 0 1

    // environment - exit() atexit() system()
    // exit(EXIT_SUCCESS);
    // exit(EXIT_FAILURE);
    atexit(func); // set function to be executed on exit
    system("pause");
    return 0;
}