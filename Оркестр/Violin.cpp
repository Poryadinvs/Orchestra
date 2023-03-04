#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "stringed.h"
#include "Violin.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void Violin::Play()
{
	PlaySound(TEXT("notesthenchord2-violonchel.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(0, 15);
	cout << "Звуки виолончели\n";
}
