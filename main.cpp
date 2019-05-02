//
// Created by Jimmy on 5/2/2019.
//

#include "treemap.h"
int main(int argc, char** argv) {
    Treemap<int, std::string> map;
    printf("empty %d\n", map.Empty());
    map.Insert(1, "A");
    map.Insert(2, "B");
    map.Insert(3, "C");
    map.Insert(4, "D");
    map.Insert(5, "E");
    printf("empty %d\n", map.Empty());
//    map.Remove(1);
//    map.Remove(2);
//    map.Remove(3);
    printf("size %d\n", map.Size());
    printf("Min %d\n", map.MinKey());
    printf("Max %d\n", map.MaxKey());
    printf("get 2 %s\n", map.Get(2).c_str());

    printf("floor of 3 %d", map.FloorKey(3));
    printf("ceil of 4 %d", map.CeilKey(4));
//    std::string name = "E";
//    bool contains = map.ContainsValue(name);
//    printf("%i", contains);


    map.Print();
    return 0;
}