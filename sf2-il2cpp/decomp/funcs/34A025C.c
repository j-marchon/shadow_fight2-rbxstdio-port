// MADFGOOGMDP$$.ctor @ RVA 0x34A025C

void MADFGOOGMDP___ctor(MADFGOOGMDP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  LCKCDEKNLOA_o *pLVar2;
  LCKCDEKNLOA_o **ppLVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568491 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    DAT_04568491 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pLVar2 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).EBLHLBLOFLM;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  pLVar2 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).HLDPKMBOAPA;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

