#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {

    // constructors =

    // iterators - begin() end()
    string s1 = "Hello world!";
    cout << "The string s1 is \"";
    for(string::iterator it = s1.begin(); it != s1.end(); it ++) {
        cout << (*it);
    } // end() returns an iterator pointing to the past-the-end character
    cout << "\"" << endl;

    // capacity - size() length() capacity() max_size() resize() clear() empty() shrink_to_fit()
    cout << "The size of s1 is " << s1.size() << endl; // returns he number of characters
    cout << "The length of s1 is " << s1.length() << endl; // same as size()
    cout << "The capacity of s1 is " << s1.capacity() << endl; // returns the size of the storage space currently allocated, which can be equal to or greater than the string length
    cout << "The max length s1 can reach is " << s1.max_size() << endl;
    string s2 = "I like C";
    s2.resize(s2.size() + 2, '+'); // void resize (size_type n); void resize (size_type n, charT c);
    cout << s2 << endl;
    s2.resize(s2.size() + 2);
    cout << s2 << endl;
    s2.resize(6);
    cout << s2 << endl;
    s2.clear(); // erases the contents of the string (not changing capacity)
    cout << s2.empty() << endl; // returns whether the string is empty
    string s3(100, 'x');
    s3.resize(10);
    cout << s3.capacity() << endl; // 100
    s3.shrink_to_fit(); // requests the string to reduce its capacity to fit its size
    cout << s3.capacity() << endl; // 15

    // element access - [] at() back() front()
    string s4 = "abcdefghij";
    cout << s4[4] << " " << s4[s4.size()] << " " << s4[s4.size()+3] << " " << s4[-100] << endl; // if i == s.size(), returns a null char; if i > s.size() or i < 0 returns some random char
    cout << s4.at(5) << endl; //  throws an out_of_range exception if i not in range
    cout << s4.front() << " " << s4.back() << endl; // returns a reference to the first / last character, returns null char when s in empty

    // modifiers - += append() push_back() pop_back() insert() assign() erase() replace() swap()
    string s5 = "Today is ";
    s5 += "Friday"; // extends the basic_string by appending additional chars at the end
    // basic_string& append 
    // (const basic_string& str)  (const basic_string& str, size_type subpos, size_type sublen) 
    // (const charT* s)  (const charT* s, size_type n) 
    // (size_type n, charT c)
    s5.append("and "); s5.append(10, 'x');
    cout << s5 << endl;
    s5.push_back('.'); // appends a single char
    cout << s5 << endl;
    s5.pop_back(); // erases the last char, returns void
    cout << s5 << endl;
    // 

    // other operations - 

    system("pause");
    return 0;
}