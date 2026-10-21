// InControl.UnityButtonSource$$SetupButtonQueries @ RVA 0x3022818

void InControl_UnityButtonSource__SetupButtonQueries(MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str3;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_04565c64 & 1) == 0) {
    FUN_01bab630(&string____TypeInfo);
    FUN_01bab630(&InControl_UnityButtonSource_TypeInfo);
    FUN_01bab630(&StringLiteral_19268);
    FUN_01bab630(&StringLiteral_357);
    DAT_04565c64 = 1;
  }
  local_48 = 0;
  if (InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries ==
      (System_String_array *)0x0) {
    uStack_58 = 0x14;
    local_60 = 10;
    pSVar3 = (System_String_array *)FUN_01bab720(string____TypeInfo,&local_60);
    InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries = pSVar3;
    thunk_FUN_01c20e04(InControl_UnityButtonSource_TypeInfo->static_fields,pSVar3);
    local_48._4_4_ = 1;
    do {
      local_48._0_4_ = 0;
      do {
        iVar2 = local_48._4_4_;
        uVar1 = (uint)local_48;
        pSVar3 = InControl_UnityButtonSource_TypeInfo->static_fields->buttonQueries;
        pSVar4 = System_Int32__ToString((int)&local_48 + 4,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_19268,pSVar4,StringLiteral_357,str3,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((uint)pSVar3->bounds->length <= iVar2 - 1U) ||
           (lVar5 = pSVar3->bounds[1].length, (uint)lVar5 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar3->m_Items[(long)(int)uVar1 + lVar5 * (int)(iVar2 - 1U)] = pSVar4;
        thunk_FUN_01c20e04();
        local_48._0_4_ = (uint)local_48 + 1;
      } while ((int)(uint)local_48 < 0x14);
      local_48._4_4_ = local_48._4_4_ + 1;
    } while (local_48._4_4_ < 0xb);
  }
  return;
}

