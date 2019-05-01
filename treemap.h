#ifndef TREEMAP_H_
#define TREEMAP_H_

#include <algorithm>
#include <iostream>
#include <memory>
#include <sstream>
#include <stack>
#include <utility>

template <typename K, typename V>
class Treemap {
public:
    //
    // @@@ The class's public API below should _not_ be modified @@@
    //

    // * Capacity
    // Returns number of key-value mappings in map --O(1)
    size_t Size();
    // Returns true if map is empty --O(1)
    bool Empty();

    // * Modifiers
    // Insert @key in map --O(log N) on average
    void Insert(const K &key, const V &value);
    // Remove @key from map --O(log N) on average
    void Remove(const K &key);

    // * Lookup
    // Return value corresponding to @key --O(log N) on average
    const V& Get(const K &key);

    // Return greatest key less than or equal to @key --O(log N) on average
    const K& FloorKey(const K &key);
    // Return least key greater than or equal to @key --O(log N) on average
    const K& CeilKey(const K &key);

    // Return whether @key is found in map --O(log N) on average
    bool ContainsKey(const K& key);
    // Return whether @value is found in map --O(N)
    bool ContainsValue(const V& value);

    // Return max key in map --O(log N) on average
    const K& MaxKey();
    // Return min key in map --O(log N) on average
    const K& MinKey();

private:
    //
    // @@@ The class's internal members below can be modified @@@
    //

    // Private member variables
    // ...To be completed...
    struct Node{
        K key;
        std::unique_ptr<Node> left;
        std::unique_ptr<Node> right;
    };
    std::unique_ptr<Node> root;
    size_t size;
    // Private constants
    // ...To be completed (if any)...

    // Private methods
    // ...To be completed (if any)...
};

//
// Your implementation of the class should be located below
//
template <typename K, typename V>
size_t Treemap<K, V>::Size(){
    return size;
}

template<typename K, typename V>
bool Treemap<K, V>::Empty() {
    return size==0;
}

template<typename K, typename V>
void Treemap<K, V>::Insert(const K &key, const V &value) {

}

template<typename K, typename V>
void Treemap<K, V>::Remove(const K &key) {

}

template<typename K, typename V>
const V &Treemap<K, V>::Get(const K &key) {
    return <#initializer#>;
}

template<typename K, typename V>
const K &Treemap<K, V>::FloorKey(const K &key) {
    return <#initializer#>;
}

template<typename K, typename V>
const K &Treemap<K, V>::CeilKey(const K &key) {
    return <#initializer#>;
}

template<typename K, typename V>
bool Treemap<K, V>::ContainsKey(const K &key) {
    return false;
}

template<typename K, typename V>
bool Treemap<K, V>::ContainsValue(const V &value) {
    return false;
}

template<typename K, typename V>
const K &Treemap<K, V>::MaxKey() {
    return <#initializer#>;
}

template<typename K, typename V>
const K &Treemap<K, V>::MinKey() {
    return <#initializer#>;
}
// ...To be completed...

#endif  // TREEMAP_H_