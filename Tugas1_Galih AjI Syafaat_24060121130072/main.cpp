// Nama		: Galih AJi Syafaat
// NIM		: 24060121130072
// Kelas	: GKV D

#include<gl/glut.h>
#include<stdlib.h>
#include<stdio.h>

float x1,x2,y1,y2;

void display(void){
	float dy,dx,step,x,y,k,Xin,Yin;
	x1 = 25;
	y1 = 25;
	x2 = 85;
	y2 = 90;
	dx= x2-x1;
	dy= y2-y1;
	
	if(abs(dx)>abs(dy)){
		step = abs(dx);
	}
	else
		step = abs(dy);
		
	Xin = dx/step;
	Yin = dy/step;
	
	x = x1;
	y = y1;
	
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	glEnd();
	
	for (k=1; k<=step ; k++){
		x = x + Xin;
		y = y + Yin;
		
		glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd();
	}
	glFlush();
}

void init(void){
	glClearColor(0.7,0.7,0.7,0.7);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-25,100,-25,100);
}

int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutCreateWindow("DDA Line Algorithm untuk (10,5) hingga (90,45)");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
