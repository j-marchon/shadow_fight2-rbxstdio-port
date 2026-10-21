// OGNCMFBMBMB.AFGELJDFHIF$$LFENGGKOJDO @ RVA 0x33C4D04

void OGNCMFBMBMB_AFGELJDFHIF__LFENGGKOJDO
               (OGNCMFBMBMB_AFGELJDFHIF_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
               IKIHIGCOLOF_o *ALMGONACBKC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *__this_02;
  
  if ((DAT_04567deb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<GameObject>_Add__);
    FUN_01bab630(&OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Push__
                );
    DAT_04567deb = 1;
  }
  __this_02 = (__this->fields).LNAPCDLIOOE;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)CMMIJCJOBBF;
    thunk_FUN_01c20e04(__this_00 + 1,CMMIJCJOBBF);
    __this_00[1].monitor = ALMGONACBKC;
    thunk_FUN_01c20e04(&__this_00[1].monitor,ALMGONACBKC);
    if (__this_02 != (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)0x0)
    {
      System_Collections_Generic_Stack<object>__Push
                ((System_Collections_Generic_Stack_T__o *)__this_02,__this_00,
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Push__
                );
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add
                  (__this_01,(Il2CppObject *)CMMIJCJOBBF,
                   Method_System_Collections_Generic_HashSet<GameObject>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

