// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FilterTestGameRule : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTGAMERULE
public:
    class FilterTestGameRule& operator=(class FilterTestGameRule const &) = delete;
    FilterTestGameRule(class FilterTestGameRule const &) = delete;
    FilterTestGameRule() = delete;
#endif


public:
    /*0*/ virtual ~FilterTestGameRule();
    /*1*/ virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*6*/ virtual class Json::Value _serializeValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTESTGAMERULE
public:
#endif


};