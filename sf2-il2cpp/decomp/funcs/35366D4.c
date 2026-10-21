// EPFMFHDGMCE.JGKNDMCIPBN$$.ctor @ RVA 0x35366D4

void EPFMFHDGMCE_JGKNDMCIPBN___ctor
               (EPFMFHDGMCE_JGKNDMCIPBN_o *__this,int32_t GHPHFGBIPCI,MethodInfo *method)

{
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_00;
  
  if ((DAT_04568aa9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_TypeInfo);
    DAT_04568aa9 = 1;
  }
  __this_00 = (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>__ctor__);
  (__this->fields).GFBNJPMOEKD = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).NOPGBJNLFHM = GHPHFGBIPCI;
  return;
}

