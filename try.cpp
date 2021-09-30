#include <iostream>

using namespace std;

int main()
{
    int n,m,x1,y1,x2,y2;

    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;

    if (x1>n || x1<0 || y1<0 || y1>m || x2>n || x2<0 || y2>m || y2<0 || x1==x2 || y1==y2 || m<2 || n<2)
        cout << "wrong input";

    if (abs(x1-x2)==abs(y1-y2))
        cout << "no" << endl;
    else
        cout << "yes" << endl;

    return 0;
}
