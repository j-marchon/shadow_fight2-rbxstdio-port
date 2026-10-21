// FCJBEKHDLAF$$.cctor @ RVA 0x33EF514

void FCJBEKHDLAF___cctor(MethodInfo *method)

{
  FCJBEKHDLAF_o **ppFVar1;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o **ppSVar2;
  FCJBEKHDLAF_StaticFields *pFVar3;
  
  if ((DAT_04567ef3 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567ef3 = 1;
  }
  ppFVar1 = &FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  *ppFVar1 = (FCJBEKHDLAF_o *)0x0;
  thunk_FUN_01c20e04(ppFVar1,0);
  pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields;
  pFVar3->PBLEMPJBPMH = false;
  pFVar3->JBAMKLABGIH = false;
  pFVar3->MILODBPDDCE = false;
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &FCJBEKHDLAF_TypeInfo->static_fields->ACDNJGLOIMC;
  *ppSVar2 = __this;
  thunk_FUN_01c20e04(ppSVar2,__this);
  return;
}

