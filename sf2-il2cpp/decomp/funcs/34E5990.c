// NGOFOPOGBMJ$$.ctor @ RVA 0x34E5990

void NGOFOPOGBMJ___ctor(NGOFOPOGBMJ_o *__this,NGOFOPOGBMJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
                    /* try { // try from 035e5998 to 036e5b2b has its CatchHandler @ 035e5998
                       catch() { ... } // from try @ 035e5998 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5bdc with catch @ 035e5998
                       catch() { ... } // from try @ 035e5c88 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5ca4 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5d00 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5d40 with catch @ 035e5998 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NGOFOPOGBMJ_o *)0x0) {
    (__this->fields).GDKPGIBMFPA = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

