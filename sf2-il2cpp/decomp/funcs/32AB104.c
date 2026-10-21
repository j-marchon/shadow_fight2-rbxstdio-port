// BGFNOPDHEOM$$EMHAFDFJFIA @ RVA 0x32AB104

OLKKAIFGGAK_o * BGFNOPDHEOM__EMHAFDFJFIA(GGFFOJJGHGP_o *EJFPCGICJJB,MethodInfo *method)

{
  int32_t NAIJBCMHBFK;
  int32_t iVar1;
  FCJBEKHDLAF_o *__this;
  OLKKAIFGGAK_o *pOVar2;
  MethodInfo *in_x2;
  
  if ((DAT_04567434 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04567434 = 1;
  }
  if (EJFPCGICJJB != (GGFFOJJGHGP_o *)0x0) {
    NAIJBCMHBFK = (*(EJFPCGICJJB->klass->vtable)._5_unknown.methodPtr)
                            (EJFPCGICJJB,(EJFPCGICJJB->klass->vtable)._5_unknown.method);
    iVar1 = (EJFPCGICJJB->fields).HLFBMBHOPMI;
    if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo);
    }
    iVar1 = BGFNOPDHEOM__DGJLLOKIIMA(NAIJBCMHBFK,iVar1,in_x2);
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
      return (OLKKAIFGGAK_o *)0x0;
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (__this != (FCJBEKHDLAF_o *)0x0) {
      pOVar2 = FCJBEKHDLAF__BGOMMDMHFCJ(__this,iVar1,(MethodInfo *)0x0);
      return pOVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

