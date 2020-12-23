#pragma once
#include"iGraphics.h"
char menuButtons[3][40] = { "Pictures\\modesButton.bmp","Pictures\\instructionsButton.bmp","Pictures\\aboutButton.bmp" };
bool sleepMode = false;
bool goBack=false;
int menuState = -2;

void sleepModeCheck()
{
	if (sleepMode)
		Sleep(500);

}
void backButtonSet()
{
	iShowBMP(0,650,"Pictures\\backButton.bmp");
}
double pi=3.1416;
double arcAngle=0,arcAngle2=pi/4;

int s1circX=675;
int s1circR=90;

int l1s2circR=80;
int l1s4circR=100;
int l1s4circY1=400;
int l2g1X[16]={0,150,300,450,600,750,900,1050,1200};
//int l2g1p[16];

int l2g1R=400;

int l1s4g1=280;
int l1s4g2=1070;
int l3g1=380;
int l3g2=970;
int l2g1=80,l2g2=180,l2g3=280,l2g4=380,l2g5=820,l2g6=1020,l2g7=1120,l2g8=1220;
int l4g1=80,l4g2=180,l4g3=280,l4g4=380,l4g5=480,l4g6=580,l4g7=680,l4g8=780;

int l3g1p,l3g2p,l4g1p,l4g2p,l4g3p,l4g4p,l4g5p,l4g6p,l4g7p,l4g8p,l2g1p,l2g2p,l2g3p,l2g4p,l2g5p,l2g6p,l2g7p,l2g8p,l1s4g1p,l1s4g2p;

void arcAngleUpdater()
{
	if(arcAngle<=360)
		arcAngle=arcAngle+12;
	else arcAngle=0;
	if(arcAngle2<=360)
		arcAngle2=arcAngle2-12;
	else arcAngle2=0;
}




void changeGearPos2()
{
	
	l1s4g1 += l1s4g1p;
	if (l1s4g1<300)
		l1s4g1p = +50;
	else if (l1s4g1>1050)
		l1s4g1p = -50;

	l1s4g2 += l1s4g2p;
	if (l1s4g2<300)
		l1s4g2p = +50;
	else if (l1s4g2>1050)
		l1s4g2p = -50;

	l2g1 += l2g1p;
	if (l2g1<100)
		l2g1p = +50;
	else if (l2g1>800)
		l2g1p = -50;

	l2g2 += l2g2p;
	if (l2g2<200)
		l2g2p = +50;
	else if (l2g2>600)
		l2g2p = -50;
	
	l2g3 += l2g3p;
	if (l2g3<300)
		l2g3p = +50;
	else if (l2g3>700)
		l2g3p = -50;

	l2g4 += l2g4p;
	if (l2g4<400)
		l2g4p = +50;
	else if (l2g4>800)
		l2g4p = -50;
	l2g5 += l2g5p;
	if (l2g5<100)
		l2g5p = +50;
	else if (l2g5>800)
		l2g5p = -50;

	l2g6 += l2g6p;
	if (l2g6<600)
		l2g6p = +50;
	else if (l2g6>1000)
		l2g6p = -50;
	
	l2g7 += l2g7p;
	if (l2g7<700)
		l2g7p = +50;
	else if (l2g7>1100)
		l2g7p = -50;

	l2g8 += l2g8p;
	if (l2g8<800)
		l2g8p = +50;
	else if (l2g8>1200)
		l2g8p = -50;

	l3g1 += l3g1p;
	if (l3g1<400)
		l3g1p = +50;
	else if (l3g1>950)
		l3g1p = -50;

	l3g2 += l3g2p;
	if (l3g2<400)
		l3g2p = +50;
	else if (l3g2>950)
		l3g2p = -50;

	l4g1 += l4g1p;
	if (l4g1<100)
		l4g1p = +50;
	else if (l4g1>500)
		l4g1p = -50;

	l4g2 += l4g2p;
	if (l4g2<200)
		l4g2p = +50;
	else if (l4g2>600)
		l4g2p = -50;
	
	l4g3 += l4g3p;
	if (l4g3<300)
		l4g3p = +50;
	else if (l4g3>700)
		l4g3p = -50;

	l4g4 += l4g4p;
	if (l4g4<400)
		l4g4p = +50;
	else if (l4g4>800)
		l4g4p = -50;
	l4g5 += l4g5p;
	if (l4g5<500)
		l4g5p = +50;
	else if (l4g5>900)
		l4g5p = -50;

	l4g6 += l4g6p;
	if (l4g6<600)
		l4g6p = +50;
	else if (l4g6>1000)
		l4g6p = -50;
	
	l4g7 += l4g7p;
	if (l4g7<700)
		l4g7p = +50;
	else if (l4g7>1100)
		l4g7p = -50;

	l4g8 += l4g8p;
	if (l4g8<800)
		l4g8p = +50;
	else if (l4g8>1200)
		l4g8p = -50;


	
}
void l1s2()
{
	
	iSetColor(fourColors[2][0], fourColors[2][1], fourColors[2][2]);
	iFilledArc(l3g1,250,l1s2circR,pi*1.5+pi/4+0.15);
	iSetColor(fourColors[2][0], fourColors[2][1], fourColors[2][2]);
	iFilledArc(l3g1,250,l1s2circR,pi/2+pi/4+0.15);
	iSetColor(0,0,0);
	iFilledCircle(l3g1,250,l1s2circR-20);
	iSetColor(fourColors[3][0], fourColors[3][1], fourColors[3][2]);
	iFilledArc(l3g2,550,l1s2circR,pi/2+pi/4+0.15);
	iSetColor(fourColors[3][0], fourColors[3][1], fourColors[3][2]);
	iFilledArc(l3g2,550,l1s2circR,pi*1.5+pi/4+0.15);
	iSetColor(0,0,0);
	iFilledCircle(l3g2,550,l1s2circR-20);
	fixedCirclePlaces(fourColors[0]);
	iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
	ballCurrentColorIndex = 0;
	iFilledCircle(circleX, circleY, 20, 200);
	


}
void l1s4()
{
	iSetColor(fourColors[0][0],fourColors[0][1],fourColors[0][2]);
	iFilledArc(l1s4g1,l1s4circY1,l1s4circR,pi*1.5+pi/4+0.15);
	iSetColor(fourColors[0][0],fourColors[0][1],fourColors[0][2]);
	iFilledArc(l1s4g1,l1s4circY1,l1s4circR,pi/2+pi/4+0.15);
	iSetColor(0,0,0);
	iFilledCircle(l1s4g1,l1s4circY1,l1s4circR-10);
	iSetColor(fourColors[3][0],fourColors[3][1],fourColors[3][2]);
	iFilledArc(l1s4g1,l1s4circY1,l1s4circR-20,pi*1.5+pi/4+0.15);
	iSetColor(fourColors[3][0],fourColors[3][1],fourColors[3][2]);
	iFilledArc(l1s4g1,l1s4circY1,l1s4circR-20,pi/2+pi/4+0.15);
	iSetColor(0,0,0);
	iFilledCircle(l1s4g1,l1s4circY1,l1s4circR-20-10);
	iShowBMP(l1s4g2, 200, obstacles[4]);
	iShowBMP(l1s4g2, 550, obstacles[5]);
	fixedCirclePlaces(fourColors[0]);
	iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
	ballCurrentColorIndex = 0;
	iFilledCircle(circleX, circleY, 20, 200);
	
}
void l1s3()
{
	iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
	iFilledCircle(675, 100, 20);
	iSetColor(0, 0, 0);
	iFilledCircle(675, 100, 15);	
	iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
	iFilledCircle(675, 100, 10);
	iFilledCircle(circleX, circleY, 20);
	iSetColor(fourColors[1][0],fourColors[1][1],fourColors[1][2]);
	iFilledRectangle(l3g1,200,200,20);
	iSetColor(fourColors[3][0],fourColors[3][1],fourColors[3][2]);
	iFilledRectangle(l3g2,500,200,20);   
	iShowBMP(l3g1, 550, obstacles[3]);
	iShowBMP(l3g2, 250, obstacles[5]);
	fixedCirclePlaces(fourColors[0]);
	iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
	ballCurrentColorIndex = 0;
	iFilledCircle(circleX, circleY, 20, 200);
	
}
void l1s5()
{
    yaySecondScreen = true;
    Fidget();
    iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
    iFilledCircle(675, 100, 20);
    iSetColor(0, 0, 0);
    iFilledCircle(675, 100, 15);
    iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
    iFilledCircle(675, 100, 10);
    iFilledCircle(circleX, circleY, 20);
    iSetColor(fourColors[2][0], fourColors[2][1], fourColors[2][2]);
	iShowBMP(l3g1, 600, obstacles[3]);
	iShowBMP(l3g2, 150, obstacles[5]);
	

}


void l3s1()
{
	iSetColor(fourColors[i][0], fourColors[i][1], fourColors[i][2]);
	iFilledCircle(s1circX,s1circY,s1circR);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s1circY,s1circR-10);
	iSetColor(fourColors[j][0], fourColors[j][1], fourColors[j][2]);
	iFilledCircle(s1circX,s1circY2,s1circR);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s1circY2,s1circR-10);

	ballCurrentColorIndex = 0;
	


}
void l3s2()
{
	
	    iSetColor(fourColors[l][0],fourColors[l][1],fourColors[l][2]);
	    iFilledRectangle(0,l2g1Y,1350,20);
		iSetColor(fourColors[mn][0],fourColors[mn][1],fourColors[mn][2]);
	    iFilledRectangle(0,360,1350,20);
	    iSetColor(fourColors[l][0],fourColors[l][1],fourColors[l][2]);
	    iFilledRectangle(0,l2g2Y,1350,20);
	    ballCurrentColorIndex = 0;
		



}
void l3s3()
{
	iSetColor(fourColors[i][0],fourColors[i][1],fourColors[i][2]);
	iFilledRectangle(0,200,1350,20);
	iSetColor(fourColors[l][0],fourColors[l][1],fourColors[l][2]);
	iFilledCircle(s3circX,s3circY,s3circR);
	iSetColor(0,0,0);
	iFilledCircle(s3circX,s3circY,s3circR-10);
	iSetColor(fourColors[j][0],fourColors[j][1],fourColors[j][2]);
	iFilledRectangle(0,600,1350,20);
	
	ballCurrentColorIndex = 0;
	

}

void l3s4()
{
	iSetColor(fourColors[j][0],fourColors[j][1],fourColors[j][2]);
	iFilledRectangle(0,180,1350,10);
	

	iSetColor(fourColors[i][0],fourColors[i][1],fourColors[i][2]);
	iFilledCircle(s1circX,s4circY,s4circR+30);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s4circY,s4circR-10+30);

	iSetColor(fourColors[j][0],fourColors[j][1],fourColors[j][2]);
	iFilledCircle(s1circX,s4circY,s4circR-40);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s4circY,s4circR-50);
	
	iSetColor(fourColors[j][0],fourColors[j][1],fourColors[j][2]);
	iFilledRectangle(0,620,1350,10);

	ballCurrentColorIndex = 0;

	
}
void l3s5()
{
	iSetColor(fourColors[i][0],fourColors[i][1],fourColors[i][2]);
	iFilledCircle(s1circX,s5circY1,s5circR1+80);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s5circY1,s5circR1+70);

	iSetColor(fourColors[j][0],fourColors[j][1],fourColors[j][2]);
	iFilledCircle(s1circX,s5circY1,s5circR1+10);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s5circY1,s5circR1);

	iSetColor(fourColors[l][0],fourColors[l][1],fourColors[l][2]);
	iFilledCircle(s1circX,s5circY1,s5circR1-50);
	iSetColor(0,0,0);
	iFilledCircle(s1circX,s5circY1,s5circR1-60);
	
	ballCurrentColorIndex = 0;
	
}