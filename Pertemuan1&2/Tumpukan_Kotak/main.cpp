#include <GL/glut.h>

void tumpukan(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.0f, 0.2f, 0.0f);
	    glVertex3f(0.2f, 0.2f, 0.0f);
	    glVertex3f(0.2f, 0.4f, 0.0f);
	    glVertex3f(0.0f, 0.4f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.0f, 0.2f, 0.0f);
	    glVertex3f(0.2f, 0.2f, 0.0f);
	    glVertex3f(0.2f, 0.0f, 0.0f);
	    glVertex3f(0.0f, 0.0f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 1.0f, 0.0f);
	    glVertex3f(0.0f, 0.4f, 0.0f);
	    glVertex3f(0.2f, 0.4f, 0.0f);
	    glVertex3f(0.2f, 0.6f, 0.0f);
	    glVertex3f(0.0f, 0.6f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 1.0f, 0.0f);
	    glVertex3f(0.21f, 0.2f, 0.0f);
	    glVertex3f(0.41f, 0.2f, 0.0f);
	    glVertex3f(0.41f, 0.4f, 0.0f);
	    glVertex3f(0.21f, 0.4f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(0.21f, 0.0f, 0.0f);
	    glVertex3f(0.41f, 0.0f, 0.0f);
	    glVertex3f(0.41f, 0.2f, 0.0f);
	    glVertex3f(0.21f, 0.2f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 1.0f, 0.0f);
	    glVertex3f(0.42f, 0.0f, 0.0f);
	    glVertex3f(0.62f, 0.0f, 0.0f);
	    glVertex3f(0.62f, 0.2f, 0.0f);
	    glVertex3f(0.42f, 0.2f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 1.0f, 0.0f);
	    glVertex3f(-0.01f, 0.2f, 0.0f);
	    glVertex3f(-0.21f, 0.2f, 0.0f);
	    glVertex3f(-0.21f, 0.4f, 0.0f);
	    glVertex3f(-0.01f, 0.4f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 0.0f, 1.0f);
	    glVertex3f(-0.01f, 0.0f, 0.0f);
	    glVertex3f(-0.21f, 0.0f, 0.0f);
	    glVertex3f(-0.21f, 0.2f, 0.0f);
	    glVertex3f(-0.01f, 0.2f, 0.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	    glColor3f(1.0f, 1.0f, 0.0f);
	    glVertex3f(-0.22f, 0.0f, 0.0f);
	    glVertex3f(-0.42f, 0.0f, 0.0f);
	    glVertex3f(-0.42f, 0.2f, 0.0f);
	    glVertex3f(-0.22f, 0.2f, 0.0f);
	glEnd();
	glFlush();
}

int main (int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Tumpukan Kotak");
	glutDisplayFunc(tumpukan);
	glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
	glutMainLoop();
}
