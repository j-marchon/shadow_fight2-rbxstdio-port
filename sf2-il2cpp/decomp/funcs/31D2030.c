// IIHMKHNLJKD$$JJCEPPADHNK @ RVA 0x31D2030

void IIHMKHNLJKD__JJCEPPADHNK(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *pNVar1;
  int64_t iVar2;
  int64_t iVar3;
  
  if ((DAT_04566cb0 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566cb0 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    if ((pNVar1->fields).GAPAJLLHGHO != false) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
      iVar3 = IIHMKHNLJKD__OBKOLJAKHJD(__this,KKJPPDNKGAI,method);
      if ((long)MGNPHCAAEIO_TypeInfo->static_fields->OIAMENKHCNO <= iVar2 - iVar3) {
        IIHMKHNLJKD__NPFGJPGKBOH(__this,KKJPPDNKGAI,method);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

