#include "Cubos.h"

Cubos::Cubos() {
}

void Cubos::DibujarCubos(float angle, float x1, float y1, float z1, float x2, float y2, float z2) {
    glPushMatrix();
        glTranslatef(x2, y2, z2);
        glRotatef(angle, x1, y1, z1);
        glutSolidCube(1);
    glPopMatrix();

}