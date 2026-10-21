// PFOMHOLCODE$$BNDEBDLEIEH @ RVA 0x3351DE4

LBMOOFGGPEB_o *
PFOMHOLCODE__BNDEBDLEIEH
          (PFOMHOLCODE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *ADNMCIPDIJG,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  IGFGDDANEPE_o *a;
  LBMOOFGGPEB_o *__this_00;
  System_Action_object__o *pSVar7;
  System_Action_object__o **ppSVar8;
  System_String_o *KGLJICLJHEL;
  BHEDGAKGKPO_StaticFields *pBVar9;
  
  if ((DAT_04567a1d & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_TypeInfo);
    FUN_01bab630(&Method_NLPJLHOEAOE_GKABILAEKDM__);
    FUN_01bab630(&Method_NLPJLHOEAOE_GOHFDNFBBGG__);
    FUN_01bab630(&Method_NLPJLHOEAOE_JDHFCFGBAIO__);
    FUN_01bab630(&Method_NLPJLHOEAOE_KLFGNLODBBK__);
    FUN_01bab630(&Method_NLPJLHOEAOE_NGIGHBGFBAC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5773);
    FUN_01bab630(&StringLiteral_12088);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5293);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_12382);
    FUN_01bab630(&StringLiteral_1);
    __this = (PFOMHOLCODE_o *)FUN_01bab630(&StringLiteral_5492);
    DAT_04567a1d = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
LAB_03452258:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  __this = (PFOMHOLCODE_o *)(BHEDGAKGKPO_c *)0x0;
  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03452258;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
  a = (IGFGDDANEPE_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
  __this_00 = (LBMOOFGGPEB_o *)thunk_FUN_01bda818(LBMOOFGGPEB_TypeInfo);
  LBMOOFGGPEB___ctor(__this_00,(System_Action_object__o *)0x0,(MethodInfo *)0x0);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar9 = BHEDGAKGKPO_TypeInfo->static_fields;
  fVar1 = (pBVar9->KPJHDEIJPAN).fields.a;
  fVar2 = (pBVar9->KPJHDEIJPAN).fields.r;
  fVar3 = (pBVar9->KPJHDEIJPAN).fields.g;
  __this = (PFOMHOLCODE_o *)BHEDGAKGKPO_TypeInfo;
  if (__this_00 == (LBMOOFGGPEB_o *)0x0) goto LAB_03452258;
  (__this_00->fields).BANIDGFENDE.fields.b = (pBVar9->KPJHDEIJPAN).fields.b;
  (__this_00->fields).BANIDGFENDE.fields.a = fVar1;
  (__this_00->fields).BANIDGFENDE.fields.r = fVar2;
  (__this_00->fields).BANIDGFENDE.fields.g = fVar3;
  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  __this = (PFOMHOLCODE_o *)0x0;
  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03452258;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_12088,(MethodInfo *)0x0);
  bVar4 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
  (__this_00->fields).BKNLGDOJJHP = bVar4;
  bVar4 = System_String__op_Equality((System_String_o *)a,StringLiteral_5773,(MethodInfo *)0x0);
  if (bVar4) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar7 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
LAB_03452074:
    System_Action<object>___ctor();
    (__this_00->fields).FBKGGPDECHB = pSVar7;
  }
  else {
    bVar4 = System_String__op_Equality((System_String_o *)a,StringLiteral_5492,(MethodInfo *)0x0);
    if (bVar4) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar7 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      goto LAB_03452074;
    }
    bVar4 = System_String__op_Equality((System_String_o *)a,StringLiteral_5293,(MethodInfo *)0x0);
    if (bVar4) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar7 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar8 = &(__this_00->fields).FBKGGPDECHB;
      *ppSVar8 = pSVar7;
      thunk_FUN_01c20e04(ppSVar8,pSVar7);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      __this = (PFOMHOLCODE_o *)0x0;
      if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03452258;
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_8095,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
      a = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,(MethodInfo *)0x0);
LAB_0345224c:
      LBMOOFGGPEB__IIKPNGJAJIH(__this_00,(Il2CppObject *)a,(MethodInfo *)0x0);
      goto LAB_03452098;
    }
    bVar4 = System_String__op_Equality((System_String_o *)a,StringLiteral_12382,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar7 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    if (!bVar4) {
      System_Action<object>___ctor();
      ppSVar8 = &(__this_00->fields).FBKGGPDECHB;
      *ppSVar8 = pSVar7;
      thunk_FUN_01c20e04(ppSVar8,pSVar7);
      goto LAB_0345224c;
    }
    System_Action<object>___ctor();
    (__this_00->fields).FBKGGPDECHB = pSVar7;
  }
  thunk_FUN_01c20e04(&(__this_00->fields).FBKGGPDECHB,pSVar7);
LAB_03452098:
  LBMOOFGGPEB__JBGIAEJIKCA(__this_00,(Nekki_SF2_GUI_TimerLabel_o *)0x0,(MethodInfo *)0x0);
  return __this_00;
}

