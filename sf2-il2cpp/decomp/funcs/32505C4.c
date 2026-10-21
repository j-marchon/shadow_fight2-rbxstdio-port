// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.CMLKLGIDBAF$$MoveNext @ RVA 0x32505C4

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_CMLKLGIDBAF_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this_02;
  float seconds;
  
  if ((DAT_04567125 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04567125 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED = 2;
    if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      (__this_02->fields).PDNOIJPIOLD = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(&(__this_02->fields).PDNOIJPIOLD,0);
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_01,9,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
        return false;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PKBPIMABPCB(__this_02,method);
      seconds = (__this->fields).delay;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

