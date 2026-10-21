// LFOMNKEACBL$$.ctor @ RVA 0x30FBEE8

void LFOMNKEACBL___ctor(LFOMNKEACBL_o *__this,LFOMNKEACBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_01;
  System_Collections_Generic_List_ABNLGBHKOCE__o **ppSVar2;
  
  if ((DAT_0456649d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_0456649d = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar1 = &(__this->fields).ONJPCPJPEIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ABNLGBHKOCE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
  ppSVar2 = &(__this->fields).KOJGEABELHH;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).AENEIOGOIJP = -1;
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  return;
}

