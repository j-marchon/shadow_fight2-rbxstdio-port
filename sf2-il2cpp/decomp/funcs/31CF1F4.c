// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$Hide @ RVA 0x31CF1F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Hide(MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *pNVar2;
  
  if ((DAT_04566c94 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo);
    DAT_04566c94 = 1;
  }
  __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(__this,false,true,(MethodInfo *)0x0);
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

