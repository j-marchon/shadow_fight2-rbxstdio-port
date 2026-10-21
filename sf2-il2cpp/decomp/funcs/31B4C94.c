// AJAMDCEKAFE$$JHLNBAHDGPI @ RVA 0x31B4C94

System_Nullable_Vector2__o
AJAMDCEKAFE__JHLNBAHDGPI(int32_t KBAJGAHMEAF,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_Nullable_Vector2__Fields SVar3;
  bool bVar4;
  MethodInfo_27FC874 *method_00;
  System_String_o *pSVar5;
  System_Nullable_Vector2__o __this;
  UnityEngine_Vector2_o value;
  undefined8 local_40;
  float local_38;
  float local_28 [2];
  
  if ((DAT_04566ba8 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566ba8 = 1;
  }
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (uint)OPAEPDIIOEB->max_length;
  uVar1 = KBAJGAHMEAF + 1;
  if ((int)uVar1 < (int)uVar2) {
    if (uVar2 <= (uint)KBAJGAHMEAF) {
LAB_032b4db0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar5 = OPAEPDIIOEB->m_Items[KBAJGAHMEAF];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar5,local_28 + 1,(MethodInfo *)0x0);
    if (bVar4) {
      if ((uint)OPAEPDIIOEB->max_length <= uVar1) goto LAB_032b4db0;
      pSVar5 = OPAEPDIIOEB->m_Items[(int)uVar1];
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo_27FC874 *)0x0;
      bVar4 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar5,local_28,(MethodInfo *)0x0);
      if (bVar4) {
        local_40 = 0;
        local_38 = 0.0;
        __this.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
        __this.fields._0_8_ = &local_40;
        value.fields.y = local_28[0];
        value.fields.x = local_28[1];
        System_Nullable<Vector2>___ctor(__this,value,method_00);
        goto LAB_032b4d90;
      }
    }
  }
  local_38 = 0.0;
  local_40 = 0;
LAB_032b4d90:
  SVar3.value.fields.y = local_38;
  SVar3.hasValue = (bool_conflict)(undefined1)local_40;
  SVar3._1_3_ = local_40._1_3_;
  SVar3.value.fields.x = (float)local_40._4_4_;
  return (System_Nullable_Vector2__o)SVar3;
}

