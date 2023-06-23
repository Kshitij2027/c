// #include <stdio.h>
// #include<cstdlib>
// void update(int *a,int *b) {
//     // Complete this function
//     int c = *a;
//     int d = *b;
//     *a = c + d;
//     *b = abs(c - d);
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }


// print n number of array in reverse
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=1; i<=n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = n; i>=1 ; i--)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }


// 
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int height = 0, q = 0, lenght=0, value, m = 0, n= 0;
//     cin>>height>>q;  
//     vector<vector<int>> vect(height);
    
//     for(int i = 0; i<vect.size(); i++){
//         cin>>lenght; 
//         vector<int>vect_0(lenght); 
//         vect[i] =  vect_0; 
//         for(int j = 0; j<vect_0.size(); j++){
//             cin>>value;
//             vect_0[j] = value;
//         }
//         vect[i] =  vect_0;
//     }

//     for(int i = 0; i<q; i++){
//         cin>>m>>n; 
//         vector<int>vector_1 = vect[m]; 
//         cout<<vector_1[n]<<"\n"; 
//     } 
//     return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// struct workshop
// {
//     char f_name[100];
//     char l_name[100];
//     int sal;
// };
// int main(){
// workshop wk;
//     cin>>wk.f_name;
//     cin>>wk.l_name;
//     cin>>wk.sal;
//     cout<<wk.f_name<<" "<<wk.l_name<<" "<<wk.sal;
//     return 0;
// }


// Structures in c++

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Student{
//     int age;
//     char  first_name[100];
//     char last_name[100];
//     char standard[100];
// };

// int main() {
//     Student st;
    
//     cin >> st.age >> st.first_name >> st.last_name >> st.standard;
//     cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
//     return 0;
// }




// classes in c++

#include <iostream>
#include <sstream>
using namespace std;
class Student{
    public:
        int age, standard;
        string first_name, last_name, to_string;
        int set_age(int a){
            cin>> a;
            return a;
        }
        int set_standard(int a){
            cin>> a;
            return a;
        }
        string set_first_name(string a){
            cin>> a;
            return a;
        }
        string set_last_name(string a){
            cin>> a;
            return a;
        }
        int get_age(int a){
            cout<<a;
            return a;
        }
        int get_standard(int a){
            cout<<a;
            return a;
        }
        string get_first_name(string a){
            cout<<a;
            return a;
        }
        string get_last_name(string a){
            cout<<a;
            return a;
        }
        
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}