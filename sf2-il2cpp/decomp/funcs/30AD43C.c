// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$Update @ RVA 0x30AD43C

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__Update
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields).LNMPPDLMKAF < fVar1) {
                    /* WARNING: Could not recover jumptable at 0x031ad46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
  Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EIFGCFOKAND(__this,method_00);
  return;
}

