// Nekki.SF2.GUI.Profile.KeyIcon$$FGJJDAHEGPF @ RVA 0x3128BA4

MGNDHCBAPEN_string__float__o *
Nekki_SF2_GUI_Profile_KeyIcon__FGJJDAHEGPF(int32_t EADCEBLKJEA,MethodInfo *method)

{
  uint uVar1;
  MGNDHCBAPEN_string__float__o *__this;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  float JGGJNLLANAE;
  
  if ((DAT_04566674 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_4509);
    FUN_01bab630(&StringLiteral_4508);
    FUN_01bab630(&StringLiteral_4511);
    DAT_04566674 = 1;
    method = extraout_x1;
  }
  uVar1 = EADCEBLKJEA - 1;
  if (uVar1 < 10) {
    puVar2 = (undefined8 *)(&PTR_StringLiteral_4509_03fc63f8)[(int)uVar1];
    JGGJNLLANAE = *(float *)(&DAT_00e2942c + (long)(int)uVar1 * 4);
    __this = (MGNDHCBAPEN_string__float__o *)
             thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo,method);
    MGNDHCBAPEN<object,_float>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this,(Il2CppObject *)*puVar2,JGGJNLLANAE,
               Method_MGNDHCBAPEN<string,_float>__ctor__);
  }
  else {
    __this = (MGNDHCBAPEN_string__float__o *)0x0;
  }
  return __this;
}

