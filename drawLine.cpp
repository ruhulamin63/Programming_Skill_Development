#include<iostream>
#include<stdio.h>
#include<math.h>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

int x1=20;
int yf=30;
int x2=200;
int y2=310;
int y3=y2-yf;
int x3=x2-x1;
float m= float(y3)/float(x3);
float xpnt= float(x1);
float ypnt= float(yf);
float xtpnt= float(x2);

void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 1.0);//(R,G,B)

//Draw a triangle using line.

glBegin(GL_POINTS);
//glBegin(GL_LINE_STRIP);
//glBegin(GL_LINE_LOOP);


    glVertex3i(x1, yf, 0);

    while(xpnt<xtpnt)
    {
        ypnt=ypnt+1;
        xpnt=xpnt+m;
        glVertex3i(round(xpnt), round(ypnt), 0);
    }

glEnd();

/*
glBegin(GL_POLYGON);


    glVertex3i(25, 70, 0);
    glVertex3i(275, 70, 0);
    glVertex3i(150, 200, 0);


glEnd();
*/
glFlush();
}
void init(void)
{
/* select clearing (background) color */
glClearColor(0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 600.0, 0, 600.0);
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with “hello”
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(600, 600);
glutInitWindowPosition(300, 100);
glutCreateWindow("hello");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


