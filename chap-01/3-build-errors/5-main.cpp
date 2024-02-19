#include "5-tac.hpp"
#include "5-tic.hpp"

int main()
{
    Tic tic { 1 };
    Tac tac { 5 };

    tic.swap(tac);
    tac.swap(tic);

    return 0;
}
