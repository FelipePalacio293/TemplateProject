#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h> //*** Para Textura: Incluir librer�a

class Gorila
{
	public:
		Gorila() {};
		void dibujarGorila(float posX, float posY, float posZ);
		~Gorila() {};

};
