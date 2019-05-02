//
// Created by Jimmy on 5/1/2019.
//

#include "treemap.h"

int main(){
    Treemap<int, std::string> map;
    map.Insert(1, "A");
    map.Insert(2, "B");
    map.Insert(3, "C");
    map.Insert(4, "D");
    map.Insert(5, "E");
    return 0;
}