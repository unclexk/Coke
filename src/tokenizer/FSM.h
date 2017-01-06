//
// 有限状态机
// Created by 肖康 on 2017/1/5.
//

#ifndef COKE_FSM_H
#define COKE_FSM_H

namespace coke {
    namespace tokenizer {
        class FSM {
            State state;
        };

        enum class State {
            begin,

            end,
        };
    }
}

#endif //COKE_FSM_H
