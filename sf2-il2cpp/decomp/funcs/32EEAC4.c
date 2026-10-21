// OANGEOLKMJG$$.ctor @ RVA 0x32EEAC4

void OANGEOLKMJG___ctor(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_ObscuredString__o *__this_01;
  System_Collections_Generic_List_ObscuredString__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456765d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ObscuredString>_TypeInfo);
                    /* try { // try from 033eeb34 to 034eeb5b has its CatchHandler @ 033eed64 */
    DAT_0456765d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_EAAHMDAMHNI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
  (__this->fields).KDIMDBHMBEM = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_ObscuredString__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ObscuredString>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ObscuredString>__ctor__);
  ppSVar1 = &(__this->fields).FMFKGEJLDGO;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
                    /* try { // try from 033eeb90 to 034eebbb has its CatchHandler @ 033eed60 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

