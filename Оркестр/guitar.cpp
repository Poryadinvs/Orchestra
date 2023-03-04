#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "stringed.h"
#include "guitar.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void guitar::Play()
{
	PlaySound(TEXT("perehodnaya-gitara-gitara-perehodnaya-muzyika-43406.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(14,0);
	cout << "Звуки гитары\n";
}
