#include "StringPeriodicity.h"

// Префикс-функция КМП
std::vector<int> StringPeriodicity::PrefixFunction(const std::string& s)
{
    int n = static_cast<int>(s.size());
    std::vector<int> pi(n, 0);

    int j = 0; // длина текущего совпавшего префикса

    for (int i = 1; i < n; ++i)
    {
        // сокращаем длину префикса, пока не найдём совпадение
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }

        // если символы совпадают — увеличиваем длину
        if (s[i] == s[j])
        {
            ++j;
        }

        pi[i] = j;
    }

    return pi;
}

// Проверка k-периодичности строки через префикс-функцию
bool StringPeriodicity::IsKPeriodic(const std::string& s, int k)
{
    if (k <= 0)
        return false;

    int n = static_cast<int>(s.size());
    if (n % k != 0)
        return false;

    auto pi = PrefixFunction(s);
    int period = n - pi[n - 1];

    return period == k;
}

