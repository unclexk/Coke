//
// Created by 肖康 on 2017/1/5.
//

#include "FSM.h"

namespace coke {

    void FSM::when(int state, funcPointer func) {
        stateFunctions[state] = func;
    }

    TranslationResult FSM::input(char &c) {
        return stateFunctions[currentState](c);
    }

    void FSM::translateTo(int to) {
        currentState = to;
    }

    void FSM::initFSM() {
        auto beginFunc = [](char &c) -> TranslationResult {
            TranslationResult result;
            return result;
        };
        when(State::begin, beginFunc);
    }


}
