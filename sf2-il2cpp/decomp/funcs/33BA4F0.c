// Nekki.SF2.GUI.Profile.PerkSubItem$$JFJLPBPNIHI @ RVA 0x33BA4F0

System_String_o *
Nekki_SF2_GUI_Profile_PerkSubItem__JFJLPBPNIHI
          (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  int32_t local_14;
  
  if ((DAT_04567d9c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_10503);
    DAT_04567d9c = 1;
  }
  __this_00 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (__this_00 == (JLGNBOILFLN_o *)0x0) {
    local_14 = 1;
  }
  else {
    local_14 = JLGNBOILFLN__BCLMIPIBLLB(__this_00,(MethodInfo *)0x0);
  }
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
  pSVar1 = System_String__Format(StringLiteral_10503,arg0,(MethodInfo *)0x0);
  return pSVar1;
}

