// AKJJAPEHKCG$$MNKFDLHJPAA @ RVA 0x304EC80

bool AKJJAPEHKCG__MNKFDLHJPAA(UnityEngine_UI_Graphic_o *DAHDMONMPFJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *method_00;
  
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    bVar1 = false;
    if ((pNVar2->fields).DBNNMLAONOF != false) {
      bVar1 = LJLLAKHOFFF__HGHDGHHEFEP(DAHDMONMPFJ,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(DAHDMONMPFJ,method_00);
        bVar1 = !bVar1;
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

