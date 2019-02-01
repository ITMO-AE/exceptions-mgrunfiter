# Задача 2 

Поменяйте реализацию конструктора класса `Rational` так, чтобы он выбрасывал исключение `invalid_argument`, если знаменатель равен нулю. Кроме того, переделайте реализацию оператора деления для класса `Rational` так, чтобы он выбрасывал исключение `domain_error`, если делитель равен нулю.

```cpp
int main() {
    try {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << endl;
        return 1;
    } catch (invalid_argument&) {
    }

    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << endl;
        return 2;
    } catch (domain_error&) {
    }

    cout << "OK" << endl;
    return 0;
}
```
