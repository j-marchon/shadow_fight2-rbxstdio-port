// GBJGJEGPHKD$$CHPJALNJEKB @ RVA 0x342EAE4

void GBJGJEGPHKD__CHPJALNJEKB
               (GBJGJEGPHKD_o *__this,System_Collections_Generic_List_string__o *MEOBNMMHFGG,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  GBJGJEGPHKD_FHHNJPLBKEP_o *pGVar1;
  
  if ((DAT_04568159 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    DAT_04568159 = 1;
  }
  pGVar1 = (__this->fields).DGPKPHAHOJP;
  if ((pGVar1 != (GBJGJEGPHKD_FHHNJPLBKEP_o *)0x0) &&
     (__this_00 = (pGVar1->fields).BPKAMANIECL,
     __this_00 != (System_Collections_Generic_List_string__o *)0x0)) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)MEOBNMMHFGG,
               Method_System_Collections_Generic_List<string>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

