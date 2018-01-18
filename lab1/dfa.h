#ifndef dfa_H
#define dfa_H

#include <string>
#include <vector>
#include <map>
#include <set>

class state
{
private:
    std::string name;
    std::map<char,int> trans;
public:
    state(std::string n):name(n) {}
    std::map<char,std::string> namedict;
    int addtrans(char key,int state);
    int action(char key);
};

class dfa
{
private:
    int currentstate;
    std::vector<state> transtable;
    std::set<int> endstate;
public:
    dfa():currentstate(0){}
    int action(char key);
    int insert(state s);
    int insertE(state s);
    int getstate();
};


#endif  // dfa_H
