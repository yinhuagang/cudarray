namespace cudarray {

enum ReduceOp {
  MAX_OP, MEAN_OP, MIN_OP, SUM_OP
};

enum ReduceToIntOp {
  ARGMAX_OP, ARGMIN_OP
};

template<typename T>
void reduce(ReduceOp op, const T *a, unsigned int n, T *b);

template<typename T>
void reduce_mat(ReduceOp op, const T *a, unsigned int m, unsigned int n,
                bool reduce_leading, T *b);

}
