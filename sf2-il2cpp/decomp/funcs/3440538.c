// InControl.UnityAnalogSource$$SetupAnalogQueries @ RVA 0x3440538

void InControl_UnityAnalogSource__SetupAnalogQueries(MethodInfo *method)

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
  
  if ((DAT_04568218 & 1) == 0) {
                    /* try { // try from 03540568 to 03640573 has its CatchHandler @ 03540718 */
    FUN_01bab630(&string____TypeInfo);
    FUN_01bab630(&InControl_UnityAnalogSource_TypeInfo);
    FUN_01bab630(&StringLiteral_19268);
    FUN_01bab630(&StringLiteral_345);
                    /* try { // try from 03540594 to 03640597 has its CatchHandler @ 035406f8 */
    DAT_04568218 = 1;
  }
                    /* try { // try from 03540598 to 0364059f has its CatchHandler @ 03540700 */
  local_48 = 0;
                    /* try { // try from 035405a4 to 036405ab has its CatchHandler @ 035406fc */
  if (InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries ==
      (System_String_array *)0x0) {
                    /* try { // try from 035405ac to 036406df has its CatchHandler @ 03540010 */
    uStack_58 = 0x14;
    local_60 = 10;
    pSVar3 = (System_String_array *)FUN_01bab720(string____TypeInfo,&local_60);
    InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries = pSVar3;
    thunk_FUN_01c20e04(InControl_UnityAnalogSource_TypeInfo->static_fields,pSVar3);
    local_48._4_4_ = 1;
    do {
      local_48._0_4_ = 0;
      do {
        iVar2 = local_48._4_4_;
        uVar1 = (uint)local_48;
        pSVar3 = InControl_UnityAnalogSource_TypeInfo->static_fields->analogQueries;
        pSVar4 = System_Int32__ToString((int)&local_48 + 4,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_19268,pSVar4,StringLiteral_345,str3,(MethodInfo *)0x0);
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

