// AJAMDCEKAFE$$KCCCDOBCCNN @ RVA 0x31B488C

System_Nullable_long__o
AJAMDCEKAFE__KCCCDOBCCNN(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  System_Nullable_long__Fields SVar2;
  bool bVar3;
  MethodInfo_27F86F8 *in_x3;
  System_Nullable_long__o __this;
  int64_t local_38;
  undefined8 local_30;
  int64_t iStack_28;
  
  if ((DAT_04566ba4 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    DAT_04566ba4 = 1;
  }
  local_38 = 0;
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
    bVar3 = System_Int64__TryParse(OPAEPDIIOEB->m_Items[DPJIDNBJIBG],&local_38,(MethodInfo *)0x0);
    if (bVar3) {
      local_30 = 0;
      iStack_28 = 0;
      __this.fields.value = local_38;
      __this.fields._0_8_ = &local_30;
      System_Nullable<long>___ctor(__this,Method_System_Nullable<long>__ctor__,in_x3);
      goto LAB_032b4914;
    }
  }
  local_30 = 0;
  iStack_28 = 0;
LAB_032b4914:
  SVar2.value = iStack_28;
  SVar2._0_8_ = local_30;
  return (System_Nullable_long__o)SVar2;
}

