#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "stringed.h"
#include "Cello.h"
#include <MMSystem.h>
#include "colors.h"
#pragma comment (lib, "winmm")
using namespace std;

void Cello::Play()
{
	PlaySound(TEXT("skripka-dlinnyiy-usilivayuschiysya.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(11,0);
	cout << "Звуки скрипки\n";
}
