/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPCB_PROT_H_RPCGEN
#define _RPCB_PROT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define RPCB_PORT 111

struct rpcb {
	u_long r_prog;
	u_long r_vers;
	char *r_netid;
	char *r_addr;
	char *r_owner;
};
typedef struct rpcb rpcb;

struct rp__list {
	rpcb rpcb_map;
	struct rp__list *rpcb_next;
};
typedef struct rp__list rp__list;

typedef rp__list *rpcblist_ptr;

struct rpcb_rmtcallargs {
	u_long prog;
	u_long vers;
	u_long proc;
	struct {
		u_int args_len;
		char *args_val;
	} args;
};
typedef struct rpcb_rmtcallargs rpcb_rmtcallargs;

struct rpcb_rmtcallres {
	char *addr;
	struct {
		u_int results_len;
		char *results_val;
	} results;
};
typedef struct rpcb_rmtcallres rpcb_rmtcallres;

struct rpcb_entry {
	char *r_maddr;
	char *r_nc_netid;
	u_long r_nc_semantics;
	char *r_nc_protofmly;
	char *r_nc_proto;
};
typedef struct rpcb_entry rpcb_entry;

struct rpcb_entry_list {
	rpcb_entry rpcb_entry_map;
	struct rpcb_entry_list *rpcb_entry_next;
};
typedef struct rpcb_entry_list rpcb_entry_list;

typedef rpcb_entry_list *rpcb_entry_list_ptr;
#define rpcb_highproc_2 RPCBPROC_CALLIT
#define rpcb_highproc_3 RPCBPROC_TADDR2UADDR
#define rpcb_highproc_4 RPCBPROC_GETSTAT
#define RPCBSTAT_HIGHPROC 13
#define RPCBVERS_STAT 3
#define RPCBVERS_4_STAT 2
#define RPCBVERS_3_STAT 1
#define RPCBVERS_2_STAT 0

struct rpcbs_addrlist {
	u_long prog;
	u_long vers;
	int success;
	int failure;
	char *netid;
	struct rpcbs_addrlist *next;
};
typedef struct rpcbs_addrlist rpcbs_addrlist;

struct rpcbs_rmtcalllist {
	u_long prog;
	u_long vers;
	u_long proc;
	int success;
	int failure;
	int indirect;
	char *netid;
	struct rpcbs_rmtcalllist *next;
};
typedef struct rpcbs_rmtcalllist rpcbs_rmtcalllist;

typedef int rpcbs_proc[RPCBSTAT_HIGHPROC];

typedef rpcbs_addrlist *rpcbs_addrlist_ptr;

typedef rpcbs_rmtcalllist *rpcbs_rmtcalllist_ptr;

struct rpcb_stat {
	rpcbs_proc info;
	int setinfo;
	int unsetinfo;
	rpcbs_addrlist_ptr addrinfo;
	rpcbs_rmtcalllist_ptr rmtinfo;
};
typedef struct rpcb_stat rpcb_stat;

typedef rpcb_stat rpcb_stat_byvers[RPCBVERS_STAT];

struct netbuf {
	u_int maxlen;
	struct {
		u_int buf_len;
		char *buf_val;
	} buf;
};
typedef struct netbuf netbuf;

#define RPCBPROG 100000
#define RPCBVERS 3

#if defined(__STDC__) || defined(__cplusplus)
#define RPCBPROC_SET 1
extern  bool_t * rpcbproc_set_3(rpcb *, CLIENT *);
extern  bool_t * rpcbproc_set_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_UNSET 2
extern  bool_t * rpcbproc_unset_3(rpcb *, CLIENT *);
extern  bool_t * rpcbproc_unset_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_GETADDR 3
extern  char ** rpcbproc_getaddr_3(rpcb *, CLIENT *);
extern  char ** rpcbproc_getaddr_3_svc(rpcb *, struct svc_req *);
#define RPCBPROC_DUMP 4
extern  rpcblist_ptr * rpcbproc_dump_3(void *, CLIENT *);
extern  rpcblist_ptr * rpcbproc_dump_3_svc(void *, struct svc_req *);
#define RPCBPROC_CALLIT 5
extern  rpcb_rmtcallres * rpcbproc_callit_3(rpcb_rmtcallargs *, CLIENT *);
extern  rpcb_rmtcallres * rpcbproc_callit_3_svc(rpcb_rmtcallargs *, struct svc_req *);
#define RPCBPROC_GETTIME 6
extern  u_int * rpcbproc_gettime_3(void *, CLIENT *);
extern  u_int * rpcbproc_gettime_3_svc(void *, struct svc_req *);
#define RPCBPROC_UADDR2TADDR 7
extern  netbuf * rpcbproc_uaddr2taddr_3(char **, CLIENT *);
extern  netbuf * rpcbproc_uaddr2taddr_3_svc(char **, struct svc_req *);
#define RPCBPROC_TADDR2UADDR 8
extern  char ** rpcbproc_taddr2uaddr_3(netbuf *, CLIENT *);
extern  char ** rpcbproc_taddr2uaddr_3_svc(netbuf *, struct svc_req *);
extern int rpcbprog_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define RPCBPROC_SET 1
extern  bool_t * rpcbproc_set_3();
extern  bool_t * rpcbproc_set_3_svc();
#define RPCBPROC_UNSET 2
extern  bool_t * rpcbproc_unset_3();
extern  bool_t * rpcbproc_unset_3_svc();
#define RPCBPROC_GETADDR 3
extern  char ** rpcbproc_getaddr_3();
extern  char ** rpcbproc_getaddr_3_svc();
#define RPCBPROC_DUMP 4
extern  rpcblist_ptr * rpcbproc_dump_3();
extern  rpcblist_ptr * rpcbproc_dump_3_svc();
#define RPCBPROC_CALLIT 5
extern  rpcb_rmtcallres * rpcbproc_callit_3();
extern  rpcb_rmtcallres * rpcbproc_callit_3_svc();
#define RPCBPROC_GETTIME 6
extern  u_int * rpcbproc_gettime_3();
extern  u_int * rpcbproc_gettime_3_svc();
#define RPCBPROC_UADDR2TADDR 7
extern  netbuf * rpcbproc_uaddr2taddr_3();
extern  netbuf * rpcbproc_uaddr2taddr_3_svc();
#define RPCBPROC_TADDR2UADDR 8
extern  char ** rpcbproc_taddr2uaddr_3();
extern  char ** rpcbproc_taddr2uaddr_3_svc();
extern int rpcbprog_3_freeresult ();
#endif /* K&R C */
#define RPCBVERS4 4

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t * rpcbproc_set_4(rpcb *, CLIENT *);
extern  bool_t * rpcbproc_set_4_svc(rpcb *, struct svc_req *);
extern  bool_t * rpcbproc_unset_4(rpcb *, CLIENT *);
extern  bool_t * rpcbproc_unset_4_svc(rpcb *, struct svc_req *);
extern  char ** rpcbproc_getaddr_4(rpcb *, CLIENT *);
extern  char ** rpcbproc_getaddr_4_svc(rpcb *, struct svc_req *);
extern  rpcblist_ptr * rpcbproc_dump_4(void *, CLIENT *);
extern  rpcblist_ptr * rpcbproc_dump_4_svc(void *, struct svc_req *);
#define RPCBPROC_BCAST RPCBPROC_CALLIT
extern  rpcb_rmtcallres * rpcbproc_bcast_4(rpcb_rmtcallargs *, CLIENT *);
extern  rpcb_rmtcallres * rpcbproc_bcast_4_svc(rpcb_rmtcallargs *, struct svc_req *);
extern  u_int * rpcbproc_gettime_4(void *, CLIENT *);
extern  u_int * rpcbproc_gettime_4_svc(void *, struct svc_req *);
extern  netbuf * rpcbproc_uaddr2taddr_4(char **, CLIENT *);
extern  netbuf * rpcbproc_uaddr2taddr_4_svc(char **, struct svc_req *);
extern  char ** rpcbproc_taddr2uaddr_4(netbuf *, CLIENT *);
extern  char ** rpcbproc_taddr2uaddr_4_svc(netbuf *, struct svc_req *);
#define RPCBPROC_GETVERSADDR 9
extern  char ** rpcbproc_getversaddr_4(rpcb *, CLIENT *);
extern  char ** rpcbproc_getversaddr_4_svc(rpcb *, struct svc_req *);
#define RPCBPROC_INDIRECT 10
extern  rpcb_rmtcallres * rpcbproc_indirect_4(rpcb_rmtcallargs *, CLIENT *);
extern  rpcb_rmtcallres * rpcbproc_indirect_4_svc(rpcb_rmtcallargs *, struct svc_req *);
#define RPCBPROC_GETADDRLIST 11
extern  rpcb_entry_list_ptr * rpcbproc_getaddrlist_4(rpcb *, CLIENT *);
extern  rpcb_entry_list_ptr * rpcbproc_getaddrlist_4_svc(rpcb *, struct svc_req *);
#define RPCBPROC_GETSTAT 12
extern  rpcb_stat * rpcbproc_getstat_4(void *, CLIENT *);
extern  rpcb_stat * rpcbproc_getstat_4_svc(void *, struct svc_req *);
extern int rpcbprog_4_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
extern  bool_t * rpcbproc_set_4();
extern  bool_t * rpcbproc_set_4_svc();
extern  bool_t * rpcbproc_unset_4();
extern  bool_t * rpcbproc_unset_4_svc();
extern  char ** rpcbproc_getaddr_4();
extern  char ** rpcbproc_getaddr_4_svc();
extern  rpcblist_ptr * rpcbproc_dump_4();
extern  rpcblist_ptr * rpcbproc_dump_4_svc();
#define RPCBPROC_BCAST RPCBPROC_CALLIT
extern  rpcb_rmtcallres * rpcbproc_bcast_4();
extern  rpcb_rmtcallres * rpcbproc_bcast_4_svc();
extern  u_int * rpcbproc_gettime_4();
extern  u_int * rpcbproc_gettime_4_svc();
extern  netbuf * rpcbproc_uaddr2taddr_4();
extern  netbuf * rpcbproc_uaddr2taddr_4_svc();
extern  char ** rpcbproc_taddr2uaddr_4();
extern  char ** rpcbproc_taddr2uaddr_4_svc();
#define RPCBPROC_GETVERSADDR 9
extern  char ** rpcbproc_getversaddr_4();
extern  char ** rpcbproc_getversaddr_4_svc();
#define RPCBPROC_INDIRECT 10
extern  rpcb_rmtcallres * rpcbproc_indirect_4();
extern  rpcb_rmtcallres * rpcbproc_indirect_4_svc();
#define RPCBPROC_GETADDRLIST 11
extern  rpcb_entry_list_ptr * rpcbproc_getaddrlist_4();
extern  rpcb_entry_list_ptr * rpcbproc_getaddrlist_4_svc();
#define RPCBPROC_GETSTAT 12
extern  rpcb_stat * rpcbproc_getstat_4();
extern  rpcb_stat * rpcbproc_getstat_4_svc();
extern int rpcbprog_4_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_rpcb (XDR *, rpcb*);
extern  bool_t xdr_rp__list (XDR *, rp__list*);
extern  bool_t xdr_rpcblist_ptr (XDR *, rpcblist_ptr*);
extern  bool_t xdr_rpcb_rmtcallargs (XDR *, rpcb_rmtcallargs*);
extern  bool_t xdr_rpcb_rmtcallres (XDR *, rpcb_rmtcallres*);
extern  bool_t xdr_rpcb_entry (XDR *, rpcb_entry*);
extern  bool_t xdr_rpcb_entry_list (XDR *, rpcb_entry_list*);
extern  bool_t xdr_rpcb_entry_list_ptr (XDR *, rpcb_entry_list_ptr*);
extern  bool_t xdr_rpcbs_addrlist (XDR *, rpcbs_addrlist*);
extern  bool_t xdr_rpcbs_rmtcalllist (XDR *, rpcbs_rmtcalllist*);
extern  bool_t xdr_rpcbs_proc (XDR *, rpcbs_proc);
extern  bool_t xdr_rpcbs_addrlist_ptr (XDR *, rpcbs_addrlist_ptr*);
extern  bool_t xdr_rpcbs_rmtcalllist_ptr (XDR *, rpcbs_rmtcalllist_ptr*);
extern  bool_t xdr_rpcb_stat (XDR *, rpcb_stat*);
extern  bool_t xdr_rpcb_stat_byvers (XDR *, rpcb_stat_byvers);
extern  bool_t xdr_netbuf (XDR *, netbuf*);

#else /* K&R C */
extern bool_t xdr_rpcb ();
extern bool_t xdr_rp__list ();
extern bool_t xdr_rpcblist_ptr ();
extern bool_t xdr_rpcb_rmtcallargs ();
extern bool_t xdr_rpcb_rmtcallres ();
extern bool_t xdr_rpcb_entry ();
extern bool_t xdr_rpcb_entry_list ();
extern bool_t xdr_rpcb_entry_list_ptr ();
extern bool_t xdr_rpcbs_addrlist ();
extern bool_t xdr_rpcbs_rmtcalllist ();
extern bool_t xdr_rpcbs_proc ();
extern bool_t xdr_rpcbs_addrlist_ptr ();
extern bool_t xdr_rpcbs_rmtcalllist_ptr ();
extern bool_t xdr_rpcb_stat ();
extern bool_t xdr_rpcb_stat_byvers ();
extern bool_t xdr_netbuf ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RPCB_PROT_H_RPCGEN */
