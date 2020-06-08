#include <iostream>

using namespace std;

int main()
{
    int n=10;
    n+=2;
    cout<<n<<endl;
    n/=2;
    cout<<n<<endl;
    n%=2;
    cout<<n<<endl;
    unsigned short exp1=0x00AB;
    unsigned short exp2=0x00B1;
    unsigned short exp3=0x00A1;
    unsigned short exp4=0x0001;
    unsigned short exp5=0x00AC;
    unsigned short exp6=0x00BB;
    cout<<hex<<"exp1&="<<(exp1&=exp2)<<endl;
    cout<<hex<<"exp3|="<<(exp3|=exp4)<<endl;
    cout<<hex<<"exp5^="<<(exp5^=exp6)<<endl;
    return 0;
}
