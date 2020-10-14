```c++
#ifndef GBQPRIVATECLASSDEFIND_H
#define GBQPRIVATECLASSDEFIND_H

#include <QObject>

#define GQ_DECLARE_PRIVATE(Class) \
    inline Class##Private* gd_func() { return reinterpret_cast<Class##Private *>(qGetPtrHelper(gd_ptr)); } \
    inline const Class##Private* gd_func() const { return reinterpret_cast<const Class##Private *>(qGetPtrHelper(gd_ptr)); } \
    friend class Class##Private;

#define GQ_DECLARE_PUBLIC(Class)                                    \
    inline Class* gq_func() { return static_cast<Class *>(gq_ptr); } \
    inline const Class* gq_func() const { return static_cast<const Class *>(gq_ptr); } \
    friend class Class;

#define GQ_D(Class) Class##Private * const gd = gd_func()
#define GQ_Q(Class) Class * const gq = gq_func()


class GBQBaseClass;
class GBQBaseClassPrivate : public QObject
{
    Q_OBJECT
protected:
    GBQBaseClass * gq_ptr;
private:
    GQ_DECLARE_PUBLIC(GBQBaseClass)
};

class GBQBaseClass
{
protected:
    GBQBaseClass(GBQBaseClassPrivate *dd)
        :gd_ptr(dd)
    {
        GQ_D(GBQBaseClass);
        gd->gq_ptr = this;
    }

protected:
    QScopedPointer<GBQBaseClassPrivate> gd_ptr;
private:
    GQ_DECLARE_PRIVATE(GBQBaseClass)
};

#endif // GBQPRIVATECLASSDEFIND_H

```





qGetPtrHelper:

d_ptr可以是一个智能指针(例如QScopedPointer)，在这种情况下，它不能仅传递给reinterpret_cast:d_func()必须使用成员函数访问内部指针，或者因此需要两个版本的宏(在实际上，在qGetPtrHelper存在之前曾经有两个)。 qGetPtrHelper的作用是触发智能指针的隐式强制转换(当作为参数传递给原始参数时)，从而消除了特殊处理的需要。