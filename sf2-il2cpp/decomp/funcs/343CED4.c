// IHMIMECHIAN$$.ctor @ RVA 0x343CED4

void IHMIMECHIAN___ctor(IHMIMECHIAN_o *__this,IHMIMECHIAN_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_045681eb & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
    DAT_045681eb = 1;
    method_00 = extraout_x1;
  }
  IHMIMECHIAN___ctor(__this,method_00);
  if (IBKIPBJJCPG != (IHMIMECHIAN_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).KFBIHGFDAOL;
    (__this->fields).CHLCOKOBIHN = (IBKIPBJJCPG->fields).CHLCOKOBIHN;
    (__this->fields).KFBIHGFDAOL = iVar1;
                    /* try { // try from 0353cf1c to 0363cf43 has its CatchHandler @ 0353d0ec */
    (__this->fields).POHDGAPDBGK = (IBKIPBJJCPG->fields).POHDGAPDBGK;
    (__this->fields).PJMOADBJNKH = (IBKIPBJJCPG->fields).PJMOADBJNKH;
    (__this->fields).NNCLFDMPFHP = (IBKIPBJJCPG->fields).NNCLFDMPFHP;
    (__this->fields).HOFAHGOCDCE = (IBKIPBJJCPG->fields).HOFAHGOCDCE;
    (__this->fields).KLOGBBKOLFL = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
    __this_00 = (IBKIPBJJCPG->fields).IKCCLDMOOKP;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
      pGVar2 = Google_Protobuf_Collections_RepeatedField<int>__Clone
                         (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
      (__this->fields).IKCCLDMOOKP = (Google_Protobuf_Collections_RepeatedField_int__o *)pGVar2;
      thunk_FUN_01c20e04();
      (__this->fields).LADINGEOKCK = (IBKIPBJJCPG->fields).LADINGEOKCK;
                    /* try { // try from 0353cf78 to 0363cf9f has its CatchHandler @ 0353d0e8 */
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

