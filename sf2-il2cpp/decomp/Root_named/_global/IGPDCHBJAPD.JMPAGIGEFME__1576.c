// TypeDefIndex 1576
// Namespace: 
// public class IGPDCHBJAPD.JMPAGIGEFME
// Fields:
//   public long DCDLMCEEOCC; // 0x10
//   public long DJHKCMKJEFP; // 0x18
//   public uint COAIOPFEFHM; // 0x20
//   public List<IGPDCHBJAPD.LDCCMPFIKHF> GHAAKPDHIJJ; // 0x28
//   public List<IGPDCHBJAPD.AKGCHFPLJEC> GMCEHJAIFBJ; // 0x30
//   public List<IGPDCHBJAPD.DHAPBDACLMI> OJFMFMHCPOA; // 0x38
//   public MFFKCPDBFPG GPDMCLBBPAD; // 0x40

// ===== public void PFECNBCIBAA(OCOEAJMJEOP AKOOAFJLOFD)  [RVA 0x31B08A4]
// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B08A4

/* WARNING: Type propagation algorithm not settling */

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,OCOEAJMJEOP_o *AKOOAFJLOFD,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  int iVar5;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar6;
  Item_o *__this_01;
  HOOAAGABMBL_o *__this_02;
  HOOAAGABMBL_o *pHVar7;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_03;
  PONNKDFAMFM_o *JGANIDFNOAF;
  HOOAAGABMBL_o *__this_04;
  IGPDCHBJAPD_LDCCMPFIKHF_o *__this_05;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *__this_06;
  Roster_o *pAVar8;
  IGPDCHBJAPD_LDCCMPFIKHF_array *pIVar9;
  OCOEAJMJEOP_o **ppOVar10;
  
  if ((DAT_04566b75 & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_LDCCMPFIKHF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_12492/*"Structs::AddReward assign upgrade to item according to issue-23723"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b75 = 1;
  }
  if (AKOOAFJLOFD == (OCOEAJMJEOP_o *)0x0) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar8 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar8->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    pIVar6 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(AKOOAFJLOFD->fields).JIJLBFGKNJK,(MethodInfo *)0x0)
    ;
    if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_01 != (Item_o *)0x0) {
      __this_02 = Item__CKKIPBAIEMN
                            (__this_01,(AKOOAFJLOFD->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      if (__this_02 == (HOOAAGABMBL_o *)0x0) {
        return;
      }
      iVar4 = OCOEAJMJEOP__EGKAPNMCLDI(AKOOAFJLOFD,(MethodInfo *)0x0);
      if (iVar4 < 1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar8 == (Roster_o *)0x0) goto LAB_032b0c18;
        iVar5 = Roster__EOEAKGGDBFH(pAVar8,(MethodInfo *)0x0);
      }
      else {
        iVar5 = OCOEAJMJEOP__EGKAPNMCLDI(AKOOAFJLOFD,(MethodInfo *)0x0);
      }
      __this_04 = __this_02;
      if (((__this_02->fields)._JDEHPJEIOCI_k__BackingField != iVar5) &&
         (pHVar7 = HOOAAGABMBL__CIBHICEHBJE(__this_02,iVar5,false,(MethodInfo *)0x0),
         pHVar7 != (HOOAAGABMBL_o *)0x0)) {
        __this_04 = pHVar7;
      }
      if ((AKOOAFJLOFD->fields).GBDPLCLDMIG != 0) {
        __this_03 = HOOAAGABMBL__DBONHFEAOEG
                              (__this_04,true,(__this_04->fields)._JDEHPJEIOCI_k__BackingField,
                               (MethodInfo *)0x0);
        if (__this_03 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) goto LAB_032b0c18;
        iVar5 = (__this_03->fields)._size;
        if (iVar5 != 0) {
          uVar1 = (AKOOAFJLOFD->fields).GBDPLCLDMIG;
          uVar2 = iVar5 - 1;
          if (uVar1 <= uVar2) {
            uVar2 = uVar1;
          }
          JGANIDFNOAF = (PONNKDFAMFM_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03,uVar2,
                                   Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__);
          __this_04 = HOOAAGABMBL__KGJLMGPGJEI(__this_02,JGANIDFNOAF,(MethodInfo *)0x0);
        }
        if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_12492/*"Structs::AddReward assign upgrade to item according to issue-23723"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      }
      __this_05 = (IGPDCHBJAPD_LDCCMPFIKHF_o *)thunk_FUN_01bda818(IGPDCHBJAPD_LDCCMPFIKHF_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
      if (__this_05 != (IGPDCHBJAPD_LDCCMPFIKHF_o *)0x0) {
        (__this_05->fields).CJLNOJMBNPN = __this_04;
        thunk_FUN_01c20e04(&__this_05->fields,__this_04);
        ppOVar10 = &(__this_05->fields).OPGOPLBKMBM;
        *ppOVar10 = AKOOAFJLOFD;
        thunk_FUN_01c20e04(ppOVar10,AKOOAFJLOFD);
        (__this_05->fields).EDCFFINCGFA = (AKOOAFJLOFD->fields).super.EDCFFINCGFA;
        lVar3 = Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_Add__;
        __this_06 = (__this->fields).GHAAKPDHIJJ;
        if (__this_06 != (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)0x0) {
          pIVar9 = (__this_06->fields)._items;
          (__this_06->fields)._version = (__this_06->fields)._version + 1;
          if (pIVar9 != (IGPDCHBJAPD_LDCCMPFIKHF_array *)0x0) {
            uVar2 = (__this_06->fields)._size;
            if (uVar2 < (uint)pIVar9->max_length) {
              (__this_06->fields)._size = uVar2 + 1;
              pIVar9->m_Items[(int)uVar2] = __this_05;
              thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar2,__this_05);
              return;
            }
                    /* try { // try from 032b0c04 to 033b0d0b has its CatchHandler @ 032b0c04
                       catch() { ... } // from try @ 032b0c04 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0e54 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0f00 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0f08 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0f18 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0fe4 with catch @ 032b0c04 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_06,
                       (Il2CppObject *)__this_05,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_032b0c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PFECNBCIBAA(DOCABGGCCIL COPNBALDNLF)  [RVA 0x31B0C1C]
// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B0C1C

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,DOCABGGCCIL_o *COPNBALDNLF,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566b76 & 1) == 0) {
    FUN_01bab630(&DOCABGGCCIL_CMPODLBABAB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EFOFNLEFLNH_TypeInfo);
    FUN_01bab630(&HFCOLPLEANG_TypeInfo);
    FUN_01bab630(&RewardCurrency_TypeInfo);
    FUN_01bab630(&MFFKCPDBFPG_TypeInfo);
    FUN_01bab630(&OCOEAJMJEOP_TypeInfo);
    FUN_01bab630(&StringLiteral_14564/*"Unsupported reward type: "*/);
    DAT_04566b76 = 1;
  }
  if (COPNBALDNLF != (DOCABGGCCIL_o *)0x0) {
    local_28 = (COPNBALDNLF->fields).NOBEFHEECKJ;
    switch(local_28) {
    case 1:
      bVar1 = (OCOEAJMJEOP_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)OCOEAJMJEOP_TypeInfo)) {
                    /* try { // try from 032b0d0c to 033b0d33 has its CatchHandler @ 032b0f48 */
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(OCOEAJMJEOP_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 2:
      bVar1 = (HFCOLPLEANG_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)HFCOLPLEANG_TypeInfo)) {
                    /* try { // try from 032b0dd0 to 033b0dd7 has its CatchHandler @ 032b0f34 */
                    /* try { // try from 032b0de0 to 033b0de7 has its CatchHandler @ 032b0f38 */
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(HFCOLPLEANG_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 3:
                    /* try { // try from 032b0dec to 033b0df3 has its CatchHandler @ 032b0f3c */
      bVar1 = (RewardCurrency_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032b0dfc to 033b0e03 has its CatchHandler @ 032b0f40 */
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)RewardCurrency_TypeInfo)) {
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(RewardCurrency_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 4:
                    /* try { // try from 032b0e30 to 033b0e37 has its CatchHandler @ 032b0f18 */
      bVar1 = (EFOFNLEFLNH_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032b0e4c to 033b0e53 has its CatchHandler @ 032b0f20 */
                    /* try { // try from 032b0e54 to 033b0eeb has its CatchHandler @ 032b0c04 */
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)EFOFNLEFLNH_TypeInfo)) {
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(EFOFNLEFLNH_o *)COPNBALDNLF,method);
        return;
      }
      break;
    case 5:
      bVar1 = (MFFKCPDBFPG_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (COPNBALDNLF->klass->_2).naturalAligment) &&
         ((COPNBALDNLF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)MFFKCPDBFPG_TypeInfo)) {
        IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA(__this,(MFFKCPDBFPG_o *)COPNBALDNLF,method);
        return;
      }
      break;
    default:
      local_38.klass = (System_Enum_c *)DOCABGGCCIL_CMPODLBABAB_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_14564/*"Unsupported reward type: "*/,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 032b0d68 to 033b0d93 has its CatchHandler @ 032b0f44 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(COPNBALDNLF);
  }
  return;
}


// ===== public List<BNKBGIIJNLF> LLIHIDKHAPN(bool JDICPLBDFGM = False)  [RVA 0x31B1154]
// IGPDCHBJAPD.JMPAGIGEFME$$LLIHIDKHAPN @ RVA 0x31B1154

System_Collections_Generic_List_BNKBGIIJNLF__o *
IGPDCHBJAPD_JMPAGIGEFME__LLIHIDKHAPN
          (IGPDCHBJAPD_JMPAGIGEFME_o *__this,bool JDICPLBDFGM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *__this_01;
  Il2CppClass *item;
  BNKBGIIJNLF_array *pBVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b77 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
    DAT_04566b77 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_BNKBGIIJNLF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BNKBGIIJNLF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BNKBGIIJNLF>__ctor__);
  __this_01 = (__this->fields).GMCEHJAIFBJ;
  if (__this_01 == (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032b122c to 033b13cb has its CatchHandler @ 032b122c
                       catch() { ... } // from try @ 032b122c with catch @ 032b122c
                       catch() { ... } // from try @ 032b1504 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1744 with catch @ 032b122c
                       catch() { ... } // from try @ 032b19e0 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1a9c with catch @ 032b122c
                       catch() { ... } // from try @ 032b1ab4 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1b88 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1c38 with catch @ 032b122c
                       catch() { ... } // from try @ 032b1cd0 with catch @ 032b122c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_032b1244:
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                    );
  lVar2 = Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__;
  if (!bVar3) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__)
    ;
    return __this_00;
  }
  if (JDICPLBDFGM) goto code_r0x032b125c;
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_032b1270;
code_r0x032b125c:
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(char *)&local_50.fields._current[1].monitor != '\0') {
LAB_032b1270:
    if (__this_00 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pBVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pBVar4 == (BNKBGIIJNLF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pBVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pBVar4->m_Items[(int)uVar1] = (BNKBGIIJNLF_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_032b1244;
}


// ===== public void PFECNBCIBAA(HFCOLPLEANG FJFMDBEDKCJ)  [RVA 0x31B01B0]
// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B01B0

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,HFCOLPLEANG_o *FJFMDBEDKCJ,MethodInfo *method)

{
  int64_t iVar1;
  long lVar2;
  
  if (FJFMDBEDKCJ != (HFCOLPLEANG_o *)0x0) {
    lVar2 = (__this->fields).DCDLMCEEOCC;
    iVar1 = HFCOLPLEANG__AADFFFOLPFN(FJFMDBEDKCJ,(MethodInfo *)0x0);
    (__this->fields).DCDLMCEEOCC = iVar1 + lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x31AF7EC]
// IGPDCHBJAPD.JMPAGIGEFME$$NDNPGAKJLHM @ RVA 0x31AF7EC

void IGPDCHBJAPD_JMPAGIGEFME__NDNPGAKJLHM(IGPDCHBJAPD_JMPAGIGEFME_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *pSVar2;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *pSVar3;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *pSVar4;
  MFFKCPDBFPG_o **ppMVar5;
  
  if ((DAT_04566b78 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_Clear__);
    DAT_04566b78 = 1;
  }
  pSVar2 = (__this->fields).GHAAKPDHIJJ;
  (__this->fields).DCDLMCEEOCC = 0;
  (__this->fields).DJHKCMKJEFP = 0;
  (__this->fields).COAIOPFEFHM = 0;
  if (pSVar2 != (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).GMCEHJAIFBJ;
    if (pSVar3 != (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).OJFMFMHCPOA;
      if (pSVar4 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
        iVar1 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        ppMVar5 = &(__this->fields).GPDMCLBBPAD;
        *ppMVar5 = (MFFKCPDBFPG_o *)0x0;
        thunk_FUN_01c20e04(ppMVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PFECNBCIBAA(EFOFNLEFLNH BPFGKPNFACP)  [RVA 0x31B0510]
// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B0510

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,EFOFNLEFLNH_o *BPFGKPNFACP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  GameUtils_MACDOBFPDPP_o *__this_00;
  HGLELMDNMMA_o *GJFBMHMOMED;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *pSVar6;
  HOGPIBHKJDL_o *__this_01;
  IGPDCHBJAPD_DHAPBDACLMI_o *__this_02;
  Il2CppClass *pIVar7;
  IGPDCHBJAPD_DHAPBDACLMI_array *pIVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar9;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b79 & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_DHAPBDACLMI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_get_Current__
                );
    FUN_01bab630(&HOGPIBHKJDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566b79 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (BPFGKPNFACP != (EFOFNLEFLNH_o *)0x0) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = GameUtils_TypeInfo->static_fields->JIKLPLFKEDI;
    if (__this_00 == (GameUtils_MACDOBFPDPP_o *)0x0) {
LAB_032b078c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GJFBMHMOMED = GameUtils_MACDOBFPDPP__HNCMGLINNDO
                            (__this_00,(BPFGKPNFACP->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (GJFBMHMOMED != (HGLELMDNMMA_o *)0x0) {
      pSVar6 = (__this->fields).OJFMFMHCPOA;
      if (pSVar6 == (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0)
      goto LAB_032b078c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                          );
        pIVar3 = local_50.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                    );
          iVar5 = (BPFGKPNFACP->fields).JAICMIMBIOA;
          if (iVar5 < 1) {
            return;
          }
          __this_01 = (HOGPIBHKJDL_o *)thunk_FUN_01bda818(HOGPIBHKJDL_TypeInfo);
          HOGPIBHKJDL___ctor(__this_01,GJFBMHMOMED,iVar5,(MethodInfo *)0x0);
          __this_02 = (IGPDCHBJAPD_DHAPBDACLMI_o *)
                      thunk_FUN_01bda818(IGPDCHBJAPD_DHAPBDACLMI_TypeInfo);
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 != (IGPDCHBJAPD_DHAPBDACLMI_o *)0x0) {
            (__this_02->fields).PAFJDADBMKC = __this_01;
            thunk_FUN_01c20e04(&__this_02->fields,__this_01);
            (__this_02->fields).EDCFFINCGFA = (BPFGKPNFACP->fields).super.EDCFFINCGFA;
            lVar2 = Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_Add__;
            pSVar6 = (__this->fields).OJFMFMHCPOA;
            if (pSVar6 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
              pIVar8 = (pSVar6->fields)._items;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (pIVar8 != (IGPDCHBJAPD_DHAPBDACLMI_array *)0x0) {
                uVar1 = (pSVar6->fields)._size;
                if (uVar1 < (uint)pIVar8->max_length) {
                  (pSVar6->fields)._size = uVar1 + 1;
                  pIVar8->m_Items[(int)uVar1] = __this_02;
                  thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar1,__this_02);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
          goto LAB_032b078c;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = local_50.fields._current[1].klass;
        if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((HGLELMDNMMA_o *)(pIVar7->_1).name != GJFBMHMOMED);
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &(pIVar7->_1).namespaze,(MethodInfo *)0x0);
      pIVar7 = pIVar3[1].klass;
      CVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((BPFGKPNFACP->fields).JAICMIMBIOA + iVar5,(MethodInfo *)0x0);
      if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&(pIVar7->_1).namespaze =
           CVar9.fields;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                );
    }
  }
  return;
}


// ===== public void PFECNBCIBAA(MFFKCPDBFPG HPGAOGEKHKD)  [RVA 0x31B081C]
// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B081C

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,MFFKCPDBFPG_o *HPGAOGEKHKD,MethodInfo *method)

{
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  MFFKCPDBFPG_o **ppMVar1;
  
  if ((DAT_04566b7a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_AddRange__);
    DAT_04566b7a = 1;
  }
  if (HPGAOGEKHKD == (MFFKCPDBFPG_o *)0x0) {
    return;
  }
  ppMVar1 = &(__this->fields).GPDMCLBBPAD;
  if (*ppMVar1 == (MFFKCPDBFPG_o *)0x0) {
    *ppMVar1 = HPGAOGEKHKD;
    thunk_FUN_01c20e04(ppMVar1,HPGAOGEKHKD);
    return;
  }
  __this_00 = ((*ppMVar1)->fields).EEIGOFDOLKN;
  if (__this_00 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(HPGAOGEKHKD->fields).EEIGOFDOLKN,
               Method_System_Collections_Generic_List<DILGLGMKOFG>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MFFKCPDBFPG GJGAEBHGNFA()  [RVA 0x31B138C]
// IGPDCHBJAPD.JMPAGIGEFME$$GJGAEBHGNFA @ RVA 0x31B138C

MFFKCPDBFPG_o *
IGPDCHBJAPD_JMPAGIGEFME__GJGAEBHGNFA(IGPDCHBJAPD_JMPAGIGEFME_o *__this,MethodInfo *method)

{
  return (__this->fields).GPDMCLBBPAD;
}


// ===== public List<HOGPIBHKJDL> OCPCHKLBPNH(bool JDICPLBDFGM = False)  [RVA 0x31B1394]
// IGPDCHBJAPD.JMPAGIGEFME$$OCPCHKLBPNH @ RVA 0x31B1394

System_Collections_Generic_List_HOGPIBHKJDL__o *
IGPDCHBJAPD_JMPAGIGEFME__OCPCHKLBPNH
          (IGPDCHBJAPD_JMPAGIGEFME_o *__this,bool JDICPLBDFGM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_HOGPIBHKJDL__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *__this_01;
  Il2CppClass *item;
  HOGPIBHKJDL_array *pHVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b7b & 1) == 0) {
                    /* try { // try from 032b13cc to 033b13f3 has its CatchHandler @ 032b1b8c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOGPIBHKJDL>_TypeInfo);
    DAT_04566b7b = 1;
  }
                    /* try { // try from 032b1428 to 033b1453 has its CatchHandler @ 032b1b88 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_HOGPIBHKJDL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOGPIBHKJDL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOGPIBHKJDL>__ctor__);
  __this_01 = (__this->fields).OJFMFMHCPOA;
  if (__this_01 == (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_032b1484:
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_MoveNext__
                    );
  lVar2 = Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__;
                    /* try { // try from 032b1490 to 033b1503 has its CatchHandler @ 032b1c38 */
  if (!bVar3) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_DHAPBDACLMI>_Dispose__)
    ;
    return __this_00;
  }
  if (JDICPLBDFGM) goto code_r0x032b149c;
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_032b14b0;
code_r0x032b149c:
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(char *)&local_50.fields._current[1].monitor != '\0') {
LAB_032b14b0:
    if (__this_00 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOGPIBHKJDL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = (HOGPIBHKJDL_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
                    /* try { // try from 032b1504 to 033b165f has its CatchHandler @ 032b122c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_032b1484;
}


// ===== public void PFECNBCIBAA(RewardCurrency OJFLMDHCPPI)  [RVA 0x31B01E8]
// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B01E8

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,RewardCurrency_o *OJFLMDHCPPI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  GameUtils_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *IJONCLJPNDO;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *pSVar7;
  BNKBGIIJNLF_o *__this_01;
  IGPDCHBJAPD_AKGCHFPLJEC_o *__this_02;
  Il2CppClass *pIVar8;
  IGPDCHBJAPD_AKGCHFPLJEC_array *pIVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar10;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b7c & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_AKGCHFPLJEC_TypeInfo);
    FUN_01bab630(&BNKBGIIJNLF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566b7c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (OJFLMDHCPPI != (RewardCurrency_o *)0x0) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
    if (__this_00 == (GameUtils_HLAKGGFFNAO_o *)0x0) {
LAB_032b047c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IJONCLJPNDO = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                            (__this_00,(OJFLMDHCPPI->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (IJONCLJPNDO != (HBNENINHPGF_o *)0x0) {
      pSVar7 = (__this->fields).GMCEHJAIFBJ;
      if (pSVar7 == (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0)
      goto LAB_032b047c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar7,
                 Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                          );
        pIVar3 = local_50.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                    );
          iVar5 = RewardCurrency__ELLKHHEENBP(OJFLMDHCPPI,(MethodInfo *)0x0);
          if (iVar5 < 1) {
            return;
          }
          __this_01 = (BNKBGIIJNLF_o *)thunk_FUN_01bda818(BNKBGIIJNLF_TypeInfo);
          BNKBGIIJNLF___ctor(__this_01,IJONCLJPNDO,iVar5,(MethodInfo *)0x0);
          __this_02 = (IGPDCHBJAPD_AKGCHFPLJEC_o *)
                      thunk_FUN_01bda818(IGPDCHBJAPD_AKGCHFPLJEC_TypeInfo);
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 != (IGPDCHBJAPD_AKGCHFPLJEC_o *)0x0) {
            (__this_02->fields).MPNDFIPPOPA = __this_01;
            thunk_FUN_01c20e04(&__this_02->fields,__this_01);
            (__this_02->fields).EDCFFINCGFA = (OJFLMDHCPPI->fields).super.EDCFFINCGFA;
            lVar2 = Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_Add__;
            pSVar7 = (__this->fields).GMCEHJAIFBJ;
            if (pSVar7 != (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
              pIVar9 = (pSVar7->fields)._items;
              (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
              if (pIVar9 != (IGPDCHBJAPD_AKGCHFPLJEC_array *)0x0) {
                uVar1 = (pSVar7->fields)._size;
                if (uVar1 < (uint)pIVar9->max_length) {
                  (pSVar7->fields)._size = uVar1 + 1;
                  pIVar9->m_Items[(int)uVar1] = __this_02;
                  thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1,__this_02);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
          goto LAB_032b047c;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar8 = local_50.fields._current[1].klass;
        if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((HBNENINHPGF_o *)(pIVar8->_1).name != IJONCLJPNDO);
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &(pIVar8->_1).namespaze,(MethodInfo *)0x0);
      iVar6 = RewardCurrency__ELLKHHEENBP(OJFLMDHCPPI,(MethodInfo *)0x0);
      pIVar8 = pIVar3[1].klass;
      CVar10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         (iVar6 + iVar5,(MethodInfo *)0x0);
      if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&(pIVar8->_1).namespaze =
           CVar10.fields;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    }
  }
  return;
}


// ===== public List<HOOAAGABMBL> ACBMLHJIFMD(bool JDICPLBDFGM = False)  [RVA 0x31B15CC]
// IGPDCHBJAPD.JMPAGIGEFME$$ACBMLHJIFMD @ RVA 0x31B15CC

System_Collections_Generic_List_HOOAAGABMBL__o *
IGPDCHBJAPD_JMPAGIGEFME__ACBMLHJIFMD
          (IGPDCHBJAPD_JMPAGIGEFME_o *__this,bool JDICPLBDFGM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *__this_01;
  Il2CppClass *item;
  HOOAAGABMBL_array *pHVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566b7d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    DAT_04566b7d = 1;
  }
                    /* try { // try from 032b1660 to 033b1687 has its CatchHandler @ 032b1ae0 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  __this_01 = (__this->fields).GHAAKPDHIJJ;
  if (__this_01 == (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_032b16bc:
                    /* try { // try from 032b16bc to 033b16e7 has its CatchHandler @ 032b1adc */
  bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_MoveNext__
                    );
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  if (!bVar3) {
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_LDCCMPFIKHF>_Dispose__)
    ;
    return __this_00;
  }
  if (JDICPLBDFGM) goto code_r0x032b16d4;
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_032b16e8;
code_r0x032b16d4:
  if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(char *)&local_50.fields._current[2].klass != '\0') {
LAB_032b16e8:
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 032b1720 to 033b1743 has its CatchHandler @ 032b1b94 */
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 032b1744 to 033b18a7 has its CatchHandler @ 032b122c */
    }
  }
  goto LAB_032b16bc;
}


// ===== public void .ctor()  [RVA 0x31B0FC4]
// IGPDCHBJAPD.JMPAGIGEFME$$.ctor @ RVA 0x31B0FC4

void IGPDCHBJAPD_JMPAGIGEFME___ctor(IGPDCHBJAPD_JMPAGIGEFME_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o **ppSVar1;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *__this_01;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o **ppSVar2;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *__this_02;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o **ppSVar3;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032b0fe4 to 033b0fef has its CatchHandler @ 032b0c04 */
                    /* try { // try from 032b0ff0 to 033b0ff7 has its CatchHandler @ 032b0ff8 */
                    /* catch() { ... } // from try @ 032b0f7c with catch @ 032b0ff8
                       catch() { ... } // from try @ 032b0ff0 with catch @ 032b0ff8 */
  if ((DAT_04566b7e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
    DAT_04566b7e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>__ctor__);
  ppSVar1 = &(__this->fields).GHAAKPDHIJJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>__ctor__);
  ppSVar2 = &(__this->fields).GMCEHJAIFBJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>__ctor__);
  ppSVar3 = &(__this->fields).OJFMFMHCPOA;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

