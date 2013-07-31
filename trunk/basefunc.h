#ifndef BASEFUNC_H
#define BASEFUNC_H


class _mq
{
    public:
        _mq();
        virtual ~_mq();
    protected:
    private:
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
