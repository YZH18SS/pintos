#ifndef _THREAD_FIXED_POINT_H
#define _THREAD_FIXED_POINT_H
typedef int fixed_t;
#define FP_Q 14
#define F  1 << FP_Q
#define FP_CONVERT_FIXED(n) ((n)*(F))
#define FP_ROUND_ZERO(x)  ((x)/(F))
#define FP_ROUND_NEAREST(x) (((x) >= 0)?(((x)+(F)/2)/(F)):((((x)-(F)/2))/(F)))
#define FP_ADD_FIXED(x,y) ((x)+(y))
#define FP_ADD_INT(x,n) ((x)+(n*(F)))
#define FP_SUB_FIXED(x,y) ((x)-(y))
#define FP_SUB_INT(x,n) ((x)-(n*(F)))
#define FP_MULT_FIXED(x,y) (((int64_t)(x))*(y)/(F))
#define FP_MULT_INT(x,n) ((x)*(n))
#define FP_DIVD_FIXED(x,y) (((int64_t)(x))*(F) / (y))
#define FP_DIVD_INT(x,n) ((x)/(n))

#endif
