// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$Awake @ RVA 0x3487B60

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__Awake
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  int32_t PCLEALHGACC;
  NLIDHEAMLMC_o *pNVar1;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045683c2 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045683c2 = 1;
    method = extraout_x1;
  }
  PCLEALHGACC = (__this->fields)._ModelTeam;
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(PCLEALHGACC,(MethodInfo *)0x0);
  if (pNVar1 != (NLIDHEAMLMC_o *)0x0) {
    (__this->fields).AFEOEPFDNLI = (pNVar1->fields).OFFPEKODFPE;
  }
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__HFKKKKBAMGE(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__NNCDBOLMLHK(__this,method_00);
  return;
}

