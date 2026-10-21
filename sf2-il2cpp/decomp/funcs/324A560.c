// JJBMNHGADNC$$.ctor @ RVA 0x324A560

void JJBMNHGADNC___ctor(JJBMNHGADNC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GEIHBHEDJJM__o *__this_00;
  System_Collections_Generic_List_GEIHBHEDJJM__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670ea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GEIHBHEDJJM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GEIHBHEDJJM>_TypeInfo);
    DAT_045670ea = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GEIHBHEDJJM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GEIHBHEDJJM>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GEIHBHEDJJM>__ctor__);
  ppSVar1 = &(__this->fields).KDAEMPOJNJJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

