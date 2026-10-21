// HFNLANEMDFI$$KIGEDFECCFP @ RVA 0x3349CD4

void HFNLANEMDFI__KIGEDFECCFP(HFNLANEMDFI_o *__this,MethodInfo *method)

{
  OCABNNJIENC_o *__this_00;
  MethodInfo *extraout_x1;
  float fVar1;
  
  if ((DAT_045679e9 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045679e9 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).CKEJJHPCDFK != false) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->PIBLPLGLODE;
    if (__this_00 == (OCABNNJIENC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar1 = OCABNNJIENC__JPONFNMFHGE(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    (__this->fields).CKEJJHPCDFK = false;
    (__this->fields).AICMABLCDED = fVar1 * (__this->fields).NBJKKCCFGNM;
  }
  return;
}

