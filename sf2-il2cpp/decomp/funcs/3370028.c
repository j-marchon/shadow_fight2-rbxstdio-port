// Nekki.SF2.GUI.Shop.PerksPanel.<>c$$KEGJNHDEKNM @ RVA 0x3370028

int32_t Nekki_SF2_GUI_Shop_PerksPanel_<>c__KEGJNHDEKNM
                  (Nekki_SF2_GUI_Shop_PerksPanel___c_o *__this,HEFOANCOHDC_o *p_perk1,
                  HEFOANCOHDC_o *p_perk2,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *target;
  System_Enum_o local_40;
  int32_t local_30;
  int32_t local_24;
  
                    /* catch() { ... } // from try @ 03470004 with catch @ 03470028 */
                    /* try { // try from 03470030 to 03570037 has its CatchHandler @ 0347004c */
                    /* try { // try from 03470038 to 03570043 has its CatchHandler @ 0346f9fc */
                    /* try { // try from 03470044 to 0357004b has its CatchHandler @ 0347004c */
  if ((DAT_04567b11 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03470030 with catch @ 0347004c
                       catch(type#2 @ 00000000) { ... } // from try @ 03470044 with catch @ 0347004c
                        */
    __this = (Nekki_SF2_GUI_Shop_PerksPanel___c_o *)FUN_01bab630(&HEFOANCOHDC_JIDALCNODNB_TypeInfo);
    DAT_04567b11 = 1;
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

