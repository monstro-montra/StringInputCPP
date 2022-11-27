#include <iostream>
#include <string>

using namespace std;

struct input{
    const static int SIZE = 3;
    string inputs[SIZE];
};

struct input inputStrings(){
    struct input s;

    for (int i = 0; i < s.SIZE; i++){
        cout << "Enter string # " << i << ":";
        getline(cin, s.inputs[i]);
    }
    return s;
}

 void printArray(string arr[]){
    struct input s;
     for (int i = 0; i < s.SIZE; i++){
         cout << "String # " << i << ": " << arr[i] << endl;
     }
}

void reverseString(string& str){
    int n = str.length();

    for (int i = 0; i < n / 2; i++){ //start at 0, i < string length / 2, increment i by 1 each loop
        swap(str[i], str[n - i - 1]); // swap string[i] with str @ string length - i - 1
    }
}

int main() {
    struct input s = inputStrings();
    printArray(s.inputs);

    for (int i = 0; i < s.SIZE; i++){
        reverseString(s.inputs[i]);
    }
    printArray(s.inputs);

    system("pause");
    return 0;
}


