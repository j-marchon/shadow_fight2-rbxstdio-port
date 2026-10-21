// OGNCMFBMBMB.AFGELJDFHIF$$.ctor @ RVA 0x33C4824

void OGNCMFBMBMB_AFGELJDFHIF___ctor(OGNCMFBMBMB_AFGELJDFHIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *__this_01;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<GameObject>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_TypeInfo);
    DAT_04567dee = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<GameObject>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<GameObject>__ctor__);
  (__this->fields).GNEMEBABBFF = (System_Collections_Generic_HashSet_GameObject__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_TypeInfo
                                );
  System_Collections_Generic_Stack<object>___ctor
            ((System_Collections_Generic_Stack_T__o *)__this_01,8,
             Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>__ctor__);
  ppSVar1 = &(__this->fields).LNAPCDLIOOE;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

