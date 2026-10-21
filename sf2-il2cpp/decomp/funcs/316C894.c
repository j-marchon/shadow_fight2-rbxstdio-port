// NFGLEDADCGL$$DMCFMJJKIDN @ RVA 0x316C894

HNFFPPPDKDK_o *
NFGLEDADCGL__DMCFMJJKIDN(NFGLEDADCGL_o *__this,KINHGEBKOEG_o *EIKFGOCCOIE,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_01;
  System_String_o *pSVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlElement_o *pSVar5;
  long *plVar6;
  undefined8 uVar7;
  HNFFPPPDKDK_o *__this_02;
  HEFOANCOHDC_o **ppHVar8;
  MethodInfo *in_x3;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566900 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&HNFFPPPDKDK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_10213);
    DAT_04566900 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEJIOCBFEEE;
  if (__this_01 == (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
LAB_0326cb54:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    __this_00 = local_50.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      pSVar3 = StringLiteral_10239;
      uVar7 = StringLiteral_10213;
      pSVar4 = (__this->fields).HJKLIDCAEOE;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlElement_o *)
                 (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar4,StringLiteral_10239,(pSVar4->klass->vtable)._51_get_Item.method);
        if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
          pSVar5 = EIABCPKDEBD__BHPIHHJHELJ((__this->fields).HJKLIDCAEOE,pSVar3,(MethodInfo *)0x0);
        }
        pSVar4 = (__this->fields).HJKLIDCAEOE;
        if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
           (plVar6 = (long *)(*(pSVar4->klass->vtable)._17_get_OwnerDocument.methodPtr)
                                       (pSVar4,(pSVar4->klass->vtable)._17_get_OwnerDocument.method)
           , plVar6 != (long *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          uVar7 = (**(code **)(*plVar6 + 0x678))(plVar6,1,uVar7,0,*(undefined8 *)(*plVar6 + 0x680));
          if (pSVar5 != (System_Xml_XmlElement_o *)0x0) {
            pSVar4 = (System_Xml_XmlNode_o *)
                     (*(pSVar5->klass->vtable)._26_PrependChild.methodPtr)
                               (pSVar5,uVar7,(pSVar5->klass->vtable)._26_PrependChild.method);
            __this_02 = (HNFFPPPDKDK_o *)thunk_FUN_01bda818(HNFFPPPDKDK_TypeInfo);
            HNFFPPPDKDK___ctor(__this_02,pSVar4,(MethodInfo *)0x0);
            if ((EIKFGOCCOIE != (KINHGEBKOEG_o *)0x0) && (__this_02 != (HNFFPPPDKDK_o *)0x0)) {
              HNFFPPPDKDK__AKJBHHAHMPG
                        (__this_02,(EIKFGOCCOIE->fields).NOPGBJNLFHM,(MethodInfo *)0x0);
              HNFFPPPDKDK__HCOCAAIGNNL
                        (__this_02,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
              iVar1 = (EIKFGOCCOIE->fields).AEIJFFBOBCP;
              if (0 < iVar1) {
                HNFFPPPDKDK__DJJHOOKLHHL(__this_02,iVar1,(MethodInfo *)0x0);
              }
              HNFFPPPDKDK__FAPGKEAKOKA
                        (__this_02,(EIKFGOCCOIE->fields).JPNMMLFPECM,(MethodInfo *)0x0);
              NFGLEDADCGL__NHAIEGLJKMK(__this,__this_02,EIKFGOCCOIE,method_00);
              return __this_02;
            }
          }
        }
      }
      goto LAB_0326cb54;
    }
    if ((HNFFPPPDKDK_o *)local_50.fields._current == (HNFFPPPDKDK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (EIKFGOCCOIE == (KINHGEBKOEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = ((HNFFPPPDKDK_Fields *)((long)local_50.fields._current + 0x10))->DEKCPPOJFEH;
    if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__Equals(pSVar3,(EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (bVar2) break;
    bVar2 = System_String__IsNullOrEmpty((EIKFGOCCOIE->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (bVar2) {
LAB_0326cb24:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      return (HNFFPPPDKDK_o *)__this_00;
    }
  }
  iVar1 = (EIKFGOCCOIE->fields).AEIJFFBOBCP;
  if (0 < iVar1) {
    HNFFPPPDKDK__DJJHOOKLHHL((HNFFPPPDKDK_o *)__this_00,iVar1,(MethodInfo *)0x0);
  }
  HNFFPPPDKDK__FAPGKEAKOKA
            ((HNFFPPPDKDK_o *)__this_00,(EIKFGOCCOIE->fields).JPNMMLFPECM,(MethodInfo *)0x0);
  ppHVar8 = &((HNFFPPPDKDK_Fields *)((long)__this_00 + 0x10))->_CGEGGOPIPHH_k__BackingField;
  *ppHVar8 = (HEFOANCOHDC_o *)0x0;
  thunk_FUN_01c20e04(ppHVar8,0);
  NFGLEDADCGL__NHAIEGLJKMK(__this,(HNFFPPPDKDK_o *)__this_00,EIKFGOCCOIE,in_x3);
  goto LAB_0326cb24;
}

