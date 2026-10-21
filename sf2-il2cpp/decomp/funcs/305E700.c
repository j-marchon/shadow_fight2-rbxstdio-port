// ACHLOMELAJE$$POEMPPEIGOM @ RVA 0x305E700

void ACHLOMELAJE__POEMPPEIGOM(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  System_String_o *AFKICLAFDKC;
  bool bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *__this_00;
  System_Action_T__o *action;
  System_Xml_XmlNode_o *pSVar3;
  long lVar4;
  System_Xml_XmlElement_o *pSVar5;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar6;
  MethodInfo *extraout_x1;
  DOPEEDABNEK_o *pDVar7;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04565eab & 1) == 0) {
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_ACHLOMELAJE_GBGMPLNMCOP_HLNCGJJLJFD__);
    FUN_01bab630(&ACHLOMELAJE_GBGMPLNMCOP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8116);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_4836);
    FUN_01bab630(&StringLiteral_8095);
    DAT_04565eab = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_GBGMPLNMCOP_TypeInfo,method);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  __this_00 = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = __this_00;
    thunk_FUN_01c20e04(pIVar2,__this_00);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar7 != (DOPEEDABNEK_o *)0x0) {
      __this_01 = (pDVar7->fields).DIGBEFKAPHM;
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_01,action,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
        AFKICLAFDKC = StringLiteral_4836;
        pSVar3 = (__this->fields).super.HJKLIDCAEOE;
        if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
          lVar4 = (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar3,StringLiteral_4836,(pSVar3->klass->vtable)._51_get_Item.method);
          if (lVar4 != 0) {
            pSVar3 = (__this->fields).super.HJKLIDCAEOE;
            if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315ea24;
            (*(pSVar3->klass->vtable)._25_RemoveChild.methodPtr)
                      (pSVar3,lVar4,(pSVar3->klass->vtable)._25_RemoveChild.method);
          }
          if (pIVar2->klass != (Il2CppClass *)0x0) {
            if (0 < *(int *)&(pIVar2->klass->_1).namespaze) {
              pSVar5 = EIABCPKDEBD__BHPIHHJHELJ
                                 ((__this->fields).super.HJKLIDCAEOE,AFKICLAFDKC,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__BHPIHHJHELJ
                                 ((System_Xml_XmlNode_o *)pSVar5,StringLiteral_8116,
                                  (MethodInfo *)0x0);
              if (pIVar2->klass == (Il2CppClass *)0x0) goto LAB_0315ea24;
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_58,(System_Collections_Generic_List_object__o *)pIVar2->klass,
                         Method_System_Collections_Generic_List<string>_GetEnumerator__);
              while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_58,
                                        Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                       ), pIVar2 = local_58.fields._current, bVar1) {
                JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                                        ((System_Xml_XmlNode_o *)pSVar5,StringLiteral_8095,
                                         (MethodInfo *)0x0);
                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                   ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_9327,
                                    (MethodInfo *)0x0);
                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar6,pIVar2,(pSVar6->klass->vtable)._10_set_Value.method);
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
            }
            return;
          }
        }
      }
    }
  }
LAB_0315ea24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

