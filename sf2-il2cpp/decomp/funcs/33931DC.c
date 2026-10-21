// CBLABOPKBKD$$FPBFCPPDGNI @ RVA 0x33931DC

bool CBLABOPKBKD__FPBFCPPDGNI(CBLABOPKBKD_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  long lVar3;
  
  if ((DAT_04567c36 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567c36 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar2 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
  if ((__this->fields).HIGJNLHJGON < iVar2) {
    lVar3 = (__this->fields).ACBJIJCAOOD;
    bVar1 = iVar2 < lVar3 || lVar3 < 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

