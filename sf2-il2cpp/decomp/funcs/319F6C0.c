// AHHELIMMIED$$ACILMIEHKMN @ RVA 0x319F6C0

bool AHHELIMMIED__ACILMIEHKMN(MethodInfo *method)

{
  bool bVar1;
  AHHELIMMIED_c *method_00;
  System_String_o *pSVar2;
  System_String_o *value;
  
  if ((DAT_04566ad2 & 1) == 0) {
    FUN_01bab630(&AHHELIMMIED_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04566ad2 = 1;
  }
  method_00 = AHHELIMMIED_TypeInfo;
  if ((AHHELIMMIED_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AHHELIMMIED_c *)thunk_FUN_01ba7564();
  }
  pSVar2 = AHHELIMMIED__GGPKBBJBFJN((MethodInfo *)method_00);
  pSVar2 = IBMPAMLCCHF__EOJPLECOGAD
                     (pSVar2,AHHELIMMIED_TypeInfo->static_fields->EDCHCICLDBD,
                      AHHELIMMIED_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
                    /* try { // try from 0329f72c to 0339f733 has its CatchHandler @ 0329fa38 */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = EOAOCPLIKOI__MENDGLAMPNJ((MethodInfo *)0x0);
                    /* try { // try from 0329f748 to 0339f74f has its CatchHandler @ 0329fa30 */
  if (pSVar2 != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(pSVar2,value,(MethodInfo *)0x0);
                    /* try { // try from 0329f768 to 0339f76f has its CatchHandler @ 0329fa24 */
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

