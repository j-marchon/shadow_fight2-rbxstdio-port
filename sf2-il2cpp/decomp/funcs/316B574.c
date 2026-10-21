// NFGLEDADCGL$$DMCFMJJKIDN @ RVA 0x316B574

HNFFPPPDKDK_o *
NFGLEDADCGL__DMCFMJJKIDN(NFGLEDADCGL_o *__this,JLGNBOILFLN_o *EIKFGOCCOIE,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_01;
  System_String_o *pSVar5;
  System_Xml_XmlNode_o *pSVar6;
  long lVar7;
  System_Xml_XmlElement_o *pSVar8;
  HEFOANCOHDC_o **ppHVar9;
  HNFFPPPDKDK_o *__this_02;
  MethodInfo *in_x3;
  System_String_o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0326b574 to 0336b59b has its CatchHandler @ 0326b5b0 */
                    /* try { // try from 0326b59c to 0336b5a7 has its CatchHandler @ 0326adb8 */
  if ((DAT_045668f7 & 1) == 0) {
                    /* try { // try from 0326b5a8 to 0336b5af has its CatchHandler @ 0326b5b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326b574 with catch @ 0326b5b0
                       catch(type#2 @ 00000000) { ... } // from try @ 0326b5a8 with catch @ 0326b5b0
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_10213);
    FUN_01bab630(&StringLiteral_1);
    DAT_045668f7 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEJIOCBFEEE;
  if (__this_01 == (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
LAB_0326b85c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    __this_00 = local_70.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      pSVar10 = StringLiteral_10239;
      pSVar5 = StringLiteral_10213;
      pSVar6 = (__this->fields).HJKLIDCAEOE;
      if (pSVar6 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326b85c;
      lVar7 = (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar6,StringLiteral_10239,(pSVar6->klass->vtable)._51_get_Item.method);
      pSVar6 = (__this->fields).HJKLIDCAEOE;
      if (lVar7 == 0) {
        pSVar8 = EIABCPKDEBD__BHPIHHJHELJ(pSVar6,pSVar10,(MethodInfo *)0x0);
      }
      else {
        if (pSVar6 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326b85c;
        pSVar8 = (System_Xml_XmlElement_o *)
                 (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar6,pSVar10,(pSVar6->klass->vtable)._51_get_Item.method);
      }
      pSVar8 = EIABCPKDEBD__BHPIHHJHELJ((System_Xml_XmlNode_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
      __this_02 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
      HNFFPPPDKDK___ctor(__this_02,(System_Xml_XmlNode_o *)pSVar8,(MethodInfo *)0x0);
      if ((EIKFGOCCOIE != (JLGNBOILFLN_o *)0x0) && (__this_02 != (HNFFPPPDKDK_o *)0x0)) {
        HNFFPPPDKDK__AKJBHHAHMPG(__this_02,(EIKFGOCCOIE->fields).GHPHFGBIPCI,(MethodInfo *)0x0);
        pSVar5 = JLGNBOILFLN__GKMAFGODLLG(EIKFGOCCOIE,(MethodInfo *)0x0);
        HNFFPPPDKDK__HCOCAAIGNNL(__this_02,pSVar5,(MethodInfo *)0x0);
        iVar4 = JLGNBOILFLN__BCLMIPIBLLB(EIKFGOCCOIE,(MethodInfo *)0x0);
        if (0 < iVar4) {
          HNFFPPPDKDK__DJJHOOKLHHL(__this_02,iVar4,(MethodInfo *)0x0);
        }
        NFGLEDADCGL__NHAIEGLJKMK(__this,__this_02,EIKFGOCCOIE,in_x3);
        return __this_02;
      }
      goto LAB_0326b85c;
    }
    if ((HNFFPPPDKDK_o *)local_70.fields._current == (HNFFPPPDKDK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (EIKFGOCCOIE == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = ((HNFFPPPDKDK_Fields *)((long)local_70.fields._current + 0x10))->DEKCPPOJFEH;
    pSVar5 = JLGNBOILFLN__GKMAFGODLLG(EIKFGOCCOIE,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar10,pSVar5,(MethodInfo *)0x0);
    iVar1 = (EIKFGOCCOIE->fields).JDNKKGPNHPB;
    pSVar5 = JLGNBOILFLN__GKMAFGODLLG(EIKFGOCCOIE,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar2 && iVar1 == 2) break;
    if (bVar2 || bVar3) {
LAB_0326b778:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      return (HNFFPPPDKDK_o *)__this_00;
    }
  }
  iVar4 = JLGNBOILFLN__BCLMIPIBLLB(EIKFGOCCOIE,(MethodInfo *)0x0);
  if (0 < iVar4) {
    HNFFPPPDKDK__DJJHOOKLHHL((HNFFPPPDKDK_o *)__this_00,iVar4,(MethodInfo *)0x0);
  }
  ppHVar9 = &((HNFFPPPDKDK_Fields *)((long)__this_00 + 0x10))->_CGEGGOPIPHH_k__BackingField;
  *ppHVar9 = (HEFOANCOHDC_o *)0x0;
  thunk_FUN_01c20e04(ppHVar9,0);
  NFGLEDADCGL__NHAIEGLJKMK(__this,(HNFFPPPDKDK_o *)__this_00,EIKFGOCCOIE,in_x3);
  goto LAB_0326b778;
}

