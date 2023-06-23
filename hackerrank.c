// sum of digits in an five digit number
// #include<stdio.h>
// int main()
// {
//     int a,n,sum=0;
//     scanf("%d",&n);
//     for(int i = 0; n!=0;n = n/10)
//     {
//          a = n % 10 ;
//         sum = sum +a;
//     }
//     printf("%d",sum);
//     return 0;
// }

// bitwise operator
// #include<stdio.h>
// int main()
// {
//     int n, k;
//     scanf("%d %d", &n, &k);
//     int mxAnd = 0, mxOr = 0, mxXor = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = i + 1; j <= n; j++){
//             if(mxAnd < (i & j) && (i & j) < k)
//                 mxAnd = i & j;
//             if(mxOr < (i | j) && (i | j) < k)
//                 mxOr = i | j;
//             if(mxXor < (i ^ j) && (i ^ j) < k)
//                 mxXor = i ^ j;
//         }
//     }
//     printf("%d\n", mxAnd);
//     printf("%d\n", mxOr);
//     printf("%d\n", mxXor);
//     return 0;
// }

// pattern
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int num,count;
//     // printf("Enter A Number :\n");
//     scanf("%d",&num);
//     for ( int i=1-num;i<num;i++ )
//     {
//         count = num+1;
//         for ( int j=1-num;j<num;j++ )
//         {
//             if ( j<1-abs(i) )
//                 count-=1;
//             else if ( j>abs(i) )
//                 count+=1;
//             printf("%d ",count);
//         }
//         printf("\n");
//     }
// }


// break a sentence
// #include<stdio.h>
// int main()
// {
//     char word;
    
// }




// conditional statements
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the number:\n");
//     scanf("%d",&n);
//     // char num;
//     if (n>=0 && n<=9)
//     {
//         switch (n)
//     {
//     case 1:
//         printf("one");
//         break;
//     case 2:
//         printf("two");
//         break;    
//     case 3:
//         printf("three");
//         break;
//     case 4:
//         printf("four");
//         break;
//     case 5:
//         printf("five");
//         break;
//     case 6:
//         printf("six");
//         break;
//     case 7:
//         printf("seven");
//         break;
//     case 8:
//         printf("eight");
//         break;
//     case 9:
//         printf("nine");
//         break;                
//     }    
//     }
//     else
//     {
//         printf("Greater than 9");
//     }
//     return 0;
// }