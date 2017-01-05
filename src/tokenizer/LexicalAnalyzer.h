//
// Created by 肖康 on 2017/1/5.
//

#ifndef COKE_LEXICAL_ANALYZER_H
#define COKE_LEXICAL_ANALYZER_H

#include <string>

namespace coke {
    namespace compiler {
        enum class TokenType {
            Integer,// 整数
            Add,// +
            Sub,// -
            Mul,// *
            Div,// /
            Unknown,
        };

        class Token {
            TokenType tokenType = TokenType::Unknown;
            int row = -1;
            int column = -1;
            std::string &value;
        };

    }
}


#endif //COKE_LEXICAL_ANALYZER_H
