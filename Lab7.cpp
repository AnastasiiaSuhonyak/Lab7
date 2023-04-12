#include <iostream>
#include <set>
#include <random>

int main() {
    std::multiset<int> numbers;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 20);

    // заповнюємо контейнер випадковими числами
    for (int i = 0; i < 100; ++i) {
        numbers.insert(dist(gen));
    }

for (auto number : numbers) {
    std::cout << number << " ";
}

 std::cout << "\n результат" << std::endl;
    // підраховуємо кількість повторень кожного елемента і виводимо результат
    for (auto it = numbers.begin(); it != numbers.end(); it = numbers.upper_bound(*it)) {
       
        std::cout << *it << ": " << numbers.count(*it) << std::endl;
    }

    return 0;
}

