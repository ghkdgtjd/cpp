#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    int val1 = 23;
    int val2 = 45;

    SwapByRef2(23, 45); //
    
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;    
    
    return 0;
}