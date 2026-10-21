// MEMHEPBAJJA$$.ctor @ RVA 0x33C6E7C

void MEMHEPBAJJA___ctor(MEMHEPBAJJA_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **ppSVar6;
  System_String_o **ppSVar7;
  System_Xml_XmlNode_o **ppSVar8;
  System_String_o **ppSVar9;
  
  if ((DAT_04567df6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6396);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_20373);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567df6 = 1;
  }
  ppSVar7 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar7 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar7);
  ppSVar9 = &(__this->fields).KBCOHMPJELJ;
  *ppSVar9 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar9);
  ppSVar6 = &(__this->fields).BGHFADDGPAD;
  *ppSVar6 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).JHFENACKNPG;
  *ppSVar8 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar8,CJNHFNHJHPE);
  *ppSVar9 = StringLiteral_20373;
  thunk_FUN_01c20e04(ppSVar9);
  pSVar2 = *ppSVar8;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6396,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = *ppSVar8;
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_034c70e0;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034c70e0;
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_6396,(MethodInfo *)0x0);
        method_01 = (MethodInfo *)0x0;
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        bVar1 = LCOODJKAICL__KFFIFGDKGCE(*ppSVar9,(MethodInfo *)0x0);
        pSVar5 = LCOODJKAICL__DDGMDKMKBHH(pSVar5,(MethodInfo *)0x0);
        pSVar5 = LCOODJKAICL__IPFHDLKHBDC(pSVar5,(MethodInfo *)0x0);
        *ppSVar9 = pSVar5;
        thunk_FUN_01c20e04(ppSVar9,pSVar5);
        if (bVar1) {
          MEMHEPBAJJA__MKMMMFKKADG(__this,(__this->fields).KBCOHMPJELJ,method_01);
        }
      }
      pSVar2 = (__this->fields).JHFENACKNPG;
      (__this->fields).KBODCOAHGFG = false;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
          *ppSVar7 = pSVar5;
          thunk_FUN_01c20e04(ppSVar7,pSVar5);
          pSVar2 = *ppSVar8;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_13991,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
              (__this->fields).BGHFADDGPAD = pSVar5;
              thunk_FUN_01c20e04(ppSVar6,pSVar5);
              (__this->fields)._JNLLKNHOBDG_k__BackingField = (KCFIOKDFHIB_o *)0x0;
              thunk_FUN_01c20e04(&__this->fields,0);
              MEMHEPBAJJA__ADKAJLAIBBM(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_034c70e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

