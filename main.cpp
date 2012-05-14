/**********************************/
/*    Qori Nurqolbi - 10108424    */
/* Idham Herawan Putra - 10108450 */
/*      Nur Mufmin - 10108447     */
/*     Vian Arwanda - 10108467    */
/**********************************/

#include <Windows.h>
#include <gl\OpenGL\GL\glut.h>

void display(void) { 
/* Membersihkan semua pixel di buffer(clear all pixels)  */ 
   glClear (GL_COLOR_BUFFER_BIT); 
 
/* Menggambar polygon (rectangle) (0.25, 0.25, 0.0) dan (0.75, 0.75, 0.0) 
 * Objek berwarna hijau   
 */

   glColor3f(0.5, 0.5, 0.5); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.02, 0.7, 0.0);
      glVertex3f(0.2, 0.7, 0.0);
	  glVertex3f(0.2, 0.85, 0.0);
	  glVertex3f(0.11, 0.95, 0.0);
      glVertex3f(0.02, 0.85, 0.0);
   glEnd();

   glColor3f(0.0, 1.0, 0.0); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.4, 0.7, 0.0);
      glVertex3f(0.55, 0.7, 0.0);
	  glVertex3f(0.65, 0.825, 0.0);
	  glVertex3f(0.55, 0.95, 0.0);
	  glVertex3f(0.4, 0.95, 0.0);
	  glVertex3f(0.3, 0.825, 0.0);
   glEnd();

   glColor3f(0.0, 1.0, 1.0); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.75, 0.7, 0.0);
      glVertex3f(0.85, 0.7, 0.0);
	  glVertex3f(0.87, 0.85, 0.0);
	  glVertex3f(0.80, 0.95, 0.0);
	  glVertex3f(0.73, 0.85, 0.0);
   glEnd();

   glColor3f(0.9, 0.2, 0.2); 
   glBegin(GL_LINE_STRIP); 
      glVertex3f(0.02, 0.4, 0.0);
      glVertex3f(0.15, 0.4, 0.0);
	  glVertex3f(0.15, 0.35, 0.0);
	  glVertex3f(0.25, 0.45, 0.0);
	  glVertex3f(0.15, 0.55, 0.0);
	  glVertex3f(0.15, 0.5, 0.0);
	  glVertex3f(0.02, 0.5, 0.0);
	  glVertex3f(0.02, 0.4, 0.0);
   glEnd();

   glColor3f(0.2, 0.0, 0.5); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.3, 0.35, 0.0);
      glVertex3f(0.6, 0.35, 0.0);
	  glVertex3f(0.48, 0.6, 0.0);
      glVertex3f(0.3, 0.6, 0.0);
   glEnd();

   glColor3f(0.5, 0.3, 0.8); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.73, 0.35, 0.0);
      glVertex3f(0.98, 0.35, 0.0);
	  glVertex3f(0.9, 0.6, 0.0);
      glVertex3f(0.8, 0.6, 0.0);
   glEnd();

   glColor3f(0.8, 0.6, 1.0); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.1, 0.05, 0.0);
      glVertex3f(0.28, 0.05, 0.0);
	  glVertex3f(0.2, 0.2, 0.0);
      glVertex3f(0.02, 0.2, 0.0);
   glEnd();

   glColor3f(1.0, 1.0, 1.0); 
   glBegin(GL_POLYGON); 
      glVertex3f(0.3, 0.05, 0.0);
      glVertex3f(0.5, 0.05, 0.0);
      glVertex3f(0.3, 0.3, 0.0);
   glEnd();

   glColor3f(1.0, 1.0, 0.0);
   glBegin(GL_POLYGON);
      glVertex3f(0.73, 0.05, 0.0);
      glVertex3f(0.99, 0.2, 0.0);
      glVertex3f(0.73, 0.3, 0.0);
   glEnd();
/* Memulai proses penggambaran
 */ 
   glFlush ();  
} 

void init (void) { 
// Membuat warna background  
  
   glClearColor (0.0, 0.0, 0.0, 0.0); 
 
/* inisialisasi nilai tampilan (viewing values)  */ 
   glMatrixMode(GL_PROJECTION); 
   glLoadIdentity(); 
   glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0); 
} 
 
/* Deklarasi window size, position, dan display mode(single buffer and RGBA).   
 * Pemanggilan routin inisialisasi. 
 * Memanggil fungsi untuk manampilkan objek di layar 
 */ 
int main(int argc, char** argv) {
   glutInit(&argc, argv); 
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); 
   glutInitWindowSize (1000, 650);
   glutInitWindowPosition (200, 50);
   glutCreateWindow ("Tugas 3 - Grafkom | Qori, Idham. H, Nur Mufmin, Vian"); 
   init (); 
   glutDisplayFunc(display);  
   glutMainLoop(); 
   return 0; 
} 