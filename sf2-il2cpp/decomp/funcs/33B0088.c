// Nekki.SF2.GUI.Dialogs.BaseDialog$$Init @ RVA 0x33B0088

void Nekki_SF2_GUI_Dialogs_BaseDialog__Init
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d42 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567d42 = 1;
    IMMNELPBGIF = (Il2CppObject *)extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__MMHCNDPCGGP(__this,(MethodInfo *)IMMNELPBGIF);
                    /* WARNING: Could not recover jumptable at 0x034b011c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._29_GIENGNEGHPJ.methodPtr)
            (__this,StringLiteral_1,StringLiteral_9679,StringLiteral_3640,0,
             (__this->klass->vtable)._29_GIENGNEGHPJ.method);
  return;
}

