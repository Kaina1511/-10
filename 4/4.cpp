﻿#include "string"
#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    setlocale(0, "");
    ifstream in("f.txt");
    string s, r;
    while (in.peek() != EOF)
    {
        getline(in, s);
        if (s.size() > r.size())
        {
            r = s;
        }
    }
    cout << "Длина максимальной строки - " << r.size() << ", строка - " << r;
    in.close();
}
