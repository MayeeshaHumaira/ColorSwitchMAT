#pragma once
#include "iGraphics.h"
int circleX = 675;
int circleY = 100;
double cy=200;
double cx=675;
int s1circY=300;
int s1circY2=600;
int s3circX=675;
int s3circR=80;
int s3circY=400;
int s4circY=400;
int s4circR=100;
int s5circY1=400;
int s5circR1=150;
int s5circY2=500;
int s5circR2=100;
int l2g1Y=200;
int l2g2Y=550;
int currentScore = 0;
char score[10] = "0000";
bool yaySecondScreen = false;
bool yaySecondLevel = false;
bool gameOver = false;
double fourColors[4][3] = { { 164, 23, 77 },{ 26, 188, 156 },{ 244, 208, 63 },{ 255, 87, 51 } };
int i = 0, j = 1, mn = 2, l = 3;
int rectX, rectX2, rectX3, rectX4, d = 100, s = 200, u = 300, v = 400;
int fscoordinate[2] = { 480,200 };
int initialfspin = 0;
int gameState = -1;
int screenChange = 5;
double ballCurrentColorIndex;

int classicScreen=0;
char homemenu[50] = { "Pictures\\homemenu.bmp" };
char gameover[50] = { "Pictures\\gameover.bmp" };
char fspinnerpic[8][30] = { "Pictures\\fspin1.bmp","Pictures\\fspin2.bmp","Pictures\\fspin3.bmp","Pictures\\fspin4.bmp","Pictures\\fspin5.bmp","Pictures\\fspin6.bmp","Pictures\\fspin7.bmp","Pictures\\fspin8.bmp" };
void changeRectColor()
{
    iSetColor(fourColors[i][0], fourColors[i][1], fourColors[i][2]);
    iFilledRectangle(575, 300, 200, 5);
    iSetColor(fourColors[j][0], fourColors[j][1], fourColors[j][2]);
    iFilledRectangle(575, 300, 5, 200);
    iSetColor(fourColors[mn][0], fourColors[mn][1], fourColors[mn][2]);
    iFilledRectangle(575, 500, 200, 5);
    iSetColor(fourColors[l][0], fourColors[l][1], fourColors[l][2]);
    iFilledRectangle(775, 300, 5, 205);
}
void colorUpdater()
{

    if (i < 3)
        i++;
    else i = 0;
    if (j < 3)
        j++;
    else j = 0;
    if (mn < 3)
        mn++;
    else mn = 0;
    if (l < 3)
        l++;
    else l = 0;



}
double objectCurrentColorIndex;
double indexUpdater()
{
    
    if (gameState==0)
	{
		if (circleY > 340 && circleY < 440)
            objectCurrentColorIndex = i;
        else if (circleY > 440)
            objectCurrentColorIndex = mn;
		else 
				objectCurrentColorIndex=0;

    }
	else if(gameState==2)
	{
		if(classicScreen==0)
		{
			if(cy>=s1circY-90 && cy<=s1circY-80)
				objectCurrentColorIndex=i;
			else if(cy>=s1circY+80 && cy<=s1circY+90)
				objectCurrentColorIndex=i;
			else if(cy>=s1circY2-90 && cy<=s1circY2-80)
				objectCurrentColorIndex=j;
			else if(cy>=s1circY2+80 && cy<=s1circY2+90)
				objectCurrentColorIndex=j;
			else 
				objectCurrentColorIndex=0;


		}
		else if(classicScreen==1)
		{
			if(cy>=l2g1Y && cy<=l2g1Y+20)
				objectCurrentColorIndex=l;
			else if(cy>=l2g2Y && cy<=l2g2Y+20)
				objectCurrentColorIndex=l;
			else if(cy>=360 && cy<=380)
				objectCurrentColorIndex=mn;
			else 
				objectCurrentColorIndex=0;


		}
		else if(classicScreen==2)
		{
			if(cy>=200 && cy<=220)
				objectCurrentColorIndex=i;
			else if(cy>=s3circY-80 && cy<=s3circY-70)
				objectCurrentColorIndex=l;
			else if(cy>=s3circY+70 && cy<=s3circY+80)
				objectCurrentColorIndex=l;
			else if(cy>=600 && cy<=620)
				objectCurrentColorIndex=j;
			else 
				objectCurrentColorIndex=0;

		}
		else if(classicScreen==3)
		{
			if(cy>=180 && cy<=190)
				objectCurrentColorIndex=j;
			else if(cy>=s4circY-130 && cy<=s4circY-120)
				objectCurrentColorIndex=i;
			else if(cy>=s4circY+120 && cy<=s4circY+130)
				objectCurrentColorIndex=i;
			else if(cy>=s4circY-60 && cy<=s4circY-50)
				objectCurrentColorIndex=j;
			else if(cy>=s4circY+50 && cy<=s4circY+60)
				objectCurrentColorIndex=j;
			else if(cy>=620 && cy<=630)
				objectCurrentColorIndex=j;
			else 
				objectCurrentColorIndex=0;

		}
		else if(classicScreen==4)
		{
			if(cy>=s5circY1-130 && cy<=s5circY1-120)
				objectCurrentColorIndex=i;
			else if(cy>=s5circY1+120 && cy<=s5circY1+130)
				objectCurrentColorIndex=i;
			else if(cy>=s5circY1-160 && cy<=s5circY1-150)
				objectCurrentColorIndex=j;
			else if(cy>=s5circY1+150 && cy<=s5circY1+160)
				objectCurrentColorIndex=j;
			else if(cy>=s5circY1-100 && cy<=s5circY1-90)
				objectCurrentColorIndex=l;
			else if(cy>=s5circY1+90 && cy<=s5circY1+100)
				objectCurrentColorIndex=l;
			else 
				objectCurrentColorIndex=0;

		}




	}
	
    return objectCurrentColorIndex;
}
void fixedCirclePlaces(double currentColor[3])
{
    iSetColor(255,255,255);
    iFilledCircle(675, 100, 20);
    iFilledCircle(675, 400, 20);
    iFilledCircle(675, 700, 20);
    iSetColor(0, 0, 0);
    iFilledCircle(675, 100, 15);
    iFilledCircle(675, 400, 15);
    iFilledCircle(675, 700, 15);
    iSetColor(currentColor[0], currentColor[1], currentColor[2]);
    iFilledCircle(675, 100, 10);
    iFilledCircle(675, 400, 10);
    iFilledCircle(675, 700, 10);
}
void movingTriangle(double currentColor[3])
{
    iSetColor(fourColors[i][0], fourColors[i][1], fourColors[i][2]);
    double static angle = 45;
    iRotate(675, 375, angle);
    angle = angle + 45;
    double arrX[] = { 580,770,675 };
    double arrY[] = { 325,325,475 };
    iFilledPolygon(arrX, arrY, 3);
    iSetColor(0, 0, 0);
    double innerTriangleX[] = { 590,760,675 };
    double innerTriangleY[] = { 335,335,465 };
    iFilledPolygon(innerTriangleX, innerTriangleY, 3);
    iUnRotate();
    iDelayMS(500);
    iSetColor(currentColor[0], currentColor[1], currentColor[2]);
    iFilledCircle(675, 375, 20);
    iSetColor(0, 0, 0);
    iFilledCircle(675, 375, 15);
    iSetColor(currentColor[0], currentColor[1], currentColor[2]);
    iFilledCircle(675, 375, 10);
}
void movingRect()
{

    double static angle = 45;
    iRotate(400, 350, angle);
    angle = angle + 45;
    iRectangle(300, 300, 200, 100);

    iUnRotate();
    iDelayMS(500);
}
void scoreDisplay()
{
    iSetColor(fourColors[mn][0], fourColors[mn][1], fourColors[mn][2]);
    iText(1200, 730, "Current Score:", GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(fourColors[l][0], fourColors[l][1], fourColors[l][2]);
    iText(1200, 710, score, GLUT_BITMAP_HELVETICA_18);
}
void scoreUpdate()
{
    currentScore += 500;
    sprintf(score, "%d", currentScore);
}
void level1Display()
{
    iSetColor(fourColors[l][0], fourColors[l][1], fourColors[l][2]);
    iText(0, 730, "Current Level:", GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(fourColors[mn][0], fourColors[mn][1], fourColors[mn][2]);
    iText(0, 710, "1", GLUT_BITMAP_HELVETICA_18);
}
void level2Display()
{
    iSetColor(fourColors[l][0], fourColors[l][1], fourColors[l][2]);
    iText(0, 730, "Current Level:", GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(fourColors[mn][0], fourColors[mn][1], fourColors[mn][2]);
    iText(0, 710, "2", GLUT_BITMAP_HELVETICA_18);
}
void rectanglePosUpdate()
{
    rectX += d;
    if (rectX>1150)
        d = -100;
    else if (rectX<100)
        d = +100;

    rectX2 += s;
    if (rectX2>1150)
        s = -200;
    else if (rectX2<100)
        s = +200;

    rectX3 += u;
    if (rectX3>1150)
        u = -300;
    else if (rectX3<100)
        u = +300;

    rectX4 += v;
    if (rectX4>1150)
        v = -400;
    else if (rectX4<100)
        v = +400;
}

void rectangleRotate()
{

    iSetColor(0, 128, 0);
    iFilledRectangle(500, 300, 200, 10);
    iSetColor(0, 128, 128);
    iFilledRectangle(500, 300, 10, 200);
    iSetColor(128, 0, 128);
    iFilledRectangle(500, 500, 200, 10);
    iSetColor(128, 128, 0);
    iFilledRectangle(700, 300, 10, 205);
    iDelay(2);
    iRotate(600, 400, 45);

    iSetColor(128, 0, 0);
    iFilledCircle(600, 600, 20, 100);
    iSetColor(0, 128, 128);
    iFilledCircle(600, 200, 20, 100);
    iSetColor(128, 0, 128);
    iFilledCircle(400, 400, 20, 100);
    iSetColor(128, 128, 0);
    iFilledCircle(800, 400, 20, 100);



}
void Fidget()
{

    iShowBMP(fscoordinate[0], fscoordinate[1], fspinnerpic[initialfspin]);

}
void changefidget()
{
    initialfspin++;
    if (initialfspin >=8 )
        initialfspin = 0;

}

void rectObstacle()
{
    iSetColor(fourColors[i][0], fourColors[i][1], fourColors[i][2]);
    iFilledRectangle(rectX, 550, 100, 10);
    iSetColor(fourColors[j][0], fourColors[j][1], fourColors[j][2]);
    iFilledRectangle(rectX2, 550, 100, 10);
    iSetColor(fourColors[mn][0], fourColors[mn][1], fourColors[mn][2]);
    iFilledRectangle(rectX3, 550, 100, 10);
    iSetColor(fourColors[l][0], fourColors[l][1], fourColors[l][2]);
    iFilledRectangle(rectX4, 550, 100, 10);
}

void level2obstacle()
{
    iRotate(675, 400, 45);
    changeRectColor();
    iUnRotate();
}

void ball_move(){
	if(cy>100)
	{

	cy=cy-2;
	}

}

void l1s1()
{
    yaySecondScreen = false;
    fixedCirclePlaces(fourColors[0]);
    iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
    ballCurrentColorIndex = 0;
    iFilledCircle(circleX, circleY, 20, 200);
    changeRectColor();

}

void menu()
{
    iShowBMP(0, 0, "Pictures\\homemenu.bmp");
}
