// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$PGGACFIAGDA @ RVA 0x34DBCA8

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__PGGACFIAGDA
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04568718 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_NJOFMEIDDAH__);
    FUN_01bab630(&StringLiteral_4302);
    FUN_01bab630(&StringLiteral_17829);
    FUN_01bab630(&StringLiteral_4601);
    FUN_01bab630(&StringLiteral_17787);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568718 = 1;
    method = extraout_x1;
  }
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_4601,StringLiteral_4302,StringLiteral_17829,StringLiteral_17787,
             IELDNEAAPBE,1,0,false,false,StringLiteral_1,true,true,true,true,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__BGJLGOKOABF(__this,method_00);
  (__this->fields).IAAABJBDEMK = 7;
  return;
}

