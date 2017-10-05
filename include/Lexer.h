#ifndef XENON_LEXER_HEADER
#define XENON_LEXER_HEADER

#include <cstddef>
#include <cstdlib>

#include "EnumTypes.h"
#include "CharSet.h"
#include "XenError.h"

/*Lexer header***
 * Classifies tokens
 */


//set of charsets to quickly classify characters with bool membership
class TokenSets
{
public:
static CharSet whiteSpace;
static CharSet digits;
static CharSet alpha;
static CharSet alphaNumeric;
static CharSet symbols;
static CharSet eventName;
static CharSet numbers;
static CharSet numberStart;
};



class Lexer {

public:
static double oneDigit(const char* ch);
static XenEventType eventType(const char* token, size_t* nParsed);

static inline bool isNumberStart(const char* ch)
{
        return TokenSets::numberStart.contains(*ch);
}

static inline bool isEventStart(const char* ch)
{
        return TokenSets::eventName.contains(*ch);
}
};





#endif
