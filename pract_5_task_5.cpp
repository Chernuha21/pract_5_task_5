#include <iostream>
#include <stack>
#include <string>

bool isPalindrome(const std::string& str) {
    std::stack<char> charStack;

    // ƒодаЇмо символи р€дка до стека
    for (char c : str) {
        charStack.push(c);
    }

    // ѕерев≥р€Їмо, чи р€док Ї пал≥ндромом
    for (char c : str) {
        if (charStack.top() != c) {
            return false; // якщо символи не сп≥впадають, не пал≥ндром
        }
        charStack.pop(); // ¬ит€гуЇмо символ з≥ стека
    }

    return true; // якщо вс≥ символи сп≥впадають, то пал≥ндром
}

int main() {
    std::string input;

    // ¬веденн€ р€дка
    std::cout << "Write a letters: ";
    std::getline(std::cin, input);

    // ѕерев≥рка на пал≥ндром
    if (isPalindrome(input)) {
        std::cout << "It is a palindrome." << std::endl;
    }
    else {
        std::cout << "It it is not a palindrome." << std::endl;
    }

    return 0;
}
