// Nekki.SF2.GUI.Scenes.DojoScene$$CLNAOMIIBLH @ RVA 0x2FEE970

void Nekki_SF2_GUI_Scenes_DojoScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Scenes_DojoScene_o *__this,MethodInfo *method)

{
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  FCJBEKHDLAF_o *__this_01;
  
  if ((DAT_04565a50 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_DojoScene_FPEKBEKECCH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<DojoScene>_CLNAOMIIBLH__);
    DAT_04565a50 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<DojoScene>_CLNAOMIIBLH__)
  ;
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_01 = (__this->fields).HPKHMGLOLPJ;
    if (__this_01 != (FCJBEKHDLAF_o *)0x0) {
      FCJBEKHDLAF__JCNAJEMHJCN(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

