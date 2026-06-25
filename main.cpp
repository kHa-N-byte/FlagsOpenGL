#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void Germany(){

glBegin(GL_QUADS);

glColor3f(0.0f, 0.0f, 0.0f);//black


glVertex2f(-0.8f, 0.4f);
glVertex2f(-0.55f, 0.4f);
glVertex2f(-0.55f, 0.35f);
glVertex2f(-0.8f, 0.35f);


glColor3f(1.0f, 0.0f, 0.0f);//red


glVertex2f(-0.8f, 0.35f);
glVertex2f(-0.55f, 0.35f);
glVertex2f(-0.55f, 0.3f);
glVertex2f(-0.8f, 0.3f);


glColor3f(1.0f, 1.0f, 0.0f);//yellow


glVertex2f(-0.8f, 0.3f);
glVertex2f(-0.55f, 0.3f);
glVertex2f(-0.55f, 0.25f);
glVertex2f(-0.8f, 0.25f);


glEnd();
}

void Austria(){

glBegin(GL_QUADS);


glColor3f(1.0f, 0.0f, 0.0f);//red



glVertex2f(-0.4f, 0.4f);
glVertex2f(-0.15f, 0.4f);
glVertex2f(-0.15f, 0.35f);
glVertex2f(-0.4f, 0.35f);

glColor3f(1.0f, 1.0f, 1.0f);//white

glVertex2f(-0.4f, 0.35f);
glVertex2f(-0.15f, 0.35f);
glVertex2f(-0.15f, 0.3f);
glVertex2f(-0.4f, 0.3f);

glColor3f(1.0f, 0.0f, 0.0f);//red



glVertex2f(-0.4f, 0.3f);
glVertex2f(-0.15f, 0.3f);
glVertex2f(-0.15f, 0.25f);
glVertex2f(-0.4f, 0.25f);

glEnd();
};

void Russia(){

glBegin(GL_QUADS);


glColor3f(1.0f,1.0f, 1.0f);//white

glVertex2f(-0.4f, 0.15f);
glVertex2f(-0.15f, 0.15f);

glVertex2f(-0.15f, 0.1f);
glVertex2f(-0.4f, 0.1f);


glColor3f(0.0f,0.0f, 1.0f);//blue

glVertex2f(-0.4f, 0.10f);
glVertex2f(-0.15f, 0.10f);

glVertex2f(-0.15f, 0.05f);
glVertex2f(-0.4f, 0.05f);

glColor3f(1.0f, 0.0f, 0.0f);//red
glVertex2f(-0.4f, 0.05f);
glVertex2f(-0.15f, 0.05f);

glVertex2f(-0.15f, 0.0f);
glVertex2f(-0.4f, 0.0f);
glEnd();
};

void Italy(){

glBegin(GL_QUADS);


glColor3f(0.0f, 1.0f, 0.0f);//Green

glVertex2f(-0.8f, 0.0f);
glVertex2f(-0.8f, 0.15f);

glVertex2f(-0.75f, 0.15f);
glVertex2f(-0.75f, 0.0f);

glColor3f(1.0f,1.0f,1.0f);//white

glVertex2f(-0.75f, 0.0f);
glVertex2f(-0.75f, 0.15f);

glVertex2f(-0.7f, 0.15f);
glVertex2f(-0.7f, 0.0f);


glColor3f(1.0f,0.0f,0.0f);//red

glVertex2f(-0.7f, 0.0f);
glVertex2f(-0.7f, 0.15f);

glVertex2f(-0.65f, 0.15f);
glVertex2f(-0.65f, 0.0f);




glEnd();
};
void circle(float radius, float xc, float yc, float red, float green, float blue)
{
glBegin(GL_POLYGON);

glColor3f(red, green, blue);

for(int i = 0; i < 200; i++){
float pi = 3.1416f;
float angle = (i * 2 * pi) / 200;
float x = radius * cos(angle);
float y = radius * sin(angle);
glVertex2f(x + xc, y + yc);
}

glEnd();
}

void Bangladesh(){

glBegin(GL_QUADS);


glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.4f, -0.1f);

glVertex2f(-0.4f, -0.25f);
glVertex2f(-0.65f, -0.25f);


glEnd();
circle(0.05f, -0.53f, -0.175f, 1.0f, 0.0f, 0.0f);
};



void display() {

glClear(GL_COLOR_BUFFER_BIT);

Germany();
Austria();
Russia();
Italy();
Bangladesh();


glFlush();

}




int main(int argc, char** argv) {

glutInit(&argc, argv);          // Initialize GLUT


glutInitWindowSize(520, 620);   // Set the window's initial width & height

glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title

glClearColor(0.50f, 0.50f,0.50f, 0.50f); // White background

glutDisplayFunc(display);       // Register callback handler for window re-paint event


glutMainLoop();                 // Enter the event-processing loop

return 0;

}
