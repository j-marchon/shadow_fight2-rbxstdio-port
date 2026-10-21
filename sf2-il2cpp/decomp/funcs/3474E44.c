// Nekki.SF2.GUI.Map.BattleButton$$AIHEAPNKCIG @ RVA 0x3474E44

System_String_o *
Nekki_SF2_GUI_Map_BattleButton__AIHEAPNKCIG(int32_t NKIAFKKEOBI,bool AOMBONOOJFP,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  System_String_StaticFields *pSVar2;
  int32_t local_34;
  
  if ((DAT_04568321 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_3431);
    FUN_01bab630(&StringLiteral_22453);
    FUN_01bab630(&StringLiteral_16217);
    DAT_04568321 = 1;
  }
  local_34 = NKIAFKKEOBI;
  arg1 = (Il2CppObject *)
         thunk_FUN_01bda448(Nekki_SF2_GUI_Map_BattleButton_PCAAFEMIPKD_TypeInfo,&local_34);
  if (AOMBONOOJFP) {
    pSVar2 = (System_String_StaticFields *)&StringLiteral_16217;
  }
  else {
    pSVar2 = string_TypeInfo->static_fields;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_22453,StringLiteral_3431,arg1,(Il2CppObject *)pSVar2->Empty,
                      (MethodInfo *)0x0);
  return pSVar1;
}

