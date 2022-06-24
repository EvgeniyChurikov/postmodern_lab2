#ifndef POSTMODERN_LAB2_SORTER_H
#define POSTMODERN_LAB2_SORTER_H

#include <vector>

class Sorter {
private:
    std::vector<int> vec;

    void quick_sort_recursive(int begin, int end);
public:
    Sorter();

    explicit Sorter(std::vector<int> v);

    void setVector(std::vector<int> v);

    std::vector<int> getVector();

    void insertion_sort();

    void quick_sort();

    void randomize();
};

#endif //POSTMODERN_LAB2_SORTER_H
