// FOKJBDHLIMG$$.ctor @ RVA 0x309E690

void FOKJBDHLIMG___ctor(FOKJBDHLIMG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0319e688 with catch @ 0319e690 */
                    /* catch() { ... } // from try @ 0319e610 with catch @ 0319e694 */
                    /* catch() { ... } // from try @ 0319e628 with catch @ 0319e698 */
                    /* try { // try from 0319e6b8 to 0329e6bb has its CatchHandler @ 0319e814 */
  if ((DAT_0456612f & 1) == 0) {
                    /* try { // try from 0319e6bc to 0329e797 has its CatchHandler @ 0319e478 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    DAT_0456612f = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  (__this->fields).FLADBMFBNIH = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  ppSVar2 = &(__this->fields).CNLHOAHDHCF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  ppSVar2 = &(__this->fields).ODLBEHFGJJE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

