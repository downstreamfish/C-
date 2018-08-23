#ifndef MARRAY_H_INCLUDED
#define MARRAY_H_INCLUDED

#define Bool int
#define true 1
#define false 0

struct mArray{
   int * pbase;
   int len;
   int cnt;
};

void init_arr(struct mArray *pArr, int length);
Bool append_arr(struct mArray *pArrm, int value);
Bool insert_arr(struct mArray *pArr, int pos, int value);
Bool delete_arr(struct mArray *pArr, int pos, int *pval);
int get();
Bool is_empty(struct mArray * pArr);
Bool is_full();
void sort_arr();
void show_arr(struct mArray *ptr);
void inversion_arr();

#endif // MARRAY_H_INCLUDED
