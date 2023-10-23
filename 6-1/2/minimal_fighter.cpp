#include "minimal_fighter.h"

MinimalFighter::MinimalFighter(){
    mHp = 0;
    mPower = 0;
    mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power){
    mHp = _hp;
    mPower = _power;
    if(mHp > 0) mStatus = Alive;
    else mStatus = Dead;
}

int MinimalFighter::hp(){
    return mHp;
}

int MinimalFighter::power(){
    return mPower;
}

FighterStatus MinimalFighter::status(){
    return mStatus;
}

void MinimalFighter::setHp(int _hp){
    mHp = _hp;
    if(mHp <= 0) mStatus = Dead;
}

void MinimalFighter::hit(MinimalFighter* _enenmy){
    _enenmy->setHp(_enenmy->mHp - mPower);
    setHp(mHp - _enenmy->mPower);
}

void MinimalFighter::attack(MinimalFighter* _enemy){
    _enemy->setHp(_enemy->mHp - mPower);
    mPower = 0;
}

void MinimalFighter::fight(MinimalFighter* _enemy){
    while(mStatus != Dead && _enemy->status() != Dead){
        hit(_enemy);
    }
}