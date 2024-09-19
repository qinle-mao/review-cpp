#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // copying - strcpy() strncpy()
    const char* s1 = "archeology";
    char* s2 = (char*)malloc(sizeof(char) * 64);
    strcpy(s2, s1); // archeology
    cout << s2 << endl;
    char* s3 = (char*)malloc(sizeof(char) * 64);
    strncpy(s3, s1, 5); // arche
    cout << s3 << endl;
    free(s2); free(s3);

    // concatenation - strcat() strncat()
    char* s4 = (char*)malloc(sizeof(char) * 64); strcpy(s4, "abc");
    strcat(s4, "def");
    cout << s4 << endl; // adbdef
    strncat(s4, "abc", 2);
    cout << s4 << endl; // abcdefab
    free(s4);

    // comparison - strcmp() strncmp()
    char* s5 = (char*)malloc(sizeof(char) * 64); strcpy(s5, "abc");
    char* s6 = (char*)malloc(sizeof(char) * 64); strcpy(s6, "abcde");
    cout << strcmp(s5, s6) << " " << strncmp(s5, s6, 3) << endl; // -1 0
    free(s5); free(s6);

    // searching - strchr() strrchr() strstr() strcspn() strpbrk()
    char* s7 = (char*)malloc(sizeof(char) * 64); strcpy(s7, "hello world");
    char* ptr = strchr(s7, 'o'); // returns a pointer to the first occurrence of a char
    cout << "Found first \'o\' at place " << ptr - s7 << endl; // 4
    ptr = strrchr(s7, 'o');
    cout << "Found last \'o\' at place " << ptr - s7 << endl; // 7
    ptr = strstr(s7, "world");
    cout << "Found \'world\' at place " << ptr - s7 << endl; // 6
    cout << strcspn(s7, " ") << endl; // 5 (get span until character in string, returns int)
    const char* vowels = "aeiou";
    ptr = strpbrk(s7, vowels);
    cout << "Vowels in " << s7 << " are: ";
    while(ptr != NULL) {
        cout << (*ptr) << " ";
        ptr = strpbrk(ptr + 1, vowels); // returns the pointer to the char in vowels
    }
    cout << endl; // e o o
    free(s7); free(ptr);

    // strtok() - split string into tokens
    char* s8 = (char*)malloc(sizeof(char) * 64); strcpy(s8, "- This, is a sample  , string. ");
    const char* delimiters = " -,";
    cout << "Splitting string into tokens: ";
    char* token = strtok(s8, delimiters); // the end of the token is replaced by '\0' and the beginning of the token is returned
    while(token != NULL) {
        cout << token << " ";
        token = strtok(NULL, delimiters);
    }
    cout << endl; // This is a smaple string.
    cout << s8 << endl; //  "- This"
    
    // strlen() - get string length
    char* s9 = (char*)malloc(sizeof(char) * 64); strcpy(s9, "t h a n k s");
    cout << strlen(s9) << endl; // 11
    free(s8); free(s9); free(ptr);

    system("pause");
    return 0;
}