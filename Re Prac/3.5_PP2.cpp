#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        char country[3];

        Cricketer (int J_No, char cntry[])
        {
            jersey_no = J_No;
            strcpy(country,cntry);
        }
};
int main()
{
    
    char cric2Cn[3]="In";
    Cricketer * dhoni = new Cricketer(3,cric2Cn);
    Cricketer * kohli = new Cricketer(9,cric2Cn);

    // kohli = dhoni;
    kohli->jersey_no = dhoni->jersey_no;

    delete dhoni;
    cout<<kohli->jersey_no<<" "<<kohli->country;
    return 0;
}
