// HOOAAGABMBL$$ACBLFBAIHPN @ RVA 0x30EFD5C

bool HOOAAGABMBL__ACBLFBAIHPN(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04566416 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566416 = 1;
  }
  uVar2 = (*(__this->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                    (__this,(__this->klass->vtable)._5_EFLKILFFJKH.method);
  if (((uVar2 & 1) == 0) && ((__this->fields)._ILHGDFFOGHP_k__BackingField != false)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        bVar1 = ACHLOMELAJE__MHLDNEBLNJG
                          (__this_00,(__this->fields)._ILMMODKJGFK_k__BackingField,(MethodInfo *)0x0
                          );
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}

