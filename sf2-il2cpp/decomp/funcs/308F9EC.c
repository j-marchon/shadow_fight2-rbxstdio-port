// IPEAKKBOJCA$$.ctor @ RVA 0x308F9EC

void IPEAKKBOJCA___ctor(IPEAKKBOJCA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_EAAHMDAMHNI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566091 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo);
    DAT_04566091 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_EAAHMDAMHNI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  EAAHMDAMHNI___ctor((EAAHMDAMHNI_o *)__this,(MethodInfo *)0x0);
  return;
}

