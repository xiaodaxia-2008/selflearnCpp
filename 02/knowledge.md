1.  const 修饰符，表示定义的是一个常量，其值不能修改，如：
    const int a = 0;
    a的值不能再改变，而且a必须在定义的时候被初始化；
    可以定义个const 指针，指向a，如：
    const int *cptr = a;
    *cptr的值也不能改变；
    int b = 1;
    int *const cptr2 = &b;
    cptr2 指向的地址不能改变
