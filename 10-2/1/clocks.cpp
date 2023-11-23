#include "clocks.h"
#include <iostream>

using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond){
  _clockTime.setTime(hour, minute, second, 1);
  _driftPerSecond = driftPerSecond;
  _totalDrift = 0;
}

void Clock::reset(){
  _clockTime.reset();
}

void Clock::tick(){
  _clockTime.increment();
  _totalDrift += _driftPerSecond;
}

void SundialClock::displayTime(){
  cout << "SundialClock ";
  _clockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void CuckooClock::displayTime(){
  cout << "CuckooClock ";
  _clockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void GrandFatherClock::displayTime(){
  cout << "GrandFatherClock ";
  _clockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void WristClock::displayTime(){
  cout << "WristClock ";
  _clockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void AtomicClock::displayTime(){
  cout << "AtomicClock ";
  _clockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}