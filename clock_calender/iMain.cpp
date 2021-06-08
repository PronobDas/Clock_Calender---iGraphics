# include "iGraphics.h"
#include<time.h>
#include<stdio.h>

int x = 255,i=0,j=0,k=0,l=0,m=0,n=0,h,m1,y;


int iLeap_year(int y)
{
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
        return 1;
    else return 0;
}
void iDraw()
{
    //For Clock
    iClear();
    iPoint(122.5,212.5,2);
    iPoint(122.5,237.5,2);
    iPoint(255.5,212.5,2);
    iPoint(255.5,237.5,2);
    iText(150,300, "DIGITAL CLOCK");
    iText(325,400+12.5,"YEAR",GLUT_BITMAP_HELVETICA_18);
    iText(325+200,400+12.5,"MONTH",GLUT_BITMAP_HELVETICA_18);
    int flag=0;
    if(flag==0)
    {
       iRectangle(400,400,100,40);
       iRectangle(400+200,400,100,40);
    }
    if(flag==1)
    {
        iSetColor(255,0,0);
       iRectangle(400,400,100,40);
       iRectangle(400+200,400,100,40);
    }



    switch(i)
    {

    case 1:
    {
        iLine(350,200,350,250);
        break;
    }
    case 2:
    {
        iLine(325,250,350,250);
        iLine(350,250,350,225);
        iLine(350,225,325,225);
        iLine(325,225,325,200);
        iLine(325,200,350,200);
        break;
    }
    case 3:
    {
        iLine(325,250,350,250);
        iLine(350,250,350,225);
        iLine(350,225,325,225);
        iLine(350,225,350,200);
        iLine(325,200,350,200);
        break;
    }
    case 4:
    {
        iLine(350,200,350,250);
        iLine(350,225,325,225);
        iLine(325,250,325,225);
        break;
    }
    case 5:
    {
        iLine(325,250,350,250);
        iLine(325,250,325,225);
        iLine(350,225,325,225);
        iLine(350,225,350,200);
        iLine(325,200,350,200);
        break;
    }
    case 6:
    {
        iLine(325,250,350,250);
        iLine(325,250,325,200);
        iLine(350,225,325,225);
        iLine(325,200,350,200);
        iLine(350,225,350,200);
        break;
    }
    case 7:
    {
        iLine(325,250,350,250);
        iLine(350,200,350,250);
        break;
    }
    case 8:
    {
        iLine(350,200,350,250);
        iLine(325,250,350,250);
        iLine(350,225,325,225);
        iLine(325,200,350,200);
        iLine(325,250,325,200);
        break;
    }
    case 9:
    {
        iLine(350,200,350,250);
        iLine(325,250,350,250);
        iLine(350,225,325,225);
        iLine(325,250,325,225);
        iLine(325,200,350,200);
        break;
    }
    case 0:
    {
        iLine(350,200,350,250);
        iLine(325,250,350,250);
        iLine(325,200,350,200);
        iLine(325,250,325,200);
        break;
    }
    }


    switch(j)
    {

    case 1:
    {
        iLine(x+50,200,x+50,250);
        break;
    }
    case 2:
    {
        iLine(x+25,250,x+50,250);
        iLine(x+50,250,x+50,225);
        iLine(x+50,225,x+25,225);
        iLine(x+25,225,x+25,200);
        iLine(x+25,200,x+50,200);
        break;
    }
    case 3:
    {
        iLine(x+25,250,x+50,250);
        iLine(x+50,250,x+50,225);
        iLine(x+50,225,x+25,225);
        iLine(x+50,225,x+50,200);
        iLine(x+25,200,x+50,200);
        break;
    }
    case 4:
    {
        iLine(x+50,200,x+50,250);
        iLine(x+50,225,x+25,225);
        iLine(x+25,250,x+25,225);
        break;
    }
    case 5:
    {
        iLine(x+25,250,x+50,250);
        iLine(x+25,250,x+25,225);
        iLine(x+50,225,x+25,225);
        iLine(x+50,225,x+50,200);
        iLine(x+25,200,x+50,200);
        break;
    }
    case 6:
    {
        iLine(x+25,250,x+50,250);
        iLine(x+25,250,x+25,200);
        iLine(x+50,225,x+25,225);
        iLine(x+25,200,x+50,200);
        iLine(x+50,225,x+50,200);
        break;
    }
    case 7:
    {
        iLine(x+25,250,x+50,250);
        iLine(x+50,200,x+50,250);
        break;
    }
    case 8:
    {
        iLine(x+50,200,x+50,250);
        iLine(x+25,250,x+50,250);
        iLine(x+50,225,x+25,225);
        iLine(x+25,200,x+50,200);
        iLine(x+25,250,x+25,200);
        break;
    }
    case 9:
    {
        iLine(x+50,200,x+50,250);
        iLine(x+25,250,x+50,250);
        iLine(x+50,225,x+25,225);
        iLine(x+25,250,x+25,225);
        iLine(x+25,200,x+50,200);
        break;
    }
    case 0:
    {
        iLine(x+50,200,x+50,250);
        iLine(x+25,250,x+50,250);
        iLine(x+25,200,x+50,200);
        iLine(x+25,250,x+25,200);
        break;
    }
    }

    switch(l)
    {

    case 1:
    {
        iLine(50+175,200,50+175,250);
        break;
    }
    case 2:
    {
        iLine(25+175,250,50+175,250);
        iLine(50+175,250,50+175,225);
        iLine(50+175,225,25+175,225);
        iLine(25+175,225,25+175,200);
        iLine(25+175,200,50+175,200);
        break;
    }
    case 3:
    {
        iLine(25+175,250,50+175,250);
        iLine(50+175,250,50+175,225);
        iLine(50+175,225,25+175,225);
        iLine(50+175,225,50+175,200);
        iLine(25+175,200,50+175,200);
        break;
    }
    case 4:
    {
        iLine(50+175,200,50+175,250);
        iLine(50+175,225,25+175,225);
        iLine(25+175,225,25+175,250);
        break;
    }
    case 5:
    {
        iLine(25+175,250,50+175,250);
        iLine(25+175,250,25+175,225);
        iLine(50+175,225,25+175,225);
        iLine(50+175,225,50+175,200);
        iLine(25+175,200,50+175,200);
        break;
    }
    case 6:
    {
        iLine(25+175,250,50+175,250);
        iLine(25+175,250,25+175,200);
        iLine(50+175,225,25+175,225);
        iLine(25+175,200,50+175,200);
        iLine(50+175,225,50+175,200);
        break;
    }
    case 7:
    {
        iLine(25+175,250,50+175,250);
        iLine(50+175,200,50+175,250);
        break;
    }
    case 8:
    {
        iLine(50+175,200,50+175,250);
        iLine(25+175,250,50+175,250);
        iLine(50+175,225,25+175,225);
        iLine(25+175,200,50+175,200);
        iLine(25+175,250,25+175,200);
        break;
    }
    case 9:
    {
        iLine(50+175,200,50+175,250);
        iLine(25+175,250,50+175,250);
        iLine(50+175,225,25+175,225);
        iLine(25+175,250,25+175,225);
        iLine(25+175,200,50+175,200);
        break;
    }
    case 0:
    {
        iLine(50+175,200,50+175,250);
        iLine(25+175,250,50+175,250);
        iLine(25+175,200,50+175,200);
        iLine(25+175,250,25+175,200);
        break;
    }
    }


    switch(k)
    {

    case 1:
    {
        iLine(50+130,200,50+130,250);
        break;
    }
    case 2:
    {
        iLine(25+130,250,50+130,250);
        iLine(50+130,250,50+130,225);
        iLine(50+130,225,25+130,225);
        iLine(25+130,225,25+130,200);
        iLine(25+130,200,50+130,200);
        break;
    }
    case 3:
    {
        iLine(25+130,250,50+130,250);
        iLine(50+130,250,50+130,225);
        iLine(50+130,225,25+130,225);
        iLine(50+130,225,50+130,200);
        iLine(25+130,200,50+130,200);
        break;
    }
    case 4:
    {
        iLine(50+130,200,50+130,250);
        iLine(50+130,225,25+130,225);
        iLine(25+130,250,25+130,225);
        break;
    }
    case 5:
    {
        iLine(25+130,250,50+130,250);
        iLine(25+130,250,25+130,225);
        iLine(50+130,225,25+130,225);
        iLine(50+130,225,50+130,200);
        iLine(25+130,200,50+130,200);
        break;
    }
    case 6:
    {
        iLine(25+130,250,50+130,250);
        iLine(25+130,250,25+130,200);
        iLine(50+130,225,25+130,225);
        iLine(25+130,200,50+130,200);
        iLine(50+130,225,50+130,200);
        break;
    }
    case 7:
    {
        iLine(25+130,250,50+130,250);
        iLine(50+130,200,50+130,250);
        break;
    }
    case 8:
    {
        iLine(50+130,200,50+130,250);
        iLine(25+130,250,50+130,250);
        iLine(50+130,225,25+130,225);
        iLine(25+130,200,50+130,200);
        iLine(25+130,250,25+130,200);
        break;
    }
    case 9:
    {
        iLine(50+130,200,50+130,250);
        iLine(25+130,250,50+130,250);
        iLine(50+130,225,25+130,225);
        iLine(25+130,250,25+130,225);
        iLine(25+130,200,50+130,200);
        break;
    }
    case 0:
    {
        iLine(50+130,200,50+130,250);
        iLine(25+130,250,50+130,250);
        iLine(25+130,200,50+130,200);
        iLine(25+130,250,25+130,200);
        break;
    }
    }

    switch(m)
    {

    case 1:
    {
        iLine(50+45,200,50+45,250);
        break;
    }
    case 2:
    {
        iLine(25+45,250,50+45,250);
        iLine(50+45,250,50+45,225);
        iLine(50+45,225,25+45,225);
        iLine(25+45,225,25+45,200);
        iLine(25+45,200,50+45,200);
        break;
    }
    case 3:
    {
        iLine(25+45,250,50+45,250);
        iLine(50+45,250,50+45,225);
        iLine(50+45,225,25+45,225);
        iLine(50+45,225,50+45,200);
        iLine(25+45,200,50+45,200);
        break;
    }
    case 4:
    {
        iLine(50+45,200,50+45,250);
        iLine(50+45,225,25+45,225);
        iLine(25+45,250,25+45,225);
        break;
    }
    case 5:
    {
        iLine(25+45,250,50+45,250);
        iLine(25+45,250,25+45,225);
        iLine(50+45,225,25+45,225);
        iLine(50+45,225,50+45,200);
        iLine(25+45,200,50+45,200);
        break;
    }
    case 6:
    {
        iLine(25+45,250,50+45,250);
        iLine(25+45,250,25+45,200);
        iLine(50+45,225,25+45,225);
        iLine(25+45,200,50+45,200);
        iLine(50+45,225,50+45,200);
        break;
    }
    case 7:
    {
        iLine(25+45,250,50+45,250);
        iLine(50+45,200,50+45,250);
        break;
    }
    case 8:
    {
        iLine(50+45,200,50+45,250);
        iLine(25+45,250,50+45,250);
        iLine(50+45,225,25+45,225);
        iLine(25+45,200,50+45,200);
        iLine(25+45,250,25+45,200);
        break;
    }
    case 9:
    {
        iLine(50+45,200,50+45,250);
        iLine(25+45,250,50+45,250);
        iLine(50+45,225,25+45,225);
        iLine(25+45,250,25+45,225);
        iLine(25+45,200,50+45,200);
        break;
    }
    case 0:
    {
        iLine(50+45,200,50+45,250);
        iLine(25+45,250,50+45,250);
        iLine(25+45,200,50+45,200);
        iLine(25+45,250,25+45,200);
        break;
    }
    }

    switch(n)
    {

    case 1:
    {
        iLine(50,200,50,250);
        break;
    }
    case 2:
    {
        iLine(25,250,50,250);
        iLine(50,250,50,225);
        iLine(50,225,25,225);
        iLine(25,225,25,200);
        iLine(25,200,50,200);
        break;
    }
    case 3:
    {
        iLine(25,250,50,250);
        iLine(50,250,50,225);
        iLine(50,225,25,225);
        iLine(50,225,50,200);
        iLine(25,200,50,200);
        break;
    }
    case 4:
    {
        iLine(50,200,50,250);
        iLine(50,225,25,225);
        iLine(25,250,25,225);
        break;
    }
    case 5:
    {
        iLine(25,250,50,250);
        iLine(25,250,25,225);
        iLine(50,225,25,225);
        iLine(50,225,50,200);
        iLine(25,200,50,200);
        break;
    }
    case 6:
    {
        iLine(25,250,50,250);
        iLine(25,250,25,200);
        iLine(50,225,25,225);
        iLine(25,200,50,200);
        iLine(50,225,50,200);
        break;
    }
    case 7:
    {
        iLine(25,250,50,250);
        iLine(50,200,50,250);
        break;
    }
    case 8:
    {
        iLine(50,200,50,250);
        iLine(25,250,50,250);
        iLine(50,225,25,225);
        iLine(25,200,50,200);
        iLine(25,250,25,200);
        break;
    }
    case 9:
    {
        iLine(50,200,50,250);
        iLine(25,250,50,250);
        iLine(50,225,25,225);
        iLine(25,250,25,225);
        iLine(25,200,50,200);
        break;
    }
    case 0:
    {
        iLine(50,200,50,250);
        iLine(25,250,50,250);
        iLine(25,200,50,200);
        iLine(25,250,25,200);
        break;
    }
    }
    //For Calender
    int u=40,v=50;
    iSetColor(255,100,0);
    iLine(400,100,750,100);
    iLine(400,100+u,750,100+u);
    iLine(400,100+2*u,750,100+2*u);
    iLine(400,100+3*u,750,100+3*u);
    iLine(400,100+4*u,750,100+4*u);
    iLine(400,100+5*u,750,100+5*u);
    iLine(400,100+6*u,750,100+6*u);
    iLine(400,100+7*u,750,100+7*u);
    iLine(400,100,400,380);
    iLine(400+v,100,400+v,380);
    iLine(400+2*v,100,400+2*v,380);
    iLine(400+3*v,100,400+3*v,380);
    iLine(400+4*v,100,400+4*v,380);
    iLine(400+5*v,100,400+5*v,380);
    iLine(400+6*v,100,400+6*v,380);
    iLine(400+7*v,100,400+7*v,380);

    iText(402,355,"SAT",GLUT_BITMAP_HELVETICA_18);
    iText(452,355,"SUN",GLUT_BITMAP_HELVETICA_18);
    iText(502,355,"MON",GLUT_BITMAP_HELVETICA_18);
    iText(552,355,"TUE",GLUT_BITMAP_HELVETICA_18);
    iText(602,355,"WED",GLUT_BITMAP_HELVETICA_18);
    iText(652,355,"THU",GLUT_BITMAP_HELVETICA_18);
    iText(702,355,"FRI",GLUT_BITMAP_HELVETICA_18);



    int r=h;
    int s=0, cc,xc,yc;//xc= x co ordinate yc= y co ordinate
    for(cc=1; cc<=31; cc++,r++)
    {
        if(r>=7)
        {
            r=r%7;
            s++;
        }
        switch(cc)
        {
        case 1:
        {
            iText(410+r*50,320-s*40,"1",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 2:
        {
            iText(410+r*50,320-s*40,"2",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 3:
        {
            iText(410+r*50,320-s*40,"3",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 4:
        {
            iText(410+r*50,320-s*40,"4",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 5:
        {
            iText(410+r*50,320-s*40,"5",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 6:
        {
            iText(410+r*50,320-s*40,"6",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 7:
        {
            iText(410+r*50,320-s*40,"7",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 8:
        {
            iText(410+r*50,320-s*40,"8",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 9:
        {
            iText(410+r*50,320-s*40,"9",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 10:
        {
            iText(410+r*50,320-s*40,"10",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 11:
        {
            iText(410+r*50,320-s*40,"11",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 12:
        {
            iText(410+r*50,320-s*40,"12",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 13:
        {
            iText(410+r*50,320-s*40,"13",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 14:
        {
            iText(410+r*50,320-s*40,"14",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 15:
        {
            iText(410+r*50,320-s*40,"15",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 16:
        {
            iText(410+r*50,320-s*40,"16",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 17:
        {
            iText(410+r*50,320-s*40,"17",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 18:
        {
            iText(410+r*50,320-s*40,"18",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 19:
        {
            iText(410+r*50,320-s*40,"19",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 20:
        {
            iText(410+r*50,320-s*40,"20",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 21:
        {
            iText(410+r*50,320-s*40,"21",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 22:
        {
            iText(410+r*50,320-s*40,"22",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 23:
        {
            iText(410+r*50,320-s*40,"23",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 24:
        {
            iText(410+r*50,320-s*40,"24",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 25:
        {
            iText(410+r*50,320-s*40,"25",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 26:
        {
            iText(410+r*50,320-s*40,"26",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 27:
        {
            iText(410+r*50,320-s*40,"27",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 28:
        {
            iText(410+r*50,320-s*40,"28",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 29:
        {
            if(!(iLeap_year(y))&&m1==14)
                break;

            iText(410+r*50,320-s*40,"29",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }
        case 30:
        {
            if(m1==14)
                break;
            iText(410+r*50,320-s*40,"30",GLUT_BITMAP_TIMES_ROMAN_24);
            break;
        }

        case 31:
        {
            if(m1==13||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
            {
                iText(410+r*50,320-s*40,"31",GLUT_BITMAP_TIMES_ROMAN_24);
                break;
            }
        }



        }

    }


}
void iMouseMove(int mx, int my)
{

}
void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
      // if(mx>=400&&mx<=500&&my>=400&&my<=440)
            //flag=1;
        //place your codes here
        //	iRectangle(400,400,100,40);
      // iRectangle(400+200,400,100,40);printf("x = %d, y= %d\n",mx,my);

    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here

    }
}
void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }
    //place your codes for other keys here
}
void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
    //place your codes for other keys here
}

void change()
{
    time_t seconds;
    seconds = time(NULL);
    long time;
    time=seconds+3600*6;
    int x1=time%60;
    i=x1%10;
    j=x1/10;
    int y1=(time %3600)/60;
    l=y1%10;
    k=y1/10;
    int y2=(time%86400)/3600;
    m=y2%10;
    n=y2/10;
}
int main()
{
    printf("Enter Year:");
    scanf("%d",&y);
	printf("Enter Month(1-12):");
	scanf("%d",&m1);
    
	for(;;){
	if(m1<1||m1>12)
	{
	   printf("Your input is invalid.\nEnter Month(1-12):");
	   scanf("%d",&m1);
	}
	else break;}
	if(m1==1||m1==2)
        m1=m1+12;
    h=(1+((26*(m1+1))/10)+y+(y/4)+(6*(y/100))+(y/400))%7;
    iSetTimer(1000,change);
    iInitialize(900, 500, "CLOCK & CALENDER");
    return 0;
}
