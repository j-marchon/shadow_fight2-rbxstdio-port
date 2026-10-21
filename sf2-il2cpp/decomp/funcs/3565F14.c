// PNCLBBMPHKB$$BMFDCIPBPAN @ RVA 0x3565F14

void PNCLBBMPHKB__BMFDCIPBPAN(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if ((DAT_04568bf6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04568bf6 = 1;
  }
  if ((PNCLBBMPHKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           PNCLBBMPHKB_TypeInfo->static_fields->JNHCNDDALMK;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear
              (__this,Method_System_Collections_Generic_HashSet<string>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

