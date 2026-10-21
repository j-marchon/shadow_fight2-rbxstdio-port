// OJKCDJCBOBL$$.ctor @ RVA 0x35C2634

void OJKCDJCBOBL___ctor(OJKCDJCBOBL_o *__this,OJKCDJCBOBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568f40 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    DAT_04568f40 = 1;
    method_00 = extraout_x1;
  }
  OJKCDJCBOBL___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (OJKCDJCBOBL_o *)0x0) &&
     (__this_00 = (IBKIPBJJCPG->fields).OHMDCKEDOGH,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    pGVar1 = Google_Protobuf_Collections_RepeatedField<long>__Clone
                       (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    (__this->fields).OHMDCKEDOGH = (Google_Protobuf_Collections_RepeatedField_long__o *)pGVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 036c26a4 to 037c27af has its CatchHandler @ 036c26a4
                       catch() { ... } // from try @ 036c26a4 with catch @ 036c26a4
                       catch() { ... } // from try @ 036c2824 with catch @ 036c26a4
                       catch() { ... } // from try @ 036c2868 with catch @ 036c26a4
                       catch() { ... } // from try @ 036c28bc with catch @ 036c26a4
                       catch() { ... } // from try @ 036c28f0 with catch @ 036c26a4 */
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

