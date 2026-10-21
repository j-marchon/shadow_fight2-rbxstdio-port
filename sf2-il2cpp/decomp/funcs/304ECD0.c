// AKJJAPEHKCG$$MNKFDLHJPAA @ RVA 0x304ECD0

bool AKJJAPEHKCG__MNKFDLHJPAA(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Graphic_o *x;
  
  if ((DAT_04565e33 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e33 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    bVar1 = false;
    if ((pNVar2->fields).DBNNMLAONOF != false) {
      if (PFNMDNHEFEC == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_0314ed78;
      x = (PFNMDNHEFEC->fields).m_TargetGraphic;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if ((bVar1) ||
         (bVar1 = LJLLAKHOFFF__HGHDGHHEFEP((PFNMDNHEFEC->fields).m_TargetGraphic,(MethodInfo *)0x0),
         method_00 = extraout_x1_00, bVar1)) {
        bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(PFNMDNHEFEC,method_00);
        bVar1 = !bVar1;
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
LAB_0314ed78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

