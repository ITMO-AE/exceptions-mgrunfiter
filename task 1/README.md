# Задача 1
Напишите функцию `checkEqual` для проверки двух строк на равенство по длине.
```cpp
void checkEqual(const string& left, const string& right);
```

В случае, если строка `left` не равна строке `right`, функция должна выбрасывать исключение `runtime_error` с содержанием "<left> != <right>", где `<left>` и `<right>` - строки, которые хранятся в переменных `left` и `right` соответственно.

Если `left == right`, функция должна корректно завершаться.

Например, код
```cpp
int main() {
  try {
    EnsureEqual("Hello C++", "Hello C++");
    EnsureEqual("Hello C++", "Bye C++");
  } catch (runtime_error& e) {
    cout << e.what() << endl;
  }
  return 0;
}
```
Вывод:
```sh
Hello C++ != Bye C++
```
