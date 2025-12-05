// StringPeriodicity.cpp : Этот файл содержит функцию IsKPeriodic, которая проверяет, является ли строка кратной числу K
// Алгоритм имеет оптимальную сложность: время: O(n), память: O(n)

#include <iostream>
#include <locale.h>
#include "StringPeriodicity.h"

int main()
{
    setlocale(LC_ALL, "");
    std::string s1 = "abcabcabcabc";
    int k1 = 3;

    std::string s2 = "ababab";
    int k2 = 2;

    std::string s3 = "abac";
    int k3 = 2;

    std::cout << "Строка: " << s1 << ", k = " << k1
        << " - " << (StringPeriodicity::IsKPeriodic(s1, k1) ? "Да" : "Нет") << std::endl;

    std::cout << "Строка: " << s2 << ", k = " << k2
        << " - " << (StringPeriodicity::IsKPeriodic(s2, k2) ? "Да" : "Нет") << std::endl;

    std::cout << "Строка: " << s3 << ", k = " << k3
        << " - " << (StringPeriodicity::IsKPeriodic(s3, k3) ? "Да" : "Нет") << std::endl;

    return 0;
}