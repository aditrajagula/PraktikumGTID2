
#include <GL/glut.h>
#include <stdio.h>

void strip(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(4.0f);
	glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(0.25f, 0.25f, 0.0f);
		glVertex3f(0.45f, 0.0f, 0.0f);
		glVertex3f(0.25f, -0.25f, 0.0f);
		glVertex3f(0.2f, -0.25f, 0.0f);
		glVertex3f(0.2f, 0.0f, 0.0f);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(-0.25f, 0.25f, 0.0f);
		glVertex3f(-0.45f, 0.0f, 0.0f);
		glVertex3f(-0.25f, -0.25f, 0.0f);
		glVertex3f(-0.2f, -0.25f, 0.0f);
		glVertex3f(-0.2f, 0.0f, 0.0f);
	glEnd();
	glFlush();
}

int main (int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Implementasi GL_LINES_STRIP");
	glutDisplayFunc(strip);
	glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
	glutMainLoop();
}
