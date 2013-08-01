#ifndef BASEFUNC_H
#define BASEFUNC_H

#include <string>

class _mq
{
    public:
        _mq();
        virtual ~_mq();
		const char *getError();
		void setError(const char *errMessage, bool termFlag);
		void clearError();
    protected:
		bool errorBit;
    private:
		std::string errorMessage;
};

class _object : virtual public _mq
{
    public:
        _object();
        ~_object();
    protected:
    private:
};

class _manager : virtual public _mq
{
    public:
        _manager();
        ~_manager();
    protected:
    private:
};
#endif // BASEFUNC_H
