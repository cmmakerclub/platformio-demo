#include "Nat.h"
#include <cassert>

int main() {
    Nat *n = new Nat();

    assert(n->hello()==2);
}
