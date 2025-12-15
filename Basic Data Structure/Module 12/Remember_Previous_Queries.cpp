#include <iostream>
#include <list>
using namespace std;

void printList(list<int> & doubly){

    cout << "L -> ";
    for(int val : doubly)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "R -> ";
    for(auto it = doubly.rbegin(); it != doubly.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    list<int> doubly;

    while(Q--)
    {
        int X, V;
        cin >> X >> V;

        if(X == 0)
        {
            //insert_at_head
            doubly.push_front(V);
        }
        else if(X == 1)
        {
            //insert_at_tail
            doubly.push_back(V);
        }
        else if(X == 2)
        {
            if(V >= 0 && V < doubly.size())
            {
                auto it = doubly.begin();
                for(int i = 0; i < V; ++i)
                {
                    ++it;
                }
                doubly.erase(it);
            }
        }

        printList(doubly);
    }

    return 0;
}
