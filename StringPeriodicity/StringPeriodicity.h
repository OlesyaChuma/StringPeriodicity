#pragma once

#include <string>
#include <vector>

 // Класс, содержащий методы для проверки периодичности строки
class StringPeriodicity
{
public:
    // Вычисляет префикс-функцию (π-массив) для строки
    static std::vector<int> PrefixFunction(const std::string& s);

    // Проверяет, является ли строка кратной числу k
    static bool IsKPeriodic(const std::string& s, int k);
};
