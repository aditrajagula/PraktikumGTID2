#include <GL/glut.h>
#include <stdlib.h>

void quads(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.2f, 0.2f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.2f, 0.2f);
        glVertex2f(0.2f, -0.2f);
        glVertex2f(-0.2f, -0.2f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Implementasi GL_QUADS");
    glutDisplayFunc(quads);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
}

