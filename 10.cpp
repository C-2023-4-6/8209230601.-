#include <iostream>
#include <cctype> // ʹ���ַ������� toupper

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char current = std::toupper(s[i]); // ���ַ�ת��Ϊ��д�Խ��бȽ�
        if (std::isalpha(current)) { // ����ַ��Ƿ�����ĸ
            int index = current - 'A'; // ������ĸ�� counts �����е�����
            counts[index]++; // ���Ӹ���ĸ���ֵĴ���
        }
    }
}

int main() {
    const int ALPHABETSIZE = 26;
    int counts[ALPHABETSIZE] = { 0 }; // ��ʼ����������Ϊ��

    std::cout << "Enter a string: ";
    const int MAXSIZE = 100;
    char input[MAXSIZE];
    std::cin.getline(input, MAXSIZE);

    count(input, counts);

    for (int i = 0; i < ALPHABETSIZE; ++i) {
        if (counts[i] != 0) {
            char letter = 'A' + i; // �õ���ǰ��ĸ
            std::cout << letter << ": " << counts[i] << " times" << std::endl;
        }
    }

    return 0;
}
