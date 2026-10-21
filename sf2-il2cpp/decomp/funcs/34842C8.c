// Nekki.SF2.GUI.Dialogs.SettingsDialog$$GIJLHPDBFEK @ RVA 0x34842C8

void Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,
               Nekki_SF2_GUI_ResolutionButton_o *LGHOMHOPNEP,System_String_o *IEPAILIKIEM,
               int32_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Action_object__o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04568397 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04568397 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)LGHOMHOPNEP,(MethodInfo *)0x0);
  if (bVar1) {
    if (LGHOMHOPNEP != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (LGHOMHOPNEP,StringLiteral_14092,IEPAILIKIEM,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (LGHOMHOPNEP,StringLiteral_14092,IEPAILIKIEM,(MethodInfo *)0x0);
      (LGHOMHOPNEP->fields).super.ButtonId = OGPGLGPMEPD;
      pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      if (__this != (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)0x0) {
        System_Action<object>___ctor();
        SFButton__RemoveEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
        pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        SFButton__AddEventListener((SFButton_o *)LGHOMHOPNEP,2,pSVar2,(MethodInfo *)0x0);
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

