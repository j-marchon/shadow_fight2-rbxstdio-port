// KJNCNBJIJPC$$.ctor @ RVA 0x331A7E4

void KJNCNBJIJPC___ctor(KJNCNBJIJPC_o *__this,KJNCNBJIJPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *pGVar2;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar5;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567807 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Clone__);
    DAT_04567807 = 1;
    method_00 = extraout_x1;
  }
  KJNCNBJIJPC___ctor(__this,method_00);
  if (IBKIPBJJCPG != (KJNCNBJIJPC_o *)0x0) {
    (__this->fields).OLGJBKMCGIC = (IBKIPBJJCPG->fields).OLGJBKMCGIC;
    pGVar1 = (IBKIPBJJCPG->fields).DDEAFMPDPBJ;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
      ppGVar5 = &(__this->fields).DDEAFMPDPBJ;
      *ppGVar5 = pGVar1;
      thunk_FUN_01c20e04(ppGVar5,pGVar1);
      (__this->fields).OJBIFDEEBNO = (IBKIPBJJCPG->fields).OJBIFDEEBNO;
      pGVar2 = (IBKIPBJJCPG->fields).EACBGCPPLBO;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Clone__);
        (__this->fields).EACBGCPPLBO = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = (IBKIPBJJCPG->fields).KELNJLBBHEC;
        if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
          pGVar3 = (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)
                   Google_Protobuf_Collections_RepeatedField<object>__Clone
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                              Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Clone__)
          ;
          (__this->fields).KELNJLBBHEC = pGVar3;
          thunk_FUN_01c20e04();
          (__this->fields).HFNMLHEEAJM = (IBKIPBJJCPG->fields).HFNMLHEEAJM;
          (__this->fields).GAGJCDGEGBL = (IBKIPBJJCPG->fields).GAGJCDGEGBL;
          pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                             ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
          (__this->fields).CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(&__this->fields,pGVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

