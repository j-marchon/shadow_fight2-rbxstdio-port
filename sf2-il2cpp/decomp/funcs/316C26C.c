// NFGLEDADCGL$$NHAIEGLJKMK @ RVA 0x316C26C

void NFGLEDADCGL__NHAIEGLJKMK
               (NFGLEDADCGL_o *__this,HNFFPPPDKDK_o *HPLHPPKHDHK,KINHGEBKOEG_o *AOPFMKPGGNA,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  method_00 = (MethodInfo *)AOPFMKPGGNA;
  if ((DAT_045668fb & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668fb = 1;
  }
  if (AOPFMKPGGNA != (KINHGEBKOEG_o *)0x0) {
    NFGLEDADCGL__FIGJPOMPAON(__this,(AOPFMKPGGNA->fields).ILEGAKGGJKI,method_00);
    if (HPLHPPKHDHK != (HNFFPPPDKDK_o *)0x0) {
      NFGLEDADCGL__MIDDOHLPNMM(__this,HPLHPPKHDHK,true,true,in_x4);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0326c2f0 to 0336c2f7 has its CatchHandler @ 0326c3f4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0326c304 to 0336c30b has its CatchHandler @ 0326c3f0 */
                    /* try { // try from 0326c30c to 0336c40b has its CatchHandler @ 0326bf98 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

