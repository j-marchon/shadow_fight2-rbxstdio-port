// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$IsActive @ RVA 0x31721A8

bool Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar2;
  
  if ((DAT_04566930 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo);
    DAT_04566930 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((pNVar2 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
       (__this = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

