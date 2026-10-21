// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshTimers @ RVA 0x34C49A0

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  int64_t CNHMFABDCHB;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  
  if ((DAT_04568628 & 1) == 0) {
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568628 = 1;
    method = extraout_x1;
  }
  if ((((__this->fields).GMDIAECHCCO == false) &&
      ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    (__this->fields).BKLPHMPJEFA = true;
    return;
  }
                    /* try { // try from 035c4a18 to 036c4b43 has its CatchHandler @ 035c4a18
                       catch() { ... } // from try @ 035c4a18 with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4b5c with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4c7c with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4ca4 with catch @ 035c4a18
                       catch() { ... } // from try @ 035c4ce4 with catch @ 035c4a18 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar5->fields).EANIPGPKLOA == false) {
      pUVar3 = (__this->fields)._DeliveryTimePanel;
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
         (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
        __this_01 = GGHCLMEFIGO__JNFIBDBHNOA
                              (__this_00,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
        if (__this_01 == (IGFGDDANEPE_o *)0x0) {
          CNHMFABDCHB = 0;
        }
        else {
          CNHMFABDCHB = IGFGDDANEPE__PEFAGDNIMCK(__this_01,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields)._DeliveryTimePanel;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._DeliveryTimePanel;
          if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 035c4b44 to 036c4b4b has its CatchHandler @ 035c4c88 */
            UnityEngine_GameObject__SetActive(pUVar3,0 < CNHMFABDCHB,(MethodInfo *)0x0);
                    /* try { // try from 035c4b54 to 036c4b5b has its CatchHandler @ 035c4c80 */
            pUVar3 = (__this->fields)._DeliveryTimePanel;
                    /* try { // try from 035c4b5c to 036c4c77 has its CatchHandler @ 035c4a18 */
            if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (!bVar2) {
                if (!bVar1) {
                  return;
                }
                Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons(__this,method_00);
                return;
              }
              pNVar6 = (__this->fields)._DeliveryTimeText;
              if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar4 = NGFEKJBMGEB__BCGDPKJNJCH
                                 (CNHMFABDCHB,true,true,true,false,StringLiteral_2086,true,true,true
                                  ,true,StringLiteral_1,StringLiteral_1,StringLiteral_1,
                                  StringLiteral_1,(MethodInfo *)0x0);
              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c4c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                          (pNVar6,pSVar4,(pNVar6->klass->vtable)._75_set_text.method);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

