#ifndef ExcepcionNoSePudoAbrirArchivoBinario_H 
#define ExcepcionNoSePudoAbrirArchivoBinario_H

#include <exception>

class ExcepcionNoSePudoAbrirArchivoBinario : public std::exception
{
    public:
    ExcepcionNoSePudoAbrirArchivoBinario() noexcept = default;
    ~ExcepcionNoSePudoAbrirArchivoBinario() = default;

    virtual const char* what() const noexcept {
        return "No se puede abrir archivo Binario";
    }

};

#endif

