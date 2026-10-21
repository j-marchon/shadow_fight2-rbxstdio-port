// AMIINPEKKFB$$CHENJHPJCKE @ RVA 0x350FB48

void AMIINPEKKFB__CHENJHPJCKE
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t EPINGPGECOM,int32_t GNDOPGAILNK,bool MEGHFHANLPK,
               bool CDCKLABCFOM,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  HOOAAGABMBL_o *CJNHFNHJHPE;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *pIVar6;
  long lVar7;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar8;
  HOOAAGABMBL_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  int iVar9;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar10;
  System_String_o *pSVar11;
  UnityEngine_Object_o *x;
  
  if ((DAT_045688f6 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_14587);
    FUN_01bab630(&StringLiteral_6854);
    DAT_045688f6 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0360fc14 to 0370fc3b has its CatchHandler @ 0360fe14 */
    KFJJHMDIFIG__ONCJPMNKDIM<object>
              (StringLiteral_6854,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    return;
  }
  if (EPINGPGECOM < 1) {
    CJNHFNHJHPE = (HOOAAGABMBL_o *)0x0;
  }
  else {
    CJNHFNHJHPE = HOOAAGABMBL__HCMOFJHAKJH(IKKAMAMLIKA,EPINGPGECOM,(MethodInfo *)0x0);
  }
  if (MEGHFHANLPK) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE__DKAIOJJLNGL(IKKAMAMLIKA,(MethodInfo *)0x0);
  }
                    /* try { // try from 0360fc70 to 0370fc9b has its CatchHandler @ 0360fe10 */
  if (GNDOPGAILNK < 1) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0360fca4 to 0370fceb has its CatchHandler @ 0360fe1c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
       (__this = (pAVar10->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) goto LAB_03610138;
    bVar2 = GGHCLMEFIGO__JFPMAKABBOK
                      (__this,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_0360fd3c;
    if (GNDOPGAILNK != 0) {
      pSVar11 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar11,(MethodInfo *)0x0);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar5 = -GNDOPGAILNK;
      if (-1 < GNDOPGAILNK) {
        iVar5 = GNDOPGAILNK;
      }
                    /* try { // try from 0360fd2c to 0370fd4f has its CatchHandler @ 0360fe08 */
      NLPJLHOEAOE__OMFGGNJKKAJ(pIVar6,iVar5,false,(MethodInfo *)0x0);
LAB_0360ff50:
      bVar2 = false;
      goto LAB_0360ff54;
    }
    if (!MEGHFHANLPK) goto LAB_0360ff50;
    pSVar11 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar11,(MethodInfo *)0x0);
    bVar3 = NLPJLHOEAOE__CCPLLOAKNIL(pIVar6,true,true,(MethodInfo *)0x0);
    bVar2 = false;
  }
  else {
LAB_0360fd3c:
                    /* try { // try from 0360fd50 to 0370fde3 has its CatchHandler @ 0360fae4 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO_TypeInfo->static_fields->JHOGCLNJGDK;
    MGNPHCAAEIO_TypeInfo->static_fields->JHOGCLNJGDK = CDCKLABCFOM;
    pIVar6 = AMIINPEKKFB__PJOFJOOGIBF(IKKAMAMLIKA,GNDOPGAILNK,0,MEGHFHANLPK,true,method);
    MGNPHCAAEIO_TypeInfo->static_fields->JHOGCLNJGDK = bVar1;
    if (CJNHFNHJHPE != (HOOAAGABMBL_o *)0x0) {
      if (pIVar6 == (IGFGDDANEPE_o *)0x0) goto LAB_03610138;
      IGFGDDANEPE__CCOEOCPGJBG(pIVar6,StringLiteral_14587,(MethodInfo *)0x0);
      if ((CDCKLABCFOM) &&
         (iVar9 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField * 100, EPINGPGECOM < iVar9)) {
        iVar9 = iVar9 + 0x1e;
      }
      else {
        iVar9 = (CJNHFNHJHPE->fields)._HCHGENFJLHA_k__BackingField;
      }
      method_00 = (MethodInfo *)0x0;
      IGFGDDANEPE__DJJHOOKLHHL(pIVar6,iVar9,(MethodInfo *)0x0);
                    /* try { // try from 0360fde4 to 0370fdeb has its CatchHandler @ 0360fe0c */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360fdec to 0370fdf3 has its CatchHandler @ 0360fe18 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0360fdf4 to 0370fdf7 has its CatchHandler @ 0360fae4 */
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360fdf8 to 0370fdfb has its CatchHandler @ 0360fe04 */
                    /* try { // try from 0360fdfc to 0370fe2b has its CatchHandler @ 0360fae4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fdf8 with catch @ 0360fe04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fd2c with catch @ 0360fe08
                        */
        DAT_04565b7d = '\x01';
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fde4 with catch @ 0360fe0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fc70 with catch @ 0360fe10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fc14 with catch @ 0360fe14
                        */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fdec with catch @ 0360fe18
                        */
        thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fca4 with catch @ 0360fe1c
                        */
      }
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
                    /* try { // try from 0360fe2c to 0370fe2f has its CatchHandler @ 0360fe40 */
      iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
      AMIINPEKKFB__LEDEFAKNIDE(pIVar6,iVar5,method_00);
                    /* catch() { ... } // from try @ 0360fe2c with catch @ 0360fe40 */
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360fe48 to 0370feaf has its CatchHandler @ 0360fec4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
      iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
      IGFGDDANEPE__GIIJHCLHFDK(pIVar6,iVar5,(MethodInfo *)0x0);
    }
    iVar9 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
    bVar2 = CJNHFNHJHPE != (HOOAAGABMBL_o *)0x0;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0360feb0 to 0370febb has its CatchHandler @ 0360fae4 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360febc to 0370fec3 has its CatchHandler @ 0360fec4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360fe48 with catch @ 0360fec4
                       catch(type#2 @ 00000000) { ... } // from try @ 0360febc with catch @ 0360fec4
                        */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
    iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
    if (iVar9 <= iVar5) {
      HOOAAGABMBL__GEBIJFANLGH(IKKAMAMLIKA,true,(MethodInfo *)0x0);
    }
LAB_0360ff54:
    bVar3 = false;
  }
  lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
                    /* try { // try from 0360ff7c to 03710063 has its CatchHandler @ 0360ff7c
                       catch() { ... } // from try @ 0360ff7c with catch @ 0360ff7c
                       catch() { ... } // from try @ 036100a0 with catch @ 0360ff7c
                       catch() { ... } // from try @ 03610148 with catch @ 0360ff7c
                       catch() { ... } // from try @ 03610188 with catch @ 0360ff7c
                       catch() { ... } // from try @ 036101d4 with catch @ 0360ff7c */
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar7 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (bVar2) {
      lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8) ==
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
         (pNVar8 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                             ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8),
                              (MethodInfo *)0x0),
         pNVar8 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_03610138;
      Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo(pNVar8,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    if (bVar3 != false || bVar2) {
      lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8) ==
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
         (pNVar8 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                             ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8),
                              (MethodInfo *)0x0),
         pNVar8 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_03610138;
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(pNVar8,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 03610064 to 0371006b has its CatchHandler @ 03610168 */
  if ((GNDOPGAILNK < 1) && (!MEGHFHANLPK)) {
    pSVar11 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03610084 to 0371008b has its CatchHandler @ 03610164 */
    pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar11,(MethodInfo *)0x0);
    if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 03610090 to 0371009f has its CatchHandler @ 0361014c */
      __this_00 = (pIVar6->fields).PCBECBEFJOI;
      if (__this_00 == (HOOAAGABMBL_o *)0x0) goto LAB_03610138;
                    /* try { // try from 036100a0 to 0371013b has its CatchHandler @ 0360ff7c */
      HOOAAGABMBL__GEBIJFANLGH(__this_00,false,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
      ACHLOMELAJE__POEMPPEIGOM(pAVar10,(MethodInfo *)0x0);
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
    NLPJLHOEAOE__HBFMPJEOIEL(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03610138:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

