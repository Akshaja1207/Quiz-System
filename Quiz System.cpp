#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("Quiz Marks.txt","r");
 fscanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }
void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. Your score will be calculated at the");
 printf("\n\n\tend. Remember that the more quicker you give answer the more");
 printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }

void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
    
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO TEST IN PROGRAMMING LANGUAGE \n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to Start Game       ");
     puts("\n\t\t Enter 'V' to View High Score  ");
     puts("\n\t\t Enter 'H' for Help            ");
     puts("\n\t\t Enter 'Q' to Quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your Name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
	 i=1;
     start:
     srand ( time(NULL) );	
     r=rand()%30+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nIf (a>b)\n  m=k; \n else  /n  m=n;"); 
  printf("\n What will be the equivalent conditional statement ?");
  printf("\n\n A . a=a>b?k,n;\n\n B . b=a>b?n,k;\n\n C . m=a>b?n,k;\n\n D . m=a>b?k:n; \n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . m=a>b?k:n;");break;}

  case 2:
  printf("\n\n\nWhich math function is used for calculating power of a number? ");
  printf("\n\n A . power()\n\n B . pow()\n\n C . sqrt\t\t D . powr()\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is B . pow()");
  break;

  case 3:
  printf("\n\n\nWhat type conversion process is used when you store an integer value to a double type variable ?");
  printf("\n\n A . Explict Conversion\n\n B . Mixed Conversion\n\n C . Implicit Conversion\n\n D . None of the above\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . Implicit Conversion");break;}


  case 4:
  printf("\n\n\nWhat is the ceiling value of 10000.224?");
  printf("\n\n A . 10001.0\n\n B . 10000.225\n\n C . 10001\n\n D . 10000\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A . 10001.0");break;}


  case 5:
  printf("\n\n\nWhat is a Variable ?");
  printf("\n\n A . Named data\n\n B . Named container of data\n\n C . A value that changes\n\n D . None of the above\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . Named container of data");break;}

  case 6:
  printf("\n\n\nWhich process does not require two matrices as input?");
  printf("\n\n A . Matrix addition\n\n B . Matrix Multiplication\n\n C . Matrix Subtraction\n\n D . Matrix Transposition\n\n");
  countq++;
  if (toupper(getch())=='D' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . Matrix Transposition");break;}


  case 7:
  printf("\n\n\nStdin,Stdout and sterr does not stand for one of the following ?");
  printf("\n\n A . Keyboard\n\n B . Mouse\n\n C . Console\n\n D . Monitor\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . Mouse");break;}


  case 8:
  printf("\n\n\n Stdin,stdout and stderr is a part of :");
  printf("\n\n A . Stdlib.h\n\n B . Stdio.h\n\n C . math.h\n\n D . ctype.h\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . Stdio.h");break;}


  case 9:
  printf("\n\n\nFunctions included in ctype.h is used primarily for :");
  printf("\n\n A . Checking inputs in a character\n\n B . Checking inputs in a string\n\n C . Checking inputs in number\n\n D . Checking inputs in Boolean Values\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A . Checking inputs in a character");break;}


  case 10:
  printf("\n\n\nWhat does C standard library does not contain?");
  printf("\n\n A . Macro\n\n B . Header Files\n\n C . Classes\n\n D . Library Functions\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . Classes");break;}


  case 11:
  printf("\n\n\nWhich of the following is not a user defined data type?");
  printf("\n\n A . Array\n\n B . Structure\n\n C . Union\n\n D . Enum\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A . Array");break;}

  case 12:
  printf("\n\n\nWhat is not included in function prototype?");
  printf("\n\n A . Formal parameter\n\n B . Return type\n\n C . Input data type\n\n D . Actual parameters\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . Actual parameters");break;}

  case 13:
  printf("\n\n\nThe attributes and behaviours of one or more classes are shared by objects of other classes");
  printf("\n\n A . Polymorphism\n\n B . Abstraction\n\n C . Encapsulation\n\n D . Inheritance\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . Inheritance");break;}

  case 14:
  printf("\n\n\nWhat is the data type that stores Boolean values ?");
  printf("\n\n A . int\n\n B . bool\n\n C . char\n\n D . None of the above\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . bool");break;}

  case 15:
  printf("\n\n\nWhich of the header cannot be used in c++ ?");
  printf("\n\n A . iostream\n\n B . stdlib.h\n\n C . stdio.h\n\n D . String.h\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . stdlib.h");break;}

  case 16:
  printf("\n\n\nPick the wrong statement?");
  printf("\n\n A . A class is a blue print\n\n B . A class is object factory\n\n C . A class is an object\n\n D . A class is user defined data type\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . A class is an object");break;}


  case 17:
  printf("\n\n\nWhich concept can be implemented using private access ?");
  printf("\n\n A . Abstraction\n\n B . Encapsulation\n\n C . Data Hiding\n\n D . Inheritance\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . Data Hiding");break;}

  case 18:
  printf("\n\n\nWhich data type is class?");
  printf("\n\n A . complex type\n\n B . Fundamental type\n\n C . Primitive type\n\n D . User defined type\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . User defined");break;}

  case 19:
  printf("\n\n\nWhen a method of a base class is redefined in its derived class, the process is known as ?");
  printf("\n\n A . Overloading\n\n B . Overriding\n\n C . Redefinition\n\n D . Dynamic Linking\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . Overriding");break;}

  case 20:
  printf("\n\n\nWhich of the following is not a valid clause used in exception block?");
  printf("\n\n A . Try\n\n B . Catch\n\n C . Default\n\n D . Throw\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . Default");break;}

  case 21:
  printf("\n\n\nWhich of the following header is not a part of C++ library?");
  printf("\n\n A . <iostream>\n\n B . <fstream>\n\n C . <ifstream>\n\n D . <ios>\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . <ifstream>");break;}

  case 22:
  printf("\n\n\nIn case of inheritance, what is shared between the Base class and Derived class?");
  printf("\n\n A . Data and Variable\n\n B . Methods and functions\n\n C . Data and Methods\n\n D . None of the above\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . Data and Methods");break;}

  case 23:
  printf("\n\n\nWhat makes a class abstract?");
  printf("\n\n A . Uninitialized Data\n\n B . Virtual Methods\n\n C . Concrete Methods\n\n D . Arrays\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B . Virtual Methods");break;}
         
  case 24:
  printf("\n\n\nNamespaces allow you to:");
  printf("\n\n A . Declare many Variables and methods.\n\n B . Declare many Variable and methods with same name");
  printf("\n\n C . Declare many Variables and methods with same name under Separate namespace\n\n D . Declare many namespaces with same name\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . Declare many Variables and methods with same name under Separate namespace");break;}

  case 25:
  printf("\n\n\nWhich of the classes is not valid in C++?");
  printf("\n\n A . fstream\n\n B . ifstream\n\n C . ofstream\n\n D . stream\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . Stream");break;}  
         
  case 26:
  printf("\n\n\nThe length of a string may be calculated with one of the following functions.");
  printf("Identify the same ?");
  printf("\n\n A . strlen()\n\n B . strcat()\n\n C . strcpy()\n\n D . strchr()\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A . strlen()");break;}
		 
  case 27:
  printf("\n\n\nWhich of the classes does not belongs to 'fstream'?");
  printf("\n\n A . fstream\n\n B . ifstream\n\n C . ofstream\n\n D . file stream\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . file stream");break;}  
  
  case 28:
  printf("\n\n\nWhich is not a valid section in an exception block?");
  printf("\n\n A . try\n\n B . catch\n\n C . finally\n\n D . throw\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C . finally");break;}  
         
  case 29:
  printf("\n\n\nWhich variable represents user input from the Keyboard?");
  printf("\n\n A . Clog\n\n B . Cerr\n\n C . Cout\n\n D . Cin\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D . Cin");break;}
		 
 case 30:
  printf("\n\n\nWhich of the below functions is used for dynamic allocation of memory in C language?");
  printf("\n\n A . malloc()\n\n B . calloc()\n\n C . free()\n\n D . None of the above\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A . malloc()");break;}  		 
		        
				  
  }
 i++;
 if (i<=10) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN Programming Language,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }
 return 0;
}

