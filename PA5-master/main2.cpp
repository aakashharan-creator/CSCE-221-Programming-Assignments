#include "graph.h"
#include <iostream>

struct a {
    int test;

    a() { test = 0; }

    void increment(int new_val) {
        test = new_val;
    };
};

int main()
{
    // a b;
    // b.increment(6);
    // std::cout << b.test << std::endl;
    Graph<std::string> test;

    ifstream input("input.data");
    if (!input) {
        std::cout << "Wrong or nonexisting input file\n";
        exit(1);
    }

    test.buildGraph(input);
    test.topological_sort();
    test.displayGraph(std::cout);
    test.print_top_sort(std::cout);
    // std::cout << test.size() << std::endl;
    // test.displayGraph(std::cout);
    // test.compute_indegree();
}