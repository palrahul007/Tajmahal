#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
//setbkcolor(BLUE);
//setcolor(BLACK);
line(0,450,900,450);//base line
//1st Imarat
line(30,450,40,300);
line(70,450,60,300);
rectangle(40,270,60,300);
rectangle(35,265,65,270);
arc(50,265,0,180,10);//gumbad
line(50,248,50,255);//gumbad upper line
//ghar
line(45,285,45,300);
line(55,285,55,300);
line(50,275,45,285);
line(50,275,55,285);

line(32,300,68,300);
line(40,305,60,305);
line(60,305,68,300);
line(38,305,30,300);

line(32,410,68,410);
line(26,405,74,405);
line(65,410,75,405);
line(25,405,35,410);

line(30,350,70,350);
line(36,355,64,355);
line(65,355,70,351);
line(30,350,35,355);

//2nd Imarat

line(90,450,100,320);
line(120,450,110,320);
rectangle(100,300,110,320);
rectangle(95,300,115,297);
arc(105,297,0,180,5);//gumbad
line(105,292,105,287);//gumbad upper line
//ghar
line(103,305,103,320);
line(107,305,107,320);
line(106,300,103,304);
line(104,300,108,304);

line(94,320,115,320);
line(100,325,110,325);
line(100,325,95,320);
line(110,325,115,320);

line(94,415,116,415);
line(86,410,124,410);
line(115,
415,125,410);
line(85,410,95,415);

line(120,365,90,365);
line(96,370,114,370);
line(115,368,122,364);
line(88,365,100,370);

//3rd Imarat
line(610,450,600,300);
line(570,450,580,300);
rectangle(580,270,600,300);
rectangle(575,265,605,270);
arc(590,265,0,180,10);//gumbad
line(590,248,590,255);//gumbad upper line
//ghar
line(585,285,585,300);
line(595,285,595,300);
line(590,275,585,285);
line(590,275,595,285);

line(570,300,610,300);
line(580,305,600,305);
line(600,305,610,300);
line(580,305,572,300);

line(572,410,608,410);
line(564,405,614,405);
line(605,410,615,405);
line(565,405,575,410);

line(570,350,610,350);
line(576,355,604,355);
line(605,355,610,351);
line(570,350,575,355);

//4th Imarat

line(520,450,530,320);
line(550,450,540,320);
rectangle(530,300,540,320);
rectangle(525,300,545,297);
arc(535,297,0,180,5);//gumbad
line(535,292,535,287);//gumbad upper line
//ghar
line(533,305,533,320);
line(537,305,537,320);
line(536,300,533,304);
line(534,300,538,304);

line(524,320,545,320);
line(530,325,540,325);
line(530,325,525,320);
line(540,325,545,320);

line(524,415,546,415);
line(516,410,554,410);
line(545,415,555,410);
line(515,410,525,415);

line(550,365,520,365);
line(526,370,544,370);
line(545,368,552,364);
line(518,365,530,370);

//centre rectangle portion

//line(200,330,440,330);
rectangle(265,330,375,450);
rectangle(285,340,355,450);
line(295,345,345,345);
line(295,345,295,360);
line(345,345,345,360);
ellipse(320,365,0,180,25,13);
ellipse(320,385,0,180,25,28);
line(295,385,295,450);
line(345,385,345,450);

line(295,400,345,400);
setfillstyle(HATCH_FILL,WHITE);
ellipse(320,400,0,180,15,30);
floodfill(321,399,WHITE);
rectangle(305,450,335,415);
setfillstyle(HATCH_FILL,WHITE);
ellipse(320,450,0,180,10,30);
floodfill(321,449,WHITE);


line(220,335,220,450);
line(420,335,420,450);
//left portion

rectangle(210,330,265,335);
rectangle(220,360,265,365);
setfillstyle(XHATCH_FILL,WHITE);
ellipse(242,450,0,180,15,35);
floodfill(243,451,WHITE);
setfillstyle(HATCH_FILL,WHITE);
rectangle(236,427,248,450);
floodfill(238,431,WHITE);
line(230,405,255,405);
ellipse(242,405,0,180,12,30);
setfillstyle(HATCH_FILL,WHITE);
rectangle(236,387,248,405);
floodfill(237,388,WHITE);
ellipse(230,360,0,180,6,15);
ellipse(255,360,0,180,6,15);

line(175,370,220,360);
line(175,375,220,365);
line(175,370,175,450);

ellipse(197,450,0,180,15,35);           ellipse(200,450,90,180,10,35);
line(185,405,210,405);
ellipse(197,405,0,180,12,25);         ellipse(201,405,90,180,10,23);

//gumbad

ellipse(230,315,110,290,10,15);
ellipse(250,315,290,75,10,15);

setfillstyle(WIDE_DOT_FILL,WHITE);
line(225,300,255,300);
floodfill(228,308,WHITE);
line(225,300,240,280);
line(255,300,240,280);
line(240,270,240,280);
circle(240,265,3);

line(175,335,175,380);
line(190,305,190,367);
line(205,320,205,365);
rectangle(170,330,180,335);
rectangle(185,300,195,305);
rectangle(200,315,210,320);

//right portion

rectangle(375,330,430,335);
rectangle(375,360,420,365);
ellipse(397,450,0,180,15,35);
setfillstyle(HATCH_FILL,WHITE);
rectangle(392,427,403,450);
floodfill(393,428,WHITE);
line(385,405,410,405);
ellipse(397,405,0,180,12,30);
setfillstyle(HATCH_FILL,WHITE);
rectangle(392,387,403,405);
floodfill(393,388,WHITE);
ellipse(385,360,0,180,6,15);
ellipse(410,360,0,180,6,15);

line(420,360,465,370);
line(420,365,465,375);
line(465,370,465,450);

ellipse(442,450,0,180,15,35);          ellipse(440,450,360,90,10,35);
line(430,405,455,405);
ellipse(442,405,0,180,12,25);          ellipse(439,405,360,90,10,23);

//gumbad

ellipse(390,315,110,290,10,15);
ellipse(410,315,290,75,10,15);
setfillstyle(WIDE_DOT_FILL,WHITE);
line(386,300,415,300);
floodfill(389,308,WHITE);
line(386,300,400,280);
line(415,300,400,280);
line(400,270,400,280);
circle(400,265,3);

line(465,335,465,380);
line(450,305,450,367);
line(435,320,435,365);

rectangle(470,330,460,335);
rectangle(455,300,445,305);
rectangle(440,315,430,320);

//main gumbad
line(258,303,383,303);
setfillstyle(XHATCH_FILL,WHITE);
line(252,295,388,295);
floodfill(253,296,WHITE);
ellipse(305,253,120,220,60,65);
ellipse(335,253,320,420,60,65);
setfillstyle(WIDE_DOT_FILL,WHITE);
line(275,197,365,197);
floodfill(276,198,WHITE);
line(275,197,320,170);
line(365,197,320,170);
line(320,170,320,145);
circle(320,137,7);
			   //star
while(!kbhit())
{
delay(20);
putpixel(random(640),random(450),random(50));
 setcolor(random (16));
 circle(320,137,random(15));
 circle(400,265,random(4));
 circle(240,265,random(4));
 circle(50,240,random(10));
 circle(590,240,random(10));
 circle(535,282,random(5));
 circle(105,282,random(5));
 }

getch();
closegraph();
}