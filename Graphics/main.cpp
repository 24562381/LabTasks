#define GL_SILENCE_DEPRECATION

#include <OpenGL/gl.h>
#include <GLUT/glut.h>

void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display() {
    glClearColor(0.2f, 0.2f, 0.2f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT); 

    glColor3f(0.0f, 1.0f, 0.0f);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.0f,  1.0f);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f( 1.0f, 0.0f);

    glEnd();

    glColor3f(1.0f, 0.2f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.8f,  0.4f);
        glVertex2f(-0.45f, 0.4f);
        glVertex2f(-0.625f, 0.7f);
    glEnd();
    
    glColor3f(1.0f, 0.6f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.40f, 0.2f);
        glVertex2f(0.30f, 0.4f);
        glVertex2f(0.40f, 0.6f);
        glVertex2f(0.58f, 0.6f);
        glVertex2f(0.68f, 0.4f);
        glVertex2f(0.58f, 0.2f);

    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.72f, -0.42f);
        glVertex2f(-0.45f, -0.42f);
        glVertex2f(-0.45f, -0.72f);
        glVertex2f(-0.72f, -0.72f);
    glEnd();


    glColor3f(1.0f, 0.6f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.45f, -0.72f);
        glVertex2f(0.65f, -0.72f);
        glVertex2f(0.54f, -0.30f);
    glEnd();

     glFlush(); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480); 
    glutInitWindowPosition(80, 50);  
    glutCreateWindow("OpenGL Setup Test"); 
    glutDisplayFunc(display); 
    glutMainLoop(); 
    return 0;
}
