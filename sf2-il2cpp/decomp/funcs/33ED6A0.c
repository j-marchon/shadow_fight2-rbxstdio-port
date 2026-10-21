// FCJBEKHDLAF$$OGCMJELFHAN @ RVA 0x33ED6A0

void FCJBEKHDLAF__OGCMJELFHAN
               (FCJBEKHDLAF_o *__this,System_Collections_Generic_List_string__o *HAHKBGCBHCL,
               System_Collections_Generic_List_string__o *NPJBOAPCHCH,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  FCJBEKHDLAF_o *pFVar3;
  OLKKAIFGGAK_o *pOVar4;
  PJKHAJKEHEL_o *pPVar5;
  System_String_o *pSVar6;
  HOOAAGABMBL_o *pHVar7;
  
  pFVar3 = __this;
  if ((DAT_04567f02 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    pFVar3 = (FCJBEKHDLAF_o *)FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__)
    ;
    DAT_04567f02 = 1;
  }
  pOVar4 = (__this->fields).LAMENNMGPBN;
  if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
     (pPVar5 = (pOVar4->fields).FAPMJJBOFEF, pPVar5 != (PJKHAJKEHEL_o *)0x0)) {
    pHVar7 = (pPVar5->fields).PNAAPNFPCPI;
    if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
      pSVar6 = (pHVar7->fields)._DKODBGOHKGH_k__BackingField;
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((pHVar7->fields)._IJGEAGDGNBK_k__BackingField,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar6 = (pHVar7->fields)._IJGEAGDGNBK_k__BackingField;
      }
      DJNBJHPDKDP__OFNFOGHFDML<object>
                ((System_Collections_Generic_List_T__o *)HAHKBGCBHCL,(Il2CppObject *)pSVar6,
                 Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      uVar2 = DJNBJHPDKDP__OFNFOGHFDML<object>
                        ((System_Collections_Generic_List_T__o *)NPJBOAPCHCH,(Il2CppObject *)pSVar6,
                         Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      pFVar3 = (FCJBEKHDLAF_o *)(ulong)uVar2;
    }
    pOVar4 = (__this->fields).CLEKIBBCAOJ;
    if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
       (pPVar5 = (pOVar4->fields).FAPMJJBOFEF, pPVar5 != (PJKHAJKEHEL_o *)0x0)) {
      pHVar7 = (pPVar5->fields).PNAAPNFPCPI;
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
        return;
      }
      pSVar6 = (pHVar7->fields)._DKODBGOHKGH_k__BackingField;
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((pHVar7->fields)._IJGEAGDGNBK_k__BackingField,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar6 = (pHVar7->fields)._IJGEAGDGNBK_k__BackingField;
      }
      uVar2 = DJNBJHPDKDP__OFNFOGHFDML<object>
                        ((System_Collections_Generic_List_T__o *)HAHKBGCBHCL,(Il2CppObject *)pSVar6,
                         Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      pFVar3 = (FCJBEKHDLAF_o *)(ulong)uVar2;
      if (NPJBOAPCHCH != (System_Collections_Generic_List_string__o *)0x0) {
        bVar1 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)NPJBOAPCHCH,
                           (Il2CppObject *)pSVar6,
                           Method_System_Collections_Generic_List<string>_Contains__);
        if (bVar1) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)NPJBOAPCHCH,(Il2CppObject *)pSVar6
                     ,Method_System_Collections_Generic_List<string>_Remove__);
          return;
        }
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)NPJBOAPCHCH,(Il2CppObject *)pSVar6,
                   Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pFVar3);
}

