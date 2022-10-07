/*******************************************************
 * Homework 2: OpenGL                                  *
 *-----------------------------------------------------*
 * First, you should fill in problem1(), problem2(),   *
 * and problem3() as instructed in the written part of *
 * the problem set.  Then, express your creativity     *
 * with problem4()!                                    *
 *                                                     *
 * Note: you will only need to add/modify code where   *
 * it says "TODO".                                     *
 *                                                     *
 * The left mouse button rotates, the right mouse      *
 * button zooms, and the keyboard controls which       *
 * problem to display.                                 *
 *                                                     *
 * For Linux/OS X:                                     *
 * To compile your program, just type "make" at the    *
 * command line.  Typing "make clean" will remove all  *
 * computer-generated files.  Run by typing "./hw2"    *
 *                                                     *
 * For Visual Studio:                                  *
 * You can create a project with this main.cpp and     *
 * build and run the executable as you normally would. *
 *******************************************************/

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "./freeglut-3.2.1/include/GL/freeglut.h"

using namespace std;

bool leftDown = false, rightDown = false;
int lastPos[2];
float cameraPos[4] = {0, 1, 4, 1};
int windowWidth = 640, windowHeight = 480;
double yRot = 0;
int curProblem = 4; // TODO: change this number to try different examples

float specular[] = {1.0, 1.0, 1.0, 1.0};
float shininess[] = {50.0};

void problem1() {
	glPushMatrix();
	glTranslatef(0, 1.5, 0);
	glRotatef(90, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.76, 1.129, 0);
	glRotatef(65, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.42, 0.48, 0);
	glRotatef(38, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.42, -0.48, 0);
	glRotatef(-38, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.76, -1.129, 0);
	glRotatef(-75, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -1.5, 0);
	glRotatef(-90, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.76, -1.129, 0);
	glRotatef(-149, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.42, -0.48, 0);
	glRotatef(-165, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.42, 0.48, 0);
	glRotatef(-205, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.76, 1.129, 0);
	glRotatef(-250, 0, 0, 1);
	glutSolidTeapot(0.2);
	glPopMatrix();
}

void problem2() {
	double a, t, c;
	for (int i = 0; i < 20; i++) {
		glPushMatrix();
		glTranslatef(i - 10, -t, 0);
		glScalef(1, 5 - a, 1);

		glutSolidCube(1);
		glPopMatrix();
		a = a + 0.2;
		t = t + 0.1;
		// printf("a = %f t = %f\n",a,t);
	}
}

void problem3() {
	double t = 0;
	for (int i = 0; i < 6; i++) {
		glPushMatrix();
		glTranslatef(-1.5 + t, 1.35, 0);
		glRotatef(0, 0, 0, 1);
		glutSolidTeapot(0.2);
		glPopMatrix();
		t = t + 0.6;
	}
	t = 0;
	for (int i = 0; i < 5; i++) {
		glPushMatrix();
		glTranslatef(-1.2 + t, 0.85, 0);
		glRotatef(0, 0, 0, 1);
		glutSolidTeapot(0.2);
		glPopMatrix();
		t = t + 0.6;
	}
	t = 0;
	for (int i = 0; i < 4; i++) {
		glPushMatrix();
		glTranslatef(-0.9 + t, 0.35, 0);
		glRotatef(0, 0, 0, 1);
		glutSolidTeapot(0.2);
		glPopMatrix();
		t = t + 0.6;
	}
	t = 0;
	for (int i = 0; i < 3; i++) {
		glPushMatrix();
		glTranslatef(-0.6 + t, -0.15, 0);
		glRotatef(0, 0, 0, 1);
		glutSolidTeapot(0.2);
		glPopMatrix();
		t = t + 0.6;
	}
	t = 0;
	for (int i = 0; i < 2; i++) {
		glPushMatrix();
		glTranslatef(-0.3 + t, -0.65, 0);
		glRotatef(0, 0, 0, 1);
		glutSolidTeapot(0.2);
		glPopMatrix();
		t = t + 0.6;
	}
	t = 0;
	for (int i = 0; i < 1; i++) {
		glPushMatrix();
		glTranslatef(-0 + t, -1.15, 0);
		glRotatef(0, 0, 0, 1);
		glutSolidTeapot(0.2);
		glPopMatrix();
		t = t + 0.6;
	}
}

void problem4() {

  glBegin(GL_TRIANGLES);
	
	glVertex3f(-1, 1, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(0, -1, 0);
	glEnd();

  glPushMatrix();
  glTranslatef(-1, 1, 0);
  glutSolidSphere(0.5,50,50);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(1, 1, 0);
  glutSolidSphere(0.5,50,50);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0,-1,0);
  glutSolidSphere(0.4,50,50);
  glPopMatrix();

  
  glPushMatrix();
  glTranslatef(0.5,-1,0);
  glScalef(18,1,1);
  glutSolidCube(0.1);
  glPopMatrix();
  
  glPushMatrix();
  glTranslatef(-0.5,-1,0);
  glRotatef(180,0,0,1);
  glScalef(18,1,1);
  glutSolidCube(0.1);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0.5,-0.8,0);
  glRotatef(15,0,0,1);
  glScalef(18,1,1);
  glutSolidCube(0.1);
  glPopMatrix();
  
  glPushMatrix();
  glTranslatef(-0.5,-0.8,0);
  glRotatef(165,0,0,1);
  glScalef(18,1,1);
  glutSolidCube(0.1);
  glPopMatrix();

glPushMatrix();
  glTranslatef(0.5,-1.2,0);
  glRotatef(-15,0,0,1);
  glScalef(18,1,1);
  glutSolidCube(0.1);
  glPopMatrix();
  
  glPushMatrix();
  glTranslatef(-0.5,-1.2,0);
  glRotatef(-165,0,0,1);
  glScalef(18,1,1);
  glutSolidCube(0.1);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(0.3, 0.4, 0);
  glutSolidSphere(0.1,50,50);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-0.3, 0.4, 0);
  glutSolidSphere(0.1,50,50);
  glPopMatrix();
  }

void display() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glDisable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0); // x axis
	glColor3f(0, 1, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0); // y axis
	glColor3f(0, 0, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 1); // z axis
	glEnd(/*GL_LINES*/);

	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glEnable(GL_LIGHT0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, windowWidth, windowHeight);

	float ratio = (float)windowWidth / (float)windowHeight;
	gluPerspective(50, ratio, 1, 1000);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(cameraPos[0], cameraPos[1], cameraPos[2], 0, 0, 0, 0, 1, 0);

	glLightfv(GL_LIGHT0, GL_POSITION, cameraPos);

	glRotatef(yRot, 0, 1, 0);

	if (curProblem == 1)
		problem1();
	if (curProblem == 2)
		problem2();
	if (curProblem == 3)
		problem3();
	if (curProblem == 4)
		problem4();

	glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
		leftDown = (state == GLUT_DOWN);
	else if (button == GLUT_RIGHT_BUTTON)
		rightDown = (state == GLUT_DOWN);

	lastPos[0] = x;
	lastPos[1] = y;
}

void mouseMoved(int x, int y) {
	if (leftDown)
		yRot += (x - lastPos[0]) * .1;
	if (rightDown) {
		for (int i = 0; i < 3; i++)
			cameraPos[i] *= pow(1.1, (y - lastPos[1]) * .1);
	}

	lastPos[0] = x;
	lastPos[1] = y;
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
	curProblem = key - '0';
	if (key == 'q' || key == 'Q' || key == 27) {
		exit(0);
	}
	glutPostRedisplay();
}

void reshape(int width, int height) {
	windowWidth = width;
	windowHeight = height;
	glutPostRedisplay();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("HW2");

	glutDisplayFunc(display);
	glutMotionFunc(mouseMoved);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);

	glutMainLoop();

	return 0;
}
