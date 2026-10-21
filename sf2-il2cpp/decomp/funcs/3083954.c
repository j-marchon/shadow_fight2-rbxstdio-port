// KFCFGKEHPNK$$FHEIBJBHOKF @ RVA 0x3083954

CNLGMNIEGFG_o * KFCFGKEHPNK__FHEIBJBHOKF(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  CNLGMNIEGFG_o *pCVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566013 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566013 = 1;
    method = extraout_x1;
  }
  if (NLOFDAJCIML != (NLFLMJPNOLF_o *)0x0) {
    OILECKFDMDB = (NLOFDAJCIML->fields).IILCHFKCEEH;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    pCVar1 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    return pCVar1;
  }
  return (CNLGMNIEGFG_o *)0x0;
}

