#include "MutantStack.hpp"


template <class T>
MutantStack<T>::MutantStack()
{

}

template <class T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
   *this = other;
}

template <class T>
void MutantStack<T>::operator=(MutantStack const &other)
{
   this->c = other.c;
}


template <class T>
MutantStack<T>::~MutantStack()
{
    
}

// template <class T>
// typename MutantStack<T>::iterator MutantStack<T>::end()
// {
//    return (this->c.end());
// }

// template <class T>
// typename MutantStack<T> MutantStack<T>::iterator begin()
// {
//    return (this->c.begin());
// }

// ----------


// int main()
// {
//     MutantStack<int>    mstack;
//     MutantStack<int>    mstack2;
//     mstack.push(5);
//     mstack.push(17);
//     mstack.pop();
//     cout << "top: " << mstack.top() << endl;
//     cout << "size: " << mstack.size() << endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     cout << "top: " << mstack.top() << endl;
//     // mstack2 = mstack;
//     // mstack.push(0);
//     // cout << "m2 size:" << mstack2.size() << endl;
//     // cout << "m size:" << mstack.size() << endl;
//     // mstack.begin();
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     // MutantStack<int>::const_iterator cns = mstack.begin();
//     // cout << *cns << endl;
//     ++it;
//     --it;
//     cout << "----" << endl;
//     while(it != ite)
//     {
//         cout << *it << endl;
//         ++it;
//     }
//     cout << "----" << endl;
//     using namespace std;
//     stack<int> s(mstack);
//     return 0;
// }

int main()
{
    {
        MutantStack<int>    mstack;
        mstack.push(5);
        mstack.push(17);
        cout << mstack.top() << endl;
        mstack.pop();
        cout << mstack.top() << endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>cpy = mstack;
        MutantStack<int>::iterator itb = cpy.begin();
        MutantStack<int>::iterator ite = cpy.end();
        // ++it;
        // --it;
        cout << "size : " <<cpy.size() << endl;
        cout << "----***----" << endl;
        while(itb != ite)
        {
            cout << *itb << endl;
            ++itb;
        }
        cout << "----***----" << endl;
        std::stack<int> s(cpy);
        while (!s.empty())
        {
            cout << s.top() << endl;
            s.pop();
        }
         cout << "----***----" << endl;
    }
    {
        std::list<int>    mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        cout << mstack.back() << endl;
        mstack.pop_back();
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        // mstack.swap(m);
        // cout << m.top() << endl;
        std::list<int>::iterator itb = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++itb;
        --ite;
        cout << "size : " <<mstack.size() << endl;
        cout << "----***----" << endl;
        while(itb != ite)
        {
            cout << *itb << endl;
            ++itb;
        }
        cout << "----***----" << endl;
    }
    return 0;
}