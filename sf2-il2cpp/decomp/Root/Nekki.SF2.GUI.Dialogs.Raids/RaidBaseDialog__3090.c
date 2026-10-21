// TypeDefIndex 3090
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidBaseDialog : BaseDialog
// Fields:

// ===== public void .ctor()  [RVA 0x34C9BA4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBaseDialog$$.ctor @ RVA 0x34C9BA4

void Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x34C9BAC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBaseDialog$$OnDestroy @ RVA 0x34C9BAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568655 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_EBOBLCDANEJ__);
    DAT_04568655 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__JGNHEIICALL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ(string PCPECHHMLEC = "", string DOEJEADIJEJ = "OK", string BECCMDCHEOP = "CANCEL", BaseDialog.OFBBBIDKKOD JFLAKNAGBEL = 0)  [RVA 0x34C9C54]
// Nekki.SF2.GUI.Dialogs.Raids.RaidBaseDialog$$GIENGNEGHPJ @ RVA 0x34C9C54

void Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *__this,System_String_o *PCPECHHMLEC,
               System_String_o *DOEJEADIJEJ,System_String_o *BECCMDCHEOP,int32_t JFLAKNAGBEL,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568656 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_EBOBLCDANEJ__);
    DAT_04568656 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,PCPECHHMLEC,DOEJEADIJEJ,BECCMDCHEOP,
             JFLAKNAGBEL,(MethodInfo *)0x0);
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__HKAALOKPBPG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EBOBLCDANEJ()  [RVA 0x34C9D2C]
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

