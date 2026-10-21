// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$OnDestroy @ RVA 0x3487ABC

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__OnDestroy
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683c1 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045683c1 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo,method);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

