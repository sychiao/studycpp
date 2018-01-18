#include "dfa.h"

int state::addtrans(char key,int state)
{
    trans[key] = state;
}

int state::action(char key)
{
    if(trans.find(key) != trans.end())
        return trans.at(key);
    else
        return -1;
}

int dfa::getstate()
{
    return currentstate;
}

int dfa::insert(state s)
{
    transtable.push_back(s);
}

int dfa::insertE(state s)
{
    transtable.push_back(s);
    endstate.insert(transtable.size())
}

int dfa::action(char key)
{
    if(currentstate != -1)
        currentstate = transtable[currentstate].action(key);
    else
        currentstate = -1;
}
