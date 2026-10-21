// KJNCNBJIJPC$$MergeFrom @ RVA 0x331B67C

void KJNCNBJIJPC__MergeFrom(KJNCNBJIJPC_o *__this,KJNCNBJIJPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_02;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  KJNCNBJIJPC_Fields *pKVar3;
  
  if ((DAT_04567813 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_04567813 = 1;
  }
  if (IBKIPBJJCPG != (KJNCNBJIJPC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).OLGJBKMCGIC;
    if (iVar1 != 0) {
      (__this->fields).OLGJBKMCGIC = iVar1;
    }
    __this_00 = (__this->fields).DDEAFMPDPBJ;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).DDEAFMPDPBJ,
                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      iVar1 = (IBKIPBJJCPG->fields).OJBIFDEEBNO;
      if (iVar1 != 0) {
        (__this->fields).OJBIFDEEBNO = iVar1;
      }
      __this_01 = (__this->fields).EACBGCPPLBO;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EACBGCPPLBO,
                   Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Add__);
        __this_02 = (__this->fields).KELNJLBBHEC;
        if (__this_02 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__Add
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                     (System_Collections_Generic_IEnumerable_T__o *)
                     (IBKIPBJJCPG->fields).KELNJLBBHEC,
                     Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Add__);
          if ((IBKIPBJJCPG->fields).HFNMLHEEAJM != false) {
            (__this->fields).HFNMLHEEAJM = true;
          }
          iVar1 = (IBKIPBJJCPG->fields).GAGJCDGEGBL;
          if (iVar1 != 0) {
            (__this->fields).GAGJCDGEGBL = iVar1;
          }
          pKVar3 = &__this->fields;
          pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                             (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,
                              (MethodInfo *)0x0);
          pKVar3->CKFPENBPNML = pGVar2;
          thunk_FUN_01c20e04(pKVar3,pGVar2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

