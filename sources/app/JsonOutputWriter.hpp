#ifndef CPP2JSON_OUTPUT_WRITER_HPP
#define CPP2JSON_OUTPUT_WRITER_HPP
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/ostreamwrapper.h>
#include <memory>

struct Cpp2JsonParameters;

class JsonOutputWriter
{
public:
    explicit JsonOutputWriter(Cpp2JsonParameters const& parameters);

    bool write(rapidjson::Document const& document)const;
private:
    bool writeJsonToOStream(rapidjson::Document const& document, std::ostream& os)const;
private:
    Cpp2JsonParameters const& m_parameters;
};

#endif // CPP2JSON_OUTPUT_WRITER_HPP
