#include "OutOnlyOne.cpp"
#include "Complex.h"
#include "Fracture.h"
#include "Container.h"

template void OutOnlyOne<Fracture>(List *lst, ofstream &ofst);
template void OutOnlyOne<Complex>(List *lst, ofstream &ofst);