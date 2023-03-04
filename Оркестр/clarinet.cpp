#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "wind.h"
#include "clarinet.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void clarinet::Play()
{
	PlaySound(TEXT("byistryiy-klarnet-zvuk-39673.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(1,0);
	cout << "Звуки кларнета\n";
}
