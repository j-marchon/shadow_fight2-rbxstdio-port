// FKDLCJJOGIP$$PFHELBLKCDK @ RVA 0x350B3F8

void FKDLCJJOGIP__PFHELBLKCDK(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  NDPMLPGANCI_o *pNVar6;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar7;
  
  if ((DAT_045688c7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_39);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4038);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4039);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4040);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045688c7 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4038,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4039,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    method_01 = (MethodInfo *)0x0;
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(pSVar5,BBBLOLJAMJP,(MethodInfo *)0x0);
    if ((__this->fields).KOMAKPPBFEM != 1) {
      pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar6 == (NDPMLPGANCI_o *)0x0) goto LAB_0360b630;
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar6,(MethodInfo *)0x0);
      if (iVar2 != 6) {
        __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (CPNHNIKFGFB_o *)0x0) goto LAB_0360b630;
        method_01 = (MethodInfo *)0x0;
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,0x29c9,(MethodInfo *)0x0);
      }
    }
    bVar1 = FKDLCJJOGIP__JJAAFACCDCP(__this,false,method_01);
    (__this->fields)._MEAPCEHFFHD_k__BackingField = false;
    (__this->fields)._OHFODMIBJME_k__BackingField = false;
    FKDLCJJOGIP__OPFEMEHHPDI((FKDLCJJOGIP_o *)(ulong)bVar1,method_00);
    pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(pNVar6,false,true,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4040,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_39,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).JFCAFEOAKBH;
      if (pSVar7 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0360b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
        return;
      }
    }
  }
LAB_0360b630:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

