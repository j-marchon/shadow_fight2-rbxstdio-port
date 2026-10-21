// FOKJBDHLIMG$$KFHGLJOAALL @ RVA 0x309E5A4

System_Collections_Generic_List_HEFOANCOHDC__o *
FOKJBDHLIMG__KFHGLJOAALL(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  
  if ((DAT_0456612e & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_APDLBPDLCBK_IBIHEEDHDKM__);
                    /* try { // try from 0319e5dc to 0329e5e3 has its CatchHandler @ 0319e834 */
    FUN_01bab630(&FOKJBDHLIMG_APDLBPDLCBK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_FindAll__);
                    /* try { // try from 0319e5f8 to 0329e603 has its CatchHandler @ 0319e830 */
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_0456612e = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_APDLBPDLCBK_TypeInfo);
                    /* try { // try from 0319e610 to 0329e61f has its CatchHandler @ 0319e694 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 0319e628 to 0329e643 has its CatchHandler @ 0319e698 */
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    pSVar1 = (__this->fields).CNLHOAHDHCF;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
                    /* try { // try from 0319e654 to 0329e65f has its CatchHandler @ 0319e820 */
    System_Predicate<object>___ctor();
    if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* try { // try from 0319e674 to 0329e683 has its CatchHandler @ 0319e828 */
      pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
               System_Collections_Generic_List<object>__FindAll
                         ((System_Collections_Generic_List_object__o *)pSVar1,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_FindAll__);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

