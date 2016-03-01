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
    for (c = string; *c != '\0'; c++) { glutStrokeCharacter(font, *c); }
    glPopMatrix();
}

void DisplayStroke(){

        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0, 0.0, 0.0);
        writeStrokeString(0.0, 0.0,GLUT_STROKE_ROMAN, "Hello OpenGL");
        glFlush();
}

void DisplayBitMap(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    writeBitmapString(0.0, 0.0, GLUT_BITMAP_TIMES_ROMAN_24, "Hello OpenGL");
    glFlush();
}

void Init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, 1.0f, 0.0f);
}
