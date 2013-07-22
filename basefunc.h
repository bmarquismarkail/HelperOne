#ifndef BASEFUNC_H
#define BASEFUNC_H


class _func
{
    public:
        _func();
        virtual ~_func();
    protected:
    private:
};

class _object : public _func
{
    public:
        _object();
        ~_object();
    protected:
    private:
};

class _manager : public _func
{
    public:
        _manager();
        ~_manager();
    protected:
    private:
};
#endif // BASEFUNC_H
