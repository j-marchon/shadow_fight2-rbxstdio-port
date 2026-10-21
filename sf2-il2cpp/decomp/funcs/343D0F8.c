// IHMIMECHIAN$$Equals @ RVA 0x343D0F8

bool IHMIMECHIAN__Equals(IHMIMECHIAN_o *__this,IHMIMECHIAN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_EqualityComparer_float__o *pSVar2;
  ulong uVar3;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  
                    /* try { // try from 0353d0fc to 0363d0ff has its CatchHandler @ 0353d110 */
                    /* catch() { ... } // from try @ 0353d0fc with catch @ 0353d110 */
  if ((DAT_045681ed & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
    DAT_045681ed = 1;
  }
  if (IBKIPBJJCPG != (IHMIMECHIAN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 0353d148 to 0363d16f has its CatchHandler @ 0353d184 */
                    /* try { // try from 0353d170 to 0363d17b has its CatchHandler @ 0353c70c */
                    /* try { // try from 0353d17c to 0363d183 has its CatchHandler @ 0353d184 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353d148 with catch @ 0353d184
                       catch(type#2 @ 00000000) { ... } // from try @ 0353d17c with catch @ 0353d184
                        */
    if ((((((__this->fields).CHLCOKOBIHN == (IBKIPBJJCPG->fields).CHLCOKOBIHN) &&
          ((__this->fields).KFBIHGFDAOL == (IBKIPBJJCPG->fields).KFBIHGFDAOL)) &&
         (((__this->fields).POHDGAPDBGK != false) == ((IBKIPBJJCPG->fields).POHDGAPDBGK != false)))
        && ((((__this->fields).PJMOADBJNKH != false) == ((IBKIPBJJCPG->fields).PJMOADBJNKH != false)
            && (((__this->fields).NNCLFDMPFHP != false) ==
                ((IBKIPBJJCPG->fields).NNCLFDMPFHP != false))))) &&
       (((__this->fields).HOFAHGOCDCE != false) == ((IBKIPBJJCPG->fields).HOFAHGOCDCE != false))) {
      if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      if (DAT_045612b6 == '\0') {
        FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
        DAT_045612b6 = '\x01';
      }
      if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pSVar2 = Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->static_fields->
               _BitwiseSingleEqualityComparer_k__BackingField;
      if (pSVar2 == (System_Collections_Generic_EqualityComparer_float__o *)0x0) {
LAB_0353d2bc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar3 = (*(pSVar2->klass->vtable)._8_Equals.methodPtr)
                        ((__this->fields).KLOGBBKOLFL,(IBKIPBJJCPG->fields).KLOGBBKOLFL,pSVar2,
                         (pSVar2->klass->vtable)._8_Equals.method);
      if ((uVar3 & 1) != 0) {
        __this_00 = (__this->fields).IKCCLDMOOKP;
        if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) goto LAB_0353d2bc;
        bVar1 = Google_Protobuf_Collections_RepeatedField<int>__Equals
                          (__this_00,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).IKCCLDMOOKP,
                           Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
        if ((bVar1) && ((__this->fields).LADINGEOKCK == (IBKIPBJJCPG->fields).LADINGEOKCK)) {
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

