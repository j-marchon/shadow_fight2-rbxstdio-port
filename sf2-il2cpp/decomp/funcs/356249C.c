// Nekki.SF2.Core.Fights.ModelContainer$$UpdateModel_ItemInfo @ RVA 0x356249C

void Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_ItemInfo
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               int32_t LFHPEEKGNDO,System_String_o *CNONPGEIGJM,MethodInfo *method)

{
  PJKHAJKEHEL_o *JOHFLOEABJL;
  PJKHAJKEHEL_o *__this_00;
  MethodInfo *in_x5;
  
  if ((DAT_04568bd3 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04568bd3 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JOHFLOEABJL = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
  __this_00 = (PJKHAJKEHEL_o *)thunk_FUN_01bda818(PJKHAJKEHEL_TypeInfo);
  PJKHAJKEHEL___ctor(__this_00,JOHFLOEABJL,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_ModelContainer__FJHEDBMBEFI
            (__this,IKKAMAMLIKA,__this_00,LFHPEEKGNDO,CNONPGEIGJM,in_x5);
  return;
}

