// BECIPDJBAOG$$Equals @ RVA 0x30D1BF4

bool BECIPDJBAOG__Equals(BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  
  if ((DAT_0456630b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    DAT_0456630b = 1;
  }
  if (IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).JPHFGCIDDHE,(IBKIPBJJCPG->fields).JPHFGCIDDHE,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      pGVar2 = (__this->fields).LEJBLHJFJHP;
      if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
LAB_031d1ccc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LEJBLHJFJHP,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
      if (bVar1) {
        pGVar2 = (__this->fields).AKFPFIHIHOC;
        if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_031d1ccc;
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).AKFPFIHIHOC,
                           Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
        if (((bVar1) && ((__this->fields).EMOLIBOCKJK == (IBKIPBJJCPG->fields).EMOLIBOCKJK)) &&
           ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) {
          bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  return false;
}

