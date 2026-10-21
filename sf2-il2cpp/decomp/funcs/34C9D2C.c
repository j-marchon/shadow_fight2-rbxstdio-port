// Nekki.SF2.GUI.Dialogs.Raids.RaidBaseDialog$$EBOBLCDANEJ @ RVA 0x34C9D2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__EBOBLCDANEJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568657 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_EBOBLCDANEJ__);
    DAT_04568657 = 1;
  }
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__JGNHEIICALL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035c9de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

