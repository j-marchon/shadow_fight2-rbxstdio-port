// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$GLGJNACDPEM @ RVA 0x315B0F8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__GLGJNACDPEM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pCVar1 = (__this->fields)._animationTopEffect;
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationTopEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

