#pragma once
#include <iostream>

template <class T>
class List
{
private:
    T* _t_arr; 
    int index;

public:
    List(int size = 10) {
        _t_arr = new T[size];
        index = -1;
    }

    void add(T t) {
        index++;
        _t_arr[index] = t;
    }

    void remove(int position) {
        if (position > index) {
            throw std::invalid_argument("position is greater than length of list");
        }
        int i = position;
        while (i <= index)
        {
            _t_arr[i] = _t_arr[i + 1];
            i++;
        }
        index--;
    }

    int size() {
        return index + 1;
    }

    T at(int position) {
        if (position > index) {
            throw std::invalid_argument("position is greater than length of list");
        }

        return _t_arr[position];
    }
};