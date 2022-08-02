#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

    int number {0};
        int main(){
            cout    << "Enter Number as range from 1 to 'n':";
            cin >> number; 
    int sum{0};    
    vector<int> primes;
    for(int i{2}; i <= number; i++)
    {
        bool prime{true};
        for(int j{0};j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(i % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) 
        {
            primes.push_back(i);
            cout << i << " " << endl;
        }
        // sum += i; 
    }
     sum = accumulate(primes.begin(), primes.end(), 0);
     cout << "Sum of the primes is: "<< sum;

        // cout << "sum is: " << sum << endl;
    return 0;
}