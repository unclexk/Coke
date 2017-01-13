//
// Created by 肖康 on 2017/1/5.
//

#ifndef COKE_LEXICAL_ANALYZER_H
#define COKE_LEXICAL_ANALYZER_H

#include <string>

namespace coke {
    enum class TokenType {
        integer,// 整数
        add,// +
        sub,// -
        mul,// *
        div,// /
        unknown,
    };

    class Token {
        TokenType tokenType = TokenType::unknown;
        int row = -1;
        int column = -1;
        std::string value;
    };

}


#endif //COKE_LEXICAL_ANALYZER_H
