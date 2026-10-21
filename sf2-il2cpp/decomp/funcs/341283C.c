// MGNPHCAAEIO.ABAALAENAKC$$.ctor @ RVA 0x341283C

void MGNPHCAAEIO_ABAALAENAKC___ctor(MGNPHCAAEIO_ABAALAENAKC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IHMIMECHIAN__o *__this_00;
  System_Collections_Generic_List_IHMIMECHIAN__o **ppSVar1;
  System_Collections_Generic_List_BJEFHIBMHEJ__o *__this_01;
  System_Collections_Generic_List_BJEFHIBMHEJ__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04568091 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
    DAT_04568091 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IHMIMECHIAN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHMIMECHIAN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IHMIMECHIAN>__ctor__);
  ppSVar1 = &(__this->fields).OBLIJEFDJGN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_BJEFHIBMHEJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BJEFHIBMHEJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<BJEFHIBMHEJ>__ctor__);
  ppSVar2 = &(__this->fields).GJBLBEALOBO;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  MGNPHCAAEIO_ABAALAENAKC__DGLJCGNHLIG(__this,method_00);
  return;
}

