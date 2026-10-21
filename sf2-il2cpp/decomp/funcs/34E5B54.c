// NGOFOPOGBMJ$$MergeFrom @ RVA 0x34E5B54

void NGOFOPOGBMJ__MergeFrom(NGOFOPOGBMJ_o *__this,NGOFOPOGBMJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  NGOFOPOGBMJ_Fields *pNVar3;
  
                    /* try { // try from 035e5b54 to 036e5b5f has its CatchHandler @ 035e5cd8 */
  if (IBKIPBJJCPG != (NGOFOPOGBMJ_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (lVar2 != 0) {
      (__this->fields).GDKPGIBMFPA = lVar2;
    }
    pNVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pNVar3->CKFPENBPNML = pGVar1;
                    /* try { // try from 035e5b84 to 036e5b93 has its CatchHandler @ 035e5ccc */
    thunk_FUN_01c20e04(pNVar3,pGVar1);
    return;
  }
  return;
}

