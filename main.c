#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include<time.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
COORD coord = {0, 0};
COORD max_res,cursor_size;
void gotoxy (int x, int y)
{
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
     int countr,r,r1,count,i,j;
     float score;
     char choice;
     char playername[20];

     mainhome:
     printf("\n\t\t\t\tICT QUIZ GAME\n");
     j=0;
     gotoxy(20,2);
     while(j<40){
     printf("_");
     delay(50);
     j+=1;
     }
     printf("\n\n\t\t\t\t   WELCOME ");
     delay(30);
     printf("\n\t\t\t\t      to ");
     delay(30);
     printf("\n\t\t\t\t   THE GAME ");
     delay(30);
     j=0;
     gotoxy(20,7);
     while(j<40){
     printf("_");
     delay(50);
     j+=1;
     }
     j=0;
     gotoxy(20,8);
     while(j<40){
     printf("_");
     delay(50);
     j+=1;
     }
     printf("\n\n\t\t > Press S to start the game");
     delay(30);
     printf("\n\t\t > Press V to view the highest score  ");
     delay(30);
     printf("\n\t\t > Press R to reset score");
     delay(30);
     printf("\n\t\t > press H for help            ");
     delay(30);
     printf("\n\t\t > press Q to quit             ");
     delay(30);
     j=0;
     gotoxy(20,15);
     while(j<40){
     printf("_");
     delay(50);
     j+=1;
     }
 choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
    system("cls");
	goto mainhome;
	}
     else if (choice=='H')
	{
    help();
	getch();
	system("cls");
	goto mainhome;
	}
	else if (choice=='R')
	{
    reset_score();
	getch();
	system("cls");
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    gets(playername);


    system("cls");
    printf("\n ------------------  Welcome %s to ICT  Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might want to know before playing:");
    j=0;
    gotoxy(0,5);
    while(j<73){
    printf("-");
    delay(5);
    j+=1;
    }
    printf("\n >> There are 2 rounds in this Quiz Game,FIRST ROUND & SECOND ROUND");delay(10);
    printf("\n >> In FIRST round you will be asked a total of 5 questions to test your");
    printf("\n    general ICT knowledge.right answers, otherwise you can't proceed ");
    printf("\n    further to the SECOND ROUND.");delay(10);
    printf("\n >> Your game starts with SECOND ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be get 100,000! Marks");delay(10);
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");delay(10);
    printf("\n >> You will be asked questions continuously, till right answers are given");delay(10);
    printf("\n >> No negative marking for wrong answers!");delay(10);
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");delay(10);
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
       system("cls");
       goto mainhome;
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=6;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\n1. Who proposed the stored program concept first?");
		printf("\n\nA.Charles Babbage\t\tB.Howard Aiken\n\nC.Von Neumann\t\t\tD.Blaise Pascal");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			    count++;
			    getch();
			    break;
            }
		else
		       {
               printf("\n\nWrong!!! The correct answer is C.Von Neumann");
               getch();
		       break;
		       }

        case 2:
		printf("\n\n\n2. Which of the following components is generally seen outside the Central Processing Unit (CPU) of a computer?");
		printf("\n\nA.Ll cache memory\t\tB.Control Unit\n\nC.ALU\t\t\t\tD.RAM");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			count++;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is D.RAM");
            getch();
            break;}

        case 3:
		printf("\n\n\n3. Which of the followings is usually used to boot-up personal computers?");
		printf("\n\nA.Malware\t\tB.Firmware\n\nC.Ransomware\t\tD.Liveware");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");
			count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Firmware");
		       getch();
		       break;}

        case 4:
		printf("\n\n\n4. What is the two's complement representation of 45, if an integer is represented by 8 bits?");
		printf("\n\nA.0010110\t\tB.00101111\n\nC.10101100\t\tD.11111111");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			 count++;
			 getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.0010110");
		       getch();
		       break;}

        case 5:
        printf("\n\n\n5. Which of the following secondary storage devices is generally considered to provide the fastest access to data?");
        printf("\n\nA.CD\t\tB.Internal hard disk\n\nC.DVD\t\tD.Blue-ray");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");
               count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Internal hard disk");
		       getch();
		       break;}
    }

}
    if(count>=3)
	{
	    goto test;
	}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU HAVE NOT ENOUGH MARKS TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	system("cls");
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press P to Start the Game!");
     if(toupper(getch())=='p')
		{
        goto game;
        }
     game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n1.In the OSI reference model, the network layer is responsible for..................... communication");
		printf("\n\nA.source to destination\t\tB.source to source\n\nC.hop to hop\t\t\tD.node to node");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
			countr++;
			getch();
            break;
            }
		else
		       {
               printf("\n\nWrong!!! The correct answer is A.source to destination");
		       getch();

		       break;}

		case 2:
		printf("\n\n\n2.Which of the following indicates the number of host bits and the number of IP addresses respectively in a class C network?");
		printf("\n\nA.8 and 65536\t\tB.8 to 256\n\nC.8 to 16\t\tD.256 to 8");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			 break;}
		else
		       {
               printf("\n\nWrong!!! The correct answer is B.8 to 256");
		       getch();

		       break;
		       }

        case 3:
		printf("\n\n\n3.To which of the following network classes does the IP address 192.248.254.1 belong? ");
		printf("\n\nA.A class\t\tB.D class\n\nC.B class\t\tD.C class");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.C class");
		       getch();
		       break;}

        case 4:
		printf("\n\n\n4.In the OSI reference model, A protocol data unit of the network layer referred to as a .............");
		printf("\n\nA.Frame\t\tB.Message\n\nC.Packet\tD.Segment");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;
			 getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.Packet");getch();

		       break;
		       }

        case 5:
		printf("\n\n\n5. Which is the following correct HTML statement for inserting a image");
		printf("\n\nA.<img src='picture.jpg'>\t\tB.<img href='picture.jpg'>\n\nC.<image src='picture.jpg'>\t\tD.<img alt='picture.jpg'>");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			    break;
            }
		else
		       {
               printf("\n\nWrong!!! The correct answer is A.<img src='picture.jpg'>");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\n6.What is the value of the following Python expression(5**2)/3?");
		printf("\n\nA.8.33\t\tB.3.33\n\nC.2\t\tD.error");
		if (toupper(getch())=='A' )
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			 break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.8.33");
                   getch();
                    break;
               }
        case 7:
		printf("\n\n\n7.Which of the followings is another name for web publishing?");
		printf("\n\nA.Offline publishing\t\tB.Desktop publishing\n\nC.Media publishing\t\tD.Online publishing");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.Online publishing");
                getch();
		       break;}

        case 8:
		printf("\n\n\n8.What is the binary representation of 9.251");
		printf("\n\nA.00111001.01\t\tB.00001011.11\n\nC.00001001.01\t\tD.00001111.10");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			    break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer isC.00001001.01");
		           getch();
                   break;
                }

        case 9:
		printf("\n\n\n9.Which of the following CSS rules renders the image in the file 'country.png' as the background of a web page?");
		printf("\n\nA.body{background='country.png'}\t\tB.body{background:'country.png'}\n\nC.body{background-url='country.png'}\t\tD.body{background:url('country.png')}");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			    countr++;
			    getch();
			break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.body{background:url('country.png')");
		           getch();

		       break;}

        case 10:
		printf("\n\n\n10.Which of the following organs is a part of a closed system of the human body?");
		printf("\n\nA.Ear\t\tB.Eye\n\nC.Heart\t\tD.Kidney");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.Heart");
                getch();
                break;
                }

}
}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You got %.2f Marks",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");

	    printf("\n\t\t You got %.2f Marks",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T GOT ANY MARKS********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}

void help()
	{system("cls");
	printf("\n -------------------------------------------------------------------------");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... ICT Quiz Game...........");
    printf("\n >> There are two rounds in the game, FIRST ROUND & SECOND ROUND");
    printf("\n >> In first round you will be asked a total of 5 questions to test your general");
    printf("\n    ICT knowledge. You will be eligible to play the game if you can give at least 3");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the SECOND ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be get 100,000 Marks.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****ICT QUIZ GAME is developed by CODE WITH Nipun Madhusanka********");}



