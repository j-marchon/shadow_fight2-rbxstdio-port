// ACHLOMELAJE$$HDDFDBIKKFH @ RVA 0x305A128

void ACHLOMELAJE__HDDFDBIKKFH
               (ACHLOMELAJE_o *__this,HBNENINHPGF_o *OAOLCGAIILM,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  BNKBGIIJNLF_o *pBVar3;
  System_Collections_Generic_List_BNKBGIIJNLF__o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Xml_XmlElement_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  MethodInfo *method_00;
  BNKBGIIJNLF_array *pBVar9;
  HBNENINHPGF_o *pHVar10;
  System_Action_BNKBGIIJNLF__o *pSVar11;
  System_String_o *pSVar12;
  System_Xml_XmlNode_o **ppSVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar14;
  int32_t local_24;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  local_24 = CJNHFNHJHPE;
  if ((DAT_04565ebf & 1) == 0) {
    FUN_01bab630(&BNKBGIIJNLF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    FUN_01bab630(&StringLiteral_4919);
    DAT_04565ebf = 1;
  }
  if (CJNHFNHJHPE < 0) {
    CJNHFNHJHPE = 0;
    local_24 = 0;
  }
  pBVar3 = ACHLOMELAJE__CJLEHKJCCBE(__this,OAOLCGAIILM,method_00);
  if (pBVar3 == (BNKBGIIJNLF_o *)0x0) {
    pBVar3 = (BNKBGIIJNLF_o *)thunk_FUN_01bda818(BNKBGIIJNLF_TypeInfo);
    BNKBGIIJNLF___ctor(pBVar3,OAOLCGAIILM,CJNHFNHJHPE,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__;
    pSVar4 = (__this->fields).DIELINNGEBJ;
    if (pSVar4 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) goto LAB_0315a394;
    pBVar9 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pBVar9 == (BNKBGIIJNLF_array *)0x0) goto LAB_0315a394;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pBVar9->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pBVar9->m_Items[(int)uVar1] = pBVar3;
      thunk_FUN_01c20e04(pBVar9->m_Items + (int)uVar1,pBVar3);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pBVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pSVar4 = (__this->fields).DIELINNGEBJ;
    if (pSVar4 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) goto LAB_0315a394;
    pBVar3 = (BNKBGIIJNLF_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,
                        (pSVar4->fields)._size + -1,
                        Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    CVar14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pBVar3 == (BNKBGIIJNLF_o *)0x0) goto LAB_0315a394;
  }
  else {
    CVar14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       (CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pHVar10 = (pBVar3->fields)._GDNLFJIBAAI_k__BackingField;
  (pBVar3->fields)._PKGCKALOMOF_k__BackingField.fields = CVar14;
  if (pHVar10 != (HBNENINHPGF_o *)0x0) {
    pSVar12 = (pHVar10->fields)._COIPKAKHDFP_k__BackingField;
    ppSVar13 = &(__this->fields).BOGIKIKNEAL;
    pSVar5 = *ppSVar13;
    if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
      pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                         ((__this->fields).super.HJKLIDCAEOE,StringLiteral_4919,(MethodInfo *)0x0);
      (__this->fields).BOGIKIKNEAL = (System_Xml_XmlNode_o *)pSVar6;
      thunk_FUN_01c20e04(ppSVar13,pSVar6);
      pSVar5 = (__this->fields).BOGIKIKNEAL;
      if (pSVar5 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315a394;
    }
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar7,pSVar12,(MethodInfo *)0x0);
      if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD(*ppSVar13,pSVar12,(MethodInfo *)0x0);
      }
      pSVar5 = *ppSVar13;
      if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar7,pSVar12,(MethodInfo *)0x0);
          pSVar12 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (pSVar8 != (System_Xml_XmlAttribute_o *)0x0) {
            (*(pSVar8->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar8,pSVar12,(pSVar8->klass->vtable)._10_set_Value.method);
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
            pSVar11 = (__this->fields).MMCHECDCGKF;
            if (pSVar11 != (System_Action_BNKBGIIJNLF__o *)0x0) {
              (*(code *)(pSVar11->fields).super.super.invoke_impl)
                        ((pSVar11->fields).super.super.method_code,pBVar3,
                         (pSVar11->fields).super.super.method);
            }
            return;
          }
        }
      }
    }
  }
LAB_0315a394:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

