#ifndef CPP2JSONPARAMETERS_HPP
#define CPP2JSONPARAMETERS_HPP

#include <string>

struct Cpp2JsonParameters
{
    std::string outputFilePath;
    bool prettyOutput;
    bool appendOutput;
    std::string excludeAnnotationContent;
};

#endif // CPP2JSONPARAMETERS_HPP
