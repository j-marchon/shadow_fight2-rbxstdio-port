// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$FMCAPKDNGLH @ RVA 0x30D6A00

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FMCAPKDNGLH
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pCVar1 = (__this->fields)._chestAnimation;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFirstFrame(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._chestAnimation;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
                    /* try { // try from 031d6a30 to 032d6a57 has its CatchHandler @ 031d6fb8 */
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

