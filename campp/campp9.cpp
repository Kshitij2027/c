#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> vec1;
    int num, n;
    cin>>num;
    for(int i = 1; i<=num; i++)
    {
        cin>>n;
        vec1.push_back(n);
    } 
    sort(vec1.begin(), vec1.end());
    unique(vec1.begin(), vec1.end());
    for(int i = 0; i<=sizeof(vec1); i++)
    {
        cout<<" "<<vec1.at(i);
    }
    return 0;
}