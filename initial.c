#include<stdio.h>
#include<GL/glut.h>

void display
{
   glClearColor(0.5,0.5,0.5,1);
   glColor3f(0,1,1);
   glPointSize(8);
   gluOrtho2D(0,8,0,8);
   glLineWidth(4);
   glClear(GL_COLOR_BUFFER_BIT);

   glBegin(GL_POLYGON);

