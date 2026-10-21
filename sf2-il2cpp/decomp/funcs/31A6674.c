// HLPBEPCFOPH$$HNIHOIAMDPC @ RVA 0x31A6674

void HLPBEPCFOPH__HNIHOIAMDPC
               (HLPBEPCFOPH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_array *values;
  int32_t iVar5;
  System_String_o **ppSVar6;
  System_String_o **ppSVar7;
  
                    /* try { // try from 032a6684 to 033a668f has its CatchHandler @ 032a6320 */
                    /* try { // try from 032a6690 to 033a6697 has its CatchHandler @ 032a6698 */
  if ((DAT_04566b12 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a661c with catch @ 032a6698
                       catch(type#2 @ 00000000) { ... } // from try @ 032a6690 with catch @ 032a6698
                        */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_96);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_104);
    FUN_01bab630(&StringLiteral_11731);
    FUN_01bab630(&StringLiteral_103);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_10668);
    FUN_01bab630(&StringLiteral_8581);
    FUN_01bab630(&StringLiteral_14273);
    FUN_01bab630(&StringLiteral_14648);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6862);
    DAT_04566b12 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if ((NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
    ppSVar6 = &(__this->fields).DEKCPPOJFEH;
    *ppSVar6 = pSVar4;
    thunk_FUN_01c20e04(ppSVar6,pSVar4);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_14694,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar7 = &(__this->fields).PCNEDMAJMOJ;
      *ppSVar7 = pSVar4;
      thunk_FUN_01c20e04(ppSVar7,pSVar4);
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11731,(MethodInfo *)0x0);
        if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
          (__this->fields).AHMIFFKECHF = 0;
          if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
          if (bVar1) {
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
            if (values != (System_String_array *)0x0) {
              if ((int)values->max_length != 0) {
                values->m_Items[0] = StringLiteral_10668;
                thunk_FUN_01c20e04(values->m_Items);
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = (__this->fields).super.JPCLFPPBNNN;
                  thunk_FUN_01c20e04(values->m_Items + 1);
                  if (2 < (uint)values->max_length) {
                    values->m_Items[2] = StringLiteral_96;
                    thunk_FUN_01c20e04(values->m_Items + 2);
                    if (3 < (uint)values->max_length) {
                      values->m_Items[3] = (__this->fields).super._LLOFHDDBKFD_k__BackingField;
                      thunk_FUN_01c20e04(values->m_Items + 3);
                      if (4 < (uint)values->max_length) {
                        values->m_Items[4] = StringLiteral_103;
                        thunk_FUN_01c20e04(values->m_Items + 4);
                        if (5 < (uint)values->max_length) {
                          values->m_Items[5] = *ppSVar6;
                          thunk_FUN_01c20e04(values->m_Items + 5);
                          if (6 < (uint)values->max_length) {
                            values->m_Items[6] = StringLiteral_104;
                            thunk_FUN_01c20e04(values->m_Items + 6);
                            if (7 < (uint)values->max_length) {
                              values->m_Items[7] = *ppSVar7;
                              thunk_FUN_01c20e04(values->m_Items + 7);
                              if (8 < (uint)values->max_length) {
                                values->m_Items[8] = StringLiteral_47;
                                thunk_FUN_01c20e04();
                                pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                                }
                                goto LAB_032a6aa4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            goto LAB_032a6ab8;
          }
        }
        else {
          pSVar4 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_14648,(MethodInfo *)0x0);
          if (bVar1) {
            (__this->fields).AHMIFFKECHF = 0;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6862,(MethodInfo *)0x0);
            if (bVar1) {
              iVar5 = 1;
            }
            else {
              bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8581,(MethodInfo *)0x0);
              if (!bVar1) {
                pSVar4 = StringLiteral_14273;
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  pSVar4 = StringLiteral_14273;
                }
LAB_032a6aa4:
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                return;
              }
              iVar5 = 2;
            }
            (__this->fields).AHMIFFKECHF = iVar5;
          }
        }
        return;
      }
    }
  }
LAB_032a6ab8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

