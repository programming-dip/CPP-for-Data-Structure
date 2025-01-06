#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
	    int jersey_no;
	    char country[20];
};

int main()
{
    Cricketer * dhoni = new Cricketer;
    dhoni->jersey_no=9;
    char cty[20] = "INDIA";
    strcpy(dhoni->country,cty);

    Cricketer *kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country,dhoni->country);
    
    
    delete dhoni;
    cout<<kohli->country<<endl;
    cout<<kohli->jersey_no;
    return 0;
}