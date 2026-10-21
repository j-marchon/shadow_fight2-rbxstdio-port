// PNPNPCKGHEO$$FANFDKHEMJD @ RVA 0x306A9D0

void PNPNPCKGHEO__FANFDKHEMJD(PNPNPCKGHEO_o *__this,MethodInfo *method)

{
  System_String_o *PCPECHHMLEC;
  System_String_o *KCFLBKINDFM;
  System_String_o *EHNFGMGKCHO;
  System_String_o *KHPLLCKLJKO;
  bool bVar1;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04565f2a & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_PNPNPCKGHEO_LANNHNJHOLM__);
    FUN_01bab630(&Method_PNPNPCKGHEO_LJDHBCINGDC__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565f2a = 1;
    method = extraout_x1;
  }
  PCPECHHMLEC = (__this->fields).ECIBAPAHFLM;
  EHNFGMGKCHO = (__this->fields).EBCALIJLIFB;
  KCFLBKINDFM = (__this->fields).DHJJLAIADIP;
  KHPLLCKLJKO = (__this->fields).AIBNCPJMIPF;
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  x = JJPNLEPEAFM__JNDPLPKDPCP
                (PCPECHHMLEC,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,IELDNEAAPBE,1,0,false,false,
                 StringLiteral_1,true,true,true,true,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    PNPNPCKGHEO__KKAHPNPCKCG(__this,method_00);
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

