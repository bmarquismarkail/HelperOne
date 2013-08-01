#include "basefunc.h"
#include <cstdio>
#include <cstdlib>
_mq::_mq()
{
}

_mq::~_mq()
{
}

const char*  _mq::getError()
{
	return errorMessage.c_str();
}

void _mq::setError(const char *errMessage, bool termFlag)
{
	errorMessage = errMessage;
	errorBit = true;
	if(termFlag)
		exit(EXIT_FAILURE);
}

void _mq::clearError()
{
	errorMessage.clear();
}

//--------------------------------------------------------------------------
_object::_object()
{
}

_object::~_object()
{
}

//---------------------------------------------------------------------------
_manager::_manager()
{
}

_manager::~_manager()
{
}
