#ifndef ExcepcionPersonaSolicitadaNoValida_H 
#define ExcepcionPersonaSolicitadaNoValida_H

#include <exception>

class ExcepcionPersonaSolicitadaNoValida : public std::exception
{
    public:
    ExcepcionPersonaSolicitadaNoValida() noexcept = default;
    ~ExcepcionPersonaSolicitadaNoValida() = default;

    virtual const char* what() const noexcept {
        return "La persona solicitada no es valida";
    }

};

#endif


