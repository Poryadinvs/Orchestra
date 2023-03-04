#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "wind.h"
#include "flute.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void flute::Play()
{
	PlaySound(TEXT("zvukovoy-effekt-quotfleytaquot-flute-28185.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(9,0);
	cout << "Звуки флейты\n";
}
