// LDHBHPILNMA$$GFHGGEHHOGC @ RVA 0x31A1C58

int32_t LDHBHPILNMA__GFHGGEHHOGC(MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar1;
  
                    /* try { // try from 032a1c60 to 033a1c67 has its CatchHandler @ 032a1c68 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a1bec with catch @ 032a1c68
                       catch(type#2 @ 00000000) { ... } // from try @ 032a1c60 with catch @ 032a1c68
                        */
  if ((DAT_04566ae3 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    DAT_04566ae3 = 1;
  }
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
  if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

