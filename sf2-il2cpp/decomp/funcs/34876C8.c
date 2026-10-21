// Nekki.SF2.GUI.Shop.ParametersPanel.<>c$$PLNDGIALHJB @ RVA 0x34876C8

int32_t Nekki_SF2_GUI_Shop_ParametersPanel_<>c__PLNDGIALHJB
                  (Nekki_SF2_GUI_Shop_ParametersPanel___c_o *__this,HEFOANCOHDC_o *p_perk1,
                  HEFOANCOHDC_o *p_perk2,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *target;
  System_Enum_o local_40;
  int32_t local_30;
  int32_t local_24;
  
  if ((DAT_045683bc & 1) == 0) {
    __this = (Nekki_SF2_GUI_Shop_ParametersPanel___c_o *)
             FUN_01bab630(&HEFOANCOHDC_JIDALCNODNB_TypeInfo);
    DAT_045683bc = 1;
  }
  if ((p_perk1 != (HEFOANCOHDC_o *)0x0) && (p_perk2 != (HEFOANCOHDC_o *)0x0)) {
    local_24 = (p_perk2->fields).OCABLLPNEGL;
    target = (Il2CppObject *)thunk_FUN_01bda448(HEFOANCOHDC_JIDALCNODNB_TypeInfo,&local_24);
    local_40.klass = (System_Enum_c *)HEFOANCOHDC_JIDALCNODNB_TypeInfo;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = (p_perk1->fields).OCABLLPNEGL;
    iVar1 = System_Enum__CompareTo(&local_40,target,(MethodInfo *)0x0);
    return -iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

