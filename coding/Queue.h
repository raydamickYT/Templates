#include <vector>
#include <iostream>
#include <stdexcept>

template <typename T>
class Queue {
private:
    std::vector<T> elements;

public:
    void put(const T& item) {
        elements.push_back(item);
    }

    T get() {
        if (elements.empty()) {
            throw std::out_of_range("Queue is leeg");
        }
        T item = elements.front();
        elements.erase(elements.begin());
        return item;
    }

    int size() const {
        return elements.size();
    }

    void print() const {
        for (const auto& item : elements) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
};
