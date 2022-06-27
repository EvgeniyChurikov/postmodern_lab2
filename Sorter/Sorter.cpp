#include "Sorter.h"

Sorter::Sorter(std::vector<int> v) {
    vec = std::move(v);
}

void Sorter::setVector(std::vector<int> v) {
    vec = std::move(v);
}

std::vector<int> Sorter::getVector() {
    return vec;
}

void Sorter::insertion_sort() {
    int tmp, j;
    for (int i = 1; i < vec.size(); ++i) {
        tmp = vec[i];
        j = i;
        while (j > 0 && vec[j - 1] > tmp) {
            --j;
            vec[j + 1] = vec[j];
        }
        vec[j] = tmp;
    }
}

void Sorter::quick_sort() {
    quick_sort_recursive(0, (int)vec.size() - 1);
}

void Sorter::quick_sort_recursive(int begin, int end) {
    if (begin < end) {
        int theWall = begin;
        for (int i = begin; i < end; ++i) {
            if (vec[i] <= vec[end]) {
                std::swap(vec[theWall], vec[i]);
                ++theWall;
            }
        }
        std::swap(vec[theWall], vec[end]);
        quick_sort_recursive(begin, theWall - 1);
        quick_sort_recursive(theWall + 1, end);
    }
}
