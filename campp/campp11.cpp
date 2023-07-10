#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    vector<int> v(n);
    // while (n--){
    // }
    for (; n--; i++)
    {
        cin >> v[i];
    }
    int a, b, c;
    cin >> a >> b >> c;
    v.erase(v.begin() + a - 1);
    v.erase(v.begin() + b - 1, v.begin() + c - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}