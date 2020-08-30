#pragma once
#include <string>

class Tokenizer {
public:
    static std::string readSequence(const std::string& line, size_t& position);
    static std::string readName(const std::string& line, size_t& position);

private:
    static const char FrameDelimiterSign;
    static const char NameDelimiterSign;
};