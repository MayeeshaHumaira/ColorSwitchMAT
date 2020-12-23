#include "functions.h"
#include "bitmap_loader.h"
#include "hophopfunctions.h"
#include "classicfunctions.h"
#include<string.h>
#include<math.h>
#define SPACEBAR 32

int win_b = 400, win_l = 400;
float delay = 0;
int speed = 0;
int black[3]= {0,0,0};
bool musicOn=true;



/*
function iDraw() is called again and again by the system.

*/
void drawRoadLines(int offset)
{
    int len = 10;
    int width = 5;
    int gap = 10;
    int midx = 0, midy = win_l / 2;
    for (int i = 0; i < win_b / (len + gap); i++)
        iFilledRectangle((i * (len + gap) + offset) % win_b, midy, len, width);
}
int k = 0;

struct buttonCoOrd
{
    int x;
    int y;
} bCoordinate[3];
void iDraw()
{
//place your drawing codes here
    iClear();

    int cnt;
   /* if(musicOn!=true)
    {
        PlaySound(0,0,0);
    }*/
    if(goBack==true)
    {
    	if(menuState==0||menuState==1||menuState==2)
    	{
    		menuState=-1;
    		goBack=false;
    	}
		/*else if(gameState==0||gameState==1||gameState==2)
		{
    		menuState=-1;
    		goBack=false;
    	}*/
    }
    if (gameOver1 == true)
    {
        exit(0);
    }
    if (menuState == -2)
    {
        iShowBMP(0, 0, "Pictures\\homemenufinal.bmp");
    }
    else if (menuState == -1)
    {
        for (cnt = 0; cnt < 3; cnt++)
        {
            iShowBMP(bCoordinate[cnt].x, bCoordinate[cnt].y, menuButtons[cnt]);
        }
    }
    else if (menuState == 0)
    {
        if (gameState == -1)
        {
            for (cnt = 0; cnt < 3; cnt++)
            {
                iShowBMP(bCoordinate[cnt].x, bCoordinate[cnt].y, modeButtons[cnt]);
            }
            backButtonSet();
        }
        else if (gameState == 0)
        {
			scoreDisplay();
            if(screenChange==0)
            {
                l1s1();
                if(ballCurrentColorIndex!=objectCurrentColorIndex)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }

            }
            else if(screenChange==1)
            {
                
				l1s2();
				if (circleX >= l3g1-80 && circleX <= l3g1-50 && circleY >=170&&circleY <=330)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if (circleX >= l3g1+50 && circleX <= l3g1+80 && circleY >=170&&circleY <=330)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if (circleX >= l3g2-80 && circleX <= l3g2-50 && circleY >=470&&circleY <=630)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if (circleX >= l3g2+50 && circleX <= l3g2+80 && circleY >=470&&circleY <=630)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				
				
				
                
			}
                           
            else if(screenChange==2)
            {
				
                l1s3();
                if (circleX >= l3g1 && circleX <= l3g1+200 && circleY >=200&&circleY <=220)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if(circleX >=l3g2 && circleX <= l3g2+100 && circleY >=250 &&circleY <=350)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if(circleX >=l3g2 && circleX <= l3g2+200 && circleY >=500 &&circleY <=520)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				
				if(circleX >=l3g1 && circleX <= l3g1+100 && circleY >=550 &&circleY <=650)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				
	


            }
            else if(screenChange==3)
			{
                
				l1s4();
				if (circleX >= l1s4g1-l1s4circR && circleX <= l1s4g1-l1s4circR+30+5 && circleY >=l1s4circY1-l1s4circR+10&&circleY <=l1s4circY1+l1s4circR-10)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if(circleX >=l1s4g1+l1s4circR-30-5 && circleX <= l1s4g1+l1s4circR && circleY >=l1s4circY1-l1s4circR+10&&circleY <=l1s4circY1+l1s4circR-10)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if(circleX >=l1s4g2 && circleX <= l1s4g2+100 && circleY >=200 &&circleY <=300)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				if(circleX >=l1s4g2 && circleX <= l1s4g2+100 && circleY >=550 &&circleY <=650)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				

			}
			
            else if(screenChange==4)
			{
				
				l1s5();
				if(circleX >=l3g2 && circleX <= l3g2+100 && circleY >=150 &&circleY <=250)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				
				if(circleX >=l3g1 && circleX <= l3g1+100 && circleY >=600 &&circleY <=700)
				{
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
				
			}
            else if(screenChange==5)
			{
				iShowBMP(0,0,"Pictures\\congratulations.bmp");
				//iShowBMP(0,650,"Pictures\\backMainMenu.bmp");
			}

        }
        else if (gameState == 1)
        {

            scoreDisplay();
            iFilledCircle(hopx, hopy, 10);
            if (hopScreen == 0)
            {
                l2s1();
                iText(550, 150, "Press 'W' to go up, 'S' to go down", GLUT_BITMAP_TIMES_ROMAN_24);
                if (hopx >= 600 && hopx <= 700 && hopy >= s1g1&& hopy <= s1g1 + 100)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }




            }
            else if (hopScreen == 1)
            {

                l2s2();
                if (hopx >= 500 && hopx <= 600 && hopy >= s2g1 && hopy <= s2g1 + 100)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 700 && hopx <= 800 && hopy >= s2g2 && hopy <= s2g2 + 100)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }


            }
            else if (hopScreen == 2)
            {

                l2s3();
                if (hopx >= 250 && hopx <= 350 && hopy >= s3g1&&hopy <= s3g1)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= s3g2 && hopx <= s3g2 + 100 && hopy >= 400 && hopy <= 500)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }



            }
            else if (hopScreen == 3)
            {

                l2s4();
                iSetColor(fColors[2][0], fColors[2][1], fColors[2][2]);
                iFilledCircle(hopx, hopy, 10);
                if (hopx >= s4g1 && hopx <= s4g1 + 100 && hopy >= 230 && hopy <= 330)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= s4g2 && hopx <= s4g2 + 100 && hopy >= 450 && hopy <= 550)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 890 && hopx <= 1010 && hopy >= 440 && hopy <= 560)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 1120 && hopx <= 1280 && hopy >= 240 && hopy <= 400)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }


            }
            else if (hopScreen == 4)
            {

                l2s5();
                if (hopx >= 300 && hopx <= 400 & hopy >= s5g1 - 50 && hopy <= s5g1 + 50)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }

                else if (hopx >= s5g2 &&hopx <= s5g2 + 100 & hopy >= 230 && hopy <= 330)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= s5g3 && hopx <= s5g3 + 100 && hopy >= 500 && hopy <= 600)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 950 && hopx <= 1050 & hopy >= s5g4 - 50 && hopy <= s5g4 + 50)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }


            }
            else if (hopScreen == 5)
            {

                l2s6();
                iSetColor(fColors[2][0], fColors[2][1], fColors[2][2]);
                iFilledCircle(hopx, hopy, 10);

                if (hopx >= 200 && hopx <= 300 && hopy >= s6g1 && hopy <= s6g1 + 100)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 300 && hopx <= 400 && hopy >= s6g2 && hopy <= s6g2 + 100)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 400 && hopx <= 500 && hopy >= s6g3 && hopy <= s6g3 + 100)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 820 && hopx <= 980 && hopy >= 240 && hopy <= 400)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 930 && hopx <= 770 && hopy >= 380 && hopy <= 540)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
                else if (hopx >= 1020 && hopx <= 1180 && hopy >= 240 && hopy <= 400)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }


            }
            else if (hopScreen == 6)
            {
				iShowBMP(0,0,"Pictures\\congratulations.bmp");
				//iShowBMP(0,650,"Pictures\\backMainMenu.bmp");
			}
        }
        else if (gameState == 2)
        {
            scoreDisplay(); 
			if(classicScreen==0)
            {
					l3s1();
					if(ballCurrentColorIndex!=objectCurrentColorIndex)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
			}
			else if(classicScreen==1)
             {
				
				 l3s2();
				 if(ballCurrentColorIndex!=objectCurrentColorIndex)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }

			}
			else if(classicScreen==2)
             {
				 
				 l3s3();
				 if(ballCurrentColorIndex!=objectCurrentColorIndex)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
			}
			else if(classicScreen==3)
             {
				 
				 l3s4();
				 if(ballCurrentColorIndex!=objectCurrentColorIndex)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
			}
			else if(classicScreen==4)
             {
				
				 l3s5();
				 if(ballCurrentColorIndex!=objectCurrentColorIndex)
                {
                    iShowBMP(0, 0, gameover);
                    gameOver1 = true;

                }
			}
            else if (classicScreen==5)
            {
				iShowBMP(0,0,"Pictures\\congratulations.bmp");
				//iShowBMP(0,650,"Pictures\\backMainMenu.bmp");
			}
			iSetColor(fourColors[0][0], fourColors[0][1], fourColors[0][2]);
			iFilledCircle(cx, cy, 10);
    
        }
    }
    else if (menuState == 1)
    {

        iShowBMP(0, 0, "Pictures\\instructions.bmp");
        backButtonSet();


    }
    else if (menuState == 2)
    {
        iShowBMP(0, 0, "Pictures\\about.bmp");
		backButtonSet();
    }




}


/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{

//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&menuState == 0)
    {
        int cnt;
        for (cnt = 0; cnt < 3; cnt++)
        {
            if (mx >= bCoordinate[cnt].x&&mx <= bCoordinate[cnt].x + 420 && my >= bCoordinate[cnt].y&&my <= bCoordinate[cnt].y + 170)
            {
                gameState = cnt;
                if(gameState==0)
                {
                    screenChange=0;
                }

            }
        }
    }
		
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&menuState == -1)
    {
        int cnt;
        for (cnt = 0; cnt < 3; cnt++)
        {
            if (mx >= bCoordinate[cnt].x&&mx <= bCoordinate[cnt].x + 420 && my >= bCoordinate[cnt].y&&my <= bCoordinate[cnt].y + 170)
            {
                menuState = cnt;
            }
        }
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&menuState == -1)
    {
        if (mx >= 500 && mx <= 900 && my >= 460 && my <= 640)
        {
            menuState = 0;

        }
    }
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if (mx >= 0 && mx <= 300 && my >= 620 && my <= 720)
        {
            goBack=true;

        }
    }



}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
    if (key == 'p' || key == 'P')
    {
        menuState = -1;


    }


    if (hopy <= 700)
    {
        if (key == 'w' || key == 'W')
            hopy = hopy + 20;
    }
    if (hopy >= 260)
    {
        if (key == 's' || key == 'S')
            hopy = hopy - 20;
    }
    if (key == SPACEBAR)
    {
        if (sleepMode == true)
            sleepMode = false;
        else sleepMode = true;

    }
    if(key=='a'||key=='A')
    {
        circleY+=50;
        indexUpdater();
        if (circleY >= 750)
        {
            screenChange += 1;
            circleY = 100;
			scoreUpdate();
        }
    }
	


//place your codes for other keys here
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
	if(key==GLUT_KEY_UP){
		cy=cy+50;
        indexUpdater();
        if (cy >= 750)
        {
            classicScreen += 1;
            cy = 50;
			scoreUpdate();
        }
	}
	
//place your codes for other keys here
}

int main()
{
//place your own initialization codes here.
    int sum = 100;
    int cnt;
    for (cnt = 2; cnt >= 0; cnt--)
    {
        bCoordinate[cnt].x = 500;
        bCoordinate[cnt].y = sum;
        sum += 150;
    }
   /* if(musicOn==true)
    {
        PlaySound("Music\\dramatic_stuff.wav",NULL,SND_ASYNC);
    }*/
    int t = iSetTimer(20, update_val_pos);
    int tf= iSetTimer(500,changefidget);
    int t3 = iSetTimer(1000, changeGearPos);
    int t1 = iSetTimer(2000, colorUpdater);
    int tSleep = iSetTimer(10, sleepModeCheck);
    int t5 = iSetTimer(1000, arcAngleUpdater);
    int t4= iSetTimer(500, changeGearPos2);
	int t6=iSetTimer(30,ball_move);

    iInitialize(1350, 750, "Color Switch MAT!!!");
    return 0;
}
