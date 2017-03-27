#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
void draw(void)
{
	int h=-45,k=45,i,j;
	float a=40,b=9;
	double I,J;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
	glBegin(GL_LINE_STRIP);
	glVertex2s(h,k);
	for(i=0;i<a;i++)
	{
	  J=sqrt(1-(i*i)/(a*a))*b;
	  j=(int)(J);
	  glVertex2s(h+i,k+j);
	  glVertex2s(h-i,k+j);
	  glVertex2s(h-i,k-j);
	  glVertex2s(h+i,k-j);
	}
	glEnd();
	glFlush();
//	glColor3f(0.0, 0.0, 0.0);//color of cordinates system
	glBegin(GL_LINE_STRIP);
	for(int i=-100 ; i<=100 ; i++)
	{
	  glVertex2s(i,-50);
         // glVertex2s(0,i);
	}
	glEnd();
	glFlush();
	glBegin(GL_LINE_STRIP);
	glVertex2s(40,-50);
	glVertex2s(40,-25);
	glVertex2s(50,-25);
	glVertex2s(50,-50);
	glEnd();
	glFlush();
}
void init(void)
{
  glClearColor (0.0, 0.0, 1.0, 0.0);
  glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}
int main(int argc,char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (500, 500);
  glutInitWindowPosition (100, 100);
  glutCreateWindow ("Alien Ship Approaching ");
  init();
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}

