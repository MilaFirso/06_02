#include <iostream>
#include <tgmath.h>

using namespace std;

int real_string_hash(string& word, int p, int m)
{
    int hash = 0;
    for (int i = 0; i < word.length(); ++i)
    {
        hash += static_cast<int>(word[i]) * static_cast<int>(pow(p, i));
    }

    return hash % m;
}

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    int p = 1;
    int m = 1;
    string input = "";

    cout << "Введите p: ";
    cin >> p;
    cout << "Введите n: ";
    cin >> m;

    while (input != "exit")
    {
        cout << "Введите строку: ";
        cin >> input;

        cout << "Хэш строки " << input << " = " << real_string_hash(input, p, m) << endl;
    }

    return 0;
}