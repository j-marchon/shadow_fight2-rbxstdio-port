// PJNPKJMMNDI$$OCGJPBAKEFP @ RVA 0x321A894

void PJNPKJMMNDI__OCGJPBAKEFP
               (PJNPKJMMNDI_o *__this,System_Collections_Generic_List_JKHPOKJIMHC__o *AHEFOIOKDOK,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04566efb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JKHPOKJIMHC>_AddRange__);
    DAT_04566efb = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<JKHPOKJIMHC>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

