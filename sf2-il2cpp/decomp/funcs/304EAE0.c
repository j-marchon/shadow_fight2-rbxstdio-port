// AKJJAPEHKCG$$MNKFDLHJPAA @ RVA 0x304EAE0

bool AKJJAPEHKCG__MNKFDLHJPAA(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *method_00;
  
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    bVar1 = false;
    if ((pNVar2->fields).DBNNMLAONOF != false) {
      bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(LAIGNDBNBJG,method_00);
      bVar1 = !bVar1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

