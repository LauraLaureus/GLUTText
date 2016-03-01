//
//  View.c
//  GLUTStroke
//
//  Created by Laura del Pino Díaz on 1/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "View.h"

void writeBitmapString(float x, float y, void* font, char* string){

    char* c;
    glRasterPos2f(x, y);
    for (c = string; *c != '\0'; c++) { glutBitmapCharacter(font, *c); }
}

void writeStrokeString(float x, float y, void* font, char* string){
    char* c;
    glPushMatrix();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x,y,0);
    glScalef(1.0/300.0, 1.0/300.0, 1.0/300.0);
    for (c = string; *c != '\0'; c++) { glutBitmapCharacter(font, *c); }
    glPopMatrix();
}

void Display(){

}
