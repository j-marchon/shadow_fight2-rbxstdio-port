// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$OnDestroy @ RVA 0x30E1E54

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_01;
  LJNJDFEAIOH_o **ppLVar1;
  KKLJIDJBFEI_o *pKVar2;
  MethodInfo *method_00;
  
  if ((DAT_045663b9 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_KANFKOMJMHF__);
    DAT_045663b9 = 1;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    GCIFMNHADDF__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN(__this_01,false,method_00);
    ppLVar1 = &(__this->fields).Controller;
    *ppLVar1 = (LJNJDFEAIOH_o *)0x0;
    thunk_FUN_01c20e04(ppLVar1,0);
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      (*(pKVar2->klass->vtable)._9_IKAAFAICDMD.methodPtr)
                (pKVar2,__this,(pKVar2->klass->vtable)._9_IKAAFAICDMD.method);
      if (DAT_04566479 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
        DAT_04566479 = '\x01';
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH =
           (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields,0);
      (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

