#include<iostream>
using namespace std;

class myStack //amra stack implement krbo bt vector er maddhome
{
    public:
        vector<int> v; //stack implement done, now we have to implement operation

        void push(int val) //operation implement starts here --> O(1)
        {
            v.push_back(val);//stack e push kora mane amdr create kora vector (v) te push_back kora
        }
        void pop() //for last element delete --> O(1)
        {
            v.pop_back(); //stack e pop kora mane amdr create kora vector (v) te pop_back kora means delete kora
        }
        int top() //stack er top value return kore -->O(1)
        {
            return v.back(); // stack er top print kora mane vector er back function
        }
        int size() //stack er size --> O(1)
        {
            return v.size();
        }
        bool empty() //stack faka thkle true naile false return kore --> O(1)
        {
            return v.empty();
        }
};

int main()
{
    myStack st; 
    /* static object create kore krsi cz dynamic object er drkr porse na
    as amra ekta stack create krbo & ekta stack e print krbo so dymanic object er drkr nei
    ekhane static object e enough */
    

    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty())    //if(st.empty()==false)
    {
        cout << st.top() << endl;//top print krsi
        st.pop(); //pop krle top er value remove hye jbe
    }
    return 0;
}