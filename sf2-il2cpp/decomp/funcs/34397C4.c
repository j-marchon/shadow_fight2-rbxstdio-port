// AADKBCFCLKK$$Equals @ RVA 0x34397C4

bool AADKBCFCLKK__Equals(AADKBCFCLKK_o *__this,AADKBCFCLKK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  
  if ((DAT_045681c3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Equals__);
    DAT_045681c3 = 1;
  }
  if (IBKIPBJJCPG != (AADKBCFCLKK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).AMKHEHFFAKJ == (IBKIPBJJCPG->fields).AMKHEHFFAKJ) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).LHFLMBNKPHF,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0),
         bVar1)) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).LBKLNIPHGMM,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0),
        bVar1)) &&
       (((__this->fields).IKNCNGMNPPK == (IBKIPBJJCPG->fields).IKNCNGMNPPK &&
        (((__this->fields).IOLELGMBJFL != false) == ((IBKIPBJJCPG->fields).IOLELGMBJFL != false)))))
    {
      __this_00 = (__this->fields).MPAIPMANDEO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MPAIPMANDEO,
                         Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Equals__);
      if ((bVar1) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).FAEDHKAJJNK,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).FAEDHKAJJNK,(MethodInfo *)0x0),
         bVar1)) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

