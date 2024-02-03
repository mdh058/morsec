#include <iostream>

using namespace std;

string morse_code_alpha(char alpha){
    switch(alpha){
        case 'A': case 'a': return "._";
        case 'B': case 'b': return "_...";
        case 'C': case 'c': return "_._.";
        case 'D': case 'd': return "_..";
        case 'E': case 'e': return ".";
        case 'F': case 'f': return ".._.";
        case 'G': case 'g': return "__.";
        case 'H': case 'h': return "....";
        case 'I': case 'i': return "..";
        case 'J': case 'j': return ".___";
        case 'K': case 'k': return "_._";
        case 'L': case 'l': return "._..";
        case 'M': case 'm': return "__";
        case 'N': case 'n': return "_.";
        case 'O': case 'o': return "___";
        case 'P': case 'p': return ".__.";
        case 'Q': case 'q': return "__._";
        case 'R': case 'r': return "._.";
        case 'S': case 's': return "...";
        case 'T': case 't': return "_";
        case 'U': case 'u': return ".._";
        case 'V': case 'v': return "..._";
        case 'W': case 'w': return ".__";
        case 'X': case 'x': return "_.._";
        case 'Y': case 'y': return "_.__";
        case 'Z': case 'z': return "__..";
        case '0': return "_____";
        case '1': return ".____";
        case '2': return "..___";
        case '3': return "...__";
        case '4': return "...._";
        case '5': return ".....";
        case '6': return "_....";
        case '7': return "__...";
        case '8': return "___..";
        case '9': return "____.";
        case '.': return "._._._";
        case ':': return "___...";
        case ';': return "_._._.";
        case '?': return "..__..";
        case '=': return "_..._";
        case '/': return "_.._.";
        case '!': return "_._.__";
        case '-': return "_...._";
        case '+': return "._._.";
        case '&': return "._...";
        case '(': return "_.__.";
        case ')': return "_.__._";
    }
}

char morse_code_to_alpha(string morse) {
    if (morse == "._") return 'a';
    else if (morse == "_...") return 'b';
    else if (morse == "_._.") return 'c';
    else if (morse == "_..") return 'd';
    else if (morse == ".") return 'e';
    else if (morse == ".._.") return 'f';
    else if (morse == "__.") return 'g';
    else if (morse == "....") return 'h';
    else if (morse == "..") return 'i';
    else if (morse == ".___") return 'j';
    else if (morse == "_._") return 'k';
    else if (morse == "._..") return 'l';
    else if (morse == "__") return 'm';
    else if (morse == "_.") return 'n';
    else if (morse == "___") return 'o';
    else if (morse == ".__.") return 'p';
    else if (morse == "__._") return 'q';
    else if (morse == "._.") return 'r';
    else if (morse == "...") return 's';
    else if (morse == "_") return 't';
    else if (morse == ".._") return 'u';
    else if (morse == "..._") return 'v';
    else if (morse == ".__") return 'w';
    else if (morse == "_.._") return 'x';
    else if (morse == "_.__") return 'y';
    else if (morse == "__..") return 'z';
    else if (morse == "_____") return '0';
    else if (morse == ".____") return '1';
    else if (morse == "..___") return '2';
    else if (morse == "...__") return '3';
    else if (morse == "...._") return '4';
    else if (morse == ".....") return '5';
    else if (morse == "_....") return '6';
    else if (morse == "__...") return '7';
    else if (morse == "___..") return '8';
    else if (morse == "____.") return '9';
    else if (morse == "._._._") return '.';
    else if (morse == "___...") return ':';
    else if (morse == "_._._.") return ';';
    else if (morse == "..__..") return '?';
    else if (morse == "_..._") return '=';
    else if (morse == "_.._.") return '/';
    else if (morse == "_._.__") return '!';
    else if (morse == "_...._") return '-';
    else if (morse == "._._.") return '+';
    else if (morse == "._...") return '&';
    else if (morse == "_.__.") return '(';
    else if (morse == "_.__._") return ')';
}

int main() {
    string inputText;
    cout << "Enter a text: ";
    getline(cin, inputText);
    
    char text[100];
    int textIndex = 0;

    if (inputText[0] != '.' && inputText[0] != '_') {
        for (int i = 0; i < inputText.length(); i++) {
            char c = inputText[i];
            if (c != ' ') {
                cout << morse_code_alpha(c) << ' ';
            } else {
                cout << '/';
            }
        }
    } else {
        for (int i = 0; i < inputText.length(); i++) {
            if (inputText[i] != ' ' && inputText[i] != '/') {
                text[textIndex++] = inputText[i];
            } else {
                text[textIndex] = '\0';
                cout << morse_code_to_alpha(text);
                if (inputText[i] == ' ') {
                    cout << ' ';
                }
                textIndex = 0;
            }
        }
    }
}

