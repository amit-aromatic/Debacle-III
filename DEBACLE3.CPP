// note: window => cprintf. using window is necessary because otherwise
// topline is blurred

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
#include<process.h>
#include<stdlib.h>
#include"graphics.cpp"

void main()
{
 FILE *track,*track2;
 //FILE *fp;                  // fp was used for debugging purpose
 char ch,topline[81],custom[20];
 int j,k,trackchoice,carx,move,gear;
 unsigned long i;
 float speed,damage,score;

 _setcursortype(_NOCURSOR);

////////////////////////////// input ///////////////////////////////////////
 clrscr();
 cout<<"\n\n\n				I M P O R T A N T\n\n\n\n		Press alt+<enter> to maximize.\n\n\nThen press any key to continue...";
 getch();

 textcolor(LIGHTCYAN);
 clrscr();
 cout<<"\n\n\n\n			DEBACLE III	 Preproduction";
 textcolor(LIGHTRED);
 cprintf("\n\n\n\rControls:\n\n\r          KEY                              PURPOSE \n\n");
 textcolor(LIGHTGRAY);
 cprintf("\n\r Left  Arrow        or        1 :       Left");
 cprintf("\n\r Right Arrow        or        2 :      Right \n\n");
 cprintf("\n\r                              Z :      Gear 1");
 cprintf("\n\r                              X :      Gear 2");
 cprintf("\n\r                              C :      Gear 3");
 cprintf("\n\r                              V :      Gear 4");
 cprintf("\n\r                              B :      Gear 5");
 cprintf("\n\n\n\rPress any key to continue...");
 textbackground(BLUE);
 textcolor(YELLOW);
 window(52,12,76,20); clrscr(); cprintf("\n C H E A T K E Y S\n\n\r ( Press during game )\n\n\r"); textcolor(LIGHTGREEN); cprintf("  - : HALF  SPEED\n\n\r  + : DOUBLE SPEED");
 textbackground(BLACK);
 textcolor(LIGHTGREEN);
 hscroll2("***  CREATED BY AMIT BHOLA  ***  CREDITS :   ADITYA SHARMA, RAHUL BHOLA AND MANYA  ***  CONTACT :  amit_aromatic@yahoo.com  ***",2,20,40,1,0.3);
 textcolor(WHITE);
 getch();

 choseagain:

 clrscr();
 textcolor(LIGHTCYAN);
 cprintf("\n\n\r       Chose TRACK\n\n\n\r");
 textcolor(YELLOW);
 cprintf("  Press  corresponding  number  key  to  select  track :\n\n\n\r");
 textcolor(WHITE);
 cout<<"       1 : Cross Country                    ( r1.txt )\n\n"
     <<"       2 : Getting Late for College         ( r2.txt )\n\n"
     <<"       3 : To the CENTER-GALACTICA          ( r3.txt )\n\n"
     <<"       4 : Custom                           ( i.e. You enter the filename )\n\n"
     <<"       5 : Play a random track        	    ( a track named random.txt \n                                              will be created )\n\n";

 trackchoice=getche();

 ////////////////////////// initialisation ////////////////////////////////

 for(i=0;i<81;i++) topline[i]=' ';

 i=0;
 carx=40;
 speed=1.1;
 gear=1;
 damage=0;
 score=0;
 ///////////////////////////////////////////////////////////////////////////
 switch(trackchoice)
  {
   case '1':
    track=fopen("r1.txt","r");
    track2=fopen("r1.txt","r");
    if(track==NULL) { cout<<"\n\nFile r1.txt not found !           Press any key to exit"; getch(); exit(0); }
    break;
   case '2':
    track=fopen("r2.txt","r");
    track2=fopen("r2.txt","r");
    if(track==NULL) { cout<<"\n\nFile r2.txt not found !           Press any key to exit"; getch(); exit(0); }
    clrscr();
    cout<<"\n\n		        TIME    :         8:00   a.m. \n                  ( amit is sleeping )\n";
    //waitp(2);
    cout<<"\n\n		Beep beep  ...   Beep beep....\n\n";
    //wait();
    cout<<"<<<<<<<<<<       SMS   from class representative     SINGLA    >>>>>>>>>>\n";
    hline();cout<<endl;
    cout<<" 	Hi all.. as decided yasterday,  today is a FULL DAY CUT.\n\n"
	<<"     So please.. no need to come to college...\n\n"
	<<"     Only Gaurav Puri will go to clg but he'll not attend any classes...\n"
	<<"     Nobody else should come... ENJOY !!!\n\n\n\nPress any key to continue...";
    getch();
    clrscr();
    cout<<"\n\n		        TIME    :         9:05   a.m. \n                ( amit is brushing his teeth )\n";
    //waitp(2);
    cout<<"\n\n		Beep beep  ...   Beep beep....\n\n";
    //wait();
    cout<<"<<<<<<<<<<       SMS   from class representative     SINGLA    >>>>>>>>>>\n";
    hline();cout<<endl;
    cout<<"     CUT SUCCESSFUL !!!\n\n"
	<<"     ENJOY !!!.... Have a nice day..\n\n\n\nPress any key to continue...";
    getch();
    clrscr();
    cout<<"\n\n		        TIME    :         9:45   a.m. \n              ( after having breakfast, amit is preparing to sleep )\n";
    //waitp(2);
    cout<<"\n\n		Beep beep  ...   Beep beep....\n\n";
    //wait();
    cout<<"<<<<<<<<<<       SMS   from class representative     SINGLA    >>>>>>>>>>\n";
    hline();cout<<endl;
    cout<<"     !!! EMERGENCY !!!\n\n"
	<<"     H.O.D. called... Was  dead angry....\n\n"
	<<"     Reach clg by 10 a.m.\n\n\n\n( Normally amit takes 20 minutes to reach clg.. )\n\n\n\nPress any key to continue...";
    getch();
    break;
   case '3':
    track=fopen("r3.txt","r");
    track2=fopen("r3.txt","r");
    if(track==NULL) { cout<<"\n\nFile r3.txt not found !           Press any key to exit"; getch(); exit(0); }
    break;
   case '4':
    cout<<"\n\nEnter filename : ";
    cin>>custom;
    track=fopen(custom,"r");
    track2=fopen(custom,"r");
    if(track==NULL) { cout<<"\n\nFile "<<custom<<" not found !           Press any key to exit"; getch(); exit(0); }
    break;
   case '5':
     FILE *ran;
     randomize();
     ran=fopen("random.txt","w");
     for (int i2=0;i2<10;i2++)
      {
       fprintf(ran,"+                                                                              +\n");
      }
     for ( i2=0;i2<900;i2++)
      {
       fprintf(ran,"+");
	for(int j2=1;j2<=78;j2++)
	 {
	  int r= random(173);

	     if (r==1) { fprintf(ran,"/"); }
		else if (r==3) { fprintf(ran,"*"); }
		else if (r==5) { fprintf(ran,"-"); }
		else if (r==7) { fprintf(ran,"+"); }

	     else fprintf(ran," ");
	 }
       fprintf(ran,"+\n");
      }
     for ( i2=0;i2<10;i2++)
      {
       fprintf(ran,"+                                                                              +\n");
      }
     fprintf(ran,  "/////////////////////////////// FINISH /////////////////////////////////////////");
     fclose(ran);

    track=fopen("random.txt","r");
    track2=fopen("random.txt","r");
    break;
   default:
    goto choseagain;
  }

 clrscr();

 //fp=fopen("gotoxy.txt","w");


////////////////////////////// game ///////////////////////////////////////

 while(!feof(track))
  {
   i++;
   textcolor(GREEN);
   textbackground(DARKGRAY);
   fscanf(track,"%c",&ch);
   if(ch=='\n');
   else
    {
     if(ch=='+')
       cprintf("Û");
     else if(ch=='*')
       {
	textcolor(RED);
	cprintf("Û");
	textcolor(GREEN);
       }
     else if(ch=='/')
       {
	textcolor(BROWN);
	cprintf("Û");
	textcolor(GREEN);
       }
     else if(ch=='-')
       {
	textcolor(BLUE);
	cprintf("Û");
	textcolor(GREEN);
       }
     else
       cprintf("%c",ch);
    }

   if((i>80*22) && i%81==1)
     { fscanf(track2," %[^\n]",topline); /*fprintf(fp,"%s\n",topline);*/ }

	 j=wherex(); k=wherey();

   if(kbhit())
    {
     move=getkey();
     switch(move)
      {
       case 331:
       case '1':
	 if(i>80*22 && carx!=1) carx--;
	 break;
       case 333:
       case '2':
	 if(i>80*22 && carx!=79) carx++;
	 break;
       case 'z':
       case 'Z':
	 gear=1;
	 break;
       case 'x':
       case 'X':
	 gear=2;
	 break;
       case 'c':
       case 'C':
	 gear=3;
	 break;
       case 'v':
       case 'V':
	 gear=4;
	 break;
       case 'b':
       case 'B':
	 gear=5;
	 break;
       case '-':
	 speed=speed*2;
	 break;
       case '+':
	 speed=speed*0.5;
	 break;
       default:
	 ;
      }
    }
   if(i%81==0) waitp(speed/(gear*5));

   textcolor(LIGHTCYAN);
   if(topline[carx-1]!=' ' || topline[carx]!=' ' )
	{
	  gotoxy(carx,1); cprintf("00"); damage+=0.1; score-=0.05;
	  if(topline[carx-1]=='-' || topline[carx]=='-' )
	    damage+=0.5;
	 }
   else { gotoxy(carx,1); cprintf("ËË"); score+= 0.02*gear; }

   textcolor(LIGHTCYAN);
   textbackground(BLACK);

   if(damage>103)
   {
    window(15,12,60,20);
    textcolor(LIGHTCYAN);
    textbackground(BLUE);
    clrscr();
    cprintf(" þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ               GAME OVER !!! \n\n\r             Press 3 to exit\n\n\r   #  Wear helmet / seat belts while driving\n\n\r   #  Drive safely\n\r þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ");
    while( (ch=getch())!='3'){} ;
    goto end;
   }

   window(1,1,80,1);
    textbackground(BLUE);
    clrscr();
    gotoxy(1,1);
    cprintf("     Gear : %d         Damage :  %d percent      Score : %g ",gear,int(damage),floor(score) );
   window(1,2,80,25);
    gotoxy(j,k);
  }

    window(15,12,60,20);
    textcolor(LIGHTCYAN);
    textbackground(BLUE);
    clrscr();
    cprintf(" \n\n\r               !!! FINISH !!! \n\n\r               Press 3 to exit\n\n\r If you found this game easy, then try driving at higher speeds by shifting gears.\n\n\r   High speeds fetch more score. ");
    while(1) { ch=getch(); if(ch=='3') goto end; }
////////////////////////////////////////////////////////////////////////////
 end:
 fclose(track);
 fclose(track2);
// fclose(fp);

 textcolor(WHITE);
 textbackground(BLACK);
 window(1,1,80,25);
 clrscr();
 cout<<"\n\n\n\n\n\t\t\t\tPRESS:\n\n\n\n\n\t\t\t 3 : To exit completely\n\n\t\t\t 0 : To play New Game";
 while(1) { ch=getch(); if(ch=='3') {  _setcursortype(_NORMALCURSOR); exit(0); } else if(ch=='0') goto choseagain; }
}