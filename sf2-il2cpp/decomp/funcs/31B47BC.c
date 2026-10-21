// AJAMDCEKAFE$$FOKFAIPDIMB @ RVA 0x31B47BC

System_Nullable_float__o
AJAMDCEKAFE__FOKFAIPDIMB(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_float__Fields SVar3;
  System_String_o *ODAMFBHJKIH;
  float local_2c;
  System_Nullable_float__Fields local_28;
  
  if ((DAT_04566ba3 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566ba3 = 1;
  }
  local_2c = 0.0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    ODAMFBHJKIH = OPAEPDIIOEB->m_Items[DPJIDNBJIBG];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_2c,(MethodInfo *)0x0);
    if (bVar2) {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0.0;
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_28,local_2c,Method_System_Nullable<float>__ctor__)
      ;
      return (System_Nullable_float__o)local_28;
    }
  }
  SVar3.hasValue = false;
  SVar3._1_3_ = 0;
  SVar3.value = 0.0;
  return (System_Nullable_float__o)SVar3;
}

