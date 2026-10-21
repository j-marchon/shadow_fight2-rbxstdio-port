// BGFHIINOIFE$$PDGKHEFBKIO @ RVA 0x322F93C

void BGFHIINOIFE__PDGKHEFBKIO(BGFHIINOIFE_o *__this,MethodInfo *method)

{
  CHDGOFBHAFI_o *__this_00;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566fc7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_BGFHIINOIFE_PCACJPAKEDH__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_17756);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566fc7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
    EHNFGMGKCHO = CHDGOFBHAFI__BGHMPINAEDC(__this_00,(MethodInfo *)0x0);
    __this_01 = JJPNLEPEAFM__OOOIOMHJONP
                          (StringLiteral_17756,EHNFGMGKCHO,StringLiteral_9679,StringLiteral_1,
                           (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,
                           true,(MethodInfo *)0x0);
    IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

