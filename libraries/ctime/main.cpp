#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
    // time manipulation - clock_t clock()
    clock_t startTime = clock(); // returns the processor time consumed by the program in clock ticks
    for(int i = 0; i < 10000000; i ++);
    clock_t interval = clock() - startTime;
    cout << "The process took " << interval << " ticks, which is " << static_cast<float>(interval) / CLOCKS_PER_SEC << " seconds." << endl;

    // time manipulation - time_t time() ctime()
    time_t timer;
    time(&timer); // returns the current calendar time since 00:00, Jan 1, 1970 UTC
    cout << "The current time is " << timer << " seconds since 00:00, Jan 1, 1970." << endl;
    // coversion - ctime() - convert time_t to a string followed by '\n' and terminated with '\0'.
    cout << "The current time is " << ctime(&timer); // convert time_t to cstring

    system("pause");
    return 0;
}