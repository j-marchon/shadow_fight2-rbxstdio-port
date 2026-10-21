// ADGIHFGIFHO$$.ctor @ RVA 0x312BEB0

void ADGIHFGIFHO___ctor(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566699 & 1) == 0) {
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04566699 = 1;
    method = extraout_x1;
  }
  if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PJKHAJKEHEL_TypeInfo,method);
  }
  PJKHAJKEHEL___ctor((PJKHAJKEHEL_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0322bf08 to 0332bf0f has its CatchHandler @ 0322bf7c */
  ADGIHFGIFHO__OBMMBLLHNDF(__this,method_00);
  return;
}

