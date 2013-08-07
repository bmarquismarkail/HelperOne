#ifndef BASEFUNC_H
#define BASEFUNC_H
#include <string>

#if __cplusplus >= 201103L
#include <unordered_map>
#else
#include <map>
#endif


template<class T1, class T2>
struct MarquisSystem
{
    #if __cplusplus >= 201103L
	typedef std::unordered_map<T1,T2> ManMap;
	#else
	typedef std::map<T1,T2> ManMap;
	#endif
};

class _mq
{
    public:
        _mq();
        virtual ~_mq();
		const char *getError();
		void setError(const char *errMessage, bool termFlag = false);
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
