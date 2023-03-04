#include<iostream>
#include<Windows.h>
#include<vector>
#include<conio.h>
#include "Music_instrument.h"
#include "keyboards.h"
#include "synthesizer.h"
#include "piano.h"
#include "accordion.h"
#include "wind.h"
#include "saxophone.h"
#include "clarinet.h"
#include "flute.h"
#include "stringed.h"
#include "Cello.h"
#include "guitar.h"
#include "Violin.h"
#include "colors.h"
using namespace std;

class Orchestra : public Music_instrument, public synthesizer, public piano, public accordion,
	public saxophone, public clarinet, public flute, public Cello, public guitar, public Violin
{
	vector<Music_instrument*>MArr;
public:
	Orchestra() {
		MArr.push_back(new synthesizer);
		MArr.push_back(new piano);
		MArr.push_back(new accordion);
		MArr.push_back(new saxophone);
		MArr.push_back(new clarinet);
		MArr.push_back(new flute);
		MArr.push_back(new Cello);
		MArr.push_back(new guitar);
		MArr.push_back(new Violin);
	}

	virtual void Play();
};

int main()
{
	setlocale(LC_ALL, "ru");
	Orchestra o;
	o.Play();
	SetColor(15,0);
	_getch();
}


void Orchestra::Play()
{
	cout << "Нажимаю любую кнопку, вы переключаете звуки инструментов\n";
	for (int i = 0; i < 9; i++)
	{
		_getch();
		MArr[i]->Play();
	}
}
