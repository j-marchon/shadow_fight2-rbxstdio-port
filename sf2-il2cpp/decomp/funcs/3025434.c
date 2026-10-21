// LIGIADJEGPL$$AJJLBBCJAAL @ RVA 0x3025434

System_String_o *
LIGIADJEGPL__AJJLBBCJAAL(LIGIADJEGPL_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *str1;
  System_String_o *pSVar4;
  float __this_00;
  float local_24;
  
  if ((DAT_04565c8a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5951);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5952);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5953);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5954);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04565c8a = 1;
  }
  local_24 = 1.0;
  if ((OPAEPDIIOEB != (System_String_array *)0x0) && (0 < (int)OPAEPDIIOEB->max_length)) {
    pSVar4 = OPAEPDIIOEB->m_Items[0];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar4,&stack0xffffffffffffffdc,(MethodInfo *)0x0);
    if ((bVar1) && (local_24 < 0.0)) {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5951,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5952,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  UnityEngine_Time__set_timeScale(local_24,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5953,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5954,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  str1 = System_Single__ToString(__this_00,(MethodInfo *)&stack0xffffffffffffffdc);
  pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
  return pSVar4;
}

