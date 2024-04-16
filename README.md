# C++ Standard Template Library (STL) Guide

The Standard Template Library (STL) is a powerful set of C++ template classes that provide general-purpose classes and functions. This guide provides an overview of key components of the STL, including arrays, vectors, deques, lists, maps, queues, sets, stacks, and algorithms.

## Components of STL

### Containers

1. **Array**: Static array with a fixed size.
2. **Vector**: Dynamic array that can resize itself.
3. **Deque**: Double-ended queue.
4. **List**: Doubly-linked list.
5. **Map**: Associative container that stores key-value pairs in a sorted order based on keys.
6. **Queue**: FIFO (First In First Out) data structure.
7. **Set**: Associative container that stores unique keys in a sorted order.
8. **Stack**: LIFO (Last In First Out) data structure.

### Algorithms

STL provides various algorithms to operate on containers or ranges:
   - Sorting: `std::sort`
   - Searching: `std::find`, `std::binary_search`
   - Modifying: `std::transform`, `std::fill`, `std::copy`
   - Numeric: `std::accumulate`, `std::inner_product`, `std::partial_sum`
   - And many more...

## Usage

To use the STL components in your C++ programs, include the appropriate header files and utilize the desired classes and functions. For example:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    // Sort the vector
    std::sort(vec.begin(), vec.end());

    // Print the sorted vector
    for (int x : vec) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    return 0;
}

References

C++ Reference - STL
STL Tutorial

License
This guide is licensed under the MIT License - see the LICENSE file
