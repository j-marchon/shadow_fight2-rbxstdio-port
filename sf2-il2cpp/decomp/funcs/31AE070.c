// AJAMDCEKAFE$$FAEBPLENEGK @ RVA 0x31AE070

System_Nullable_bool__o
AJAMDCEKAFE__FAEBPLENEGK(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_bool__Fields __this;
  System_String_o *__this_00;
  bool local_28 [4];
  System_Nullable_bool__Fields local_24 [2];
  
  if ((DAT_04566ba2 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&StringLiteral_18158);
    FUN_01bab630(&StringLiteral_21388);
    FUN_01bab630(&StringLiteral_12698);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    FUN_01bab630(&StringLiteral_6139);
    DAT_04566ba2 = 1;
  }
  local_28[0] = false;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_032ae250:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    __this_00 = OPAEPDIIOEB->m_Items[DPJIDNBJIBG];
    if (__this_00 == (System_String_o *)0x0) goto LAB_032ae250;
    bVar2 = System_String__Equals(__this_00,StringLiteral_21388,(MethodInfo *)0x0);
    if (((bVar2) ||
        (bVar2 = System_String__Equals(__this_00,StringLiteral_12698,(MethodInfo *)0x0), bVar2)) ||
       (bVar2 = System_String__Equals(__this_00,StringLiteral_1606,(MethodInfo *)0x0), bVar2)) {
      __this = SUB82(local_24,0);
      bVar2 = true;
    }
    else {
      bVar2 = System_String__Equals(__this_00,StringLiteral_18158,(MethodInfo *)0x0);
      if (((bVar2) ||
          (bVar2 = System_String__Equals(__this_00,StringLiteral_6139,(MethodInfo *)0x0), bVar2)) ||
         (bVar2 = System_String__Equals(__this_00,StringLiteral_1567,(MethodInfo *)0x0), bVar2)) {
        __this = SUB82(local_24,0);
        bVar2 = false;
      }
      else {
        if ((bool_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = System_Boolean__TryParse(__this_00,local_28,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_032ae238;
        __this = SUB82(local_24,0);
        bVar2 = local_28[0];
      }
    }
    local_24[0].hasValue = false;
    local_24[0].value = false;
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)__this,bVar2,Method_System_Nullable<bool>__ctor__);
  }
  else {
LAB_032ae238:
    local_24[0].hasValue = false;
    local_24[0].value = false;
  }
  return (System_Nullable_bool__o)local_24[0];
}

