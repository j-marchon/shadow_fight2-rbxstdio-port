// AJAMDCEKAFE$$NANCFCIGNEE @ RVA 0x31B4930

System_Nullable_int__o
AJAMDCEKAFE__NANCFCIGNEE(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_int__Fields SVar3;
  int32_t local_2c;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_04566ba5 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    DAT_04566ba5 = 1;
  }
  local_2c = 0;
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
    bVar2 = System_Int32__TryParse(OPAEPDIIOEB->m_Items[DPJIDNBJIBG],&local_2c,(MethodInfo *)0x0);
    if (bVar2) {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_28,local_2c,Method_System_Nullable<int>__ctor__);
      return (System_Nullable_int__o)local_28;
    }
  }
  SVar3.hasValue = false;
  SVar3._1_3_ = 0;
  SVar3.value = 0;
  return (System_Nullable_int__o)SVar3;
}

