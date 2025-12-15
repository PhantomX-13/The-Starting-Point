#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int s, t, count=0;
    cin >> s >> t;
    
    for(long long int i=0; i<=s; i++)
    {
        for(long long int j=0; j<=s; j++)
        {
            for(long long int k=0; k<=s; k++)
            {
                if(i+j+k <= s && i*j*k <= t)
                {
                    count++;
                }
                
            }
            
        }
        
    }
    cout << count ;
    
    return 0;
}