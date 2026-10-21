// Nekki.SF2.GUI.Pvp.PvpScene$$JHKGOBPPALJ @ RVA 0x321BE18

PJKHAJKEHEL_o *
Nekki_SF2_GUI_Pvp_PvpScene__JHKGOBPPALJ
          (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *HIGMGOGMAMK,int32_t HEHMPFLAEGE,
          MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar2;
  NLPJLHOEAOE_o *pNVar3;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar4;
  System_String_o *message;
  NLPJLHOEAOE_o *pNVar5;
  System_Xml_XmlNode_o *pSVar6;
  PJKHAJKEHEL_o *pPVar7;
  HOOAAGABMBL_o *pHVar8;
  IFKFDFGNMMN_o *pIVar9;
  PJKHAJKEHEL_o *pPVar10;
  
  if ((DAT_04566f0a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14859);
    FUN_01bab630(&StringLiteral_20433);
    FUN_01bab630(&StringLiteral_7154);
    DAT_04566f0a = 1;
  }
  if (HIGMGOGMAMK != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(HIGMGOGMAMK,StringLiteral_20433,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields).MPPLJPIAGDK;
      if (pNVar2 == (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) goto LAB_0331c020;
      HIGMGOGMAMK = Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetRandomItem(pNVar2,(MethodInfo *)0x0)
      ;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NLPJLHOEAOE_o *)0x0) {
      pNVar4 = NLPJLHOEAOE__ADKMBOALAKN(pNVar3,HIGMGOGMAMK,(MethodInfo *)0x0);
      if (pNVar4 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
        message = System_String__Concat(StringLiteral_7154,HIGMGOGMAMK,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar5 != (NLPJLHOEAOE_o *)0x0) &&
          (pIVar9 = (pNVar5->fields).OMDCNDHOACL, pIVar9 != (IFKFDFGNMMN_o *)0x0)) &&
         (pSVar6 = (pIVar9->fields)._OLIGHNIEIGK_k__BackingField,
         pSVar6 != (System_Xml_XmlNode_o *)0x0)) {
        pSVar6 = (System_Xml_XmlNode_o *)
                 (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar6,StringLiteral_14859,(pSVar6->klass->vtable)._51_get_Item.method);
        if ((pNVar4 != (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) && (pNVar3 != (NLPJLHOEAOE_o *)0x0)) {
          pPVar7 = NLPJLHOEAOE__MDEGKNMDKPN
                             (pNVar3,pSVar6,(pNVar4->fields).BAKIMFMMFMP,false,(MethodInfo *)0x0);
          pPVar10 = (pNVar4->fields).BAKIMFMMFMP;
          if ((pPVar10 != (PJKHAJKEHEL_o *)0x0) && (pPVar7 != (PJKHAJKEHEL_o *)0x0)) {
            (pPVar7->fields).NILOEHGNJNL = (pPVar10->fields).NILOEHGNJNL;
            thunk_FUN_01c20e04(&(pPVar7->fields).NILOEHGNJNL);
            pPVar10 = (pNVar4->fields).BAKIMFMMFMP;
            if (pPVar10 != (PJKHAJKEHEL_o *)0x0) {
              (pPVar7->fields).NBPNHMKOJKB = (pPVar10->fields).NBPNHMKOJKB;
              thunk_FUN_01c20e04(&(pPVar7->fields).NBPNHMKOJKB);
              pNVar2 = (__this->fields).MPPLJPIAGDK;
              if (pNVar2 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
                pHVar8 = Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetPlayerWeapon
                                   (pNVar2,HIGMGOGMAMK,HEHMPFLAEGE,(MethodInfo *)0x0);
                (pPVar7->fields).PNAAPNFPCPI = pHVar8;
                thunk_FUN_01c20e04();
                return pPVar7;
              }
            }
          }
        }
      }
    }
  }
LAB_0331c020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

