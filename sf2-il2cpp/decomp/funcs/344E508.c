// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$DKLDHKNAEBO @ RVA 0x344E508

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__DKLDHKNAEBO
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  System_Action_o *pSVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ACHLOMELAJE_o **ppAVar4;
  CNLBMDGLFCJ_o *__this_03;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_0456828d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_GLAPDHJHCNJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_IDJJMFEFODC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_MHOOOLECDKK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_UpdateCoinsIcon__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20751);
    DAT_0456828d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__ONKMCCLALAL(__this,method);
  pNVar1 = (__this->fields)._infoServerBonus;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((__this_01 != (EEGDOGKBLNG_o *)0x0) &&
       (value = EEGDOGKBLNG__LMIIHKLCBKD(__this_01,0x40000000,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
                    /* try { // try from 0354e5f0 to 0364e727 has its CatchHandler @ 0354e5f0
                       catch() { ... } // from try @ 0354e5f0 with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e834 with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e898 with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e8dc with catch @ 0354e5f0
                       catch() { ... } // from try @ 0354e90c with catch @ 0354e5f0 */
      pNVar1 = (__this->fields)._infoServerBonus;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                  (pNVar1,StringLiteral_20751,(pNVar1->klass->vtable)._75_set_text.method);
        __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (__this_02 != (CHDGOFBHAFI_o *)0x0) {
          CHDGOFBHAFI__LGOOGCHEAMA(__this_02,pSVar2,(MethodInfo *)0x0);
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
          ppAVar4 = &(__this->fields).OKNKKHGBECG;
          *ppAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          thunk_FUN_01c20e04(ppAVar4);
          if (*ppAVar4 != (ACHLOMELAJE_o *)0x0) {
            __this_03 = (__this->fields).FADPBJBOBFA;
            iVar3 = ACHLOMELAJE__HEHFNBKGJLP(*ppAVar4,(MethodInfo *)0x0);
            if (__this_03 != (CNLBMDGLFCJ_o *)0x0) {
              CNLBMDGLFCJ__FOOHBJNHOKK(__this_03,(double)iVar3,(MethodInfo *)0x0);
              pAVar5 = (__this->fields).OKNKKHGBECG;
              pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0354e728 to 0364e72f has its CatchHandler @ 0354e8c0 */
                ACHLOMELAJE__CKIGHCPHCNK(pAVar5,pSVar2,(MethodInfo *)0x0);
                pAVar5 = (__this->fields).OKNKKHGBECG;
                pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0354e740 to 0364e747 has its CatchHandler @ 0354e8bc */
                System_Action___ctor();
                if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0354e750 to 0364e753 has its CatchHandler @ 0354e89c */
                  ACHLOMELAJE__MCPKFLGDELH(pAVar5,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 0354e768 to 0364e7a3 has its CatchHandler @ 0354e8b4 */
                  pAVar5 = (__this->fields).OKNKKHGBECG;
                  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                    ACHLOMELAJE__MCPKFLGDELH(pAVar5,pSVar2,(MethodInfo *)0x0);
                    pAVar5 = (__this->fields).OKNKKHGBECG;
                    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                      ACHLOMELAJE__DMEMBNEOLIA(pAVar5,pSVar2,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__IDJJMFEFODC(__this,method_00);
                    /* try { // try from 0354e7e0 to 0364e813 has its CatchHandler @ 0354e8b0 */
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(__this,method_01);
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__GLAPDHJHCNJ(__this,method_02);
                      return;
                    }
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
  FUN_01bab8c8();
}

