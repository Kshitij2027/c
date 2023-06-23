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

// #include <iostream>
// #include <sstream>
// using namespace std;
//     class Student{
//     private:
//         int age;
//         string first_name;
//         string last_name;
//         int standard;
    
//     public:
//         //getters and setters
//         void set_age(int agepara){
//             age = agepara;
//         }
        
//         int get_age(){
//             return age;
//         }
        
//         void set_first_name(string fname){
//             first_name = fname;
//         }
        
//         string get_first_name(){
//             return first_name;
//         }
        
//         void set_last_name(string lname){
//             last_name = lname;
//         }
        
//         string get_last_name(){
//             return last_name;
//         }
        
//         void set_standard(int s){
//             standard = s;
//         }
        
//         int get_standard(){
//             return standard;
//         }
        
//         string to_string() const{
//             return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
//         }
// };

// int main() {
//     int age, standard;
//     string first_name, last_name;
    
//     cin >> age >> first_name >> last_name >> standard;
    
//     Student st;
//     st.set_age(age);
//     st.set_standard(standard);
//     st.set_first_name(first_name);
//     st.set_last_name(last_name);
    
//     cout << st.get_age() << "\n";
//     cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
//     cout << st.get_standard() << "\n";
//     cout << "\n";
//     cout << st.to_string();
    
//     return 0;
// }




//  
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cassert>
// using namespace std;
// class Student{
//     private:
//         int a,b,c,d,e;
//     public:
//         void input(){
//             cin>>a>>b>>c>>d>>e;
//         }
//         int calculateTotalScore(){
//             int sum=a+b+c+d+e;
//             return sum;
//         }
// };
// // Write your Student class here

// int main() {
//     int n; // number of students
//     cin >> n;
//     Student *s = new Student[n]; // an array of n students
    
//     for(int i = 0; i < n; i++){
//         s[i].input();
//     }

//     // calculate kristen's score
//     int kristen_score = s[0].calculateTotalScore();

//     // determine how many students scored higher than kristen
//     int count = 0; 
//     for(int i = 1; i < n; i++){
//         int total = s[i].calculateTotalScore();
//         if(total > kristen_score){
//             count++;
//         }
//     }

//     // print result
//     cout << count;
    
//     return 0;
// }




//Classes prac.1

// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//         int a=10,b=20,c=30,d=40;
//         string Fname, lname;
        
// };
// int main(){
//     Student st;
//     cout<<"Hii, please enter your details:"<<endl;
//     cout<<"Fname:"; cin>>st.Fname;
//     cout<<"Lname:"; cin>>st.lname;
//     cout<<st.a<<endl<<st.b<<endl<<st.c<<endl<<st.d;
// }