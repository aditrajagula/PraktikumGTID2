#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898

void circle(float radius, int segments) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < segments; i++) {
        float angle = 2 * PI * i / segments;
        glVertex2f(cos(angle) * radius, sin(angle) * radius);
    }
    glEnd();
}

void banMobil(void) {
    glColor3f(0.1f, 0.1f, 0.1f);
    circle(0.05, 50);
    glColor3f(0.8f, 0.8f, 0.8f); 
    circle(0.02, 30);
}

void mobil(void) {
    glScalef(1.3f, 1.3f, 1.0f);
    // Kabin
    glColor3f(0.75f, 0.75f, 0.75f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.12, 0.16);
        glVertex2f(0.05, 0.16);
        glVertex2f(0.13, 0.1);
        glVertex2f(-0.2, 0.1);
    glEnd();
    
    // Body
    glColor3f(0.75f, 0.75f, 0.75f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.2, 0.1);
        glVertex2f(0.24, 0.1);
        glVertex2f(0.27, 0.06);
        glVertex2f(0.27, 0);
        glVertex2f(-0.2, 0);
    glEnd();
    
    // Bamper
    glColor3f(0.75f, 0.75f, 0.75f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.2, 0);
        glVertex2f(0.25, 0);
        glVertex2f(0.25, -0.01);
        glVertex2f(-0.18, -0.01);
    glEnd();
    
    //Lampu belakang
    glColor3f(1.0f, 0.35f, 0.35f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.2, 0.1);
        glVertex2f(-0.16, 0.1);
        glVertex2f(-0.18, 0.07);
        glVertex2f(-0.2, 0.07);
    glEnd();

	//kaca belakang
	glColor3f(0.85f, 0.95f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(-0.10, 0.15); 
        glVertex2f(-0.02, 0.15);
        glVertex2f(-0.02, 0.11);  
        glVertex2f(-0.15, 0.11);
    glEnd();

	//Kaca depan
    glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.15);
        glVertex2f(0.05, 0.15);
        glVertex2f(0.1, 0.11);
        glVertex2f(0.0, 0.11);
    glEnd();
    
    //Lampu depan
    glColor3f(1.0f, 1.0f, 0.7f); 
    glBegin(GL_POLYGON);
        glVertex2f(0.24, 0.09); 
        glVertex2f(0.27, 0.09);
        glVertex2f(0.27, 0.05);
        glVertex2f(0.25, 0.05);
    glEnd();
    
    //Gagang pintu
    glColor3f(0.2f, 0.2f, 0.2f); 
    glLineWidth(1.0f);           
    glBegin(GL_LINES);
        glVertex2f(0.0, 0.08); 
        glVertex2f(0.03, 0.08);
    glEnd();
    
    glColor3f(0.2f, 0.2f, 0.2f); 
    glLineWidth(1.0f);           
    glBegin(GL_LINES);
        glVertex2f(-0.13, 0.08); 
        glVertex2f(-0.1, 0.08);
    glEnd();

    // Gambar Ban Depan
    glPushMatrix();
        glTranslatef(-0.12, 0.0, 0);
        banMobil();
    glPopMatrix();

    // Gambar Ban Belakang
    glPushMatrix();
        glTranslatef(0.15, 0.0, 0);
        banMobil();
    glPopMatrix();
}

void gambarJalan(void) {
    //Aspal
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(-1.33, -0.05); 
        glVertex2f( 1.33, -0.05); 
        glVertex2f( 1.33, -0.60); 
        glVertex2f(-1.33, -0.60); 
    glEnd();
    
	//Marka
    glColor3f(1.0f, 1.0f, 1.0f);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
        glVertex2f(-1.2, -0.32);
        glVertex2f(-0.8, -0.32);

        glVertex2f(-0.7, -0.32);
        glVertex2f( -0.3, -0.32);
        
        glVertex2f(-0.2, -0.32);
        glVertex2f( 0.2, -0.32);

        glVertex2f( 0.3, -0.32);
        glVertex2f( 0.7, -0.32);
        
        glVertex2f( 0.8, -0.32);
        glVertex2f( 1.2, -0.32);
    glEnd();
}

void background(void) {
	//Rumput
	glColor3f(0.3f, 0.7f, 0.3f);
    glBegin(GL_POLYGON);
        glVertex2f(-1.33, -0.6); 
        glVertex2f( 1.33, -0.6); 
        glVertex2f( 1.33, -1.0); 
        glVertex2f(-1.33, -1.0); 
    glEnd();
    
    //Langit
    glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.6f, 0.1f); 
        glVertex2f(-1.33, 1.0); 
        glVertex2f( 1.33, 1.0);  

        glColor3f(0.9f, 0.9f, 0.9f); 
        glVertex2f( 1.33, -0.05); 
        glVertex2f(-1.33, -0.05);
    glEnd();
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	background();
	gambarJalan();
	glScalef(1.4f, 1.4f, 1.0f);
	glTranslatef(-0.4f, -0.1, 0.0f);
	mobil();
	glPopMatrix();
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil Lewis Hamilton");
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glutMainLoop();
    return 0;
}
