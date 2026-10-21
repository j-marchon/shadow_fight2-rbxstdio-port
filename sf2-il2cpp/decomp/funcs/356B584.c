// Nekki.SF2.GUI.Menu.MainMenu$$ShowDojoDiscipleButton @ RVA 0x356B584

void Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar2;
  
  if ((DAT_04568c2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c2b = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar2 = (__this->fields).btnSettings;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields).btnSettings;
      if ((pNVar2 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

