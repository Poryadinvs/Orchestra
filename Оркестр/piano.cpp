#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "keyboards.h"
#include "piano.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void piano::Play()
{
	PlaySound(TEXT("tihoe-pianino-spokoystvie-vnutrennee-serdtse-korotkoe-38416.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(6,0);
	cout << "Звуки пианино\n";
}
