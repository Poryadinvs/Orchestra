#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "keyboards.h"
#include "synthesizer.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void synthesizer::Play()
{
	PlaySound(TEXT("sintezator-odinochnyiy.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(2,0);
	cout << "Звуки синтезатора\n";
}
