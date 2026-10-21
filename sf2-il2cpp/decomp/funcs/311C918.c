// HDDKPFAHBBN$$MergeFrom @ RVA 0x311C918

void HDDKPFAHBBN__MergeFrom(HDDKPFAHBBN_o *__this,HDDKPFAHBBN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *pSVar2;
  HDDKPFAHBBN_Fields *pHVar3;
  
  if (IBKIPBJJCPG == (HDDKPFAHBBN_o *)0x0) {
    return;
  }
  pSVar2 = (IBKIPBJJCPG->fields).PFCHOEFIMPF;
  if (pSVar2 != (System_String_o *)0x0) {
    if ((pSVar2->fields)._stringLength != 0) {
      HDDKPFAHBBN__MEKNPELFDEK(__this,pSVar2,method);
    }
    pSVar2 = (IBKIPBJJCPG->fields).BEBCICLILLB;
    if (pSVar2 != (System_String_o *)0x0) {
      if ((pSVar2->fields)._stringLength != 0) {
        HDDKPFAHBBN__IOKMENMKPPM(__this,pSVar2,method);
      }
      pHVar3 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pHVar3->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pHVar3,pGVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

