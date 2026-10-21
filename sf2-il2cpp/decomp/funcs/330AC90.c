// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$GHDNMPGNLOK @ RVA 0x330AC90

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GHDNMPGNLOK
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  System_String_o *pSVar2;
  CBLABOPKBKD_o *pCVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
                    /* try { // try from 0340ac98 to 0350b53b has its CatchHandler @ 0340ac98
                       catch() { ... } // from try @ 0340ac98 with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b57c with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b650 with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b67c with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b6bc with catch @ 0340ac98 */
  if ((DAT_04567782 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_GHDNMPGNLOK__);
    FUN_01bab630(&StringLiteral_15552);
    FUN_01bab630(&StringLiteral_15791);
    DAT_04567782 = 1;
  }
  if ((__this->fields).CPODNGPDPDC != false) {
    return;
  }
  (__this->fields).CPODNGPDPDC = true;
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pCVar3 = (__this->fields)._FONGIJNHBLK_k__BackingField;
    if ((pCVar3 != (CBLABOPKBKD_o *)0x0) && (__this_01 != (JMDPBFOCHHP_o *)0x0)) {
      pJVar1 = JMDPBFOCHHP__DIFLKMKBENA
                         (__this_01,(pCVar3->fields).BMGMGAAPFGO,false,(MethodInfo *)0x0);
      if (pJVar1 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
        pCVar3 = (__this->fields)._FONGIJNHBLK_k__BackingField;
        if (pCVar3 != (CBLABOPKBKD_o *)0x0) {
          pSVar2 = System_String__Concat
                             (StringLiteral_15552,(pCVar3->fields).BMGMGAAPFGO,StringLiteral_15791,
                              (MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pNVar4 = (__this->fields)._buttonIcon;
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
          thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
          pNVar4 = (__this->fields)._buttonIcon;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar4,(pJVar1->fields).KPDPJONADPJ,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

