// COFFJADEMJF$$.ctor @ RVA 0x30AE540

void COFFJADEMJF___ctor(COFFJADEMJF_o *__this,int32_t ACCIHBHMFPN,int32_t HEHMPFLAEGE,
                       System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)HEHMPFLAEGE;
  if ((DAT_045661c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_045661c3 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar1 = &(__this->fields).KOFLFFPDOMO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,
                     (CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0);
  COFFJADEMJF__AOFNJMCLMOH(__this,AHDGNOJPPIB,method_00);
  return;
}

