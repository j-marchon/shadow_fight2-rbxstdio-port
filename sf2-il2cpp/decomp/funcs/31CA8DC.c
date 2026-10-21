// BHEDGAKGKPO$$BPHEBPIMCIL @ RVA 0x31CA8DC

System_String_o * BHEDGAKGKPO__BPHEBPIMCIL(MethodInfo *method)

{
  BHEDGAKGKPO_c *method_00;
  System_String_o *pSVar1;
  
                    /* try { // try from 032ca8dc to 033ca903 has its CatchHandler @ 032cabf0 */
  if ((DAT_04566c64 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04566c64 = 1;
  }
  method_00 = BHEDGAKGKPO_TypeInfo;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BHEDGAKGKPO_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = BHEDGAKGKPO__CGFLLLNEFOE((MethodInfo *)method_00);
  return pSVar1;
}

