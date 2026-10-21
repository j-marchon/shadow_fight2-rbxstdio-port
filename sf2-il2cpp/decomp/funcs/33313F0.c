// JCFJFJCKLKG$$.ctor @ RVA 0x33313F0

void JCFJFJCKLKG___ctor(JCFJFJCKLKG_o *__this,JCFJFJCKLKG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567908 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Clone__);
    DAT_04567908 = 1;
    method_00 = extraout_x1;
  }
  JCFJFJCKLKG___ctor(__this,method_00);
  if (IBKIPBJJCPG != (JCFJFJCKLKG_o *)0x0) {
    (__this->fields).PDOMCPONBNB = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    pGVar1 = (IBKIPBJJCPG->fields).LFOCACIGEFK;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Clone__);
      (__this->fields).LFOCACIGEFK = pGVar1;
      thunk_FUN_01c20e04();
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

