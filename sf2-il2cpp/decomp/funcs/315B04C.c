// Nekki.SF2.GUI.Dialogs.Raids.SeasFinNewDanContent$$NBKPEBGCFJL @ RVA 0x315B04C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__NBKPEBGCFJL
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04566867 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12923);
    DAT_04566867 = 1;
  }
  pCVar1 = (__this->fields)._animationCycleEffect;
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationCycleEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._autoSize = false;
      CocosAnimation__Init(pCVar1,StringLiteral_12923,0,(System_String_o *)0x0,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._animationCycleEffect;
      if (pCVar1 != (CocosAnimation_o *)0x0) {
        (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 0x7ffffffd;
        (pCVar1->fields)._PPEGDOHGLJJ_k__BackingField = 0.04;
        (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
        CocosAnimation__SetFirstFrame(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

