// Printing elements in array, in reverse order also
// #include<stdio.h>
// int main()
// {
//     int a[] = {1,2,3,4,5};
//     int length;
//     length = sizeof(a)/sizeof(a[0]);
//     printf("Elements of given array:\n");
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d",a[i]);
//     }
//     printf("\nreverse array:\n");
//     for (int j = length;j>0; j--)
//     {
//         printf("%d",a[j]);
//     }
    
// }

/* Doubt, the above code prints 054321 why 0 included?*/



// maximum and minimum elements in an array
// #include<stdio.h>
// int main()
// {
//     int a[] = {1,2,3,4,5};
//     int length = sizeof(a)/sizeof(a[0]);
//     int i,j,max,min;
//     max = a[0];
//     min = a[0];
//     for(i=1;i<length;i++)
//     {
//         if (a[i]>max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
        
//     }
//     printf("maximum element: %d\n",max);
//     printf("minimum element: %d",min);
// }

// kth max and min element in an array
// #include<stdio.h>
// #define MAX_SIZE 100;
// int main()
// {
//     int a[MAX_SIZE];
// }

// circular shift in array
/*#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
    int temp , length;
    length = sizeof(a)/sizeof(a[0]);
    a[0]=temp;
    for (int i = 0; i <length; i++)
    {
        printf("%d",a[i]=a[i+1]);
    }
    temp=a[length];
    printf("%d",a[length]);
    
}
*/
// duplicate nos in array
/*    #include <stdio.h>    
         
    int main()    
    {         
        int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};     
        int arr2[] = {1, 2, 3, 11, 12, 13, 14, 15, 16};     
        int k=0, flag,x,i,j;
        int result[100];

        for (i = 0; i < sizeof(arr1)/4; i++)
        {
            for (j = 0; j < sizeof(arr2)/4; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    flag = 0;
                    for (x = 0; x < k; x++)
                    {
                        if (result[x] == arr1[i])
                        {
                            flag++;
                        }
                        if (flag ==0)
                        {
                            result[k]=arr1[i];
                            printf("%d",result[k]);
                            k++;
                        }
                        
                    }
                    
                }
                
            }
            
        }
            
        return 0;    
    }  
*/

// union of array
// #include<stdio.h>
// int removerepeated(int size,int a[]);
// void sort(int size,int a[]);
// main(){
//    int i,size1,size2,size,j=0,k;
//    printf("Enter size of an array1\n");
//    scanf("%d",&size1);
//    printf("Enter size of an array2\n");
//    scanf("%d",&size2);
//    int a[size1],b[size2],uni[size1+size2];
//    printf("Enter numbers for array 1\n");
//    for(i=0;i<size1;i++){
//       scanf("%d",&a[i]);
//    }
//    printf("Enter numbers for array 2\n");
//    for(i=0;i<size2;i++){
//       scanf("%d ",&b[i]);
//    }
//    //union start
//    for(i=0;i<size1;i++){
//       uni[j]=a[i];
//       j++;
//    }
//    for(i=0;i<size2;i++){
//       uni[j]=b[i];
//       j++;
//    }
//    //Sorting
//    sort(size1+size2,uni);
//    //Remove repeated elements
//    size=removerepeated(size1+size2,uni);
//    printf("Array afetr Union \n");
//    for(i=0;i<size;i++){
//       printf("%d",uni[i]);
//    }
//    //Sorting
// }
// int removerepeated(int size,int a[]){
//    int i,j,k;
//    for(i=0;i<size;i++){
//       for(j=i+1;j<size;){
//          if(a[i]==a[j]){
//             for(k=j;k<size;k++){
//                a[k]=a[k+1];
//             }
//             size--;
//          }else{
//             j++;
//          }
//       }
//    }
//    return(size);
// }
// void sort(int size,int a[]){
//    int i,j,temp;
//    for(i=0;i<size;i++){
//       for(j=i+1;j<size;j++){
//          if(a[i]>a[j]){
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//          }
//       }
//    }
// }

//negative numbers in an array

// #include<stdio.h>
// int main(){
//     int ar1[]={1,-1,2,3,4,-2};
//     int c=0;
//     for(int i=0;i<=5;i++)
//         {
//         if (ar1[i]<0)
//         {
//         c =c+1;
//         }
//     }
//     printf("%d",c);
//     };



// implementation of 2d array
// #include<stdio.h>
// int main()
// {
//     int ar1[4][3];
//     int i,j;
//     printf("Enter the elements of array:\n");
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("element[%d][%d]:",i,j);
//             scanf("%d",&ar1[i][j]);
//         }
//     }
//     printf("\ngiven array:\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("\n");
//         for(int j=0;j<3;j++)
//         {
//             printf("%d\t",ar1[i][j]);
//         }
//     }
    
// }

// matrix multiplication of two 2d arrays
// #include<stdio.h>
// int main()
// {
//     int ar1[4][3],ar2[4][3]={{1,2,3},{3,4,5},{5,6,7}};
//     int i,j;
//     printf("Enter the elements of array:\n");
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("element[%d][%d]:",i,j);
//             scanf("%d",&ar1[i][j]);
//         }
//     }
//     printf("\ngiven array:\n");
//     for (int s = 0; s < 4; s++)
//     {
//         printf("\n");
//         for(int h=0;h<3;h++)
//         {
//             printf("%d\t",ar1[s][h]);
//         }
//     }
//     printf("\nmatrix multiplication of two arrays:\n");
//     /* 
//     continue, matrix multiplication
//     */
    
// }

