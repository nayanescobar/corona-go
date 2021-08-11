#include<stdio.h>
#include<GL/glut.h>
float x=0;
float j=0;

float y=0;

int rFlag=0,v=0;


void bgColor(float a,float b,float c,float d)
{
   glClearColor(a,b,c,d);
}


void color(float r, float g, float b)
{
  glColor3f(r,g,b);
}

void timer(int e)
{
    x=x+0.1;
if(x>=4){
 y=y-0.07;
}
glutPostRedisplay();
glutTimerFunc(300,timer,0);    
}
//virus falling behind him



void timercloud(int e){
    j=j+0.05;
    if(j>=4.0)
    j=4.0;    
    glutPostRedisplay();
    glutTimerFunc(200,timercloud,0);
}
void leaves(){
    glPushMatrix();
    glTranslatef(18.9,9.0,0);
    glColor3f(0.125,0.643,0.278);
    glutSolidSphere(0.9,45,45);
    glPopMatrix();
}
void tick()
{
        glColor3f(0.0,1.0,0.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(9.5,10.5);
    glVertex2f(10.0,11);
    glVertex2f(11,9.9);
    glVertex2f(10.5,9.5);
    glEnd();
    glPopMatrix();
    glColor3f(0.0,1.0,0.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(10.5,9.5);
    glVertex2f(13.0,13);
    glVertex2f(13,12.5);
    glVertex2f(11.0,9.0);
        glEnd();
    glPopMatrix();    
}
void cloud(){
    glPushMatrix();
    glTranslatef(4.1,18,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.5,45,45);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4.75,18.25,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.5,45,45);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4.75,17.75,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.5,45,45);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(5.25,18.20,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.5,45,45);
    glEnd();
    glPopMatrix();
}
void virus()
{
        //virus
    glPushMatrix();
    glTranslatef(7.0,7.5,0);
    glColor3f(0.0,1.0,0.0);
    glutSolidSphere(0.15,45,45);
    glEnd();
    glPopMatrix();
    //bodyspikes
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,7.5);
    glVertex2f(7.3,7.6);
    glVertex2f(7.3,7.5);
    glVertex2f(7.0,7.5);
    glEnd();
    glPopMatrix();
    //
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,7.5);
    glVertex2f(7.2,7.26);
    glVertex2f(7.1,7.24);
    glVertex2f(7.0,7.5);
    glEnd();
    glPopMatrix();
    //
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,7.5);
    glVertex2f(6.9,7.17);
    glVertex2f(6.8,7.17);
    glVertex2f(7.0,7.5);
    glEnd();
    glPopMatrix();
    //
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,7.5);
    glVertex2f(6.7,7.4);
    glVertex2f(6.6,7.5);
    glVertex2f(7.0,7.5);
    glEnd();
    glPopMatrix();
    //
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,7.5);
    glVertex2f(7.0,7.8);
    glVertex2f(6.9,7.8);
    glVertex2f(7.0,7.5);
    glEnd();
    glPopMatrix();
}
void human()
{
    glPushMatrix();
    glTranslatef(5.80,8.0,0);
    glColor3f(0.92,0.86,0.61);
    glutSolidSphere(1.0,50,50);
    glEnd();
    glPopMatrix();
    
    
    //body
    glColor3ub(255, 255, 255);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(4.7,7.2);
     glColor3ub(0.20,0.2,0.5);
    glVertex2f(7.0,7.2);
    glColor3ub(0.20,0.2,1.0);
    glVertex2f(7.0,3.8);
    glVertex2f(4.7,3.8);
    glEnd();
    glPopMatrix();
    //hand
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(5.5,6.5);
    glVertex2f(5.5,3.8);
    glVertex2f(6.4,6.5);
    glVertex2f(6.4,3.8);
    glEnd();
    glPopMatrix();
    glColor3f(0.92,0.86,0.61);
    glPushMatrix();
    //PALM
    glBegin(GL_POLYGON);
    glVertex2f(5.5,4.1);
    glVertex2f(6.4,4.1);
    glVertex2f(6.4,3.8);
    glVertex2f(5.5,3.8);
    glEnd();
    glPopMatrix();
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    //FINGERS
    glBegin(GL_LINES);
    glVertex2f(5.7,3.8);
    glVertex2f(5.7,4.1);
    glVertex2f(6.0,3.8);
    glVertex2f(6.0,4.1);
    glVertex2f(6.2,3.8);
    glVertex2f(6.2,4.1);
    glEnd();
    glPopMatrix();
    //leg1
    glColor3f(0.10,0.34,.20);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(4.7,3.8);
    glVertex2f(5.8,3.8);
    glVertex2f(5.2,0.0);
    glVertex2f(4.4,0.0);
    glEnd();
    glPopMatrix();
    //leg1
    glColor3f(0.10,0.34,.20);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(5.8,3.8);
    glVertex2f(7.0,3.8);
    glVertex2f(7.0,0.0);
    glVertex2f(6.0,0.0);
    glEnd();
    glPopMatrix();
}

void text()
{
        glColor3f(0, 153, 153);
        glRasterPos2f(6.5,18.5); // position on the screen
        char *string = "COVID-19 SPREADING AWARENESS";  
    while(*string)
      {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
      }
}

void text1()
{
        glColor3f (1.0,1.0, 1.0);
        glRasterPos2f(4.5,17.5); // position on the screen
        char *string = "NAYAN B A";  
    while(*string)
      {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
      }
}

void text2()
{
        glColor3f (1.0,1.0, 1.0);
        glRasterPos2f(8.2,15); // position on the screen
        char *string = "A MINI PROJECT ON";  
    while(*string)
      {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
      }
}
void text3()
{
        glColor3f (1.0,1.0, 1.0);
        glRasterPos2f(6.8,14); // position on the screen
        char *string = "computer graphics using opengl";  
    while(*string)
      {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
      }
}
void text4()
{
        glColor3f (1.0,1.0, 1.0);
        glRasterPos2f(2,10); // position on the screen
        char *string = "BY";  
    while(*string)
      {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
      }
}



void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);

if(rFlag==0)   // 1st page bitmap
{
    bgColor(0.0,0.0,1.0,0.0);
    text();
    text1();
    text2();
    text3();
  text4();
   



}

if(rFlag==1)   
{
    glColor3f(0.0,0.0,0.0);
    glPointSize(12.0);
    //sky
    glColor3f(0.47,0.78,0.79);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(0.0,10.0);
    glVertex2f(0.0,20.0);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(20.0,20.0);
    glColor3f(0.47,0.78,0.79);
    glVertex2f(20.0,10.0);
    glEnd();
    glPopMatrix();
    //Sun
    glColor3f(1.0,1.0,0.0);
    glPushMatrix();
    glTranslatef(17.25,18.5,0);
    glColor3f(1.0,1.0,0.0);
    glutSolidSphere(0.5,45,45);
    glEnd();
    glPopMatrix();
    //cloud -1
    glPushMatrix();
    glTranslatef(1.9+j,0.2,0);
    cloud();
    glPopMatrix();
    //cloud -2
    glPushMatrix();
    glTranslatef(-1.9+j,0.8,0);
    cloud();
    glPopMatrix();
    //cloud -3
    glPushMatrix();
    glTranslatef(4.5+j,0.0,0);
    cloud();
    glPopMatrix();
    //cloud -4
    glPushMatrix();
    glTranslatef(7.5+j,0.5,0);
    cloud();
    glPopMatrix();
    //cloud -5
    glPushMatrix();
    glTranslatef(1.2+j,0.5,0);
    cloud();
    glPopMatrix();
    //cloud -6
    glPushMatrix();
    glTranslatef(-6.5+j,0.5,0);
    cloud();
    glPopMatrix();
        //building1
    //outline
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(0.0,10.0);
    glVertex2f(0.0,16.0);
    glVertex2f(0.0,16.0);
    glVertex2f(4.0,16.0);
    glVertex2f(4.0,16.0);
    glVertex2f(4.0,10.0);
    glVertex2f(4.0,10.0);
    glVertex2f(0.0,10.0);
    glEnd();
    glPopMatrix();
    //color
    glColor3f(1.0,0.65,0.23);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.25,0.0);
    glVertex2f(0.0,10.0);
    glColor3f(1.0,0.65,0.23);
    glVertex2f(0.0,16.0);
    glColor3f(1.0,0.25,0.0);
    glVertex2f(4.0,16.0);
    glVertex2f(4.0,10.0);
    glPopMatrix();
    glEnd();
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(0.5,13.0);
    glVertex2f(0.5,15.0);
    glVertex2f(0.5,15.0);
    glVertex2f(1.5,15.0);
    glVertex2f(1.5,15.0);
    glVertex2f(1.5,13.0);
    glVertex2f(1.5,13.0);
    glVertex2f(0.5,13.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(0.5,13.0);
    glVertex2f(0.5,15.0);
    glVertex2f(1.5,15.0);
    glVertex2f(1.5,13.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(2.0,13.0);
    glVertex2f(2.0,15.0);
    glVertex2f(2.0,15.0);
    glVertex2f(3.5,15.0);
    glVertex2f(3.5,15.0);
    glVertex2f(3.5,13.0);
    glVertex2f(3.5,13.0);
    glVertex2f(2.0,13.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(2.0,13.0);
    glVertex2f(2.0,15.0);
    glVertex2f(3.5,15.0);
    glVertex2f(3.5,13.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(0.5,11.0);
    glVertex2f(1.5,11.0);
    glVertex2f(1.5,11.0);
    glVertex2f(1.5,12.5);
    glVertex2f(1.5,12.5);
    glVertex2f(0.5,12.5);
    glVertex2f(0.5,12.5);
    glVertex2f(0.5,11.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(0.5,11.0);
    glVertex2f(1.5,11.0);
    glVertex2f(1.5,12.5);
    glVertex2f(0.5,12.5);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(2.0,11.0);
    glVertex2f(2.0,12.5);
    glVertex2f(2.0,12.5);
    glVertex2f(3.5,12.5);
    glVertex2f(3.5,12.5);
    glVertex2f(3.5,11.5);
    glVertex2f(3.5,11.5);
    glVertex2f(2.0,11.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(2.0,11.0);
    glVertex2f(2.0,12.5);
    glVertex2f(3.5,12.5);
    glVertex2f(3.5,11.0);
    glPopMatrix();
    glEnd();
    
    //building2
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(4.0,10.0);
    glVertex2f(4.0,14.0);
    glVertex2f(4.0,14.0);
    glVertex2f(10.0,14.0);
    glVertex2f(10.0,14.0);
    glVertex2f(10.0,10.0);
    glVertex2f(10.0,10.0);
    glVertex2f(4.0,10.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,0.25,0.23);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(4.0,10.0);
    glVertex2f(4.0,14.0);
    glVertex2f(10.0,14.0);
    glVertex2f(10.0,10.0);
    glPopMatrix();
    glEnd();
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(5.0,11.0);
    glVertex2f(6.0,11.0);
    glVertex2f(6.0,11.0);
    glVertex2f(6.0,13.5);
    glVertex2f(6.0,13.5);
    glVertex2f(5.0,13.5);
    glVertex2f(5.0,13.5);
    glVertex2f(5.0,11.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(5.0,11.0);
    glVertex2f(6.0,11.0);
    glVertex2f(6.0,13.5);
    glVertex2f(5.0,13.5);
    glPopMatrix();
    glEnd();
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(7.0,12.5);
    glVertex2f(9.5,12.5);
    glVertex2f(9.5,12.5);
    glVertex2f(9.5,13.5);
    glVertex2f(9.5,13.5);
    glVertex2f(7.0,13.5);
    glVertex2f(7.0,13.5);
    glVertex2f(7.0,12.5);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,12.5);
    glVertex2f(9.5,12.5);
    glVertex2f(9.5,13.5);
    glVertex2f(7.0,13.5);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(7.0,11.0);
    glVertex2f(9.5,11.0);
    glVertex2f(9.5,11.0);
    glVertex2f(9.5,12.0);
    glVertex2f(9.5,12.0);
    glVertex2f(7.0,12.0);
    glVertex2f(7.0,12.0);
    glVertex2f(7.0,11.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(7.0,11.0);
    glVertex2f(9.5,11.0);
    glVertex2f(9.5,12.0);
    glVertex2f(7.0,12.0);
    glPopMatrix();
    glEnd();
    
    
    //building3
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(10.0,10.0);
    glVertex2f(10.0,16.0);
    glVertex2f(10.0,16.0);
    glVertex2f(13.0,16.0);
    glVertex2f(13.0,16.0);
    glVertex2f(13.0,10.0);
    glVertex2f(13.0,10.0);
    glVertex2f(10.0,10.0);
    glEnd();
    
    //color
    glPopMatrix();
    glColor3f(0.80,1.00,0.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(10.0,10.0);
    glVertex2f(10.0,16.0);
    glVertex2f(13.0,16.0);
    glVertex2f(13.0,10.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(11.0,15.0);
    glVertex2f(11.0,13.0);
    glVertex2f(11.0,13.0);
    glVertex2f(12.0,13.0);
    glVertex2f(12.0,13.0);
    glVertex2f(12.0,15.0);
    glVertex2f(12.0,15.0);
    glVertex2f(11.0,15.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(11.0,15.0);
    glVertex2f(11.0,13.0);
    glVertex2f(12.0,13.0);
    glVertex2f(12.0,15.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(11.0,12.0);
    glVertex2f(11.0,11.0);
    glVertex2f(11.0,11.0);
    glVertex2f(12.0,11.0);
    glVertex2f(12.0,11.0);
    glVertex2f(12.0,12.0);
    glVertex2f(12.0,12.0);
    glVertex2f(11.0,12.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(11.0,12.0);
    glVertex2f(11.0,11.0);
    glVertex2f(12.0,11.0);
    glVertex2f(12.0,12.0);
    glPopMatrix();
    glEnd();
    
    
    //building4
    //outline
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(13.0,10.0);
    glVertex2f(13.0,17.0);
    glVertex2f(13.0,17.0);
    glVertex2f(18.0,17.0);
    glVertex2f(18.0,17.0);
    glVertex2f(18.0,10.0);
    glVertex2f(18.0,10.0);
    glVertex2f(13.0,10.0);
    glEnd();
    
    //color
    glPopMatrix();
    glColor3f(0.240,0.30,0.343);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(13.0,10.0);
    glColor3f(0.340,0.20,0.343);
    glVertex2f(13.0,17.0);
    glColor3f(0.7,0.7,0.7);
    glVertex2f(18.0,17.0);
    glColor3f(0.240,0.30,0.343);
    glVertex2f(18.0,10.0);
    glPopMatrix();
    glEnd();
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(14.0,13.0);
    glVertex2f(14.0,12.0);
    glVertex2f(14.0,12.0);
    glVertex2f(17.5,12.0);
    glVertex2f(17.5,12.0);
    glVertex2f(17.5,13.0);
    glVertex2f(17.5,13.0);
    glVertex2f(14.0,13.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(14.0,13.0);
    glVertex2f(14.0,12.0);
    glVertex2f(17.5,12.0);
    glVertex2f(17.5,13.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(14.0,16.0);
    glVertex2f(14.0,15.0);
    glVertex2f(14.0,15.0);
    glVertex2f(17.5,15.0);
    glVertex2f(17.5,15.0);
    glVertex2f(17.5,16.0);
    glVertex2f(17.5,16.0);
    glVertex2f(14.0,16.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(14.0,16.0);
    glVertex2f(14.0,15.0);
    glVertex2f(17.5,15.0);
    glVertex2f(17.5,16.0);
    glPopMatrix();
    glEnd();
    
    //building5void bgColor(float a,float b,float c,float d)
{
  
}


void color(float r, float g, float b)
{
  glColor3f(r,g,b);
}
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(18.0,10.0);
    glVertex2f(18.0,16.0);
    glVertex2f(18.0,16.0);
    glVertex2f(20.0,16.0);
    glVertex2f(20.0,16.0);
    glVertex2f(20.0,10.0);
    glVertex2f(20.0,10.0);
    glVertex2f(18.0,10.0);
    glEnd();
    
    //color
    glPopMatrix();
    glColor3f(1.00,0.50,0.20);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(18.0,10.0);
    glColor3f(0.9,1.00,1.00);
    glVertex2f(18.0,16.0);
    glColor3f(1.00,0.50,0.20);
    glVertex2f(20.0,16.0);
    glVertex2f(20.0,10.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(18.5,14.0);
    glVertex2f(18.5,15.0);
    glVertex2f(18.5,15.0);
    glVertex2f(19.5,15.0);
    glVertex2f(19.5,15.0);
    glVertex2f(19.5,14.0);
    glVertex2f(19.5,14.0);
    glVertex2f(18.5,14.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(18.5,14.0);
    glVertex2f(18.5,15.0);
    glVertex2f(19.5,15.0);
    glVertex2f(19.5,14.0);
    glPopMatrix();
    glEnd();
    
    //windows,
    //outline
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(18.5,13.0);
    glVertex2f(18.5,12.0);
    glVertex2f(18.5,12.0);
    glVertex2f(19.5,12.0);
    glVertex2f(19.5,12.0);
    glVertex2f(19.5,13.0);
    glVertex2f(19.5,13.0);
    glVertex2f(18.5,13.0);
    glEnd();
    //color
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(18.5,13.0);
    glVertex2f(18.5,12.0);
    glVertex2f(19.5,12.0);
    glVertex2f(19.5,13.0);
    glPopMatrix();
    glEnd();
    
    
    
    
    
    
    //road
    glPopMatrix();
    glColor3ub(25.24, 50, 77);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(0.0,10.0);
    glVertex2f(20.0,10.0);
    glVertex2f(20.0,0.0);
    glPopMatrix();
    glEnd();    
    
    //huamn1
    human();
    //cap
    glColor3ub(0.50,0.3,.20);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(4.8,8.4);
    glVertex2f(6.8,8.4);
    glVertex2f(7.4,8.4);
    glVertex2f(6.8,8.7);
    glVertex2f(6.4,9.3);
    glVertex2f(5.4,9.3);
    glEnd();
    glPopMatrix();
    //capdesign
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(5.9,9.3);
    glVertex2f(5.0,8.4);
    glVertex2f(5.9,9.3);
    glVertex2f(5.7,8.4);
    glVertex2f(5.9,9.3);
    glVertex2f(6.7,8.4);
    glEnd();
    glPopMatrix();    
    //EYE
    glPushMatrix();
    glTranslatef(6.5,8.2,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.13,45,45);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(6.61,8.15,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.06,45,45);
    glEnd();
    glPopMatrix();
    //mask
    glPushMatrix();
    glColor3f(0, 153, 153);
    glBegin(GL_POLYGON);
    glVertex2f(5.7,8);
    glVertex2f(7.0,8);
    glVertex2f(6.5,7.2);
    glVertex2f(5.7,7.8);
    glEnd();
    glPopMatrix();
    //maskthread
    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(5.7,8);
    glVertex2f(5.0,8.4);
    glVertex2f(5.7,7.8);
    glVertex2f(4.9,7.5);
    glEnd();
    glPopMatrix();
    
    //human2
    glTranslatef(7.0,0.0,0);
    human();
        //EYE
    glPushMatrix();
    glTranslatef(5.0,8.2,0);
    glColor3f(1.0,1.0,1.0);
    glutSolidSphere(0.13,45,45);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(4.9,8.18,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.06,45,45);
    glEnd();
    glPopMatrix();
    //mouth
    glPushMatrix();
    glTranslatef(5.0,7.6,0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.13,45,45);
    glEnd();
    glPopMatrix();
    glColor3f(1.0,0.40,0.40);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(4.7,7.2);
    glColor3f(1.0,0.3,0.4);
    glVertex2f(7.0,7.2);
    glColor3f(1.0,0.3,0.4);
    glVertex2f(7.0,3.8);
    glVertex2f(4.7,3.8);
    glEnd();
    glPopMatrix();
    //leg1
    glColor3f(0.4,0.34,.20);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(4.7,3.8);
    glVertex2f(5.8,3.8);
    glVertex2f(5.2,0.0);
    glVertex2f(4.4,0.0);
    glEnd();
    glPopMatrix();
    //leg1
    glColor3ub(0, 100, 100);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(5.8,3.8);
    glVertex2f(7.0,3.8);
    glVertex2f(7.0,0.0);
    glVertex2f(6.0,0.0);
    glEnd();
    glPopMatrix();
        //cap
    glColor3f(0.50,0.3,.20);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(6.8,8.4);
    glVertex2f(4.8,8.4);
    glVertex2f(4.3,8.4);
    glVertex2f(4.9,8.6);
    glVertex2f(4.8,9.3);
    glVertex2f(6.7,9.3);
    glEnd();
    glPopMatrix();
    //capdesign
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(5.9,9.3);
    glVertex2f(5.0,8.4);
    glVertex2f(5.9,9.3);
    glVertex2f(5.7,8.4);
    glVertex2f(5.9,9.3);
    glVertex2f(6.7,8.4);
    glEnd();
    glPopMatrix();    
    //hand
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2f(5.5,6.5);
    glVertex2f(5.5,3.8);
    glVertex2f(6.4,6.5);
    glVertex2f(6.4,3.8);
    glEnd();
    glPopMatrix();
    glColor3f(0.92,0.86,0.61);
    glPushMatrix();
    //PALM
    glBegin(GL_POLYGON);
    glVertex2f(5.5,4.1);
    glVertex2f(6.4,4.1);
    glVertex2f(6.4,3.8);
    glVertex2f(5.5,3.8);
    glEnd();
    glPopMatrix();
    glColor3f(0.0,0.0,0.0);
    glPushMatrix();
    //FINGERS
    glBegin(GL_LINES);
    glVertex2f(5.7,3.8);
    glVertex2f(5.7,4.1);
    glVertex2f(6.0,3.8);
    glVertex2f(6.0,4.1);
    glVertex2f(6.2,3.8);
    glVertex2f(6.2,4.1);
    glEnd();
    glPopMatrix();

    
    //virus1
    glTranslatef(-3.0-x,0.6+y,0);
    glPushMatrix();
    virus();
    glPopMatrix();
    
    //virus2
    glPushMatrix();
    glTranslatef(4.5-x,0.0+y,0);
    virus();
    glPopMatrix();

    //virus3
    glPushMatrix();
    glTranslatef(3.7-x,0.0+y,0);
    virus();
    glPopMatrix();    
    
    //tick
    glPushMatrix();
    glTranslatef(-1.9,-5.9,0);
    tick();
    glPopMatrix();
    
       
    glLoadIdentity();   
    
   
    glFlush();
    
    
    
}
}
void keys(unsigned char key, int x, int y)
{
if(key == 'm')  //virus move

   timer(0);
  
  
   if(key == 'e')   //exit
   exit(0);
   
   if(key == 'f')   //full screen
   glutFullScreen();
   
}
void rotateMenu (int option)
{ if(option==1)
rFlag=1;
if(option==2)
exit(0); 
}
int main(int argc,char **argv)
{
    //printf("Hello");
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("GRAPHICS");
  //  glClearColor(1.0,1.00,1.00,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,20.0,0.0,20.0);
    glutDisplayFunc(display);
    
    glutCreateMenu(rotateMenu);
glutAddMenuEntry("COVID-19 WITH MASK",1);
glutAddMenuEntry("Exit",2);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutKeyboardFunc(keys);
    timercloud(0);
    glutMainLoop();
} 
