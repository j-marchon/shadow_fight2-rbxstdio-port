// Nekki.SF2.GUI.Profile.PerkCell$$UpdateState @ RVA 0x353F260

void Nekki_SF2_GUI_Profile_PerkCell__UpdateState
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  
  pNVar2 = (__this->fields)._LeftSubItem;
  if (pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(pNVar2->klass->vtable)._58_UpdateState.methodPtr)
              (pNVar2,(pNVar2->klass->vtable)._58_UpdateState.method);
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._RightSubItem;
      if (pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363f2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar2->klass->vtable)._58_UpdateState.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._58_UpdateState.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

