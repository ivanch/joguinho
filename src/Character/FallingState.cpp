#include "FallingState.hpp"

FallingState::FallingState(): CharacterState(STATE_FALLING){

}

FallingState::~FallingState(){

}

bool FallingState::walking(Character* _char){
    delete _char->getCharacterState();
    _char->setCharacterState(new WalkingState());
    return true;
}

bool FallingState::idle(Character* _char){
    delete _char->getCharacterState();
    _char->setCharacterState(new IdleState());
    return true;
}