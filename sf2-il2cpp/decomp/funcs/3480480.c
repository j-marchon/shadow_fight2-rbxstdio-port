// CIMBHPHICBD$$AJJLBBCJAAL @ RVA 0x3480480

System_String_o *
CIMBHPHICBD__AJJLBBCJAAL(CIMBHPHICBD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_String_o *str1;
  
  if ((DAT_0456837a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5859);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5860);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5861);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5862);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5863);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5864);
    __this = (CIMBHPHICBD_o *)FUN_01bab630(&byte___TypeInfo);
    DAT_0456837a = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5859,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5860,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar4 = CIMBHPHICBD__IGMDDJFPIJL((CIMBHPHICBD_o *)pSVar3,method_00);
      pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar3;
    }
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((int)OPAEPDIIOEB->max_length != 0) {
      __this = (CIMBHPHICBD_o *)0x0;
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03580688;
      Nekki_SF2_Core_Quests_QuestsManager__RunQuestByName_DEBUG
                (__this_00,OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5861,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5862,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      if ((int)OPAEPDIIOEB->max_length != 0) {
        str1 = OPAEPDIIOEB->m_Items[0];
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5863,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5864,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat(pSVar3,str1,pSVar4,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03580688:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

