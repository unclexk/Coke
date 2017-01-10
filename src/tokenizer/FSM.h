//
// 有限状态机
// Created by 肖康 on 2017/1/5.
//

#ifndef COKE_FSM_H
#define COKE_FSM_H

#include <unordered_map>

namespace coke {
    namespace tokenizer {
        typedef void(*funcPointer)(void);

        template<class S>
        class FSM {
            S currentState;
            std::unordered_map<State, funcPointer> stateFunctions;

            void when(S state, funcPointer &func);
        };

        enum class State {
            begin,
            end,
        };
    }
}

#endif //COKE_FSM_H
