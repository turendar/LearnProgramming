#include<iostream>
using namespace std;

int main()
{
    int input = 99999124;
    int sum = 0;

    while(input > 0 || sum > 9)
    {
        int rem = input % 10;
        input = input/10;

        sum = sum + rem;
        // cout<<input<<"  "<<sum<<endl;
        if(input == 0 && sum > 9)
        {
            input = sum;
            sum = 0;
        }
    }

    cout<<sum<<endl;


    return 0;

}
