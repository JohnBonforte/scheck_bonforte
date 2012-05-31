#ifndef ERROR_H
#define ERROR_H
#include <stdexcept>
#include <string>

class ScheckError : public std::runtime_error {
    public:
        ScheckError( const std::string & emsg ) : std::runtime_error( emsg ) { }
};
#endif //ERROR_H
