#include<stdio.h>
void main()
{
 int i,n=0,amount=0,m,x=0,y=0;
 printf("Welcome to the game KAUN BANEGA CROREPATI\n\nIt contains 14 QUESTIONS starting from Rs.5,000 reaching till Rs.7,00,00,000.\n\nYou have 2 lifelines : 50:50(two options will be filtered) and double-dip(you can make choice two times).\nYou can quit anytime by typing '0' but you can't quit once you activate double-dip.\nTo activate 50:50 lifeline,type '5050'; for double-dip, type '22'.\n\n");
 printf("Prizes:\n 14\t7CRORE\n 13\t3CRORE\n 12\t1CRORE\n 11\t50,00,000\n 10\t25,00,000\n 9\t12,50,000\n 8\t6,40,000\n 7\t3,20,000\n 6\t1,60,000\n 5\t80,000\n 4\t40,000\n 3\t20,000\n 2\t10,000\n 1\t5,000\n\n");
 printf("Select your checkpoint question (that will guarantee some winnings if correct). If your answer gets wrong you will get this selected prize. If you haven't reached this question and give wrong answer you will be left with no winnings.\n\n");
 printf("Checkpoint Question:");
 scanf("%d",&m);
 for(i=1;i<=14;i++)
 {
  n=0;
  switch(i)
  {
      
  case 1:
   printf("Q1. A computer cannot boot if it does not have the _____ :\n\t1. Compiler \t2. Loader \t3. Operating system \t4. Assembler\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=5000;
   }
   if(n==3)
   {  
     printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
   }
   
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.0");
       i=15;
   }
   
   else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t2. Loader \t3. Operating system\n");
       scanf("%d",&n);
        if(n==3)
         {  
            printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.0");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==3)
           {  
             printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==3)
               {  
                 printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.5000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }

   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 2:
    printf("Q2. Microsoft Office is an example of a:\n\t1. Closed source software \t2. Open source software \t3. Horizontal market software \t4. Vertical market software\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=10000;
   }
   if(n==3)
   {  
     printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
   }
   
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.5000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t2. Open source software \t3. Horizontal market software\n");
       scanf("%d",&n);
        if(n==3)
         {  
            printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.5000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
       
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=1;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==3)
           {  
             printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer.\n");
             scanf("%d",&n);
             if(n==3)
               {  
                 printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer.\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.10000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=1;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 3:
   printf("Q3. Junk e-mail is also called ______:\n\t1. Spam \t2. Spoof \t3. Sniffer script \t4. Spool\n");
    scanf("%d",&n);
   if(i==m)
   {
       amount=20000;
   }
   if(n==1)
   {  
     printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.10000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. Spam \t2. Spoof\n");
       scanf("%d",&n);
        if(n==1)
         {  
            printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.10000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=2;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==1)
           {  
             printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==1)
               {  
                 printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==1)
                   {  
                     printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==1)
                           {  
                             printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==1)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==1)
                   {  
                     printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==1)
                           {  
                             printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==1)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.20000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=2;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 4:
   printf("Q4. Which of the following is a popular programming language for developing multimedia webpages:\n1. COBOL \t2. Java \t3. BASIC \t4. Assembler\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=40000;
   }
   if(n==2)
   {  
     printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.20000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. COBOL \t2. Java\n");
       scanf("%d",&n);
        if(n==2)
         {  
            printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.20000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=3;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==2)
           {  
             printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
           }
        else if(n==2)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==2)
               {  
                 printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==2)
                   {  
                     printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==2)
                           {  
                             printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==2)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==2)
                   {  
                     printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==2)
                           {  
                             printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==2)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.40000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=3;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 5:
   printf("Q5. In MICR, C stands for:\n\t1. Code \t2. Colour \t3. Computer \t4. Character\n");
   scanf("%d",&n);
    if(i==m)
   {
       amount=80000;
   }
   if(n==4)
   {  
     printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.40000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. Code \t4. Character\n");
       scanf("%d",&n);
        if(n==4)
         {  
            printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.40000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=4;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==4)
           {  
             printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==4)
               {  
                 printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.80000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("you have already used double-dip liifeline\n");
       i=4;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 6:
   printf("Q6. Which of the following refers to a small, single-site network:\n\t1. LAN \t2. DSL \t3. RAM\t4. USB\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=160000;
   }
   if(n==1)
   {  
     printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.80000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. LAN \t2. DSL\n");
       scanf("%d",&n);
        if(n==1)
         {  
            printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.80000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
       
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=5;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==1)
           {  
             printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==1)
               {  
                 printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==1)
                   {  
                     printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==1)
                           {  
                             printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==1)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==1)
                   {  
                     printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==1)
                           {  
                             printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==1)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.160000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("you have already used double-dip liifeline\n");
       i=5;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 7:
   printf("Q7. All of the logic and mathematical calculations done by the computer happen in/ on the:\n\t1. system board \t2. central control unit \t3. central processing unit \t4. mother board\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=320000;
   }
   if(n==3)
   {  
     printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.160000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t3. central processing unit \t4. motherboard\n");
       scanf("%d",&n);
        if(n==3)
         {  
            printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.160000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
       
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=6;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==3)
           {  
             printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==3)
               {  
                 printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.320000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=6;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 8:
   printf("Q8. Which of the following is an example of an optical disk:\n\t1. Digital versatile disks \t2. Magnetic disks \t3. Memory disks \t4. Data bus disks\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=640000;
   }
   if(n==1)
   {  
     printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.320000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. Digital versatile disks \t3.Memory disks\n");
       scanf("%d",&n);
        if(n==1)
         {  
            printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.320000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=7;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==1)
           {  
             printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==1)
               {  
                 printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==1)
                   {  
                     printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==1)
                           {  
                             printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==1)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==1)
                   {  
                     printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==1)
                           {  
                             printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==1)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.640000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=7;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 9:
   printf("Q9. The process of preparing a floppy disk for use is called:\n\t1. assembling \t2. translating \t3. parsing \t4. formatting\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=1250000;
   }
   if(n==4)
   {  
     printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.640000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. assembling \t4. formatting\n");
       scanf("%d",&n);
        if(n==4)
         {  
            printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.640000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=8;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==4)
           {  
             printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==4)
               {  
                 printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.1250000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("you have already used double-dip liifeline\n");
       i=8;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
  case 10:
   printf("Q10. The First Mechanical Computer Designed by Charles Babbage was called:\n\t1. Super Computer \t2. Abacus \t3. Calculator	\t4. Analytical Engine\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=2500000;
   }
   if(n==4)
   {  
     printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.1250000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t3. Calculator \t4. Analytical Engine\n");
       scanf("%d",&n);
        if(n==4)
         {  
            printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.1250000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=9;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==4)
           {  
             printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==4)
               {  
                 printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.2500000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=9;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
   case 11:
   printf("Q11. The instructions for starting the computer are housed in:\n\t1. RAM \t2. CD-ROM \t3. ROM Chip \t4. None of these\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=5000000;
   }
   if(n==3)
   {  
     printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
   }
   else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.2500000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t1. RAM \t4. ROM chip\n");
       scanf("%d",&n);
        if(n==3)
         {  
            printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.2500000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=10;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==3)
           {  
             printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==3)
               {  
                 printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.5000000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=10;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
   case 12:
   printf("Q12. The _____ controls communications for the entire computer system:\n\t1. arithmetic-logic unit \t2. semiconductor \t3. motherboard \t4. coprocessor\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=10000000;
   }
   if(n==3)
   {  
     printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
   }
   
    else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.5000000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t3. motherboard \t4. coprocessor\n");
       scanf("%d",&n);
        if(n==3)
         {  
            printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.5000000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=11;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==3)
           {  
             printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==3)
               {  
                 printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.10000000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=11;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
   case 13:
   printf("Q13. The unit MIPS is used to measure the speed of:\n\t1. Disk drive \t2. Tape drive \t3. Printer \t4. Processor\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=30000000;
   }
   if(n==4)
   {  
     printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Last Question is:\n");
   }
   
    else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.10000000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t3. Tape drive \t4. Processor\n");
       scanf("%d",&n);
        if(n==4)
         {  
            printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.10000000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=12;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==4)
           {  
             printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==4)
               {  
                 printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==4)
                   {  
                     printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==4)
                           {  
                             printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==4)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.30000000.\n\nYour Next Question is:\n");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=12;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
   
   case 14:
   printf("Q14. Which motherboard form factor uses one 20 pin connector:\n\t1. Baby AT \t2. AT \t3. ATX \t4. ATS\n");
   scanf("%d",&n);
   if(i==m)
   {
       amount=70000000;
   }
   if(n==3)
   {  
     printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
   }
   
    else if(n==0)
   {
       printf("Thanks for playing the game. You have won Rs.30000000");
       i=15;
   }
   
    else if(n==5050 && x==0)                         //50:50 lifeline
   {
       x++;
       printf("50:50 lifeline is activated..\nTwo options left are:\n\t2. AT \t3. ATX\n");
       scanf("%d",&n);
        if(n==3)
         {  
            printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
         }
         else if(n==0)
          {
             printf("Thanks for playing the game. You have won Rs.30000000");
             i=15;
          }
          else
           {
              if(i<=m)
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
              else
              printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
             i=15;
           }
   }
   
   else if(n==5050 && x!=0)
   {
       printf("You have already used 50:50 liifeline.\n");
       i=13;
       continue;
   }
   
   else if(n==22 && y==0)                         //Double-dip lifeline
   {
       y++;
       printf("Double-dip lifeline is activated..\nMake your first choice:\n");
       scanf("%d",&n);
        if(n==3)
           {  
             printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
           }
        else if(n==0)
           {
             printf("You can't quit now. Enter your answer:\n");
             scanf("%d",&n);
             if(n==3)
               {  
                 printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
               }
               else
               {
                   printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
               }
           }
           else
           {
                printf("You have last chance:\n");
                   scanf("%d",&n);
                   if(n==3)
                   {  
                     printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
                   }
                   else if(n==0)
                       {
                           printf("You can't quit now. Enter your answer:\n");
                           scanf("%d",&n);
                           if(n==3)
                           {  
                             printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
                           }
                           else
                           {
                               printf("You have last chance:\n");
                               scanf("%d",&n);
                               if(n==3)
                               {  
                                 printf("You have entered the correct answer. You have won Rs.70000000.\n\nCONGRATULATIONS");
                               }
                               else
                               {
                                   if(i<=m)
                                   printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                                   else
                                printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                                i=15;
                               }
                           }
                       }
                   else
                   {
                       if(i<=m)
                       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
                       else
                    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
                    i=15;
                   }
           }
   }
   
   else if(n==22 && y!=0)
   {
       printf("You have already used double-dip liifeline.\n");
       i=13;
       continue;
   }
   
   else
   {
       if(i<=m)
       printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.0");
       else
    printf("You have entered the wrong answer. Better Luck Next Time. You have earned Rs.%d",amount);
    i=15;
   }
   break;
   
  default:
   break;
   }
   }
   }