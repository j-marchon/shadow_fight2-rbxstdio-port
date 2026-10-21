// Nekki.SF2.GUI.UIModule$$remove_OnModuleDeactivated @ RVA 0x3490EC4

/* WARNING: Control flow encountered bad instruction data */

void Nekki_SF2_GUI_UIModule__remove_OnModuleDeactivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568418 & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568418 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  System_Delegate__Remove
            ((System_Delegate_o *)
             Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated,
             (System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

