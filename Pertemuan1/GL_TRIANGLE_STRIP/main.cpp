#include <GL/glut.h>

void triangle_strip (void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1.0f, 0.0f, 0.0f);
    	glVertex3f(-0.5f, 0.5f, 0.0f);   
    	glVertex3f(-0.5f, -0.5f, 0.0f);  
    	glVertex3f(0.0f, 0.5f, 0.0f);    
    	glVertex3f(0.0f, -0.5f, 0.0f);   
    	glVertex3f(0.5f, 0.5f, 0.0f);   
	glEnd();
	glFlush();
}

int main (int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Implementasi GL_TRIANGLE_STRIP");
	glutDisplayFunc(triangle_strip);
	glClearColor(0.0f, 0.0f, 1.0f, 0.0f);
	glutMainLoop();
}
