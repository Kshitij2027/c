// #include<stdio.h>
// int main()
// {
//     int a;
//     float avg=0,per;
//     printf("Enter no. if students for day 1: ");
//     scanf("%d",&a);
//     avg =a;
//     printf("Enter no. of std for day 2: ");
//     scanf("%d",&a);
//     avg = avg+a;
//     printf("Enter no. if students for day 3: ");
//     scanf("%d",&a);
//     avg = avg+a;
//     printf("Enter no. if students for day 4: ");
//     scanf("%d",&a);
//     avg = avg+a;
//     printf("Enter no. if students for day 5: ");
//     scanf("%d",&a);
//     avg = avg+a;
//     avg = avg/5;
//     printf("The average of attendance is: %f", avg);
// }

// WAP  to input a value in GB and convert it in bits
// #include<stdio.h>
// int main()
// {
//     float a, b, c=0.000000008;
//     printf("Enter the value(in GB): ");
//     scanf("%f", &a);
//     b = a*c;
//     printf("The converted value is(in bits): %f", b);

// }

//  wap to convert celsius to fahrenheit
// #include<stdio.h>
// int main()
// {
//     int a;
//     float b;
//     printf("Enter the temperature in celsius: ");
//     scanf("%d", &a);
//     b = (a * 9/5) + 32;
//     printf("Temperature in fahrenheit: %f", b);
// }

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the value o: ");
//     scanf("%d", &a);
//     if (a>=18)
//     {
//         printf("Yes you can vote");
//     }
//     if (a< 18)
//     {
//         printf("no you can not vote");
//     }
//     return 0;

// }

// WAP to show if a no. is positive or negative
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the no. :");
//     scanf("%d", &a);
//     if (a >=0)
//     {
//         printf(" The no. is positive");
//     }
//     if(a < 0)
//     {
//         printf("the no. is negative");
//     }
//     return 0;
// }

// WAP to input a no. which can be either integer or float and display it is a natural no. or real no.
//  #include<stdio.h>
//  int main()
//  {
//      float a;
//      printf("Enter the number: ");
//      scanf("%f", &a);
//      if ()
//      {
//          printf("The entered number is a float no. : %f", a);
//      }
//      if()
//      {
//          printf("Entered number is a integer : %d", a);
//      }

// }

// WAP to (in copy)!!
// #include <stdio.h>
// int main(){
//         int n;
//         printf("Enter a number : ");
//         scanf("%d", &n);
//         if (n % 5 == 0)
//         {
//             printf("%d is a multiple of 5");
//         }
//         if(n % 5 != 0)
//         {
//             printf("%d is not a multiple of 5");
//         }

// }

// WAP to display if a given number is multiple of 5 as well as multiple of 3 using logical gate
//// #include<stdio.h>
//// int main()
////{
//    int n;
//    printf("Enter the number : ");
//    scanf("%d,", &n);
//    if(n % 5 == 0 && n % 3 == 0)
//    {
//        printf("%d is a multiple of 5 & 3",n);
//    }
//    if(n % 5 != 0 || n % 3 != 0)
//    {
//        printf("%d is not a multiple of 3 & 5",n);
//    }
// simple form
// if(n % 5 == 0 && n % 3 == 0)
// {
//     printf("%d is a multiple of 5 & 3",n);
// }
// if(!(n % 5 == 0 && n % 3 == 0))
// {
//     printf("%d is not a multiple of 3 & 5",n);
// }
//}

// WAP to input a no. and display if it is a multiple of 3 and 5 but it should not be a multiple of 10 using logic gates
//  #include<stdio.h>
//  int main()
//  {
//      int n;
//      printf("Enter a number :");
//      scanf("%d", &n);
//      if(n%3==0 && n%5==0 && n%10!=0)
//      {
//          printf("%d is a multiple of 3 and 5 but not of 10",n);
//      }
//      if(n%3!=0 || n%5!=0 || n%10==0)
//      {
//          printf("The condition is not satisfied");
//      }
//      return 0;
//  }

// question in copy
// #include<stdio.h>
// int main(){
//     float r, f=0.25;
//     printf("enter the no. :");
//     scanf("%f", &r);
//     if (r==f)
//     {
//         printf("I Loved it!!");/* code */
//     }
//     if (r!=f)
//     {
//         printf("I hate it");/* code */
//     }

// }

// Note c language stores a real constant number in 8 bites

// #include<stdio.h>
// int main(){
//     float f = 0.05;
//     if (f == 0.05f)
//     {
//         /* code */printf("I loved it");
//     }
//     else
//     {
//         printf("i Hate it");
//     }

// }

// WAP to input a three digit number and display largest digit amongst three digit
// #include<stdio.h>
// int main()
// {
//     int a, r, temp;
//     printf("Enter any number: ");
//     scanf("%d", &a);

//     r = a % 10;
//     a = a / 10;
//     temp = r;
//     r = a % 10;
//     a = a / 10;
//     if (temp > r)
//     {
//         temp = r;/* code */
//     }
//     r = a%10;
//     a = a / 10;
//     if (temp > r)
//     {
//         temp = r;/* code */
//     }
//     printf("Largest number is %d", temp);
//     return 0;

// }

// WAP to input a number and verify it is in the range of 1 to 100
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number :");
//     scanf("%d", &a);
//     if(1<=a && a<=100)
//     {
//         printf(" The number %d lies between the range!!",a);
//     }
//     if (!(1<=a && a<=100))
//     {
//         printf("The number %d does not lie in the range",a);
//     }
//     return 0;

// }

// WAP to find greatest among 3 user given numbers
// #include<stdio.h>
// int main()
// {
//     int a, b, c;
//     a!=b && b!=c && a!=c;
//     printf("Enter 1st number: ");
//     scanf("%d", &a);
//     printf("Enter 2nd number: ");
//     scanf("%d", &b);
//     printf("Enter 3rd number: ");
//     scanf("%d", &c);
//     if (a>b && a>c)
//     {
//         printf("%d is the greatest no.", a);/* code */
//     }
//     if (b>c && b>a)
//     {
//         printf("%d is the greatest number",b);
//     }
//     if (c>a && c>b)
//     {
//         printf("%d is the greatest number",c);
//     }
//     return 0;
// }

/* WAP to input % of a student if % is greater or = to 60 print a msg that student is pass.
    otherwise fail. also distinction is %is greater than or equal to 75 */
// #include<stdio.h>
// int main()
// {
//     float a;
//     printf("Enter the percentage of a student: ");
//     scanf("%f", &a);
//     if (a>=60 && a<=100)
//     {
//         printf("Student is pass");
//         if (a == 75 || a>75)
//         {
//             printf(" With Distinction!!");
//         }
//     }
//     if (a<60)
//         {
//             printf("student is fail");
//         }
//     if (a>100)
//     {
//         printf("invalid entry!");
//     }
//     return 0;
// }

/* a businessman want's to carry a huge amount with him from a place to another he wants to keep the amount in minimum
number of notes. If he enters an amount, help him to find minimum number of notes as output. */
// #include<stdio.h>
// int main()
// {
//     int amt,sum = 0;
//     printf("Enter the amount: ");
//     scanf("%d", &amt);
//     if(amt / 2000 > 0)
//     {
//         printf("2000 x %d = %d\n",amt/2000,2000*(amt/2000));
//         sum = sum + amt/2000;
//         amt = amt % 2000;
//     }
//     if(amt / 500 > 0)
//     {
//         printf("500 x %d = %d\n",amt/500,500*(amt/500));
//         sum = sum + amt/500;
//         amt = amt % 500;
//     }
//     if(amt / 200 > 0)
//     {
//         printf("200 x %d = %d\n",amt/200,200*(amt/200));
//         sum = sum + amt/200;
//         amt = amt % 200;
//     }
//     if(amt / 100 > 0)
//     {
//         printf("100 x %d = %d\n",amt/100,100*(amt/100));
//         sum = sum + amt/100;
//         amt = amt % 100;
//     }
//     if(amt / 50 > 0)
//     {
//         printf("50 x %d = %d\n",amt/50,50*(amt/50));
//         sum = sum + amt/50;
//         amt = amt % 50;
//     }
//     if(amt / 20 > 0)
//     {
//         printf("20 x %d = %d\n",amt/20,20*(amt/20));
//         sum = sum + amt/20;
//         amt = amt % 20;
//     }
//     if(amt / 10 > 0)
//     {
//         printf("10 x %d = %d\n",amt/10,10*(amt/10));
//         sum = sum + amt/10;
//         amt = amt % 10;
//     }
//     if(amt / 5 > 0)
//     {
//         printf("5 x %d = %d\n",amt/5,5*(amt/5));
//         sum = sum + amt/5;
//         amt = amt % 5;
//     }
//     if(amt / 2 > 0)
//     {
//         printf("2 x %d = %d\n",amt/2,2*(amt/2));
//         sum = sum + amt/2;
//         amt = amt % 2;
//     }
//     if(amt / 1 > 0)
//     {
//         printf("1 x %d = %d\n",amt/1,1*(amt/1));
//         sum = sum + amt/1;
//         amt = amt % 1;
//     }
//     printf("total number of notes: %d", sum);
//     return 0;
// }

// Order menu
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the no. for your order :\n");
//     printf("Press 1. tea\nPress 2. maggie\nPress 3. samosa\nPress 4. dosa\nPress 5. chole bhature\nPress 6. noodles\nEnter your choice: ");
//     scanf("%d", &a);
//     if (a == 1)
//     {
//         printf("Your bill is\nTea (5 Rs)");
//     }
//     if (a == 2)
//     {
//         printf("Your bill is\nmaggie (30 Rs)");
//     }
//     if (a == 3)
//     {
//         printf("Your bill is\nsamosa (10 Rs)");
//     }
//     if (a == 4)
//     {
//         printf("Your bill is\ndosa (40 Rs)");
//     }
//     if (a == 5)
//     {
//         printf("Your bill is\nchole bhature (50 Rs)");
//     }
//     if (a == 6)
//     {
//         printf("Your bill is\nnoodles (30 Rs)");
//     }
//     if (a<1 || a>6)
//     {
//         printf("Invalid input");
//     }
//     return 0;
// }

// again order (in pic)
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("!Welcome to jbp cafe!\nPlease choose your order.\n");
//     printf("(1) Burger 80 Rs\n(2) Cold Drink 20 Rs\n(3) Pizza 100 Rs\n(4) Cold Coffee 60 Rs\nCOMBO offers\n(5)Burger + Cold Drink = 90 Rs\n(6)Pizza + Cold Coffee = 150 Rs\n");
//     scanf("%d", &a);
//     if (a == 1)
//     {
//         printf("Thanks for ordering from here\nYour order is Burger = 80rs\n");
//     }
//     if (a == 2)
//     {
//         printf("Thanks for ordering from here\nYour order is Cold Drink = 20 Rs\n");
//     }
//     if (a == 3)
//     {
//         printf("Thanks for ordering from here\nYour order is Pizza = 100Rs\n");
//     }
//     if (a == 4)
//     {
//         printf("Thanks for ordering from here\nYour order is Cold coffee = 60Rs\n");
//     }
//     if (a == 5)
//     {
//         printf("Thanks for ordering from here\nYour order is Burger + Cold Drink = 90Rs\n");
//     }
//     if (a == 6)
//     {
//         printf("Thanks for ordering from here\nYour order is Pizza + Cold Coffee = 150Rs\n");
//     }
//     if (a == 7)
//     {
//         printf("Visit Again");
//     }
//     return 0;
// }

// nikhil bro ka prgrm
//     #include<stdio.h>
//     int main()
// {
//     int p;
//     printf("Enter the percentage you got in your RGPV exam :");
//     scanf("%d",&p);

//     if(p>=80 && p<=100)
//  {
//     printf("Excellent performance!!! you got GRADE  A :");
//  }
//     else if(p>=60 && p<=79)
//  {
//     printf("Good!!!! you got GRADE B :");
//  }
//     else if(p>=50 && p<=59)
//  {
//     printf("very bad !!!! you got GRADE C :");
//  }
//     else if(p<=49 && p>=0)
//  {
//     printf(" FAIL HO GYA/GAI H TU... you got grade D :");
//  }
//  return 0;

// }

// freshers day problems
// 1.
//     #include<stdio.h>
//     int main()

// {
//     int year;
//     printf("enter any year :\n");
//     scanf("%d",&year);

//     if(year %4 == 0 && year % 100!=0 || year % 400 == 0)
//     {
//         printf("it is a leap year :");
//     }
//     else
//     {
//         printf("its not a  leap year: ");
//     }
//     return 0;
// }

// 2.
//     #include<stdio.h>
//     int main()
//     {
//     int amt,b,c;
//     char w;

//     printf("enter the amount :");
//     scanf("%d",&amt);

//     printf("enter the number of Bikes available :");
//     scanf("%d",&b);

//     printf("enter the Car available:");
//     scanf("%d",&c);

//     fflush(stdin);

//     printf("enter the whether conditions(s for shiny):");
//     scanf("%c",&w);

//     if(amt>=2000)
//     {
//         printf("Now you have proper amount for a movie !!!! \n");
//         scanf("%d",&amt);
//     }

//     else if(b>=2)
//     {
//         printf("Now you have proper number of bike to go fr a movie!!!!!!! \n ");
//         scanf("%d",&b);
//     }

//     else if(c>=1)
//     {
//         printf("Now you have proper number of car \n");
//         scanf("%d",&c);
//     }

//     else if(w=='s')
//     {
//         printf("now you are finally ready \n");
//         scanf("%d",&w);
//     }

//     else
//     {
//         printf("you are not ready for movie.. You cant go!!! :");
//     }
// }

// 3.
// #include<stdio.h>
// int main()
// {
// int age, sal;

//  printf("enter your age :\n");
//  scanf("%d",&age);

//  printf("enter your salary :\n");
//  scanf("%d",&sal);

//  if((age>=31 && age<=40 && sal>=30000) || (age>=41 && age<=50 && sal>=40000) || (age>=20 && age<=30 && sal>=20000))
//  {
//      printf("Congratulations!!!you are now eligible for this loan :");
//  }
//  else
//  {
//      printf("you are not eligible for this loan :");
//  }
// }

// 4.
// int main()
// {
// int per;
// printf("Enter the percentage you got in your RGPV exam :");
// scanf("%d",&per);

// if(per>=80 && per<=100)
//  {
//    printf("Excellent performance!!! you got GRADE  A :");
//  }
// else if(per>=60 && per<=79)
//  {
//    printf("Good!!!! you got GRADE B :");
//  }
// else if(per>=50 && per<=59)
//  {
//    printf("very bad !!!! you got GRADE C :");
//  }
// else if(per>=0 && per<=49)
//  {
//    printf(" FAIL HO GYA/GAI H TU... you got grade D :");
//  }
// }

// question in copy
// #include<stdio.h>
// int main()
// {
//     char c;
//     printf("Enter the character: ");
//     scanf("%c", &c); // c = getchar();
//     if (c >=48 && c<=57 )
//     {
//         printf("%c is a digit", c);
//     }
//     else if(c>=65 && c<=90 || c>=97 || c<=122)
//     {
//         printf("%c is an alphabet", c);
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//         {
//             printf("%c is a vowel",c);
//         }
//         else
//         {
//             printf("%c and it is a consonant",c);
//         }
//    }
//    else  // for special symbols
//    {
//        printf("%c is a special symbol");
//    }
//     return 0;
// }

// NOTE == 'Exit' is a system call

// WAP to input an alphabet and display it is a vowel or consonant using switch case
// #include<stdio.h>
// int main()
// {
//     char alpha;
//     printf("Enter the alphabet: ");
//     scanf("%c", &alpha);
//     switch (alpha)
//     {
//     case 'a':
//         printf("it is a vowel");
//         break;
//     case 'e':
//         printf("it is a vowel");
//         break;
//     case 'i':
//         printf("it is a vowel");
//         break;
//     case 'o':
//         printf("it is a vowel");
//         break;
//     case 'u':
//         printf("it is a vowel");
//         break;

//     default:
//     printf("it is a consonant");

//     }
//     return 0;
// }

// WAP to display that a given number is in the range from 1 to 100 or not

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter your number:");
//     scanf("%d", &a);
//     switch (a>=1 && a<=100)
//     {
//     case 0:printf("it is not in the range");
//     break;
//     case 1:printf("it is in the range");
//         break;
//     }
//     return 0;
// }

// WAP using switch case that given number is a multiple of 5 Or not.
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number :");
//     scanf("%d",&a);
//     switch (a%5)
//     {
//     case 0:
//     printf("%d is a multiple of 5",a);
//         break;
//     default:
//     printf("%d is not a multiple of 5",a);
//         // break;
//     }
//     return 0;
// }

// WAP to ensure that a given  number is a multiple of 5 and 7 using switch
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the  number :");
//     scanf("%d",&a);
//     switch (a%5==0 && a%7==0)
//     {
//     case 0:
//         printf("%d is not a multiple of 5 and 7",a);
//        break;
//        case 1:
//        printf("%d is a multiple of 5 and 7",a);
//        break;
//     }
//     return 0;
// }

// sir's method
// #include<stdio.h>
// int main()
// {

//   return 0;
// }

// WAP to display , a given number is even or odd from 1 to 20 without using modulus and relational operator.
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 9:
//     case 11:
//     case 13:
//     case 15:
//     case 17:
//     case 19:printf("odd");
//     break;
//     case 2:
//     case 4:
//     case 6:
//     case 8:
//     case 10:
//     case 12:
//     case 14:
//     case 16:
//     case 18:
//     case 20:printf("even");
//     break;
//     default:
//     printf("not in the range");
//     }
//     return 0;
// }

// HW// WAP to select a fav colour by pressing the initial alphabet of the colour where the colours are black, blue,pink,yellow and white
//  #include<stdio.h>
//  int main()
//  {
//      char c;
//      printf("Please select your favorite colour :\nPress w. white\nPress B. Black\nPress b. blue\nPress p. Pink\nPress y. Yellow\n");
//      scanf("%c", &c);
//      switch (c)
//      {
//      case 'w':
//          printf("Your favorite colour is white!!\n");
//          break;
//      case 'y':
//          printf("Your favorite colour is yellow\n");
//          break;
//      case 'B':
//          printf("your favorite colour is black");
//          break;
//      case 'b':
//          printf("your favorite colour is blue");
//          break;
//      case 'p':
//          printf("your favorite colour is pink");
//          break;
//      }
//      return 0;
//  }

// Loops 27/12/21
// #include<stdio.h>
// int main(){
//     int i;
//     for ( i = 1; i <=10; i++)
//     {
//         /* code */printf("%d X %d = %d\n",5,i,5*i);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,sum = 0;
//     for ( i = 1; i <= 10; i++)
//     {
//         /* code */sum = sum+i;
//     }
//     printf("sum %d\n",sum);

//     return 0;
// }

// 29/12/21
// #include<stdio.h>
// int main()
// {
//     pic
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int b, p,s=1;
//     printf("enter the base:");
//     scanf("%d",&b);
//     printf("Enter the power: ");
//     scanf("%d", &p);
//     for (int i = 1; i<=p ; i++)
//     {
//         s=s*b;
//     }
//     printf("the value is: %d",s);
//     return 0;
// }                    in pic

// #include<stdio.h>
// int main()
// {
//     int num,i;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     for (i = 0; num != 0; i++)
//     {
//         num = num/10;
//     }
//     printf("number of digits: %d",i);

//     return 0;
// }

// WAP to input random numbers from user until user presses 0 find min, max number among given all numbers
// #include<stdio.h>
// int main()
// {
//     int num, small = 9, large = 0;
//     printf("enter any number: ");
//     scanf("%d",&num);
//     for (;num!=0;num=num/10)
//     {
//         if (num%10>large)
//         {
//             large = num%10;
//         }

//         if (num%10<small)
//         {
//             small = num % 10;
//         }

//     }
//     printf("small digit is %d an large digit is %d",small,large);
//     return 0;
// }
// WAP to find sum of all the digits of a positive integer number
// in pic
// WAP to find largest digit of a postie integer number
// in pic

//====================HAPPY NEW YEAR=======================
//              3/1/22
// WAP to make a menu driven program for a canteen
// #include<stdio.h>
// int main()
// {
//     int ch,q,sum=0;
//     do
//     {
//         printf("\n")
//     } while (/* condition */);

//     return 0;
// }

// 5/1/22
// number is armstrong or not // not working.
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n,b,a=0,count = 0,r;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     b = n;
//     do
//     {
//         n = n/10;
//         count++;

//     } while (n!=0);
//     n = b;
//     do
//     {
//         r = n % 10;
//         a = a + pow(r,count);
//         n = n / 10;
//     }
//     while (n!=0);
//     if (a==b)
//     {
//         printf("the number is an armstrong number.");
//     }
//     else
//     {
//         printf("the number is not an armstrong number!!");
//     }
//     return 0;
// }

// WAP to find factors excluding 1 and number itself using do while
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     i = 2;
//     do
//     {
//         if (n%i ==0)
//         {
//             printf("%d,",i);
//         }
//         i++;

//     } while (i<n);

//     return 0;
// }

// WAP to find sum of n random given numbers by user , sum all the numbers until user presses 0
// #include<stdio.h>
// int main ()
// {
//     int n,sum=0;
//     do
//     {
//         printf("Enter any number: ");
//         scanf("%d",&n);
//         sum = sum + n;
//     } while (n>0);
//     printf("Addition is: %d",sum);
//     return 0;
// }

/* WAP to input numbers ,find sum of them and ensure that if a user input a
negative number it should not be added continue adding all the numbers until user presses 0*/
// #include<stdio.h>
// int main ()
// {
//     int n,sum=0;
//     do
//     {
//         printf("Enter any number: ");
//         scanf("%d",&n);
//         if (n<0)
//         {
//             printf("-ve numbers are not allowed\n");
//             continue;
//         }
//         sum = sum + n;
//     } while (n!=0);
//     printf("Addition is: %d",sum);
//     return 0;
// }

// 7/1/22 question 2
// #include<stdio.h>
// int main()
// {
//     char f,c;
//     printf("enter your fav char:");
//     scanf("%c",&f);
//     while (f)
//     {
//         printf("enter a char:");
//         fflush(stdin);
//         scanf("%c",&c);
//         if (f==c)
//         {
//             printf("char is found");
//             break;
//         }

//     }

//     return 0;
// }

// my try
// #include<stdio.h>
// int main()
// {
//     int a=0,num,n;
//     char f;
//     printf("enter your fav char in the range of a - z:");
//     scanf("%c",&f);
//     while (f)
//         {
//             printf("Enter any number: ");
//             scanf("%d",&num);
//             n = num%26;
//             n = n+97;
//             fflush(stdin);
//             if (f == n)
//             {
//                 printf("char is found");
//                 a = 1;
//             }
//         }

//         return 0;

// }

// sir's logic
// #include<stdio.h>
// int main()
//     {
//         char var;
//         int a = 0,n;
//         var= 'a';
//         int num;
//         while (a==0)
//         {
//             printf("Enter any number: ");
//             scanf("%d",&num);
//             n = num%26;
//             n = n+97;
//             fflush(stdin);
//             if (var == n)
//             {
//                 printf("char is found");
//                 a = 1;
//             }
//         }

//         return 0;
//     }

// WAP to display a fibonacci series upto 100
// #include<stdio.h>
// int main()
// {
//     int a,i,z=0,f=1,s;
//     s = z+f;
//     printf("Enter the number of terms:");
//     scanf("%d",&a);
//     for ( i = 3 ;i<=a; i++)
//     {
//         printf("%d, ",s);
//         z = f;
//         f = s;
//         s = z+f;
//     }

//     return 0;
// }
// 2nd hw in pic

// 10/01/22
// #include<stdio.h>
// int main()
// {
//     int i,n,x,sum = 0;
//     printf("Enter upper limit: ");
//     scanf("%d",&n);
//     printf("Enter any number: ");
//     scanf("%d",&x);
//     i = 1;
//     while (i<=n)
//     {
//         sum = sum + pow(x,i);
//         i++;
//         x--;
//         printf("%d\t",sum);
//     }
//     printf("\n\n%d",sum);
//     return 0;
// }

//
// #include<stdio.h>
// int main()
// {
//     int i,n,x,sum = 0,term1=1;
//     printf("Enter upper limit: ");
//     scanf("%d",&n);
//     printf("Enter any number: ");
//     scanf("%d",&x);
//     i = 1;
//     while (i<=n)
//     {
//         term1=term1*x;
//         i++;
//     }
//     i=1;
//     while (i<=n)
//     {
//         sum = sum + term1;
//         i++;
//         term1 = term1 / x;
//         printf("%d\t",term1);
//     }

//     printf("\n\n%d",sum);
//     return 0;
// }

// 12/01/22
// x^n+x^n+x^n+...........x^n=?
// #include<stdio.h>
// int main()
// {
//     int i,j,p,x,n,sum=0;
//     printf("enter the numbers x,n:");
//     scanf("%d%d",&x,&n);
//     for ( i = 1; i <= n; i++)
//     {
//         p = 1;
//         for ( j = 1; j <= n; j++)
//         {
//             p = p*x;
//         }
//         sum = sum + p;
//     }
//     printf("ans is %d",sum);
//     return 0;
// }

// x^1+x^2+x^3+x^4.........x^n=?
// #include<stdio.h>
// int main()
// {
//     int i,j,p,x,n,sum=0;
//     printf("enter the numbers x,n:");
//     scanf("%d%d",&x,&n);
//     for ( i = 1; i <= n; i++)
//     {
//         p = 1;
//         for ( j = 1; j <= i; j++)
//         {
//             p = p*x;
//         }
//         sum = sum + p;
//     }
//     printf("ans is %d",sum);
//     return 0;
// }

// prime numbers 1 to 100
// #include<stdio.h>
// int main()
// {
//     int num,i,j,count;
//     for (i = 1; i <=100; i++)
//     {
//         count = 0;
//         for(j = 0; j <=i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count++;
//             }

//         }
//         if (count == 2)
//             {
//                 printf("%d\t",i);
//             }

//     }

//     return 0;
// }

// hw
//  factors of numbers from 10 to 20 and exclude prime numbers
//  #include<stdio.h>
//  int main()
//  {
//      int i,j;
//      for ( i = 10; i <= 20; i++)
//      {
//          printf("%d")
//          /* code */
//      }

//     return 0;
// }

// sir's logic
//  #include<stdio.h>
//  int main()
//  {
//      int i,j,count;
//      for(i=10;i<=20;i++)
//      {
//          count = 0;
//          for(j=1;j<=i;j++) // j = 1,2,3,4,5 ... 10
//          {
//              if(i % j == 0)
//              {
//                  count++;
//              }
//          }
//          if(count != 2)
//          {
//              printf("%d = ",i);
//              for(j=2;j<i;j++)
//              {
//                  if(i%j==0)
//                  {
//                      printf("%d\t",j);
//                  }
//              }
//              printf("\n");
//          }
//      }
//      return 0;
//  }

// pattern
// 1.
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 5; j++)
//         {
//             if ((i+j)% 2== 0)
//             {
//                 /* code */printf("*");
//             }
//             else{
//                 printf("#");
//             }

//         }
//         printf("\n");
//     }

//     return 0;
// }

// 2.
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 97; i <= 101; i++)
//     {
//         for ( j = 1; j <=5; j++)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 17/01/22
// // pattern 1
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern 2
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern 3
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 5; i>=1; i--)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern 4
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 5; i >=1; i--)
//     {
//         for ( j = i; j <=5; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// patter 5
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 1; i <=5; i++)
//     {
//         for (j = 5; j >=i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// output
// *****
// ****
// ***
// **
// *

// pattern 6
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 1; i <=5; i++)
//     {
//         for (j = 5; j >=i; j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*--------------------------- HW----------------------------*/
// pattern 8 (a)
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 101; i >=97; i--)
//     {
//         for (j = 97; j <=i; j++)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern 9 (b)
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 5; i >=1; i--)
//     {
//         for (j = 1; j <=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// //

// pattern 10 (c)
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 5; i >=1; i--)
//     {
//         for (j = 1; j <=i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// patter 11(d)
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 97; i <=101; i++)
//     {
//         for (j = 101; j >=i; j--)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern 12 (e,number form)
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 5; i>=1; i--)
//     {
//         for(j=i;j>=1;j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern 13 (e)
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 101; i>=97; i--)
//     {
//         for(j=i;j>=97;j--)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 19/01/22
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//         for (j = 4; j >=i; j--)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
/* output
 *
 **
 ***
 ****
 ***** */

/*--------------------------HW-----------------*/
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//         for (j = 4; j >=i; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <=i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 21/01/22
// pattern
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for (i = 1; i <=5; i++)
//     {
//         for (j = 1; j < i; j++)
//         {
//             printf(" ");

//         }
//         for (j = 5; j >= i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pattern
// #include<stdio.h>
// int main()
// {
//     int i,j,k=1;
//     for (i = 1; i <=5; i++)
//     {
//         for (j = 4; j >=i; j--)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <=k; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         k = k+2;
//     }

//     return 0;
// }
/*    *
 ***
 *****
 *******
 *********
 */

// pattern
//  #include<stdio.h>
//  int main()
//  {
//      int i,j,a,b;
//      a = 0;
//      b = 9;
//      for (i = 1; i <=5; i++)
//      {
//          for (j = 1; j <= a; j++)
//          {
//              printf(" ");
//          }
//          for (j = 1; j <= b; j++)
//          {
//            printf("*");
//          }
//          a = a+1;
//          b = b-2;
//          printf("\n");
//      }

//     return 0;
// }
/* *********
 *******
 *****
 ***
 *
 */

//
// #include<stdio.h>
// int main()
// {
//     int a[10],num,i;
//     printf("Enter values for array: ");
//     for (i = 0; i < count; i++)
//     {
//         /* code */
//     }

//     return 0;
// }

// sorting programs
// #include<stdio.h>
// int main()
// {
//     char a[5];
//     int i;
//     for (i = 0; i <5 ; i++)
//     {
//         printf("Enter the character: ");
//         fflush(stdin);
//         scanf("%c",&a[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%c",i);
//     }

//     return 0;
// }

// N K, [08/04/2022 07:30]
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// // ===================
// typedef struct date
// {
//     int dd;
//     int mm;
//     int yy;
// }date;
// // ===================
// typedef struct library
// {
//     char bid[6];
//     char bname[100];
//     char aname[100];
//     date dop;
//     float price;
// }lib;
// // ===================
// int count;
// lib b[1000];   // global (size 1000)
// // ===================
// void auto_gen_id()
// {
//     int i=4,temp=1001;
//     temp = temp + count;
//     b[count].bid[0]='B';
//     b[count].bid[5]=NULL;
//     while(temp)
//     {
//         b[count].bid[i] = temp % 10 + 48;
//         temp = temp / 10;
//         i--;
//     }
// }
// // ===================
// void disp_temp(lib *b)
// {
//     printf("Book ID: %s\n",b->bid);
//     printf("Book Name: %s\n",b->bname);
//     printf("Book Author name: %s\n",b->aname);
//     printf("Book Price: %f\n",b->price);
//     printf("Date of purchase: %d/%d/%d\n",b->dop.dd,b->dop.mm,b->dop.yy);
// }
// void insert()
// {
//     if(count==1000)
//     {
//         printf("\nSorry no space left !!!!\n");
//     }
//     else
//     {
//         auto_gen_id();
//         printf("\nInsert record\n");
//         printf("Enter book name: ");
//         gets(b[count].bname);
//         printf("Enter book's author name: ");
//         gets(b[count].aname);
//         printf("Enter book's price: ");
//         scanf("%f",&b[count].price);
//         printf("Enter date of purchase: ");
//         scanf("%d%d%d",&b[count].dop.dd,&b[count].dop.mm,&b[count].dop.yy);
//         printf("\nRecord inserted");
//         printf("\n--------------------------\n\n");
//         count++; // ready for next insertion
//     }
// }
// ===================
// void disp()
// {
//     int i;
//     if(count==0)
//     {
//         printf("\nNo book exist\n\n");
//     }
//     else
//     {
//         printf("\n--------------------------\n");
//         printf("\nRecords of all books");
//         for(i=0;i<count;i++)
//         {
//             printf("\n--------------------------\n");
// //            printf("Book ID: %s\n",b[i].bid);
// //            printf("Book Name: %s\n",b[i].bname);
// //            printf("Book Author name: %s\n",b[i].aname);
// //            printf("Book Price: %f\n",b[i].price);
// //            printf("Date of purchase: %d/%d/%d\n",b[i].dop.dd,b[i].dop.mm,b[i].dop.yy);
//             disp_temp(&b[i]);
//             printf("\n--------------------------\n\n");
//         }
//     }
// }
// // ===================
// void search()
// {
//     int i,ch,flag = 0;
//     char str[100];
//     printf("\nPress 1. Search by book name");
//     printf("\nPress 2. Search by book author name");
//     printf("\npress 3. Search by book id");
//     printf("\nEnter your choice: ");
//     scanf("%d",&ch);
//     fflush(stdin);
//     if(ch==1)
//     {
//         printf("\nPls Enter book name: ");
//         gets(str);
//         for(i=0;i<count;i++)
//         {
//             if(!strcmp(str,b[i].bname))
//             {
//                 printf("\n--------------------------\n");
// //                printf("Book ID: %s\n",b[i].bid);
// //                printf("Book Name: %s\n",b[i].bname);
// //                printf("Book Author name: %s\n",b[i].aname);
// //                printf("Book Price: %f\n",b[i].price);
// //                printf("Date of purchase: %d/%d/%d\n",b[i].dop.dd,b[i].dop.mm,b[i].dop.yy);
//                 disp_temp(&b[i]);
//                 printf("\n--------------------------\n");
//                 flag++;
//             }
//         }
//         if(flag == 0)
//         {
//             printf("\nNo such book exist\n");
//         }
//     }
//     else if(ch==2)
//     {
//         printf("\nPls Enter book's author name: ");
//         gets(str);
//         for(i=0;i<count;i++)
//         {
//             if(!strcmp(str,b[i].aname))
//             {
//                 printf("\n--------------------------\n");
// //                printf("Book ID: %s\n",b[i].bid);
// //                printf("Book Name: %s\n",b[i].bname);
// //                printf("Book Author name: %s\n",b[i].aname);
// //                printf("Book Price: %f\n",b[i].price);
// //                printf("Date of purchase: %d/%d/%d\n",b[i].dop.dd,b[i].dop.mm,b[i].dop.yy);
//                 disp_temp(&b[i]);
//                 printf("\n--------------------------\n\n");
//                 flag++;
//             }
//         }

// N K, [08/04/2022 07:30]
// if(flag == 0)
//         {
//             printf("\nNo such book exist\n");
//         }

//     }
//     else if(ch==3)
//     {
//         printf("\nPls Enter book id: ");
//         gets(str);
//         for(i=0;i<count;i++)
//         {
//             if(!strcmp(str,b[i].bid))
//             {
//                 printf("\n--------------------------\n");
// //                printf("Book ID: %s\n",b[i].bid);
// //                printf("Book Name: %s\n",b[i].bname);
// //                printf("Book Author name: %s\n",b[i].aname);
// //                printf("Book Price: %f\n",b[i].price);
// //                printf("Date of purchase: %d/%d/%d\n",b[i].dop.dd,b[i].dop.mm,b[i].dop.yy);
//                 disp_temp(&b[i]);
//                 printf("\n--------------------------\n\n");
//                 flag++;
//                 break;
//             }

//         }
//         if(flag == 0)
//         {
//             printf("\nNo such book exist\n");
//         }
//     }
//     else
//     {
//         printf("\nIncorrect choice\n");
//     }
// }
// //========================
// int main()
// {
//     int n;
//     printf("\t******** Welcome to library management system ********\n\n");
//     while(1)
//     {
//         printf("\nPress 1. Insert new book\n");
//         printf("Press 2. Display all book\n");
//         printf("Press 3. find a book\n");
//         printf("Press 4. Exit from program\n");
//         printf("Pls enter ur choice: ");
//         scanf("%d",&n);
//         fflush(stdin);
//         switch(n)
//         {
//                 case 1: insert();
//                         break;
//                 case 2: disp();
//                         break;
//                 case 3: search();
//                         break;
//                 case 4: printf("\nThanks for using program\n");
//                         printf("Have a nice day ahead .....\n\n");
//                         exit(0);
//                 default: printf("\nIncorrect choice.... try once again\n");
//         }
//     }
// }

// SJF CPU scheduling
// #include<stdio.h>
// #include<stdlib.h>
// # define max 30
// void main()
// {
//     int i,j,n,p[max],bt[max],wt[max],tat[max],t;
//     float avwt=0,avtat=0;
//     printf("Enter number of process: ");
//     scanf("%d",&n);
//     printf("Enter burst time:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("p%d:",i+1);
//         scanf("%d",&bt[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if (bt[j]>bt[j+1])
//             {
//                 t=bt[j];
//                 bt[j]=bt[j+1];
//                 bt[j+1]=t;

//                 t=p[j];
//                 p[j]=p[j+1];
//                 p[j+1]=t;
//             }

//         }
//     }
//     printf("\n process \t burst time \t waiting time \t turn around time\n");
//     for(i=0;i<n;i++)
//     {
//         wt[i]=0;
//         tat[i]=0;
//         for(j=0;j<i;j++)
//         {
//             wt[i]=wt[i]+bt[j];
//         }
//         tat[i]=wt[i]+bt[i];
//         avwt=avwt+wt[i];
//         avtat=avtat+tat[i];
//         printf("\n%d\t %d\t\t %d\t\t %d",i+1,bt[i],wt[i],tat[i]);
//     }
//     avwt=avwt/n;
//     avtat=avtat/n;
//     printf("\n\naverage waiting time: %f",avwt);
//     printf("\n\nAverage turn around time: %f", avtat);

// }

// 27th feb, 23
