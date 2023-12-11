#include <iostream>
#include <cctype> // 使用字符处理函数 toupper

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char current = std::toupper(s[i]); // 将字符转换为大写以进行比较
        if (std::isalpha(current)) { // 检查字符是否是字母
            int index = current - 'A'; // 计算字母在 counts 数组中的索引
            counts[index]++; // 增加该字母出现的次数
        }
    }
}

int main() {
    const int ALPHABETSIZE = 26;
    int counts[ALPHABETSIZE] = { 0 }; // 初始化计数数组为零

    std::cout << "Enter a string: ";
    const int MAXSIZE = 100;
    char input[MAXSIZE];
    std::cin.getline(input, MAXSIZE);

    count(input, counts);

    for (int i = 0; i < ALPHABETSIZE; ++i) {
        if (counts[i] != 0) {
            char letter = 'A' + i; // 得到当前字母
            std::cout << letter << ": " << counts[i] << " times" << std::endl;
        }
    }

    return 0;
}
