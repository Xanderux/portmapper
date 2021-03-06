/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "rpcb_prot.h"

bool_t
xdr_rpcb (XDR *xdrs, rpcb *objp)
{
	register int32_t *buf;

	 if (!xdr_u_long (xdrs, &objp->r_prog))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->r_vers))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->r_netid, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->r_addr, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->r_owner, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rp__list (XDR *xdrs, rp__list *objp)
{
	register int32_t *buf;

	 if (!xdr_rpcb (xdrs, &objp->rpcb_map))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->rpcb_next, sizeof (rp__list), (xdrproc_t) xdr_rp__list))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcblist_ptr (XDR *xdrs, rpcblist_ptr *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (rp__list), (xdrproc_t) xdr_rp__list))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_rmtcallargs (XDR *xdrs, rpcb_rmtcallargs *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_long (xdrs, &objp->prog))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->vers))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->proc))
				 return FALSE;

		} else {
		IXDR_PUT_U_LONG(buf, objp->prog);
		IXDR_PUT_U_LONG(buf, objp->vers);
		IXDR_PUT_U_LONG(buf, objp->proc);
		}
		 if (!xdr_bytes (xdrs, (char **)&objp->args.args_val, (u_int *) &objp->args.args_len, ~0))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_long (xdrs, &objp->prog))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->vers))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->proc))
				 return FALSE;

		} else {
		objp->prog = IXDR_GET_U_LONG(buf);
		objp->vers = IXDR_GET_U_LONG(buf);
		objp->proc = IXDR_GET_U_LONG(buf);
		}
		 if (!xdr_bytes (xdrs, (char **)&objp->args.args_val, (u_int *) &objp->args.args_len, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_u_long (xdrs, &objp->prog))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->vers))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->proc))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->args.args_val, (u_int *) &objp->args.args_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_rmtcallres (XDR *xdrs, rpcb_rmtcallres *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->addr, ~0))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->results.results_val, (u_int *) &objp->results.results_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_entry (XDR *xdrs, rpcb_entry *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->r_maddr, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->r_nc_netid, ~0))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->r_nc_semantics))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->r_nc_protofmly, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->r_nc_proto, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_entry_list (XDR *xdrs, rpcb_entry_list *objp)
{
	register int32_t *buf;

	 if (!xdr_rpcb_entry (xdrs, &objp->rpcb_entry_map))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->rpcb_entry_next, sizeof (rpcb_entry_list), (xdrproc_t) xdr_rpcb_entry_list))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_entry_list_ptr (XDR *xdrs, rpcb_entry_list_ptr *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (rpcb_entry_list), (xdrproc_t) xdr_rpcb_entry_list))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcbs_addrlist (XDR *xdrs, rpcbs_addrlist *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_long (xdrs, &objp->prog))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->vers))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->success))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->failure))
				 return FALSE;

		} else {
		IXDR_PUT_U_LONG(buf, objp->prog);
		IXDR_PUT_U_LONG(buf, objp->vers);
		IXDR_PUT_LONG(buf, objp->success);
		IXDR_PUT_LONG(buf, objp->failure);
		}
		 if (!xdr_string (xdrs, &objp->netid, ~0))
			 return FALSE;
		 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (rpcbs_addrlist), (xdrproc_t) xdr_rpcbs_addrlist))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_long (xdrs, &objp->prog))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->vers))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->success))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->failure))
				 return FALSE;

		} else {
		objp->prog = IXDR_GET_U_LONG(buf);
		objp->vers = IXDR_GET_U_LONG(buf);
		objp->success = IXDR_GET_LONG(buf);
		objp->failure = IXDR_GET_LONG(buf);
		}
		 if (!xdr_string (xdrs, &objp->netid, ~0))
			 return FALSE;
		 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (rpcbs_addrlist), (xdrproc_t) xdr_rpcbs_addrlist))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_u_long (xdrs, &objp->prog))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->vers))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->success))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->failure))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->netid, ~0))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (rpcbs_addrlist), (xdrproc_t) xdr_rpcbs_addrlist))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcbs_rmtcalllist (XDR *xdrs, rpcbs_rmtcalllist *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 6 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_long (xdrs, &objp->prog))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->vers))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->proc))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->success))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->failure))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->indirect))
				 return FALSE;

		} else {
		IXDR_PUT_U_LONG(buf, objp->prog);
		IXDR_PUT_U_LONG(buf, objp->vers);
		IXDR_PUT_U_LONG(buf, objp->proc);
		IXDR_PUT_LONG(buf, objp->success);
		IXDR_PUT_LONG(buf, objp->failure);
		IXDR_PUT_LONG(buf, objp->indirect);
		}
		 if (!xdr_string (xdrs, &objp->netid, ~0))
			 return FALSE;
		 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (rpcbs_rmtcalllist), (xdrproc_t) xdr_rpcbs_rmtcalllist))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 6 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_long (xdrs, &objp->prog))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->vers))
				 return FALSE;
			 if (!xdr_u_long (xdrs, &objp->proc))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->success))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->failure))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->indirect))
				 return FALSE;

		} else {
		objp->prog = IXDR_GET_U_LONG(buf);
		objp->vers = IXDR_GET_U_LONG(buf);
		objp->proc = IXDR_GET_U_LONG(buf);
		objp->success = IXDR_GET_LONG(buf);
		objp->failure = IXDR_GET_LONG(buf);
		objp->indirect = IXDR_GET_LONG(buf);
		}
		 if (!xdr_string (xdrs, &objp->netid, ~0))
			 return FALSE;
		 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (rpcbs_rmtcalllist), (xdrproc_t) xdr_rpcbs_rmtcalllist))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_u_long (xdrs, &objp->prog))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->vers))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->proc))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->success))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->failure))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->indirect))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->netid, ~0))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (rpcbs_rmtcalllist), (xdrproc_t) xdr_rpcbs_rmtcalllist))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcbs_proc (XDR *xdrs, rpcbs_proc objp)
{
	register int32_t *buf;

	 if (!xdr_vector (xdrs, (char *)objp, RPCBSTAT_HIGHPROC,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcbs_addrlist_ptr (XDR *xdrs, rpcbs_addrlist_ptr *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (rpcbs_addrlist), (xdrproc_t) xdr_rpcbs_addrlist))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcbs_rmtcalllist_ptr (XDR *xdrs, rpcbs_rmtcalllist_ptr *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (rpcbs_rmtcalllist), (xdrproc_t) xdr_rpcbs_rmtcalllist))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_stat (XDR *xdrs, rpcb_stat *objp)
{
	register int32_t *buf;

	 if (!xdr_rpcbs_proc (xdrs, objp->info))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->setinfo))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->unsetinfo))
		 return FALSE;
	 if (!xdr_rpcbs_addrlist_ptr (xdrs, &objp->addrinfo))
		 return FALSE;
	 if (!xdr_rpcbs_rmtcalllist_ptr (xdrs, &objp->rmtinfo))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpcb_stat_byvers (XDR *xdrs, rpcb_stat_byvers objp)
{
	register int32_t *buf;

	 if (!xdr_vector (xdrs, (char *)objp, RPCBVERS_STAT,
		sizeof (rpcb_stat), (xdrproc_t) xdr_rpcb_stat))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_netbuf (XDR *xdrs, netbuf *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->maxlen))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, ~0))
		 return FALSE;
	return TRUE;
}
