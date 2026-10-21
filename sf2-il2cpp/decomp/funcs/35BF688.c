// Nekki.SF2.GUI.Fight.ViewerFight$$Render @ RVA 0x35BF688

void Nekki_SF2_GUI_Fight_ViewerFight__Render
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  JIMKCICMMIL_o *pJVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar3;
  
  if ((DAT_04568f0d & 1) == 0) {
                    /* catch() { ... } // from try @ 036bf678 with catch @ 036bf6a4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036bf6b4 to 037bf6bb has its CatchHandler @ 036bf6d0 */
                    /* try { // try from 036bf6bc to 037bf6c7 has its CatchHandler @ 036bf51c */
  if ((__this->fields)._BBIBLNIKJMG_k__BackingField != false) {
    pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
                    /* try { // try from 036bf6c8 to 037bf6cf has its CatchHandler @ 036bf6d0 */
    if (pJVar2 == (JIMKCICMMIL_o *)0x0) goto LAB_036bf7e8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bf6b4 with catch @ 036bf6d0
                       catch(type#2 @ 00000000) { ... } // from try @ 036bf6c8 with catch @ 036bf6d0
                        */
    if ((pJVar2->fields).BLGIPOEBHGA != false) {
                    /* try { // try from 036bf6d4 to 037bf897 has its CatchHandler @ 036bf6d4
                       catch() { ... } // from try @ 036bf6d4 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bf8e8 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bf970 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bf9f8 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfa90 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfb18 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfb64 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfbcc with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc18 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc2c with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc78 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc8c with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfcd8 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfcec with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfd28 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfd3c with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfd70 with catch @ 036bf6d4 */
      Nekki_SF2_GUI_Fight_ViewerFight__DLOCFGMOEFN(__this,method);
    }
    pNVar3 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
      if ((pJVar2 == (JIMKCICMMIL_o *)0x0) ||
         (pNVar3 = (__this->fields).leftModel, pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0))
      goto LAB_036bf7e8;
      Nekki_SF2_GUI_Fight_ScreenModel__Render(pNVar3,(pJVar2->fields).BLGIPOEBHGA,(MethodInfo *)0x0)
      ;
    }
    pNVar3 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
      if ((pJVar2 == (JIMKCICMMIL_o *)0x0) ||
         (pNVar3 = (__this->fields).rightModel, pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0))
      goto LAB_036bf7e8;
      Nekki_SF2_GUI_Fight_ScreenModel__Render(pNVar3,(pJVar2->fields).BLGIPOEBHGA,(MethodInfo *)0x0)
      ;
    }
  }
  pNVar3 = (__this->fields).leftModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).leftModel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bf7e8;
    Nekki_SF2_GUI_Fight_ScreenModel__RenderActivePerkModel(pNVar3,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).rightModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).rightModel;
  if (pNVar3 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__RenderActivePerkModel(pNVar3,(MethodInfo *)0x0);
    return;
  }
LAB_036bf7e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

