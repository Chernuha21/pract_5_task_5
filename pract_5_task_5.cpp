#include <iostream>
#include <stack>
#include <string>

bool isPalindrome(const std::string& str) {
    std::stack<char> charStack;

    // ������ ������� ����� �� �����
    for (char c : str) {
        charStack.push(c);
    }

    // ����������, �� ����� � ����������
    for (char c : str) {
        if (charStack.top() != c) {
            return false; // ���� ������� �� ����������, �� ��������
        }
        charStack.pop(); // �������� ������ � �����
    }

    return true; // ���� �� ������� ����������, �� ��������
}

int main() {
    std::string input;

    // �������� �����
    std::cout << "Write a letters: ";
    std::getline(std::cin, input);

    // �������� �� ��������
    if (isPalindrome(input)) {
        std::cout << "It is a palindrome." << std::endl;
    }
    else {
        std::cout << "It it is not a palindrome." << std::endl;
    }

    return 0;
}
