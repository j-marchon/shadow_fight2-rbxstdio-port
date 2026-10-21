// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$EIAOEJNEBDM @ RVA 0x34276DC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EIAOEJNEBDM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pCVar1 = (__this->fields)._animationHitEffect;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    if ((pCVar1->fields)._JJCDMHFHJAB_k__BackingField == false) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03527740;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields)._animationSlashEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      if ((pCVar1->fields)._JJCDMHFHJAB_k__BackingField != false) {
        return;
      }
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03527740:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

