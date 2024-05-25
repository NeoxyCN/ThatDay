#include <GL/freeglut.h>
#include <GL/gl.h>

void display();
void changesize(GLsizei width,GLsizei height);
void gameinit();

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Hello World");
	glutDisplayFunc(display);
	glutReshapeFunc(changesize);
	gameinit();
	glutMainLoop();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(100.0f, 150.0f, 150.0f, 100.0f);
	glFlush();
}

void changesize(GLsizei width, GLsizei height) {
	glViewport(0,0,width,height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (width <= height) {
		glOrtho(0.0f, 250.0f, 0.0f, 250.0f * height / width, 1.0f, -1.0f);
	} else {
		glOrtho(0.0f, 250.0f * width / height, 0.0f, 250.0f, 1.0f, -1.0f);	
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void gameinit() {
	// set background color to white
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}