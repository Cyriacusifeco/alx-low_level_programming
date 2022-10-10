#define ABS(X) #if X < 0\
		(X * -1);
#endif
#else
		(X * 1);
#endif
