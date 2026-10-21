// ACHLOMELAJE$$GHLNGBDFENI @ RVA 0x30611BC

void ACHLOMELAJE__GHLNGBDFENI
               (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  MGNPHCAAEIO_HLAKGGFFNAO_o *pMVar1;
  HBNENINHPGF_o *__this_00;
  
  if ((DAT_04565ec9 & 1) == 0) {
    FUN_01bab630(&HBNENINHPGF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565ec9 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if (pMVar1 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
    __this_00 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(pMVar1,KGLJICLJHEL,(MethodInfo *)0x0);
    if (__this_00 == (HBNENINHPGF_o *)0x0) {
      __this_00 = (HBNENINHPGF_o *)thunk_FUN_01bda818(HBNENINHPGF_TypeInfo);
      method = (MethodInfo *)0x0;
      HBNENINHPGF___ctor(__this_00,KGLJICLJHEL,KGLJICLJHEL,0,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      if (pMVar1 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) goto LAB_031612ac;
      MGNPHCAAEIO_HLAKGGFFNAO__EHJFPEMNGIN(pMVar1,__this_00,(MethodInfo *)0x0);
    }
    ACHLOMELAJE__GHLNGBDFENI(__this,__this_00,CJNHFNHJHPE,method);
    return;
  }
LAB_031612ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

