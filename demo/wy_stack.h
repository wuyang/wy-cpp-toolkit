#ifndef WY_STACK_H
#define WY_STACK_H

#include <vector>

namespace wy {

template <typename T>
class Stack {
public:
    Stack(){}
    ~Stack(){}

    void Push(const T& item) {
        m_data_.push_back(item);
    }
    void Pop() {
        m_data_.pop_back();
    }
    T Top() const {
        return m_data_.back();
    }
    bool Empty() const {
        return m_data_.empty();
    }
    int Size() const {
        return m_data_.size();
    }


private:
    std::vector<T> m_data_;
    // Add your private members here
};

} // namespace wy

#endif // WY_STACK_H