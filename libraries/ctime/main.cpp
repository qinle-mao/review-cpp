#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
    // time manipulation - clock() time()
    clock_t t = clock(); // returns the processor time consumed by the program in clock ticks
    for(int i = 0; i < 10000000; i ++);
    t = clock() - t;
    cout << "The process took " << t << " ticks / " << static_cast<float>(t) / CLOCKS_PER_SEC << " seconds" << endl;
    

    system("pause");
    return 0;
}