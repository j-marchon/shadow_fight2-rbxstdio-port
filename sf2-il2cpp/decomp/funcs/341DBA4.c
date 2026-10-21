// HEFOANCOHDC$$FAOBHLCDKJI @ RVA 0x341DBA4

HEFOANCOHDC_o *
HEFOANCOHDC__FAOBHLCDKJI
          (HEFOANCOHDC_o *__this,
          System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *PCIHAENKBGL,
          System_Xml_XmlNode_o *KDMPIDEEPMP,MethodInfo *method)

{
  Il2CppClass *name;
  void *pvVar1;
  bool bVar2;
  FOKJBDHLIMG_o *__this_00;
  HEFOANCOHDC_o *pHVar3;
  System_Xml_XmlDocument_o *__this_01;
  long lVar4;
  long *plVar5;
  System_Xml_XmlElement_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlDocument_o *__this_02;
  System_Xml_XmlNode_o **ppSVar8;
  System_Xml_XmlDocument_o **ppSVar9;
  System_Xml_XmlNode_o *pSVar10;
  MethodInfo *method_00;
  undefined1 auVar11 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar12;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045680d8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_string>>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_get_Current__
                );
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_GetEnumerator__
                );
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_10213);
    DAT_045680d8 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_00 == (FOKJBDHLIMG_o *)0x0) goto LAB_0351e018;
  pHVar3 = FOKJBDHLIMG__JMMDGEOBMOC(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
  __this_01 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
  if ((pHVar3 != (HEFOANCOHDC_o *)0x0) &&
     (pSVar10 = (pHVar3->fields).DCDJOJGHJEB, pSVar10 != (System_Xml_XmlNode_o *)0x0)) {
    EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)__this_01,pSVar10,(MethodInfo *)0x0);
  }
  bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)PCIHAENKBGL,
                     Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_string>>__);
  if (!bVar2) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_0351e018;
    lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar4 == 0) {
LAB_0351dd58:
      lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213,
                         (__this_01->klass->vtable)._51_get_Item.method);
      if (lVar4 == 0) {
        EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213,(MethodInfo *)0x0);
      }
      pSVar10 = (System_Xml_XmlNode_o *)
                (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                          (__this_01,StringLiteral_10213,
                           (__this_01->klass->vtable)._51_get_Item.method);
      pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(pSVar10,StringLiteral_11876,(MethodInfo *)0x0);
    }
    else {
      plVar5 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_0351e018;
      pSVar6 = (System_Xml_XmlElement_o *)
               (**(code **)(*plVar5 + 0x468))
                         (plVar5,StringLiteral_11876,*(undefined8 *)(*plVar5 + 0x470));
      if (pSVar6 == (System_Xml_XmlElement_o *)0x0) goto LAB_0351dd58;
    }
    if (PCIHAENKBGL == (System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *)0x0)
    goto LAB_0351e018;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)PCIHAENKBGL,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_MoveNext__
                        );
      if (!bVar2) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pSVar6 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      name = local_70.fields._current[1].klass;
      pvVar1 = local_70.fields._current[1].monitor;
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      node = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,(System_String_o *)name,(MethodInfo *)0x0);
      if (node == (System_Xml_XmlAttribute_o *)0x0) {
        __this_02 = (System_Xml_XmlDocument_o *)
                    (*(pSVar6->klass->vtable)._17_get_OwnerDocument.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._17_get_OwnerDocument.method);
        if (__this_02 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        node = System_Xml_XmlDocument__CreateAttribute
                         (__this_02,(System_String_o *)name,(MethodInfo *)0x0);
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Xml_XmlAttributeCollection__Append(pSVar7,node,(MethodInfo *)0x0);
        if (node == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      (*(node->klass->vtable)._10_set_Value.methodPtr)
                (node,pvVar1,(node->klass->vtable)._10_set_Value.method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
              );
  }
  if (KDMPIDEEPMP != (System_Xml_XmlNode_o *)0x0) {
    if (__this_01 == (System_Xml_XmlDocument_o *)0x0) goto LAB_0351e018;
    lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar4 != 0) {
      plVar5 = (long *)(*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                                 (__this_01,StringLiteral_10213,
                                  (__this_01->klass->vtable)._51_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_0351e018;
      lVar4 = (**(code **)(*plVar5 + 0x468))
                        (plVar5,StringLiteral_11030,*(undefined8 *)(*plVar5 + 0x470));
      if (lVar4 != 0) goto LAB_0351df60;
    }
    lVar4 = (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                      (__this_01,StringLiteral_10213,(__this_01->klass->vtable)._51_get_Item.method)
    ;
    if (lVar4 == 0) {
      EIABCPKDEBD__BHPIHHJHELJ(__this_01,StringLiteral_10213,(MethodInfo *)0x0);
    }
    pSVar10 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)
                        (__this_01,StringLiteral_10213,
                         (__this_01->klass->vtable)._51_get_Item.method);
    EIABCPKDEBD__DGPOFACHGMP(pSVar10,KDMPIDEEPMP,(MethodInfo *)0x0);
  }
LAB_0351df60:
  auVar11 = thunk_FUN_01bda818(HEFOANCOHDC_TypeInfo);
  pHVar3 = auVar11._0_8_;
  HEFOANCOHDC___ctor(pHVar3,auVar11._8_8_);
  if (__this_01 != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (__this_01->klass->vtable)._51_get_Item.method;
    pSVar10 = (System_Xml_XmlNode_o *)
              (*(__this_01->klass->vtable)._51_get_Item.methodPtr)(__this_01,StringLiteral_10213);
    if (pHVar3 != (HEFOANCOHDC_o *)0x0) {
      HEFOANCOHDC__HNIHOIAMDPC(pHVar3,pSVar10,method_00);
      (pHVar3->fields).AEIJFFBOBCP = (__this->fields).AEIJFFBOBCP;
      CVar12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (pHVar3->fields).JFMAEFOHLDF.fields = CVar12;
      ppSVar8 = &(pHVar3->fields).DCDJOJGHJEB;
      *ppSVar8 = (System_Xml_XmlNode_o *)0x0;
      thunk_FUN_01c20e04(ppSVar8,0);
      ppSVar9 = &(pHVar3->fields).DHNEDFGMFGM;
      *ppSVar9 = (System_Xml_XmlDocument_o *)0x0;
      thunk_FUN_01c20e04(ppSVar9,0);
      return pHVar3;
    }
  }
LAB_0351e018:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

