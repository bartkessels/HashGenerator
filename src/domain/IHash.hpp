#pragma once

#include <string>

namespace hashgen::domain
{
    struct IHash
    {
    public:
        virtual std::string hash(const std::string&) = 0;
    };
}