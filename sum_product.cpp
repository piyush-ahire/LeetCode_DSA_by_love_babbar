#include <iostream>
using namespace std;

int solution(int n)
{
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int d = n % 10;
        product = product * d;
        sum = sum + d;
        n = n / 10;
    }
    int ans = product - sum;
    return ans;
}

int main()
{
    cout<<solution(42);

    return 0;
}