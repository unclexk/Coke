//
// Created by 肖康 on 2017/1/5.
//

#include "FSM.h"

namespace coke {
    namespace tokenizer {

        template<class S>
        void FSM::when(S state, funcPointer &func) {
            stateFunctions.insert({state, func});
            State start = State::begin;
        }
    }
}
