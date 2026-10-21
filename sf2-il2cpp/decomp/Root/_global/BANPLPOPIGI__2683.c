// TypeDefIndex 2683
// Namespace: 
// public class BANPLPOPIGI
// Fields:
//   private bool JGEPPNPPIKG; // 0x10
//   private RaidLeaderboardView HJLDGHLININ; // 0x18
//   private SimpleScroll PDHMLFAMNCO; // 0x20
//   private GameObject DGEDNGEEBOP; // 0x28
//   private JCFJFJCKLKG FHPFEDKOMBA; // 0x30
//   private List<int> JDHINHCBLNC; // 0x38
//   private Dictionary<int, List<ICPMLKOEANF>> IBEGIIPEOAK; // 0x40
//   private List<RaidLeaguesLeaderboard.OIMJFDFDMMM> JKBONEFMACI; // 0x48
//   private Dictionary<int, List<RaidLeaguesLeaderboard.OIMJFDFDMMM>> BGMOJHCPOND; // 0x50
//   private int FFLNLBEPNNH; // 0x58
//   private bool OEBELMAFGAF; // 0x5C
//   private IEnumerator GFFOLJOKMGO; // 0x60
//   private Action NDHBLOHOEFK; // 0x68
//   private const string FDDFFMLLCDE = "Top100PlayersPool";
//   private float FBCMJLLICNC; // 0x70

// ===== private void OKNCMCGGAMJ(RaidLeaguesLeaderboard.OIMJFDFDMMM JCGMKBFBANJ)  [RVA 0x33C7994]
// BANPLPOPIGI$$OKNCMCGGAMJ @ RVA 0x33C7994

void BANPLPOPIGI__OKNCMCGGAMJ
               (BANPLPOPIGI_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *JCGMKBFBANJ,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *pNVar4;
  
  if ((DAT_04567dfe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    DAT_04567dfe = 1;
  }
  lVar3 = Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__;
  iVar1 = (__this->fields).FFLNLBEPNNH;
  __this_00 = (__this->fields).JKBONEFMACI;
  if (iVar1 < 1) {
    if (__this_00 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
    goto LAB_034c7a70;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
    goto LAB_034c7a70;
    if (iVar1 <= (__this_00->fields)._size) {
      return;
    }
  }
  pNVar4 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *)0x0) {
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pNVar4->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pNVar4->m_Items[(int)uVar2] = JCGMKBFBANJ;
      thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar2,JCGMKBFBANJ);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)JCGMKBFBANJ,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_034c7a70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int MEFLMPHJJCE()  [RVA 0x33C7A74]
// BANPLPOPIGI$$MEFLMPHJJCE @ RVA 0x33C7A74

int32_t BANPLPOPIGI__MEFLMPHJJCE(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04567dff & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    DAT_04567dff = 1;
  }
  pSVar1 = (__this->fields).JKBONEFMACI;
  if (pSVar1 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    index = 0;
    do {
      if ((pSVar1->fields)._size <= index) {
        return -1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        pSVar1 = (__this->fields).JKBONEFMACI;
        if ((pSVar1 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
           || (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                   Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                                  ), pIVar2 == (Il2CppObject *)0x0)) break;
        if (*(char *)((long)&pIVar2[2].klass + 4) != '\0') {
          return index;
        }
      }
      pSVar1 = (__this->fields).JKBONEFMACI;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static int IGGPLEHJHKO(RaidLeaguesLeaderboard.OIMJFDFDMMM OFHAOGJODJN, RaidLeaguesLeaderboard.OIMJFDFDMMM AEELKDCBPDC)  [RVA 0x33C7B20]
// BANPLPOPIGI$$IGGPLEHJHKO @ RVA 0x33C7B20

int32_t BANPLPOPIGI__IGGPLEHJHKO
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *OFHAOGJODJN,
                  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *AEELKDCBPDC,
                  MethodInfo *method)

{
  if ((OFHAOGJODJN != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
     (AEELKDCBPDC != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0)) {
    return (OFHAOGJODJN->fields).FPNOLDAJPGK - (AEELKDCBPDC->fields).FPNOLDAJPGK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MOIADPPPPLJ()  [RVA 0x33C7B44]
// BANPLPOPIGI$$MOIADPPPPLJ @ RVA 0x33C7B44

void BANPLPOPIGI__MOIADPPPPLJ(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((__this->fields).OEBELMAFGAF != false) {
    BANPLPOPIGI__OKNCMCGGAMJ
              (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0,in_x2)
    ;
    return;
  }
  return;
}


// ===== private void BOEJBAJKLKL(Action CJNHFNHJHPE)  [RVA 0x33C7B58]
// BANPLPOPIGI$$BOEJBAJKLKL @ RVA 0x33C7B58

void BANPLPOPIGI__BOEJBAJKLKL(BANPLPOPIGI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04567e00 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567e00 = 1;
  }
  ppSVar4 = &(__this->fields).NDHBLOHOEFK;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void JJBDNGPJEFD(int PCAIKIGGBMJ)  [RVA 0x33C7BF4]
// BANPLPOPIGI$$JJBDNGPJEFD @ RVA 0x33C7BF4

void BANPLPOPIGI__JJBDNGPJEFD(BANPLPOPIGI_o *__this,int32_t PCAIKIGGBMJ,MethodInfo *method)

{
  (__this->fields).FFLNLBEPNNH = PCAIKIGGBMJ;
  return;
}


// ===== public void OJPJPGLBOKH()  [RVA 0x33C7BFC]
// BANPLPOPIGI$$OJPJPGLBOKH @ RVA 0x33C7BFC

void BANPLPOPIGI__OJPJPGLBOKH(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FOKKFJKGIBK(Action CJNHFNHJHPE)  [RVA 0x33C7C18]
// BANPLPOPIGI$$FOKKFJKGIBK @ RVA 0x33C7C18

void BANPLPOPIGI__FOKKFJKGIBK(BANPLPOPIGI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04567e01 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567e01 = 1;
  }
  ppSVar4 = &(__this->fields).NDHBLOHOEFK;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void CPKDPKBPHIG()  [RVA 0x33C7CB4]
// BANPLPOPIGI$$CPKDPKBPHIG @ RVA 0x33C7CB4

/* WARNING: Removing unreachable block (ram,0x034c8584) */
/* WARNING: Removing unreachable block (ram,0x034c8588) */
/* WARNING: Removing unreachable block (ram,0x034c866c) */
/* WARNING: Removing unreachable block (ram,0x034c80a0) */

void BANPLPOPIGI__CPKDPKBPHIG(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t OJDBABKBAFA;
  int32_t GAEEGJENPLA;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  EEGDOGKBLNG_o *__this_00;
  void *pvVar5;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar6;
  Il2CppObject *pIVar7;
  HCKCBFOGMMJ_o *__this_02;
  GKLPDMLELJF_o *pGVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *__this_03;
  System_Comparison_RaidLeaguesLeaderboard_OIMJFDFDMMM__o **ppSVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar10;
  System_Object_array *pSVar11;
  InvokerMethod pIVar12;
  int index;
  System_Comparison_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *comparison;
  System_String_o *KGLJICLJHEL;
  void *EANGIGBCDPN;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_f8;
  System_Collections_Generic_List_Enumerator_T__o local_e0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04567e02 & 1) == 0) {
    FUN_01bab630(&System_Comparison<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Values__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_set_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<ICPMLKOEANF>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ICPMLKOEANF>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<ICPMLKOEANF>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ICPMLKOEANF>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<ICPMLKOEANF>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ICPMLKOEANF>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Clear__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Sort__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_TypeInfo);
    FUN_01bab630(&Method_BANPLPOPIGI_<>c_PCKNGNBDIHI__);
    FUN_01bab630(&BANPLPOPIGI_<>c_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<ICPMLKOEANF>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_GetEnumerator__
                );
    DAT_04567e02 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._currentValue = (Il2CppObject *)0x0;
  local_e0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e0.fields._index = 0;
  local_e0.fields._version = 0;
  local_e0.fields._current = (Il2CppObject *)0x0;
  pSVar10 = (__this->fields).JKBONEFMACI;
  if (pSVar10 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    uVar1 = (pSVar10->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).BGMOJHCPOND;
    if (pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__Clear
                (pSVar4,
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Clear__
                );
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        pvVar5 = (void *)EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<ICPMLKOEANF>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<ICPMLKOEANF>__ctor__);
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields).IBEGIIPEOAK;
        if ((pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
           (pSVar6 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                               (pSVar4,
                                Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Values__
                               ),
           pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
        {
          System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                    (&local_f8,pSVar6,
                     Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<ICPMLKOEANF>>_GetEnumerator__
                    );
          local_80.fields._index = local_f8.fields._index;
          local_80.fields._version = local_f8.fields._version;
          local_80.fields._dictionary = local_f8.fields._dictionary;
          local_80.fields._currentValue = local_f8.fields._currentValue;
          while (bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<ICPMLKOEANF>>_MoveNext__
                                   ), bVar3) {
            if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)
                local_80.fields._currentValue ==
                (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&local_f8,
                       (System_Collections_Generic_List_object__o *)local_80.fields._currentValue,
                       Method_System_Collections_Generic_List<ICPMLKOEANF>_GetEnumerator__);
            local_a0.fields._index = local_f8.fields._index;
            local_a0.fields._version = local_f8.fields._version;
            local_a0.fields._list =
                 (System_Collections_Generic_List_T__o *)local_f8.fields._dictionary;
            local_a0.fields._current = local_f8.fields._currentValue;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_a0,
                                      Method_System_Collections_Generic_List_Enumerator<ICPMLKOEANF>_MoveNext__
                                     ),
                  lVar2 = Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__, bVar3) {
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar11 = (__this_01->fields)._items;
              (__this_01->fields)._version = (__this_01->fields)._version + 1;
              if (pSVar11 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pSVar11->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                pSVar11->m_Items[(int)uVar1] = local_a0.fields._current;
                thunk_FUN_01c20e04();
              }
              else {
                method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_01,local_a0.fields._current,(MethodInfo_26E4DAC *)method_00);
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<ICPMLKOEANF>_Dispose__);
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<ICPMLKOEANF>>_Dispose__
                    );
          if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
            if (0 < (__this_01->fields)._size) {
              index = 0;
              do {
                pIVar7 = System_Collections_Generic_List<object>__get_Item
                                   (__this_01,index,
                                    (MethodInfo_26E4ADC *)
                                    Method_System_Collections_Generic_List<ICPMLKOEANF>_get_Item__);
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                }
                __this_02 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                if ((pIVar7 == (Il2CppObject *)0x0) || (__this_02 == (HCKCBFOGMMJ_o *)0x0))
                goto LAB_034c863c;
                method_00 = (MethodInfo *)0x0;
                pGVar8 = HCKCBFOGMMJ__LLEJFHJIBHC
                                   (__this_02,(int64_t)pIVar7[1].monitor,(MethodInfo *)0x0);
                if (pGVar8 != (GKLPDMLELJF_o *)0x0) {
                  KGLJICLJHEL = (pGVar8->fields).LLBEKLPKDHK;
                  OJDBABKBAFA = *(int32_t *)&pIVar7[2].klass;
                  EANGIGBCDPN = pIVar7[1].monitor;
                  GAEEGJENPLA = (pGVar8->fields).PEBHLKLGDBM;
                  __this_03 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)
                              thunk_FUN_01bda818(
                                                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_TypeInfo
                                                );
                  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM___ctor
                            (__this_03,(int64_t)EANGIGBCDPN,KGLJICLJHEL,OJDBABKBAFA,
                             pvVar5 == EANGIGBCDPN,-1,index + 1,GAEEGJENPLA,(MethodInfo *)0x0);
                  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                           (__this->fields).BGMOJHCPOND;
                  if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
                  goto LAB_034c863c;
                  bVar3 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                                    (pSVar4,*(int32_t *)&pIVar7[2].klass,
                                     Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_ContainsKey__
                                    );
                  if (bVar3) {
                    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                             (__this->fields).BGMOJHCPOND;
                    if ((pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
                       (method_00 = (MethodInfo *)
                                    System_Collections_Generic_Dictionary<int,_object>__get_Item
                                              (pSVar4,*(int32_t *)&pIVar7[2].klass,
                                               Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Item__
                                              ),
                       lVar2 = 
                       Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__
                       , method_00 == (MethodInfo *)0x0)) goto LAB_034c863c;
                    pIVar12 = method_00->invoker_method;
                    *(int *)((long)&method_00->name + 4) = *(int *)((long)&method_00->name + 4) + 1;
                    if (pIVar12 == (InvokerMethod)0x0) goto LAB_034c863c;
                    uVar1 = *(uint *)&method_00->name;
                    if (uVar1 < *(uint *)(pIVar12 + 0x18)) {
                      *(uint *)&method_00->name = uVar1 + 1;
                      *(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o **)
                       (pIVar12 + (long)(int)uVar1 * 8 + 0x20) = __this_03;
                      thunk_FUN_01c20e04(pIVar12 + (long)(int)uVar1 * 8 + 0x20,__this_03);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)method_00,
                                 (Il2CppObject *)__this_03,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((BANPLPOPIGI_<>c_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    comparison = BANPLPOPIGI_<>c_TypeInfo->static_fields->__9__27_0;
                    if (comparison == (System_Comparison_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0
                       ) {
                      if ((BANPLPOPIGI_<>c_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      comparison = (System_Comparison_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
                                   thunk_FUN_01bda818(
                                                  System_Comparison<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                                  );
                      System_Comparison<object>___ctor();
                      ppSVar9 = &BANPLPOPIGI_<>c_TypeInfo->static_fields->__9__27_0;
                      *ppSVar9 = comparison;
                      thunk_FUN_01c20e04(ppSVar9,comparison);
                    }
                    System_Collections_Generic_List<object>__Sort
                              ((System_Collections_Generic_List_object__o *)method_00,
                               (System_Comparison_T__o *)comparison,
                               Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Sort__
                              );
                    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                             (__this->fields).BGMOJHCPOND;
                    if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
                    goto LAB_034c863c;
                    System_Collections_Generic_Dictionary<int,_object>__set_Item
                              (pSVar4,*(int32_t *)&pIVar7[2].klass,(Il2CppObject *)method_00,
                               Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_set_Item__
                              );
                  }
                  else {
                    method_00 = (MethodInfo *)
                                thunk_FUN_01bda818(
                                                  System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                                  );
                    System_Collections_Generic_List<object>___ctor
                              ((System_Collections_Generic_List_object__o *)method_00,
                               Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                              );
                    lVar2 = 
                    Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__
                    ;
                    if (method_00 == (MethodInfo *)0x0) goto LAB_034c863c;
                    pIVar12 = method_00->invoker_method;
                    *(int *)((long)&method_00->name + 4) = *(int *)((long)&method_00->name + 4) + 1;
                    if (pIVar12 == (InvokerMethod)0x0) goto LAB_034c863c;
                    uVar1 = *(uint *)&method_00->name;
                    if (uVar1 < *(uint *)(pIVar12 + 0x18)) {
                      *(uint *)&method_00->name = uVar1 + 1;
                      *(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o **)
                       (pIVar12 + (long)(int)uVar1 * 8 + 0x20) = __this_03;
                      thunk_FUN_01c20e04(pIVar12 + (long)(int)uVar1 * 8 + 0x20,__this_03);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)method_00,
                                 (Il2CppObject *)__this_03,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                             (__this->fields).BGMOJHCPOND;
                    if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
                    goto LAB_034c863c;
                    System_Collections_Generic_Dictionary<int,_object>__Add
                              (pSVar4,*(int32_t *)&pIVar7[2].klass,(Il2CppObject *)method_00,
                               Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Add__
                              );
                  }
                  if ((index < (__this_01->fields)._size + -1) &&
                     (method_00 = Method_System_Collections_Generic_List<ICPMLKOEANF>_get_Item__,
                     pIVar7 = System_Collections_Generic_List<object>__get_Item
                                        (__this_01,index + 1,
                                         (MethodInfo_26E4ADC *)
                                         Method_System_Collections_Generic_List<ICPMLKOEANF>_get_Item__
                                        ), pIVar7 == (Il2CppObject *)0x0)) goto LAB_034c863c;
                }
                index = index + 1;
              } while (index < (__this_01->fields)._size);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this->fields).BGMOJHCPOND;
            if ((pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pSVar6 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                                   (pSVar4,
                                    Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Values__
                                   ),
               pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                         0x0)) {
              System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                        (&local_f8,pSVar6,
                         Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_GetEnumerator__
                        );
              local_c0.fields._index = local_f8.fields._index;
              local_c0.fields._version = local_f8.fields._version;
              local_c0.fields._dictionary = local_f8.fields._dictionary;
              local_c0.fields._currentValue = local_f8.fields._currentValue;
              do {
                bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                                  (&local_c0,
                                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_MoveNext__
                                  );
                if (!bVar3) {
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                            (&local_c0,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Dispose__
                            );
                  return;
                }
                bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                                  ((System_Collections_Generic_List_T__o *)
                                   local_c0.fields._currentValue,
                                   Method_DJNBJHPDKDP_OBECCOPBADO<RaidLeaguesLeaderboard_OIMJFDFDMMM>__
                                  );
              } while (bVar3);
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                        (&local_c0,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Dispose__
                        );
              if ((__this->fields).OEBELMAFGAF != false) {
                BANPLPOPIGI__OKNCMCGGAMJ
                          (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o
                                   *)0x0,method_00);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (__this->fields).BGMOJHCPOND;
              if ((pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                 (pSVar6 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                                     (pSVar4,
                                      Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_get_Values__
                                     ),
                 pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                           0x0)) {
                System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                          (&local_f8,pSVar6,
                           Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_GetEnumerator__
                          );
                local_c0.fields._index = local_f8.fields._index;
                local_c0.fields._version = local_f8.fields._version;
                local_c0.fields._dictionary = local_f8.fields._dictionary;
                local_c0.fields._currentValue = local_f8.fields._currentValue;
                while( true ) {
                  bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                                    (&local_c0,
                                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_MoveNext__
                                    );
                  if (!bVar3) {
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                              (&local_c0,
                               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_Dispose__
                              );
                    if ((__this->fields).OEBELMAFGAF != false) {
                      BANPLPOPIGI__OKNCMCGGAMJ
                                (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o
                                         *)0x0,method_00);
                    }
                    return;
                  }
                  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)
                      local_c0.fields._currentValue ==
                      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0)
                  break;
                  System_Collections_Generic_List<object>__GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)&local_f8,
                             (System_Collections_Generic_List_object__o *)
                             local_c0.fields._currentValue,
                             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_GetEnumerator__
                            );
                  local_e0.fields._index = local_f8.fields._index;
                  local_e0.fields._version = local_f8.fields._version;
                  local_e0.fields._list =
                       (System_Collections_Generic_List_T__o *)local_f8.fields._dictionary;
                  local_e0.fields._current = local_f8.fields._currentValue;
                  while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                           (&local_e0,
                                            Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_MoveNext__
                                           ), bVar3) {
                    BANPLPOPIGI__OKNCMCGGAMJ
                              (__this,(Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o
                                       *)local_e0.fields._current,method_00);
                  }
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_e0,
                             Method_System_Collections_Generic_List_Enumerator<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Dispose__
                            );
                }
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            }
          }
        }
      }
    }
  }
LAB_034c863c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BPCMAJCCAAL(int JDEFJPHCNMM)  [RVA 0x33C87F4]
// BANPLPOPIGI$$BPCMAJCCAAL @ RVA 0x33C87F4

void BANPLPOPIGI__BPCMAJCCAAL(BANPLPOPIGI_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_02;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_int__o *__this_03;
  
  if ((DAT_04567e03 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
    FUN_01bab630(&StringLiteral_13880/*"Top100PlayersPool"*/);
    DAT_04567e03 = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (__this_00,false,StringLiteral_13880/*"Top100PlayersPool"*/,(MethodInfo *)0x0),
     __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *)0x0)) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo)) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,true,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._55_ReInit.methodPtr)
                (__this_01,(__this_01->klass->vtable)._55_ReInit.method);
      __this_02 = (__this->fields).JKBONEFMACI;
      if (__this_02 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
      {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,JDEFJPHCNMM,
                            Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                           );
        (*(__this_01->klass->vtable)._52_UpdateView.methodPtr)
                  (__this_01,pIVar3,(__this_01->klass->vtable)._52_UpdateView.method);
        __this_03 = (__this->fields).JDHINHCBLNC;
        if (__this_03 != (System_Collections_Generic_List_int__o *)0x0) {
          bVar2 = System_Collections_Generic_List<int>__Contains
                            (__this_03,JDEFJPHCNMM,
                             Method_System_Collections_Generic_List<int>_Contains__);
          if (bVar2) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__ShowLine(__this_01,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GFIHKNPILPL()  [RVA 0x33C8948]
// BANPLPOPIGI$$GFIHKNPILPL @ RVA 0x33C8948

int32_t BANPLPOPIGI__GFIHKNPILPL(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Count__);
    DAT_04567e04 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IBEGIIPEOAK;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<int,_object>__get_Count
                      (__this_00,
                       Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Count__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void LPNCEHPFOAF(JCFJFJCKLKG DJFFMPLBCKC, Action NAKEOECMGIG)  [RVA 0x33C8998]
// BANPLPOPIGI$$LPNCEHPFOAF @ RVA 0x33C8998

void BANPLPOPIGI__LPNCEHPFOAF
               (BANPLPOPIGI_o *__this,JCFJFJCKLKG_o *DJFFMPLBCKC,System_Action_o *NAKEOECMGIG,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  System_Action_o **ppSVar1;
  JCFJFJCKLKG_o **ppJVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  
  method_00 = (MethodInfo *)DJFFMPLBCKC;
  if ((DAT_04567e05 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidTopPlayerCell>__);
    FUN_01bab630(&StringLiteral_13880/*"Top100PlayersPool"*/);
    DAT_04567e05 = 1;
    method_00 = extraout_x1;
  }
  BANPLPOPIGI__JOIFLMJEEJK(__this,method_00);
  __this_00 = (__this->fields).DGEDNGEEBOP;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pNVar4 = (__this->fields).PDHMLFAMNCO;
    DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_00,
                             Method_UnityEngine_GameObject_GetComponent<RaidTopPlayerCell>__);
    if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                (pNVar4,StringLiteral_13880/*"Top100PlayersPool"*/,DKIDCBPNMPD,(MethodInfo *)0x0);
      ppSVar1 = &(__this->fields).NDHBLOHOEFK;
      *ppSVar1 = NAKEOECMGIG;
      thunk_FUN_01c20e04(ppSVar1,NAKEOECMGIG);
      ppJVar2 = &(__this->fields).FHPFEDKOMBA;
      if (*ppJVar2 == DJFFMPLBCKC) {
        BANPLPOPIGI__NCDOMAGEGCF(__this,method_01);
        pSVar3 = (__this->fields).NDHBLOHOEFK;
        if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034c8a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
          return;
        }
        return;
      }
      (__this->fields).FHPFEDKOMBA = DJFFMPLBCKC;
      thunk_FUN_01c20e04(ppJVar2,DJFFMPLBCKC);
      pNVar4 = (__this->fields).PDHMLFAMNCO;
      if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar4,(MethodInfo *)0x0);
        BANPLPOPIGI__GECPCINCJGC(__this,method_02);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GECPCINCJGC()  [RVA 0x33C8B88]
// BANPLPOPIGI$$GECPCINCJGC @ RVA 0x33C8B88

void BANPLPOPIGI__GECPCINCJGC(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_01;
  Il2CppObject *item;
  System_Collections_Generic_List_object__o *pSVar6;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  HCKCBFOGMMJ_o *__this_04;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  Il2CppObject *CJNHFNHJHPE;
  MethodInfo *in_x2;
  JCFJFJCKLKG_o *pJVar7;
  System_Object_array *pSVar8;
  int index;
  
  if ((DAT_04567e06 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_BANPLPOPIGI_NKLNDGMMAAH__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Keys__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<ICPMLKOEANF>>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ICPMLKOEANF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_04567e06 = 1;
  }
  pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IBEGIIPEOAK;
  if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (pSVar5,Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Clear__);
    if ((__this->fields).FHPFEDKOMBA == (JCFJFJCKLKG_o *)0x0) {
      return;
    }
    __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
    IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
    pJVar7 = (__this->fields).FHPFEDKOMBA;
    if (pJVar7 != (JCFJFJCKLKG_o *)0x0) {
      index = 0;
      while (__this_01 = (pJVar7->fields).LFOCACIGEFK,
            __this_01 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
        if ((__this_01->fields).count <= index) {
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IBEGIIPEOAK;
          if ((pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (__this_03 = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                                    (pSVar5,
                                     Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Keys__
                                    ),
             __this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0
             )) {
            iVar4 = System_Collections_Generic_Dictionary_KeyCollection<int,_object>__get_Count
                              (__this_03,
                               Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<ICPMLKOEANF>>_get_Count__
                              );
            if (iVar4 < 1) {
              BANPLPOPIGI__NKLNDGMMAAH(__this,CJNHFNHJHPE,in_x2);
              return;
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_04 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
            BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                          thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
            System_Action<object>___ctor();
            if (__this_04 != (HCKCBFOGMMJ_o *)0x0) {
              HCKCBFOGMMJ__EFCMPBGIEGJ(__this_04,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        in_x2 = Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__;
        item = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,index,
                          (MethodInfo_295F6AC *)
                          Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
        if ((item != (Il2CppObject *)0x0) && (0 < *(int32_t *)&item[2].klass)) {
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IBEGIIPEOAK;
          if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
          bVar3 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar5,*(int32_t *)&item[2].klass,
                             Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_ContainsKey__
                            );
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).IBEGIIPEOAK;
          iVar4 = *(int32_t *)&item[2].klass;
          if (bVar3) {
            if ((pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (pSVar6 = (System_Collections_Generic_List_object__o *)
                         System_Collections_Generic_Dictionary<int,_object>__get_Item
                                   (pSVar5,iVar4,
                                    Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Item__
                                   ),
               lVar2 = Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__,
               pSVar6 == (System_Collections_Generic_List_object__o *)0x0)) break;
            pSVar8 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar8->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar8->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          else {
            pSVar6 = (System_Collections_Generic_List_object__o *)
                     thunk_FUN_01bda818(System_Collections_Generic_List<ICPMLKOEANF>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      (pSVar6,Method_System_Collections_Generic_List<ICPMLKOEANF>__ctor__);
            lVar2 = Method_System_Collections_Generic_List<ICPMLKOEANF>_Add__;
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
            pSVar8 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar8 == (System_Object_array *)0x0) break;
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar8->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar8->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
            System_Collections_Generic_Dictionary<int,_object>__Add
                      (pSVar5,iVar4,(Il2CppObject *)pSVar6,
                       Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_Add__);
          }
          if ((__this_00 == (IBMLPPNMDCI_o *)0x0) ||
             (__this_02 = (__this_00->fields).EHBNKDHKJNI,
             __this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
          in_x2 = Method_Google_Protobuf_Collections_RepeatedField<long>_Add__;
          Google_Protobuf_Collections_RepeatedField<long>__Add
                    (__this_02,(int64_t)item[1].monitor,
                     (MethodInfo_295C93C *)
                     Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        }
        pJVar7 = (__this->fields).FHPFEDKOMBA;
        index = index + 1;
        if (pJVar7 == (JCFJFJCKLKG_o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MBHCBEKAJPI()  [RVA 0x33C9058]
// BANPLPOPIGI$$MBHCBEKAJPI @ RVA 0x33C9058

void BANPLPOPIGI__MBHCBEKAJPI(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).NDHBLOHOEFK;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034c906c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== public void .ctor(RaidLeaderboardView MIJCJJCICDA, SimpleScroll MGFBPKIBNJI, GameObject LHDLBKGFPEJ, bool OKLLOECEHJB)  [RVA 0x33C9250]
// BANPLPOPIGI$$.ctor @ RVA 0x33C9250

void BANPLPOPIGI___ctor(BANPLPOPIGI_o *__this,
                       Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *MIJCJJCICDA,
                       Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
                       UnityEngine_GameObject_o *LHDLBKGFPEJ,bool OKLLOECEHJB,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_int__o **ppSVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__List_ICPMLKOEANF___o **ppSVar3;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_01;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o **ppSVar4;
  System_Collections_Generic_Dictionary_int__List_RaidLeaguesLeaderboard_OIMJFDFDMMM___o **ppSVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o **ppNVar6;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar7;
  UnityEngine_GameObject_o **ppUVar8;
  MethodInfo *method_00;
  
  if ((DAT_04567e07 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>__ctor__);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo);
    DAT_04567e07 = 1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar1 = &(__this->fields).JDHINHCBLNC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>__ctor__);
  ppSVar3 = &(__this->fields).IBEGIIPEOAK;
  *ppSVar3 = (System_Collections_Generic_Dictionary_int__List_ICPMLKOEANF___o *)pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  __this_01 = (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>__ctor__);
  ppSVar4 = &(__this->fields).JKBONEFMACI;
  *ppSVar4 = __this_01;
  thunk_FUN_01c20e04(ppSVar4,__this_01);
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (pSVar2,
             Method_System_Collections_Generic_Dictionary<int,_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>>__ctor__
            );
  ppSVar5 = &(__this->fields).BGMOJHCPOND;
  *ppSVar5 = (System_Collections_Generic_Dictionary_int__List_RaidLeaguesLeaderboard_OIMJFDFDMMM___o
              *)pSVar2;
  thunk_FUN_01c20e04(ppSVar5,pSVar2);
  (__this->fields).OEBELMAFGAF = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar6 = &(__this->fields).HJLDGHLININ;
  *ppNVar6 = MIJCJJCICDA;
  thunk_FUN_01c20e04(ppNVar6,MIJCJJCICDA);
  ppNVar7 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar7 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar7,MGFBPKIBNJI);
  ppUVar8 = &(__this->fields).DGEDNGEEBOP;
  *ppUVar8 = LHDLBKGFPEJ;
  thunk_FUN_01c20e04(ppUVar8,LHDLBKGFPEJ);
  (__this->fields).FFLNLBEPNNH = -1;
  (__this->fields).OEBELMAFGAF = OKLLOECEHJB;
  BANPLPOPIGI__JOIFLMJEEJK(__this,method_00);
  return;
}


// ===== public void JOIFLMJEEJK()  [RVA 0x33C8AB0]
// BANPLPOPIGI$$JOIFLMJEEJK @ RVA 0x33C8AB0

void BANPLPOPIGI__JOIFLMJEEJK(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04567e08 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567e08 = 1;
  }
  ppSVar7 = &(__this->fields).GFFOLJOKMGO;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_034c8b5c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_034c8b5c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void LLCONNGHGKD()  [RVA 0x33C9434]
// BANPLPOPIGI$$LLCONNGHGKD @ RVA 0x33C9434

void BANPLPOPIGI__LLCONNGHGKD(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  float fVar3;
  
  if ((DAT_04567e09 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04567e09 = 1;
  }
  pNVar2 = (__this->fields).PDHMLFAMNCO;
  if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(pNVar2->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if (!bVar1) {
      pNVar2 = (__this->fields).PDHMLFAMNCO;
      if (pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034c94a0;
      fVar3 = Nekki_SF2_GUI_SimpleScroll__GetScrollPos(pNVar2,(MethodInfo *)0x0);
      (__this->fields).FBCMJLLICNC = fVar3;
    }
    return;
  }
LAB_034c94a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator NHOJCBHAMIK()  [RVA 0x33C94A4]
// BANPLPOPIGI$$NHOJCBHAMIK @ RVA 0x33C94A4

System_Collections_IEnumerator_o *
BANPLPOPIGI__NHOJCBHAMIK(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e0a & 1) == 0) {
    FUN_01bab630(&BANPLPOPIGI_EODFBIJMPNB_TypeInfo);
    DAT_04567e0a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(BANPLPOPIGI_EODFBIJMPNB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void MALAFKIOFFB()  [RVA 0x33C9538]
// BANPLPOPIGI$$MALAFKIOFFB @ RVA 0x33C9538

void BANPLPOPIGI__MALAFKIOFFB(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  uint32_t uVar3;
  int32_t iVar4;
  JMDPBFOCHHP_o *pJVar5;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o **ppSVar6;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_int__o *pSVar8;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar9;
  System_Int32_array *pSVar10;
  int index;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar11;
  System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o *predicate;
  ulong uVar12;
  
  if ((DAT_04567e0b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Keys__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<uint>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
    FUN_01bab630(&System_Func<RaidLeaguesLeaderboard_OIMJFDFDMMM,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&Method_BANPLPOPIGI_<>c_AEMGNAIKDFG__);
    FUN_01bab630(&BANPLPOPIGI_<>c_TypeInfo);
    DAT_04567e0b = 1;
    method = extraout_x1;
  }
  pSVar8 = (__this->fields).JDHINHCBLNC;
  if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar5 != (JMDPBFOCHHP_o *)0x0) {
      pJVar9 = (pJVar5->fields)._JMEOCLFDHMM_k__BackingField;
      if (pJVar9 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0) {
        uVar12 = 0;
      }
      else {
        __this_00 = (pJVar9->fields).BFODFJIGBHE;
        if (__this_00 ==
            (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *)
            0x0) goto LAB_034c9770;
        source = System_Collections_Generic_Dictionary<uint,_object>__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                            Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Keys__
                           );
        uVar3 = System_Linq_Enumerable__FirstOrDefault<uint>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           Method_System_Linq_Enumerable_FirstOrDefault<uint>__);
        uVar12 = (ulong)uVar3;
      }
      pSVar11 = (__this->fields).JKBONEFMACI;
      if ((BANPLPOPIGI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate = BANPLPOPIGI_<>c_TypeInfo->static_fields->__9__29_0;
      if (predicate == (System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o *)0x0) {
        if ((BANPLPOPIGI_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        predicate = (System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o *)
                    thunk_FUN_01bda818(
                                      System_Func<RaidLeaguesLeaderboard_OIMJFDFDMMM,_bool>_TypeInfo
                                      );
        System_Func<object,_bool>___ctor();
        ppSVar6 = &BANPLPOPIGI_<>c_TypeInfo->static_fields->__9__29_0;
        *ppSVar6 = predicate;
        thunk_FUN_01c20e04(ppSVar6,predicate);
      }
      source_00 = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,
                             (System_Func_TSource__bool__o *)predicate,
                             Method_System_Linq_Enumerable_Where<RaidLeaguesLeaderboard_OIMJFDFDMMM>__
                            );
      iVar4 = System_Linq_Enumerable__Count<object>
                        (source_00,
                         Method_System_Linq_Enumerable_Count<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
      pSVar11 = (__this->fields).JKBONEFMACI;
      if (pSVar11 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
        index = 0;
        do {
          if ((pSVar11->fields)._size + -1 < index) {
            return;
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar11,index,
                              Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                             );
          lVar2 = Method_System_Collections_Generic_List<int>_Add__;
          if (((pIVar7 != (Il2CppObject *)0x0) && (1 < iVar4)) &&
             ((long)uVar12 <= (long)*(int *)&pIVar7[2].monitor)) {
            pSVar8 = (__this->fields).JDHINHCBLNC;
            if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
              pSVar10 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pSVar10 != (System_Int32_array *)0x0) {
                uVar1 = (pSVar8->fields)._size;
                if (uVar1 < (uint)pSVar10->max_length) {
                  (pSVar8->fields)._size = uVar1 + 1;
                  pSVar10->m_Items[(int)uVar1] = index;
                  return;
                }
                System_Collections_Generic_List<int>__AddWithResize
                          (pSVar8,index,
                           *(MethodInfo_26C766C **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
            break;
          }
          pSVar11 = (__this->fields).JKBONEFMACI;
          index = index + 1;
        } while (pSVar11 !=
                 (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0);
      }
    }
  }
LAB_034c9770:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCDOMAGEGCF()  [RVA 0x33C8F74]
// BANPLPOPIGI$$NCDOMAGEGCF @ RVA 0x33C8F74

void BANPLPOPIGI__NCDOMAGEGCF(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_04567e0c & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567e0c = 1;
    method = extraout_x1;
  }
  BANPLPOPIGI__JOIFLMJEEJK(__this,method);
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = BANPLPOPIGI__NHOJCBHAMIK(__this,method_00);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_034c9028;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_034c9028:
      pSVar3 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      ppSVar8 = &(__this->fields).GFFOLJOKMGO;
      *ppSVar8 = pSVar3;
      thunk_FUN_01c20e04(ppSVar8,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKLNDGMMAAH(object CJNHFNHJHPE)  [RVA 0x33C9074]
// BANPLPOPIGI$$NKLNDGMMAAH @ RVA 0x33C9074

void BANPLPOPIGI__NKLNDGMMAAH(BANPLPOPIGI_o *__this,Il2CppObject *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t DPJIDNBJIBG;
  GCIFMNHADDF_o *pGVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_00;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  Il2CppObject *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar5;
  
  if ((DAT_04567e0d & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567e0d = 1;
    CJNHFNHJHPE = extraout_x1;
  }
  pNVar5 = (__this->fields).HJLDGHLININ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,CJNHFNHJHPE);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar5 = (__this->fields).HJLDGHLININ;
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
    if ((pNVar5->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)
                  GCIFMNHADDF__BFJGHKKGOJC<object>
                            (pGVar2,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
      pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
        x = (UnityEngine_Object_o *)
            GCIFMNHADDF__BFJGHKKGOJC<object>
                      (pGVar2,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pMVar3 = extraout_x1_00;
        if (bVar1) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          pMVar3 = extraout_x1_01;
          if (bVar1) {
LAB_034c9238:
            BANPLPOPIGI__JOIFLMJEEJK(__this,pMVar3);
            return;
          }
          if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0)
          goto LAB_034c924c;
          bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
                            (__this_00,__this,(MethodInfo *)0x0);
          pMVar3 = extraout_x1_02;
          if (!bVar1) goto LAB_034c9238;
        }
        BANPLPOPIGI__CPKDPKBPHIG(__this,pMVar3);
        BANPLPOPIGI__MALAFKIOFFB(__this,method_00);
        BANPLPOPIGI__NCDOMAGEGCF(__this,method_01);
        DPJIDNBJIBG = BANPLPOPIGI__MEFLMPHJJCE(__this,method_02);
        if ((-1 < DPJIDNBJIBG) && ((__this->fields).JGEPPNPPIKG == false)) {
          __this_01 = (__this->fields).PDHMLFAMNCO;
          if (__this_01 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034c924c;
          bVar1 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(__this_01,(MethodInfo *)0x0);
          if (bVar1) {
            pNVar5 = (__this->fields).HJLDGHLININ;
            if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0)
            goto LAB_034c924c;
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__ScrollToIndex
                      (pNVar5,DPJIDNBJIBG,0.0,(MethodInfo *)0x0);
            (__this->fields).JGEPPNPPIKG = true;
          }
        }
        pSVar4 = (__this->fields).NDHBLOHOEFK;
        if (pSVar4 == (System_Action_o *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x034c9234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
        return;
      }
    }
  }
LAB_034c924c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool OIDEAAIMGMA()  [RVA 0x33C97FC]
// BANPLPOPIGI$$OIDEAAIMGMA @ RVA 0x33C97FC

bool BANPLPOPIGI__OIDEAAIMGMA(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034c9800 to 035c990b has its CatchHandler @ 034c9800
                       catch() { ... } // from try @ 034c9800 with catch @ 034c9800
                       catch() { ... } // from try @ 034c9934 with catch @ 034c9800
                       catch() { ... } // from try @ 034c99b0 with catch @ 034c9800
                       catch() { ... } // from try @ 034c9a0c with catch @ 034c9800
                       catch() { ... } // from try @ 034c9a3c with catch @ 034c9800
                       catch() { ... } // from try @ 034c9a74 with catch @ 034c9800
                       catch() { ... } // from try @ 034c9a90 with catch @ 034c9800
                       catch() { ... } // from try @ 034c9ad0 with catch @ 034c9800 */
  if ((DAT_04567e0e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
    DAT_04567e0e = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).JKBONEFMACI,
                     Method_DJNBJHPDKDP_OBECCOPBADO<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
  return bVar1;
}

