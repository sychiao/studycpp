#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "dfa.h"

int main()
{
    dfa hello;
    state s{"Hello"};
    s.addtrans('b',1);
    hello.insert(s);
    hello.action('b');
    std::cout<<hello.getstate();
}
