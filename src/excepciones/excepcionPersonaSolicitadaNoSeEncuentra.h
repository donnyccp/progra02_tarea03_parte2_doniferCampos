#ifndef ExcepcionPersonaSolicitadaNoSeEncuentra_H 
#define ExcepcionPersonaSolicitadaNoSeEncuentra_H

#include <exception>

class ExcepcionPersonaSolicitadaNoSeEncuentra : public std::exception
{
    public:
    ExcepcionPersonaSolicitadaNoSeEncuentra() noexcept = default;
    ~ExcepcionPersonaSolicitadaNoSeEncuentra() = default;

    virtual const char* what() const noexcept {
        return "La persona solicitada no se encuentra";
    }

};

#endif
