// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$IEFPBGKNKFH @ RVA 0x32561C0

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IEFPBGKNKFH
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_c *pNVar5;
  UnityEngine_RectTransform_o **ppUVar6;
  
  if ((DAT_0456715e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_TypeInfo);
    FUN_01bab630(&MatchingDialog_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456715e = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)LMEHKLFGEHI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (LMEHKLFGEHI == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_0335631c:
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) ||
       (__this_00 == (UnityEngine_Transform_o *)0x0)) {
LAB_03356388:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppUVar6 = &(pNVar4->fields)._chatHidedMount;
  }
  else {
    pNVar5 = LMEHKLFGEHI->klass;
    bVar1 = (pNVar5->_2).naturalAligment;
    bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 < bVar2) ||
       ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_TypeInfo)) {
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_TypeInfo->_2).naturalAligment;
      if ((bVar1 < bVar2) ||
         ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_TypeInfo)) {
        bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_TypeInfo->_2).naturalAligment;
        if ((bVar1 < bVar2) ||
           ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_TypeInfo)) {
          bVar2 = (MatchingDialog_TypeInfo->_2).naturalAligment;
          if ((bVar1 < bVar2) ||
             ((pNVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)MatchingDialog_TypeInfo
             )) goto LAB_0335631c;
        }
      }
    }
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if ((pNVar4 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) ||
       (__this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03356388;
    ppUVar6 = &(pNVar4->fields)._chatShownMount;
  }
  UnityEngine_Transform__SetParent
            (__this_00,(UnityEngine_Transform_o *)*ppUVar6,false,(MethodInfo *)0x0);
  return;
}

