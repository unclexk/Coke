//
// 有限状态机
// Created by 肖康 on 2017/1/5.
//

#ifndef COKE_FSM_H
#define COKE_FSM_H

#include <unordered_map>
#include "LexicalAnalyzer.h"

namespace coke {
    class TranslationResult {
        bool success;
        Token token;
    };

    class State {
    public:
        const static int begin = 0;
        const static int end = 1;
    };

    typedef TranslationResult(*funcPointer)(char &c);

    class FSM {
    private:
        int currentState;
        std::unordered_map<int, funcPointer> stateFunctions;
    public:
        void when(int state, funcPointer func);

        TranslationResult input(char &c);

        void translateTo(int to);

        void initFSM();
    };

}

#endif //COKE_FSM_H
