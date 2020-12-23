#pragma once
double fColors[4][3] = { { 164, 23, 77 },{ 26, 188, 156 },{ 244, 208, 63 },{ 255, 87, 51 } };
char obstacles[10][50] = { "Pictures\\gear1.bmp","Pictures\\gear2.bmp","Pictures\\star1.bmp","Pictures\\star2.bmp","Pictures\\star3.bmp","Pictures\\star4.bmp", };
int s1g1 = 280;
int s2g1 = 280, s2g2 = 620;
int s3g1 = 280, s3g2 = 780;
int s1g1p, s2g1p, s2g2p, s3g1p, s3g2p, s4g1p, s4g2p, s5g1p, s5g2p, s5g3p, s5g4p, s6g1p, s6g2p, s6g3p;
int s4g1 = 130, s4g2 = 480;
int s5g1 = 290, s5g2 = 430, s5g3 = 870, s5g4 = 620;
int s6g1 = 460, s6g2 = 620, s6g3 = 240;
char modeButtons[3][40]={"Pictures\\fidgetButton.bmp","Pictures\\hophopButton.bmp","Pictures\\classicButton.bmp"};
int hopScreen = 0;
bool gameOver1=false;
double hopx = 100.0;
double hopy = 500.0;

double velocityX = 30;
double velocityY = 0;

double acc = 9.8;
double dt = 0.1;
float massball = 50.0;
float massearth = 5000.0;


void update_val_pos(){
	
	velocityY=velocityY+acc*dt;
	hopx=hopx+(velocityX*dt);
	hopy=hopy-(velocityY*dt)+0.5*acc*(dt*dt);
	if(hopy+5<=230){
		velocityY=(fabs(velocityY)*(massball-massearth))/(massball+massearth);

	}
	if (hopx > 1300)
		{
			hopScreen++;
			scoreUpdate();
			hopx = 200;
		}
}
void changeGearPos()
{
	s1g1 += s1g1p;
	if (s1g1<300)
		s1g1p = +50;
	else if (s1g1>600)
		s1g1p = -50;

	s2g1 += s2g1p;
	if (s2g1<300)
		s2g1p = +50;
	else if (s2g1>600)
		s2g1p = -50;

	s2g2 += s2g2p;
	if (s2g2<300)
		s2g2p = +50;
	else if (s2g2>600)
		s2g2p = -50;

	s3g1 += s3g1p;
	if (s3g1<300)
		s3g1p = +50;
	else if (s3g1>600)
		s3g1p = -50;

	s3g2 += s3g2p;
	if (s3g2<800)
		s3g2p = +50;
	else if (s3g2>1200)
		s3g2p = -50;

	s4g1 += s4g1p;
	if (s4g1<150)
		s4g1p = +50;
	else if (s4g1>450)
		s4g1p = -50;

	s4g2 += s4g2p;
	if (s4g2<150)
		s4g2p = +50;
	else if (s4g2>450)
		s4g2p = -50;

	s5g1 += s5g1p;
	if (s5g1<300)
		s5g1p = +50;
	else if (s5g1>600)
		s5g1p = -50;
	s5g2 += s5g2p;
	if (s5g2<450)
		s5g2p = +50;
	else if (s5g2>850)
		s5g2p = -50;
	s5g3 += s5g3p;
	if (s5g3<450)
		s5g3p = +50;
	else if (s5g3>850)
		s5g3p = -50;
	s5g4 += s5g4p;
	if (s5g4<300)
		s5g4p = +50;
	else if (s5g4>600)
		s5g4p = -50;

	s6g1 += s6g1p;
	if (s6g1<260)
		s6g1p = +50;
	else if (s6g1>450)
		s6g1p = -50;
	s6g2 += s6g2p;
	if (s6g2<250)
		s6g2p = +50;
	else if (s6g2>500)
		s6g2p = -50;
	s6g3 += s6g3p;
	if (s6g3<250)
		s6g3p = +50;
	else if (s6g3>500)
		s6g3p = -50;
}
void l2s1()
{
	iSetColor(fColors[1][0], fColors[1][1], fColors[1][2]);
	iFilledRectangle(0, 200, 1350, 20);
	iShowBMP(600, s1g1, obstacles[0]);


}
void l2s2()
{
	iSetColor(fColors[2][0], fColors[2][1], fColors[2][2]);
	iFilledRectangle(0, 200, 400, 20);
	iSetColor(fColors[3][0], fColors[3][1], fColors[3][2]);
	iFilledRectangle(400, 200, 550, 20);
	iSetColor(fColors[2][0], fColors[2][1], fColors[2][2]);
	iFilledRectangle(950, 200, 400, 20);
	iShowBMP(500, s2g1, obstacles[0]);
	iShowBMP(700, s2g2, obstacles[1]);


}
void l2s3()
{
	iSetColor(fColors[0][0], fColors[0][1], fColors[0][2]);
	iFilledRectangle(0, 200, 675, 20);
	iSetColor(fColors[3][0], fColors[3][1], fColors[3][2]);
	iFilledRectangle(675, 200, 675, 20);
	iShowBMP(250, s3g1, obstacles[1]);
	iShowBMP(s3g2, 400, obstacles[0]);


}
void l2s4()
{

	iSetColor(fColors[1][0], fColors[1][1], fColors[1][2]);
	iFilledRectangle(0, 200, 675, 20);
	iSetColor(fColors[2][0], fColors[2][1], fColors[2][2]);
	iFilledRectangle(675, 200, 675, 20);
	iShowBMP(s4g1, 230, obstacles[0]);
	iShowBMP(s4g2, 450, obstacles[1]);
	iSetColor(fColors[i][0], fColors[i][1], fColors[i][2]);
	iFilledCircle(950, 500, 60, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(950, 500, 50, 100);
	iSetColor(fColors[j][0], fColors[j][1], fColors[j][2]);
	iFilledCircle(1200, 320, 80, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(1200, 320, 70, 100);


}
void l2s5()
{
	iSetColor(fColors[0][0], fColors[0][1], fColors[0][2]);
	iFilledRectangle(0, 200, 400, 20);
	iSetColor(fColors[mn][0], fColors[mn][1], fColors[mn][2]);
	iFilledCircle(350, s5g1, 50, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(350, s5g1, 40, 100);
	iSetColor(fColors[1][0], fColors[1][1], fColors[1][2]);
	iFilledRectangle(400, 200, 550, 20);
	iShowBMP(s5g2, 230, obstacles[4]);
	iShowBMP(s5g3, 500, obstacles[3]);
	iSetColor(fColors[mn][0], fColors[mn][1], fColors[mn][2]);
	iFilledCircle(1000, s5g4, 50, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(1000, s5g4, 40, 100);
	iSetColor(fColors[3][0], fColors[3][1], fColors[3][2]);
	iFilledRectangle(950, 200, 300, 20);


}
void l2s6()
{
	iShowBMP(200, s6g1, obstacles[0]);
	iShowBMP(300, s6g2, obstacles[4]);
	iShowBMP(400, s6g3, obstacles[1]);
	iSetColor(255, 255, 255);
	iFilledRectangle(0, 200, 500, 20);
	iSetColor(fColors[i][0], fColors[i][1], fColors[i][2]);
	iFilledRectangle(500, 200, 350, 20);
	iSetColor(255, 255, 255);
	iFilledRectangle(700, 200, 650, 20);
	iSetColor(fColors[j][0], fColors[j][1], fColors[j][2]);
	iFilledCircle(900, 320, 80, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(900, 320, 70, 100);
	iSetColor(fColors[mn][0], fColors[mn][1], fColors[mn][2]);
	iFilledCircle(850, 460, 80, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(1000, 460, 70, 100);
	iSetColor(fColors[j][0], fColors[j][1], fColors[mn][2]);
	iFilledCircle(1100, 320, 80, 100);
	iSetColor(0, 0, 0);
	iFilledCircle(1100, 320, 70, 100);

}