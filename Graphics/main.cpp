#define GL_SILENCE_DEPRECATION

#include <OpenGL/gl.h>
#include <GLUT/glut.h>


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT); 

    glColor3f(0.0f, 1.0f, 0.0f);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f( 1.0f, 0.0f);
    glEnd();


    /// Sweden
    glColor3f(0.122f, 0.345f, 0.592f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.36f,0.6f);
        glVertex2f(0.4f,0.6f);
        glVertex2f(0.4f,0.16f);
        glVertex2f(-0.36f,0.16f);
    glEnd();

    glColor3f(0.98f, 0.8f, 0.114f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.14f,0.6f);
        glVertex2f(-0.08f,0.6f);
        glVertex2f(-0.08f,0.16f);
        glVertex2f(-0.14f,0.16f);
    glEnd();

    glColor3f(0.98f, 0.8f, 0.114f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.36f,0.4f);
        glVertex2f(0.4f,0.4f);
        glVertex2f(0.4f,0.34f);
        glVertex2f(-0.36f,0.34f);
    glEnd();


    ///Somalia
    glColor3f(0.255f, 0.561f, 0.871f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.36f,-0.16f);
        glVertex2f(0.4f,-0.16f);
        glVertex2f(0.4f,-0.6f);
        glVertex2f(-0.36f,-0.6f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.02f,   -0.36f);
        glVertex2f( 0.0f,    -0.28f);
        glVertex2f( 0.04f,   -0.36f);
        glVertex2f( 0.12f,   -0.36f);
        glVertex2f( 0.05f,   -0.42f);
        glVertex2f( 0.09f,   -0.52f);
        glVertex2f( 0.01f,   -0.45f);
        glVertex2f(-0.07f,   -0.52f);
        glVertex2f(-0.028f,  -0.42f);
        glVertex2f(-0.12f,   -0.36f);

    glEnd();





    glFlush(); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640); 
    glutInitWindowPosition(80, 50);  
    glutCreateWindow("OpenGL Setup Test"); 
    glutDisplayFunc(display); 
    glutMainLoop(); 
    return 0;
}
