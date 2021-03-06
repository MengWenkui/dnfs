/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "co.h"

bool_t
xdr_co_write_in (XDR *xdrs, co_write_in *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_opaque (xdrs, objp->chunkid, CID_BUF))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, RW_BUF))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->offset))
		 return FALSE;
	 if (!xdr_uint32_t (xdrs, &objp->ip))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_co_write_out (XDR *xdrs, co_write_out *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->err))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_co_read_in (XDR *xdrs, co_read_in *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_opaque (xdrs, objp->chunkid, CID_BUF))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->size))
		 return FALSE;
	 if (!xdr_u_long (xdrs, &objp->offset))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_co_read_out (XDR *xdrs, co_read_out *objp)
{
	register int32_t *buf;

	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, RW_BUF))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->err))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_co_unlink_in (XDR *xdrs, co_unlink_in *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_opaque (xdrs, objp->chunkid, CID_BUF))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_co_unlink_out (XDR *xdrs, co_unlink_out *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->err))
		 return FALSE;
	return TRUE;
}
