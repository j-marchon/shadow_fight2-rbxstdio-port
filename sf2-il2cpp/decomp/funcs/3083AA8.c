// KFCFGKEHPNK$$GHLDEKNCIEG @ RVA 0x3083AA8

System_String_o * KFCFGKEHPNK__GHLDEKNCIEG(AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_0456600d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456600d = 1;
    method = extraout_x1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    OKBIKHHKOEN = (FBFPLEFCDOK->fields).MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    pPVar1 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
      pSVar2 = OFFIONDOEPM__GKOLODJCIOK((pPVar1->fields).NILOEHGNJNL,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)0x0;
}

