//
//  main.c
//  GLUTStroke
//
//  Created by Laura del Pino Díaz on 1/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//
#include "View.h"

int win1, win2;

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(300, 300);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    
    win1 = glutCreateWindow("OpenGL Practica 3_1 1 Laura del Pino Díaz");
    Init();
    glutDisplayFunc(DisplayStroke); // define la funcion de rendering
    
    win1 = glutCreateWindow("OpenGL Practica 3_2 2 Laura del Pino Díaz");
    Init();
    glutDisplayFunc(DisplayBitMap); // define la funcion de rendering
        
    
    glutMainLoop();
    
    return 0;
}

