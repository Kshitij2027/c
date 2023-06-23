// guess the random number
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
//  int main()
//  {
//     srand(time(0));
//     int guess, nguess = 1, number = rand()%50 +1;
//    //  printf("%d", number);
//     do
//     {
//     printf("Guess the number between 1 to 50! \n");
//     scanf("%d", &guess);
//     if (guess>number)
//     {
//     printf("lower number please! \n");
//     }
//     else if (guess<number)
//     {
//     printf("higher number please! \n");
    
//     }
//     else
//     {
//     printf("you guessed it in %d attenpts! \n", nguess);
//     }
    
//     nguess++;
//     } while (guess!=number);
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//    int max=0,a=2, b=4, c=3,d=1;
//    if (a>b&&a>c&&a>d)
//    {
//       max=a;
//    }
//    else if (b>a&&b>c&&b>d)
//    {
//       max = b;
//    }
//    else if (c>b&&c>a&&c>d)
//    {
//       max = c;
//    }
//    else if (d>b&&d>c&&d>a)
//    {
//       max=d;
//    }
//    printf("%d", max);
//    return 0;
// }