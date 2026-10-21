// GLPEFEEGCPM$$Equals @ RVA 0x3224920

bool GLPEFEEGCPM__Equals(GLPEFEEGCPM_o *__this,GLPEFEEGCPM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  
  if ((DAT_04566f69 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Equals__);
    DAT_04566f69 = 1;
  }
  if (IBKIPBJJCPG != (GLPEFEEGCPM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PBBGNHKFEPG,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PBBGNHKFEPG,(MethodInfo *)0x0);
    if ((bVar1) && ((__this->fields).LAEGCKIFDOC == (IBKIPBJJCPG->fields).LAEGCKIFDOC)) {
      __this_00 = (__this->fields).MPAIPMANDEO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MPAIPMANDEO,
                         Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

