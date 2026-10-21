// Nekki.SF2.GUI.Dialogs.NotificationsGame.AMMDNMNGIIF$$MoveNext @ RVA 0x30F856C

bool Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF__MoveNext
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_AMMDNMNGIIF_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Collections_IEnumerator_o **ppSVar3;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar4;
  float seconds;
  
  if ((DAT_04566481 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04566481 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) goto LAB_031f8634;
    ppSVar3 = &(pNVar2->fields).NKCJILMGJKB;
    *ppSVar3 = (System_Collections_IEnumerator_o *)0x0;
    (pNVar2->fields).KHHFEDEDJID = true;
    thunk_FUN_01c20e04(ppSVar3,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
      (pNVar2->fields).KHHFEDEDJID = false;
      seconds = (pNVar2->fields).HPMBLBOJPPB;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
      *ppIVar4 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar4,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_031f8634:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(pNVar2,method);
  }
  return false;
}

