#pragma once

#include "primitive.hpp"
#include "cystring.hpp"

struct M_length {
    Primitive value = create_int(0);
};

struct M_get1 {
    virtual Primitive get1(Primitive self, Primitive index){
        return Primitive();
    }
};

struct M_append1 {
    virtual Primitive append1(Primitive self, Primitive item){
        return Primitive();
    }
};

struct M_toString0 {
    virtual Primitive toString0(Primitive self);
};