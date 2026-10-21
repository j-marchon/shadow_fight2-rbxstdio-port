// NFGLEDADCGL$$NHAIEGLJKMK @ RVA 0x316B8EC

void NFGLEDADCGL__NHAIEGLJKMK
               (NFGLEDADCGL_o *__this,HNFFPPPDKDK_o *HPLHPPKHDHK,JLGNBOILFLN_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  method_00 = (MethodInfo *)EIKFGOCCOIE;
  if ((DAT_045668fc & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668fc = 1;
  }
  if (EIKFGOCCOIE != (JLGNBOILFLN_o *)0x0) {
    NFGLEDADCGL__FIGJPOMPAON(__this,(EIKFGOCCOIE->fields).LENFGEAJDMN,method_00);
    if (HPLHPPKHDHK != (HNFFPPPDKDK_o *)0x0) {
      NFGLEDADCGL__MIDDOHLPNMM(__this,HPLHPPKHDHK,false,true,in_x4);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      EDFDANKEBGF__NDKALCOOGCK((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

