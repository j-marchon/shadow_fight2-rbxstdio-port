// IIADFMDIDDL$$GACDIGONPCC @ RVA 0x3112078

System_String_o * IIADFMDIDDL__GACDIGONPCC(System_String_o *OCMMDIHLKMH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456658b & 1) == 0) {
    FUN_01bab630(&IIADFMDIDDL_TypeInfo);
    DAT_0456658b = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(OCMMDIHLKMH,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if ((IIADFMDIDDL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = IBMPAMLCCHF__JILEJCOCHIB
                     (OCMMDIHLKMH,IIADFMDIDDL_TypeInfo->static_fields->EDCHCICLDBD,
                      IIADFMDIDDL_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  return pSVar2;
}

