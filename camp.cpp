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




// code with cisco

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
	// int n=0,index=0;
	// string a[n];
	// cout<<"Enter the number of elements:"<<endl;
	// cin>>n;
	// cout<<"Enter the series:"<<endl;
	// for(int i=0;i<=n;i++){
	// 	cin>>a[i];
	// }
	// for(int i=0;i<=(sizeof(a)/sizeof(a[0]));i++){
	// 	for(int j=0;j<i;j++){
	// 		if(a[i]==a[j]){
	// 			break;
	// 		}
	// 		if(i==j){
	// 			a[index++]=a[i];
	// 		}
	// 	}
	// }
	// cout<<index;

	// int result,r,n,temp;
	// string a;
	// cout<<"Enter the number:"<<endl;
	// cin>>n;
	// cout<<"Enter the series of "<<n<<" elements:"<<endl;
	// for(int i=0; i<=n;i++)
	// {
		// cin>>a;
	// }
	// r = a % 10;
	// r = a % 10;
    // a = a / 10;
    // temp = r;
    // r = a % 10;
    // a = a / 10;
    // for(int i=0;i<=n;i++){
	// if (temp = r)
    // {
    //     temp=result;/* code */
    // }
	// }
	// cout<<result;
	// int count, n, str;
	// cin>>str;
	// string a[str];
	// for(int i=0; i<=str; i++)
	// {
	// 	cin>>a[i];
	// }
	// n = a % 10;
	// a = a / 10;
// 	return 0;
// }