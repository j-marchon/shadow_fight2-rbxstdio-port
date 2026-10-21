// MGNPHCAAEIO$$HCDHCLBPBHN @ RVA 0x340C440

int64_t MGNPHCAAEIO__HCDHCLBPBHN(int64_t LFJGFLNMBMC,MethodInfo *method)

{
  long lVar1;
  MGNPHCAAEIO_c *method_00;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456803c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456803c = 1;
    method = extraout_x1;
  }
  method_00 = MGNPHCAAEIO_TypeInfo;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar2 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)method_00);
  lVar1 = LFJGFLNMBMC - iVar2;
  if (lVar1 == 0 || LFJGFLNMBMC < iVar2) {
    lVar1 = 0;
  }
  return lVar1;
}

