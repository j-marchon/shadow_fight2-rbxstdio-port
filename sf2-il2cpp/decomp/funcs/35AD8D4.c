// AJNNHGGLGIF$$.ctor @ RVA 0x35AD8D4

void AJNNHGGLGIF___ctor(AJNNHGGLGIF_o *__this,AJNNHGGLGIF_o *GOAHBPBJCKC,MethodInfo *method)

{
  int32_t iVar1;
  DPDDOKKMMOM_o *__this_00;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_List_int__o **ppSVar3;
  AJNNHGGLGIF_o **ppAVar4;
  DPDDOKKMMOM_o **ppDVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  
  if ((DAT_04568e65 & 1) == 0) {
    FUN_01bab630(&DPDDOKKMMOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_04568e65 = 1;
  }
  __this_00 = (DPDDOKKMMOM_o *)thunk_FUN_01bda818(DPDDOKKMMOM_TypeInfo);
  DPDDOKKMMOM___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar5 = &(__this->fields).HIJMBHIMFBB;
  *ppDVar5 = __this_00;
  thunk_FUN_01c20e04(ppDVar5,__this_00);
  pSVar2 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar2,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar3 = &(__this->fields).GMPFJFBFHCH;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar2,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar3 = &(__this->fields).BPPCPHCDICD;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  if (GOAHBPBJCKC != (AJNNHGGLGIF_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (GOAHBPBJCKC->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar6;
    (__this->fields)._BDDBFNHFMBC_k__BackingField =
         (GOAHBPBJCKC->fields)._BDDBFNHFMBC_k__BackingField;
    (__this->fields).AIPKOAMHBBP = (GOAHBPBJCKC->fields).AIPKOAMHBBP;
    ppAVar4 = &(__this->fields).LKKBHIEHNAM;
    *ppAVar4 = (GOAHBPBJCKC->fields).LKKBHIEHNAM;
    thunk_FUN_01c20e04(ppAVar4);
    (__this->fields).KHKEGAKGNCN = (GOAHBPBJCKC->fields).KHKEGAKGNCN;
    (__this->fields).PJEIFMBEAKH = (GOAHBPBJCKC->fields).PJEIFMBEAKH;
    iVar1 = (GOAHBPBJCKC->fields).AGBDJNHBLNM;
    (__this->fields).ONDDFBGIOPJ = (GOAHBPBJCKC->fields).ONDDFBGIOPJ;
    (__this->fields).AGBDJNHBLNM = iVar1;
    (__this->fields).BPPCPHCDICD = (GOAHBPBJCKC->fields).BPPCPHCDICD;
    thunk_FUN_01c20e04(ppSVar3);
    (__this->fields).HIJMBHIMFBB = (GOAHBPBJCKC->fields).HIJMBHIMFBB;
    thunk_FUN_01c20e04(ppDVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

