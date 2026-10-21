// IGFGDDANEPE$$MNKGCEAHBBI @ RVA 0x30A3774

HEFOANCOHDC_o * IGFGDDANEPE__MNKGCEAHBBI(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  MethodInfo *extraout_x1;
  HEFOANCOHDC_o *pHVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456615b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_0456615b = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PAPANCDPPIF;
                    /* try { // try from 031a37d4 to 032a37db has its CatchHandler @ 031a3834 */
  if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 031a37f4 to 032a3803 has its CatchHandler @ 031a3830 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  do {
                    /* try { // try from 031a3804 to 032a3827 has its CatchHandler @ 031a3738 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    if (!bVar1) {
      pHVar2 = (HEFOANCOHDC_o *)0x0;
      break;
    }
    if ((HEFOANCOHDC_o *)local_38.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = (HEFOANCOHDC_o *)local_38.fields._current;
  } while (((HEFOANCOHDC_Fields *)((long)local_38.fields._current + 0x10))->OCABLLPNEGL != 0);
                    /* try { // try from 031a3828 to 032a382b has its CatchHandler @ 031a382c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3828 with catch @ 031a382c
                       try { // try from 031a382c to 032a384b has its CatchHandler @ 031a3738 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a37f4 with catch @ 031a3830
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a37d4 with catch @ 031a3834
                        */
  return pHVar2;
}

