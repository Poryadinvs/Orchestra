#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "wind.h"
#include "saxophone.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void saxophone::Play()
{
	PlaySound(TEXT("zvuchanie-saksofona.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(5, 0);
	cout << "Звуки саксофон\n";
}
