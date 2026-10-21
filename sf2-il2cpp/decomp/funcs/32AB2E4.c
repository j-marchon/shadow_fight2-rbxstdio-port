// BGFNOPDHEOM$$KGGGJNCEPLF @ RVA 0x32AB2E4

bool BGFNOPDHEOM__KGGGJNCEPLF(MethodInfo *method)

{
  System_Collections_Generic_List_NLIDHEAMLMC__o *pSVar1;
  
  if ((DAT_04567435 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_get_Count__);
    DAT_04567435 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033ab32c to 034ab333 has its CatchHandler @ 033ab38c */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033ab334 to 034ab37f has its CatchHandler @ 033ab278 */
  pSVar1 = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
  if (pSVar1 != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

