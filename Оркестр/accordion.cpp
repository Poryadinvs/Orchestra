#include<iostream>
#include<Windows.h>
#include "Music_instrument.h"
#include "keyboards.h"
#include "accordion.h"
#include "colors.h"
#include <MMSystem.h>
#pragma comment (lib, "winmm")
using namespace std;

void accordion::Play()
{
	PlaySound(TEXT("akkordion-la2-a2.wav"), NULL, SND_ASYNC | SND_LOOP);
	SetColor(4,0);
	cout << "Звуки аккордиона\n";
}
