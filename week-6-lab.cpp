#include<iostream>
using namespace std;

int main()
{
    int mark;
    cout<<"\n\n Enter the Mark out of 100 : ";
    cin>>mark;
    if(mark<=100 && mark>=0)
    {
        cout<<"\n\n GRADING SYSTEM\n";
        cout<<"=================\n";
        cout<<"MARK        GRADE\n";
        cout<<"------      -----\n";
        cout<<"86 - 100       A\n";
        cout<<"72 - 85        B\n";
        cout<<"60 - 71        C\n";
        cout<<"50 - 59        D\n";
        cout<<"0  - 49    F - Fail\n";
        cout<<"===================\n\n\n";


        if(mark>=86 && mark<=100)
        {
            cout<<"MARK      :  "<<mark <<endl;
            cout<<"GRADE     :  "<<"A" <<endl;
        }
        else if(mark>=72 && mark<=85)
        {
            cout<<"MARK      :  "<<mark <<endl;
            cout<<"GRADE     :  "<<"B" <<endl;
        }
        else if(mark>=60 && mark<=71)
        {
            cout<<"MARK      :  "<<mark <<endl;
            cout<<"GRADE     :  "<<"C" <<endl;
        }
        else if(mark>=50 && mark<=59)
        {
            cout<<"MARK      :  "<<mark <<endl;
            cout<<"GRADE     :  "<<"D" <<endl;
        }
        else
        {
            cout<<"MARK      :  "<<mark <<endl;
            cout<<"GRADE     :  "<<"F - Faild" <<endl;
        }
    }
    else
    {
        cout<<"\n\n Invalid entry !";
    }

    return 0;
}