// CGALNIOABHK$$KJLLLGAEJFG @ RVA 0x3445FD0

void CGALNIOABHK__KJLLLGAEJFG
               (System_Xml_XmlNode_o *CMCEOIEBENH,System_Xml_XmlNode_o *KBDJJBJJEMM,
               System_Collections_Generic_List_XmlNode__o *PIPBEEIHMJN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  uint uVar2;
  long lVar3;
  System_Xml_XmlNode_o *ABOGEFBHAPG;
  bool bVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  Il2CppObject *pIVar9;
  System_String_o *b;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Xml_XmlNode_array *pSVar10;
  int index;
  ulong uVar11;
  System_Xml_XmlNode_o *local_68;
  
  if ((DAT_04568246 & 1) == 0) {
                    /* try { // try from 0354600c to 03646313 has its CatchHandler @ 0354600c
                       catch() { ... } // from try @ 0354600c with catch @ 0354600c
                       catch() { ... } // from try @ 03546430 with catch @ 0354600c
                       catch() { ... } // from try @ 0354663c with catch @ 0354600c
                       catch() { ... } // from try @ 03546724 with catch @ 0354600c
                       catch() { ... } // from try @ 0354672c with catch @ 0354600c
                       catch() { ... } // from try @ 03546738 with catch @ 0354600c
                       catch() { ... } // from try @ 03546814 with catch @ 0354600c
                       catch() { ... } // from try @ 035468a8 with catch @ 0354600c */
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>_TryGetValue__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_12057);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_9210);
    DAT_04568246 = 1;
  }
  local_68 = (System_Xml_XmlNode_o *)0x0;
  if (KBDJJBJJEMM != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(KBDJJBJJEMM->klass->vtable)._16_get_Attributes.methodPtr)
                       (KBDJJBJJEMM,(KBDJJBJJEMM->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_12864,(MethodInfo *)0x0);
      if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar7 = (System_String_o *)
                 (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
        if ((pSVar7 == (System_String_o *)0x0) ||
           (pSVar8 = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0),
           pSVar8 == (System_String_array *)0x0)) goto LAB_03546328;
        if (0 < (int)pSVar8->max_length) {
          uVar11 = 0;
          do {
            if (PIPBEEIHMJN == (System_Collections_Generic_List_XmlNode__o *)0x0) goto LAB_03546328;
            ppSVar1 = pSVar8->m_Items + uVar11;
            if (0 < (PIPBEEIHMJN->fields)._size) {
              index = 0;
              do {
                if ((uint)pSVar8->max_length <= uVar11) goto LAB_0354632c;
                pSVar7 = *ppSVar1;
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)PIPBEEIHMJN,index,
                                    Method_System_Collections_Generic_List<XmlNode>_get_Item__);
                if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03546328;
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*pIVar9->klass->vtable[0x10].methodPtr)
                                   (pIVar9,pIVar9->klass->vtable[0x10].method);
                if ((pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
                   (pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_9327,(MethodInfo *)0x0),
                   pSVar6 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_03546328;
                b = (System_String_o *)
                    (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
                bVar4 = System_String__op_Equality(pSVar7,b,(MethodInfo *)0x0);
                if (bVar4) goto LAB_035462f8;
                index = index + 1;
              } while (index < (PIPBEEIHMJN->fields)._size);
            }
            local_68 = (System_Xml_XmlNode_o *)0x0;
            if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if ((uint)pSVar8->max_length <= uVar11) {
LAB_0354632c:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     CGALNIOABHK_TypeInfo->static_fields->OJGHOJALHBK;
            if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03546328;
            method_00 = (MethodInfo *)&local_68;
            method_01 = Method_System_Collections_Generic_Dictionary<string,_XmlNode>_TryGetValue__;
            bVar4 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                              (__this,(Il2CppObject *)*ppSVar1,(Il2CppObject **)method_00,
                               (MethodInfo_2334730 *)
                               Method_System_Collections_Generic_Dictionary<string,_XmlNode>_TryGetValue__
                              );
            lVar3 = Method_System_Collections_Generic_List<XmlNode>_Add__;
            if (bVar4) {
              pSVar10 = (PIPBEEIHMJN->fields)._items;
              (PIPBEEIHMJN->fields)._version = (PIPBEEIHMJN->fields)._version + 1;
              if (pSVar10 == (System_Xml_XmlNode_array *)0x0) goto LAB_03546328;
              uVar2 = (PIPBEEIHMJN->fields)._size;
              if (uVar2 < (uint)pSVar10->max_length) {
                (PIPBEEIHMJN->fields)._size = uVar2 + 1;
                pSVar10->m_Items[(int)uVar2] = local_68;
                thunk_FUN_01c20e04();
              }
              else {
                method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)PIPBEEIHMJN,
                           (Il2CppObject *)local_68,(MethodInfo_26E4DAC *)method_00);
              }
              ABOGEFBHAPG = local_68;
              if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              CGALNIOABHK__BOEHFFCDAJO(CMCEOIEBENH,ABOGEFBHAPG,method_00);
              CGALNIOABHK__KJLLLGAEJFG(CMCEOIEBENH,local_68,PIPBEEIHMJN,method_01);
            }
            else {
              if ((uint)pSVar8->max_length <= uVar11) goto LAB_0354632c;
              bVar4 = System_String__op_Inequality(*ppSVar1,StringLiteral_12057,(MethodInfo *)0x0);
              if (bVar4) {
                if ((uint)pSVar8->max_length <= uVar11) goto LAB_0354632c;
                pSVar7 = System_String__Concat(StringLiteral_9210,*ppSVar1,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              }
            }
LAB_035462f8:
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)pSVar8->max_length);
        }
      }
                    /* try { // try from 03546314 to 0364633b has its CatchHandler @ 0354676c */
      return;
    }
  }
LAB_03546328:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

