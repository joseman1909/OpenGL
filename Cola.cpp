#include "Cola.h"
#define ANGULO 45

void Cola::DibujarCola(float p, int n, float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glPushMatrix();
		glTranslatef(-0.25, 0.0, 0.0);
		glRotatef(p, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCube(1.0);

		glPopMatrix();

		for (int i = 0; i < n; i++) {

			glTranslatef(0.25, 0.0, 0.0);
			glRotatef(p, 0.0, 0.0, 1.0);
			glTranslatef(0.25, 0.0, 0.0);
			glPushMatrix();
			glScalef(0.5, 0.4, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}

		glPopMatrix();
	glPopMatrix();
}
