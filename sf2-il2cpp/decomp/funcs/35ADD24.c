// AJNNHGGLGIF$$.ctor @ RVA 0x35ADD24

void AJNNHGGLGIF___ctor(AJNNHGGLGIF_o *__this,int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       MethodInfo *method)

{
  DPDDOKKMMOM_o *__this_00;
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  DPDDOKKMMOM_Fields *pDVar3;
  MethodInfo *method_00;
  AJNNHGGLGIF_o **ppAVar4;
  DPDDOKKMMOM_o **ppDVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04568e69 & 1) == 0) {
    FUN_01bab630(&DPDDOKKMMOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_04568e69 = 1;
  }
  __this_00 = (DPDDOKKMMOM_o *)thunk_FUN_01bda818(DPDDOKKMMOM_TypeInfo);
  DPDDOKKMMOM___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar5 = &(__this->fields).HIJMBHIMFBB;
  *ppDVar5 = __this_00;
  thunk_FUN_01c20e04(ppDVar5,__this_00);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).GMPFJFBFHCH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).BPPCPHCDICD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(ACCIHBHMFPN,(MethodInfo *)0x0);
  ppAVar4 = &(__this->fields).LKKBHIEHNAM;
  *ppAVar4 = (AJNNHGGLGIF_o *)0x0;
  (__this->fields).JDNKKGPNHPB.fields = CVar6;
  (__this->fields)._BDDBFNHFMBC_k__BackingField = true;
  (__this->fields).AIPKOAMHBBP = true;
  thunk_FUN_01c20e04(ppAVar4,0);
  (__this->fields).KHKEGAKGNCN = false;
  (__this->fields).PJEIFMBEAKH = 2;
  (__this->fields).ONDDFBGIOPJ = 0;
  (__this->fields).AGBDJNHBLNM = 0x7fffffff;
  if (*ppDVar5 != (DPDDOKKMMOM_o *)0x0) {
    pDVar3 = &(*ppDVar5)->fields;
    pDVar3->DMLGJFCNNJF = AHDGNOJPPIB;
    thunk_FUN_01c20e04(pDVar3,AHDGNOJPPIB);
    AJNNHGGLGIF__GAJGEHFDCJE(__this,AHDGNOJPPIB,method_00);
    AJNNHGGLGIF__FEEFOMDIENJ(__this,AHDGNOJPPIB,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

