#include <stdlib.h>
#include <GL/freeglut.h>
#include <math.h>

double n=-4;
double pi=3.1416;
double spotAngle=30;
double spotExponent=2;
double xMove=0,zMove=0;
float lightPos[] = {0,3,0,1};
float spotDirection[]= {0,-1,0};
void init(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);

	GLfloat light0_pos[] = {1.0, 0.0, 1.0, 0.0 };
    GLfloat light0_amb[] = { 0.5, 0.0, 0.0, 1.0 };
    GLfloat light0_diffspec[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat glob_amb[] = { 0.3, 0.3, 0.3, 1.0 };
//    GLfloat light0_dir[] = {1,1,1};

	glLightfv(GL_LIGHT0, GL_POSITION, light0_pos);
//	glLightfv(GL_LIGHT0, GL_AMBIENT, light0_amb);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light0_diffspec);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light0_diffspec);
//    glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, light0_dir);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}
void note(){
//void draw(void){
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	GLfloat mat_spec[] = {1.0, 1.0, 1.0, 1.0 };
//	GLfloat mat_shine=  100;
//	GLfloat mat_amb_diff[] = { 1, 0, 0, 1.0 };
//	glLoadIdentity();
//
//	//glPushMatrix();
//	//glTranslatef(-3.75, 3.0, 0.0);
////	glPushMatrix();
//	glTranslatef(0,0,n);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff);
//	//glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_amb_diff);
//
//	glutSolidSphere(1.0, 200, 160);
////    glPopMatrix();
//	//glPopMatrix();
//	glFlush();
//}

//void draw(void){
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	GLfloat no_spec[]={0,0,0,1};
//	GLfloat no_amb[] = {0, 0, 0, 1.0 };
//	GLfloat mat_spec[] = {1.0, 1.0, 1.0, 1.0 };
//	GLfloat mat_shine=  100;
//	GLfloat mat_amb_diff[] = {0.72, 0.53, 0.53, 1.0 };
//	GLfloat mat_amb_diff_2[] = {1, 0.53, 0.53, 1};
//	glLoadIdentity();
//    //11
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_amb_diff);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_amb);
//    glTranslatef(-1,1,0);
//	glutSolidSphere(0.3, 200, 160);
//    //12
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine-95);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_amb_diff);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_amb);
//    glTranslatef(-0.3,1,0);
//	glutSolidSphere(0.3, 200, 160);
//    //13
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_amb_diff);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_amb);
//    glTranslatef(0.4,1,0);
//	glutSolidSphere(0.3, 200, 160);
//	//14
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff);
//    glTranslatef(1.1,1,0);
//	glutSolidSphere(0.3, 200, 160);
//	//21
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(-1,0,0);
//	glutSolidSphere(0.3, 200, 160);
//	glFlush();
//	//22
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine-95);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(-0.3,0,0);
//	glutSolidSphere(0.3, 200, 160);
//	glFlush();
//	//23
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(0.4,0,0);
//	glutSolidSphere(0.3, 200, 160);
//	glFlush();
//	//24
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(1.1,0,0);
//	glutSolidSphere(0.3, 200, 160);
//	glFlush();
//	//31
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(-1,-1,0);
//	glutSolidSphere(0.3, 200, 160);
//	//32
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(-0.3,-1,0);
//	glutSolidSphere(0.3, 200, 160);
//	//33
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(0.4,-1,0);
//	glutSolidSphere(0.3, 200, 160);
//	//34
//	glLoadIdentity();
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_spec);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shine);
//	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_amb_diff_2);
//    glTranslatef(1.1,-1,0);
//	glutSolidSphere(0.3, 200, 160);
//	glFlush();
//}
}
void draw(void){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	GLfloat mat_spec[] = {1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shine=  100;
	GLfloat mat_amb_diff[] = { 1, 0, 0, 1.0 };
	glLoadIdentity();
    float matSpec[]={1,1,1,1};
    float matShine = 50;
    glMaterialfv(GL_FRONT, GL_SPECULAR,matSpec);
    glMaterialf(GL_FRONT, GL_SHININESS,matShine);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT,GL_AMBIENT_AND_DIFFUSE);

    glColor3f(1,1,1);
    gluLookAt(0,4,6,0,0,0,0,1,0);
    glPushMatrix();
    glTranslatef(xMove,0,zMove);
	glPushMatrix();

	glDisable(GL_LIGHTING);
	glRotatef(-90,1,0,0);
	glColor3f(1,1,1);
	glutWireCone(3*tan(spotAngle/180*pi),3,20,20);

	glEnable(GL_LIGHTING);
	glPopMatrix();

	glLightfv(GL_LIGHT0,GL_POSITION,lightPos);
	glLightf(GL_LIGHT0,GL_SPOT_CUTOFF,spotAngle);
	glLightfv(GL_LIGHT0,GL_SPOT_DIRECTION,spotDirection);
	glLightf(GL_LIGHT0,GL_SPOT_EXPONENT,spotExponent);
	glPopMatrix();
    for (int i=0; i<10; i++)
        for (int j=0; j<10; j++){
            glPushMatrix();
            glTranslatef(i-4,0,j-4);
            if ((i+j)%3==0) glColor4f(1,0,0,1);
            else if ((i+j)%3==1) glColor4f(0,1,0,1);
            else glColor4f(0,0,1,1);
            glutSolidSphere(0.5,20,16);
            glPopMatrix();
        }

	glFlush();
}
void resize(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60,(float)w/(float)h,1,20);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y){
	switch (key) {
	case 'n':
		n+=0.1;
        glutPostRedisplay();
		break;
    case 'f':
        n-=0.1;
        glutPostRedisplay();
        break;
    case 27:
        exit(0);
        break;
	}
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);

	init();
	glutDisplayFunc(draw);
	glutReshapeFunc(resize);

	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
