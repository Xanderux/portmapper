CC=cc
FLAGS=-I/usr/include/tirpc /usr/lib/libtirpc.so;

all: rpcb_prot_xdr.c rpcb_prot_svc.c rpcb_prot_clnt.c
	$(CC) -c $^ $(FLAGS)

