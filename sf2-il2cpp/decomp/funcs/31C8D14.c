// DBNIPENAEKO$$Equals @ RVA 0x31C8D14

bool DBNIPENAEKO__Equals(DBNIPENAEKO_o *__this,DBNIPENAEKO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_00;
  
  if ((DAT_04566c52 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Equals__);
    DAT_04566c52 = 1;
  }
  if (IBKIPBJJCPG != (DBNIPENAEKO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).LCAENFFHHEI == (IBKIPBJJCPG->fields).LCAENFFHHEI) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).HBCNHAMIMGF,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).HBCNHAMIMGF,(MethodInfo *)0x0),
       bVar1)) {
      __this_00 = (__this->fields).BMMFCMJLFKN;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).BMMFCMJLFKN,
                         Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Equals__);
      if ((bVar1) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).BHMHGIBMMMB,(IBKIPBJJCPG->fields).BHMHGIBMMMB,
                             (MethodInfo *)0x0), !bVar1)) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

