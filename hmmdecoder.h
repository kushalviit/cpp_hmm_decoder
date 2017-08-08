#ifndef HMMDECODER_H_
#define HMMDECODER_H_
#define LEN 128
#define NOS 3
#define NOE 8
#define W_IN    8
#define IW_IN   8
#define W_OUT   24
#define IW_OUT  2

#include <ap_int.h>

typedef ap_fixed<W_IN,IW_IN> seq_t;
typedef ap_fixed<W_OUT,IW_OUT> mat_t;

typedef int seq_t;
typedef float mat_t;

void hmm_decoder(seq_t sequence[LEN],
                mat_t tran_mat[NOS][NOS],
                mat_t emi_mat[NOS][NOE],mat_t output[NOS][LEN]);

#endif

