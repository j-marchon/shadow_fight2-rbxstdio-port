// TypeDefIndex 1850
// Namespace: 
// public class CHDGOFBHAFI
// Fields:
//   private const int PLMPFGEFPEN = 5;
//   private Action<CHDGOFBHAFI.DCENIHNBCAA> FELKMAJFHIE; // 0x10
//   private Action LMKOLDHCAAK; // 0x18
//   private Action OJAPEIKHMAP; // 0x20
//   private Action MHOOOLECDKK; // 0x28
//   private CHDGOFBHAFI.DCENIHNBCAA CMDMECMFCIK; // 0x30
//   private bool BLELLCNDBHN; // 0x34
//   private bool GBGHPLFONHD; // 0x35
//   private PGICCMFLDPI PAMNNAGEJGG; // 0x38
//   private bool KIAJFCGANAH; // 0x40
//   private AADKBCFCLKK AABMLCNHHPN; // 0x48
//   public int ANDOENDCBPM; // 0x50

// ===== public void MCGAMEJDDNG(LJNJDFEAIOH FLMDMALCFNA)  [RVA 0x32435FC]
// CHDGOFBHAFI$$MCGAMEJDDNG @ RVA 0x32435FC

void CHDGOFBHAFI__MCGAMEJDDNG(CHDGOFBHAFI_o *__this,LJNJDFEAIOH_o *FLMDMALCFNA,MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  
  if (FLMDMALCFNA != (LJNJDFEAIOH_o *)0x0) {
    ppPVar1 = &(__this->fields).PAMNNAGEJGG;
    if (*ppPVar1 != (PGICCMFLDPI_o *)0x0) {
      LJNJDFEAIOH__MCGAMEJDDNG(FLMDMALCFNA,*ppPVar1,(MethodInfo *)0x0);
      *ppPVar1 = (PGICCMFLDPI_o *)0x0;
      thunk_FUN_01c20e04(ppPVar1,0);
      return;
    }
  }
  return;
}


// ===== public string BGHMPINAEDC()  [RVA 0x324363C]
// CHDGOFBHAFI$$BGHMPINAEDC @ RVA 0x324363C

System_String_o * CHDGOFBHAFI__BGHMPINAEDC(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  int local_14;
  
  if ((DAT_045670a4 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&StringLiteral_10846/*"RaidFightTimeout"*/);
    DAT_045670a4 = 1;
    method = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(5,(MethodInfo *)0x0);
  local_14 = iVar1 + 1;
  pSVar2 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_10846/*"RaidFightTimeout"*/,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public void GJPOEDJOAAM(bool CJNHFNHJHPE)  [RVA 0x32436D0]
// CHDGOFBHAFI$$GJPOEDJOAAM @ RVA 0x32436D0

void CHDGOFBHAFI__GJPOEDJOAAM(CHDGOFBHAFI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((__this->fields).BLELLCNDBHN == CJNHFNHJHPE) {
    return;
  }
  pSVar1 = (__this->fields).MHOOOLECDKK;
  (__this->fields).BLELLCNDBHN = CJNHFNHJHPE;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03343708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int IFKJIIINHIO(IList<NODLJPNGNBG> KIFIMBGOPFG, long FKIGDGJPIAC)  [RVA 0x3243710]
// CHDGOFBHAFI$$IFKJIIINHIO @ RVA 0x3243710

/* WARNING: Removing unreachable block (ram,0x03343c54) */

int32_t CHDGOFBHAFI__IFKJIIINHIO
                  (CHDGOFBHAFI_o *__this,
                  System_Collections_Generic_IList_NODLJPNGNBG__o *KIFIMBGOPFG,int64_t FKIGDGJPIAC,
                  MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  AJOGJBFNELI_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Comparison_NODLJPNGNBG__o **ppSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_long__o *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  void *item;
  System_Int64_array *pSVar8;
  int32_t iVar9;
  System_Comparison_NODLJPNGNBG__o *comparison;
  int iVar10;
  int iVar11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045670a5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Values__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<long>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_<>c_PNIMLKNKFFM__);
    FUN_01bab630(&CHDGOFBHAFI_<>c_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<long>>_GetEnumerator__
                );
    DAT_045670a5 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    iVar4 = AJOGJBFNELI__BBOPDEOHOAI(__this_00,(MethodInfo *)0x0);
    if (0 < iVar4) {
      return iVar4;
    }
    __this_01 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NODLJPNGNBG>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)KIFIMBGOPFG,
               Method_System_Collections_Generic_List<NODLJPNGNBG>__ctor__);
    if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__35_0;
    if (comparison == (System_Comparison_NODLJPNGNBG__o *)0x0) {
      if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_NODLJPNGNBG__o *)
                   thunk_FUN_01bda818(System_Comparison<NODLJPNGNBG>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar5 = &CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__35_0;
      *ppSVar5 = comparison;
      thunk_FUN_01c20e04(ppSVar5,comparison);
    }
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                (__this_01,(System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<NODLJPNGNBG>_Sort__);
      __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_List<long>>_TypeInfo
                                    );
      System_Collections_Generic_Dictionary<int,_object>___ctor
                (__this_02,Method_System_Collections_Generic_Dictionary<int,_List<long>>__ctor__);
      if ((__this_01->fields)._size < 1) {
        if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
        goto LAB_03343c4c;
      }
      else {
        iVar10 = 0;
        do {
          pIVar6 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,iVar10,
                              Method_System_Collections_Generic_List<NODLJPNGNBG>_get_Item__);
          if ((pIVar6 == (Il2CppObject *)0x0) ||
             (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
          goto LAB_03343c4c;
          bVar3 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (__this_02,*(int32_t *)&pIVar6[2].klass,
                             Method_System_Collections_Generic_Dictionary<int,_List<long>>_ContainsKey__
                            );
          if (!bVar3) {
            iVar4 = *(int32_t *)&pIVar6[2].klass;
            pSVar7 = (System_Collections_Generic_List_long__o *)
                     thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
            System_Collections_Generic_List<long>___ctor
                      (pSVar7,Method_System_Collections_Generic_List<long>__ctor__);
            System_Collections_Generic_Dictionary<int,_object>__set_Item
                      (__this_02,iVar4,(Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<int,_List<long>>_set_Item__);
          }
          pSVar7 = (System_Collections_Generic_List_long__o *)
                   System_Collections_Generic_Dictionary<int,_object>__get_Item
                             (__this_02,*(int32_t *)&pIVar6[2].klass,
                              Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Item__
                             );
          lVar2 = Method_System_Collections_Generic_List<long>_Add__;
          if (pSVar7 == (System_Collections_Generic_List_long__o *)0x0) goto LAB_03343c4c;
          item = pIVar6[1].monitor;
          pSVar8 = (pSVar7->fields)._items;
          (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
          if (pSVar8 == (System_Int64_array *)0x0) goto LAB_03343c4c;
          uVar1 = (pSVar7->fields)._size;
          if (uVar1 < (uint)pSVar8->max_length) {
            (pSVar7->fields)._size = uVar1 + 1;
            pSVar8->m_Items[(int)uVar1] = (int64_t)item;
          }
          else {
            System_Collections_Generic_List<long>__AddWithResize
                      (pSVar7,(int64_t)item,
                       *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (__this_01->fields)._size);
      }
      __this_03 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_02,
                             Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Values__
                            );
      if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                  (&local_b8,__this_03,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<long>>_GetEnumerator__
                  );
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._dictionary = local_b8.fields._dictionary;
        local_80.fields._currentValue = local_b8.fields._currentValue;
        iVar4 = 1;
        do {
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_Dispose__
                      );
            return -1;
          }
          if ((System_Collections_Generic_List_long__o *)local_80.fields._currentValue ==
              (System_Collections_Generic_List_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<long>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                     (System_Collections_Generic_List_long__o *)local_80.fields._currentValue,
                     Method_System_Collections_Generic_List<long>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list =
               (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
          local_a0.fields._current = local_b8.fields._currentValue;
          iVar10 = iVar4;
          while (bVar3 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__
                                   ), bVar3) {
            if (local_a0.fields._current == (Il2CppObject *)FKIGDGJPIAC) {
              iVar11 = 0xc;
              iVar9 = iVar4;
              goto LAB_03343ba8;
            }
            iVar10 = iVar10 + 1;
          }
          iVar11 = 0xd;
          iVar9 = -1;
LAB_03343ba8:
          System_Collections_Generic_List_Enumerator<long>__Dispose
                    (&local_a0,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
          iVar4 = iVar10;
          if ((iVar11 != 0xd) && (iVar11 != 0)) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_Dispose__
                      );
            return iVar9;
          }
        } while( true );
      }
    }
  }
LAB_03343c4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LCMOGMIIEIN(Action CJNHFNHJHPE)  [RVA 0x3243D0C]
// CHDGOFBHAFI$$LCMOGMIIEIN @ RVA 0x3243D0C

void CHDGOFBHAFI__LCMOGMIIEIN(CHDGOFBHAFI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045670a6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045670a6 = 1;
  }
  ppSVar4 = &(__this->fields).OJAPEIKHMAP;
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


// ===== private void FBCCHHDEPDJ(bool JGOLIBCLOAN)  [RVA 0x3243DA8]
// CHDGOFBHAFI$$FBCCHHDEPDJ @ RVA 0x3243DA8

void CHDGOFBHAFI__FBCCHHDEPDJ(CHDGOFBHAFI_o *__this,bool JGOLIBCLOAN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  NODLJPNGNBG_o *pNVar5;
  NDPMLPGANCI_o *pNVar6;
  System_Action_DBMPKPJGIPI__o *pSVar7;
  long lVar8;
  FCJBEKHDLAF_o *__this_01;
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  CFMDGLMCNIL_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  AADKBCFCLKK_o *pAVar9;
  UnityEngine_Object_o *x;
  undefined1 auVar10 [16];
  CHDGOFBHAFI_o *__this_00;
  
  method_00 = (MethodInfo *)(ulong)JGOLIBCLOAN;
  __this_00 = __this;
  if ((DAT_045670a7 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&BGFHIINOIFE_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_HEJMPGIGELH__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    auVar10 = FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    method_00 = auVar10._8_8_;
    __this_00 = auVar10._0_8_;
    DAT_045670a7 = 1;
  }
  pAVar9 = (__this->fields).AABMLCNHHPN;
  if (pAVar9 == (AADKBCFCLKK_o *)0x0) {
    bVar2 = true;
  }
  else {
    pNVar5 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (pAVar9->fields).MPAIPMANDEO,method_00);
    if (pNVar5 == (NODLJPNGNBG_o *)0x0) goto LAB_033440b8;
    pAVar9 = (__this->fields).AABMLCNHHPN;
    bVar2 = (pNVar5->fields).PMMFPJJOPKE == (ICBMOMGINFH_o *)0x0;
    __this_00 = (CHDGOFBHAFI_o *)0x0;
    method_00 = extraout_x1;
    if (pAVar9 != (AADKBCFCLKK_o *)0x0) {
      bVar3 = OOBBAGLCFPF__ECCKBGBDALK(pAVar9,(MethodInfo *)0x0);
      __this_00 = (CHDGOFBHAFI_o *)(ulong)bVar3;
      method_00 = extraout_x1_00;
      if (bVar3) {
        return;
      }
    }
  }
  iVar1 = (__this->fields).CMDMECMFCIK;
  if (iVar1 == 1) {
    if ((bool)(bVar2 & !JGOLIBCLOAN)) {
      CHDGOFBHAFI__NFEEHFPJABC(__this_00,method_00);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar7 = (System_Action_DBMPKPJGIPI__o *)
               thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__NJBAKIMLGHB(pNVar6,pSVar7,(MethodInfo *)0x0);
        pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        pSVar7 = (System_Action_DBMPKPJGIPI__o *)
                 thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar6,pSVar7,(MethodInfo *)0x0);
          pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
            iVar4 = NDPMLPGANCI__FFIOCEOHPEM(pNVar6,(MethodInfo *)0x0);
            if (iVar4 == 6) {
              lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01b81620();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01b81620();
              }
              x = (UnityEngine_Object_o *)**(undefined8 **)(lVar8 + 0xb8);
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar2) {
                lVar8 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_01b81620();
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_01b81620();
                }
                if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_033440b8;
                __this_01 = *(FCJBEKHDLAF_o **)(**(long **)(lVar8 + 0xb8) + 0x90);
                if ((__this_01 != (FCJBEKHDLAF_o *)0x0) &&
                   ((__this_01->fields).KPNMLAECCEE == false)) {
                  FCJBEKHDLAF__LGBCIBOOMJP(__this_01,(MethodInfo *)0x0);
                }
              }
              if (JGOLIBCLOAN) {
                return;
              }
              KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(BGFHIINOIFE_TypeInfo);
              BGFHIINOIFE___ctor((BGFHIINOIFE_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_02 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
              if (__this_02 != (CFMDGLMCNIL_o *)0x0) {
                CFMDGLMCNIL__MPFFOIIBAKO(__this_02,KCPFFLHCCIN,true,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
                NDPMLPGANCI__EKPAFDJIAGI
                          (pNVar6,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
LAB_033440b8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (!JGOLIBCLOAN) {
      CHDGOFBHAFI__FFAGNLLDPGN(__this,method_00);
      return;
    }
  }
  return;
}


// ===== public void BNMEANHFGEB()  [RVA 0x32445C0]
// CHDGOFBHAFI$$BNMEANHFGEB @ RVA 0x32445C0

void CHDGOFBHAFI__BNMEANHFGEB(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  int iVar1;
  IBMLPPNMDCI_o *__this_00;
  Il2CppObject *pIVar2;
  HCKCBFOGMMJ_o *__this_01;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *pAVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar4;
  int index;
  
  if ((DAT_045670a8 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_BOPPNNMNDCB__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_045670a8 = 1;
    method = extraout_x1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  pAVar3 = (__this->fields).AABMLCNHHPN;
  if ((pAVar3 != (AADKBCFCLKK_o *)0x0) &&
     (pGVar4 = (pAVar3->fields).MPAIPMANDEO,
     pGVar4 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)) {
    iVar1 = (pGVar4->fields).count;
    if (iVar1 < 1) {
LAB_033446d4:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                    thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__EFCMPBGIEGJ(__this_01,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      index = 0;
      do {
        pGVar4 = (pAVar3->fields).MPAIPMANDEO;
        if ((((pGVar4 == (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) ||
             (pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                 ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,index,
                                  Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                                 ), __this_00 == (IBMLPPNMDCI_o *)0x0)) ||
            (pIVar2 == (Il2CppObject *)0x0)) ||
           (__this_02 = (__this_00->fields).EHBNKDHKJNI,
           __this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
        Google_Protobuf_Collections_RepeatedField<long>__Add
                  (__this_02,(int64_t)pIVar2[1].monitor,
                   Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        index = index + 1;
        if (iVar1 == index) goto LAB_033446d4;
        pAVar3 = (__this->fields).AABMLCNHHPN;
      } while (pAVar3 != (AADKBCFCLKK_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private NODLJPNGNBG PKKGAFHHDMN(AADKBCFCLKK IIPPMAOIKHB, NODLJPNGNBG JOKGJNFDJEE)  [RVA 0x3244754]
// CHDGOFBHAFI$$PKKGAFHHDMN @ RVA 0x3244754

NODLJPNGNBG_o *
CHDGOFBHAFI__PKKGAFHHDMN
          (CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,NODLJPNGNBG_o *JOKGJNFDJEE,
          MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_045670a9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_set_Item__);
    FUN_01bab630(&StringLiteral_10908/*"RaidManager::UpdateBattlePlayer: update Raid Player before setting RaidBattleInfo"*/);
    DAT_045670a9 = 1;
  }
  if (IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10908/*"RaidManager::UpdateBattlePlayer: update Raid Player before setting RaidBattleInfo"*/,(MethodInfo *)0x0);
    return JOKGJNFDJEE;
  }
  pGVar1 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
  if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    index = 0;
    do {
      if ((pGVar1->fields).count <= index) {
        return JOKGJNFDJEE;
      }
      pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                          Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
      if ((JOKGJNFDJEE == (NODLJPNGNBG_o *)0x0) || (pIVar2 == (Il2CppObject *)0x0)) break;
      if (((void *)(JOKGJNFDJEE->fields).ANAJGHJEEOC == pIVar2[1].monitor) &&
         (*(int *)&pIVar2[2].klass <= (JOKGJNFDJEE->fields).LINGIJDCLLC)) {
        pGVar1 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
        if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__set_Item
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                     (Il2CppObject *)JOKGJNFDJEE,
                     Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_set_Item__);
          return JOKGJNFDJEE;
        }
        break;
      }
      pGVar1 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
      index = index + 1;
    } while (pGVar1 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CBOCLANFPOC(Action CJNHFNHJHPE)  [RVA 0x3244888]
// CHDGOFBHAFI$$CBOCLANFPOC @ RVA 0x3244888

void CHDGOFBHAFI__CBOCLANFPOC(CHDGOFBHAFI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045670aa & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045670aa = 1;
  }
  ppSVar4 = &(__this->fields).OJAPEIKHMAP;
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


// ===== public void HHCMKPOJKFH(Action<CHDGOFBHAFI.DCENIHNBCAA> CJNHFNHJHPE)  [RVA 0x3244924]
// CHDGOFBHAFI$$HHCMKPOJKFH @ RVA 0x3244924

void CHDGOFBHAFI__HHCMKPOJKFH
               (CHDGOFBHAFI_o *__this,System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar5;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *source;
  
  if ((DAT_045670ab & 1) == 0) {
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    DAT_045670ab = 1;
  }
  source = (__this->fields).FELKMAJFHIE;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void LKBMEILOMKO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32449D4]
// CHDGOFBHAFI$$LKBMEILOMKO @ RVA 0x32449D4

void CHDGOFBHAFI__LKBMEILOMKO(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  CHDGOFBHAFI_o *__this_00;
  Il2CppObject *pIVar3;
  long lVar4;
  HCKCBFOGMMJ_o *__this_01;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  AKOMJPINHEN_o *__this_02;
  MethodInfo *in_x3;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_045670ac & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16984/*"chatLeaveRaid"*/);
    DAT_045670ac = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    __this_00 = (CHDGOFBHAFI_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
    CHDGOFBHAFI__PKKGAFHHDMN
              (__this_00,(__this->fields).AABMLCNHHPN,(NODLJPNGNBG_o *)__this_00,in_x3);
    if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
      if (*(int *)&(__this_00->fields).MHOOOLECDKK != 3) {
        return;
      }
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar4 = FUN_01bab718(string___TypeInfo,1);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if ((__this_01 != (HCKCBFOGMMJ_o *)0x0) &&
         (pSVar5 = HCKCBFOGMMJ__OKJEEFHMCCD
                             (__this_01,(int64_t)(__this_00->fields).LMKOLDHCAAK,true,
                              (MethodInfo *)0x0), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        *(System_String_o **)(lVar4 + 0x20) = pSVar5;
        thunk_FUN_01c20e04();
        uVar2 = StringLiteral_16984/*"chatLeaveRaid"*/;
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar7 = pIVar3->klass;
          uVar1._0_1_ = (pIVar7->_2).rank;
          uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar1;
          if (uVar8 != 0) {
            piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar6 = pIVar7->vtable + (*piVar9 + 0xc);
                goto LAB_03344b70;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03344b70:
          pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(pIVar3,uVar2,lVar4,pVVar6->method);
          __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
          if (__this_02 != (AKOMJPINHEN_o *)0x0) {
            AKOMJPINHEN__GJAEDMLMJIK(__this_02,pSVar5,2,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PDGPDPGFNPG(Action CJNHFNHJHPE)  [RVA 0x3244BC8]
// CHDGOFBHAFI$$PDGPDPGFNPG @ RVA 0x3244BC8

void CHDGOFBHAFI__PDGPDPGFNPG(CHDGOFBHAFI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045670ad & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045670ad = 1;
  }
  ppSVar4 = &(__this->fields).MHOOOLECDKK;
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


// ===== public void JOKHNMCDKJJ(Action CJNHFNHJHPE)  [RVA 0x3244C64]
// CHDGOFBHAFI$$JOKHNMCDKJJ @ RVA 0x3244C64

void CHDGOFBHAFI__JOKHNMCDKJJ(CHDGOFBHAFI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045670ae & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045670ae = 1;
  }
  ppSVar4 = &(__this->fields).LMKOLDHCAAK;
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


// ===== public bool BHHNJDDGDHF()  [RVA 0x3244D00]
// CHDGOFBHAFI$$BHHNJDDGDHF @ RVA 0x3244D00

bool CHDGOFBHAFI__BHHNJDDGDHF(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  NODLJPNGNBG_o *pNVar4;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  
  if ((DAT_045670af & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045670af = 1;
    method = extraout_x1;
  }
  IHODMKCBNKJ = (__this->fields).AABMLCNHHPN;
  if (IHODMKCBNKJ == (AADKBCFCLKK_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03344dac;
    iVar3 = EEGDOGKBLNG__NJNJAECEPCP(__this_00,(MethodInfo *)0x0);
    bVar2 = iVar3 == 3;
  }
  else {
    pNVar4 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (IHODMKCBNKJ->fields).MPAIPMANDEO,method);
    if (pNVar4 == (NODLJPNGNBG_o *)0x0) {
LAB_03344dac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pNVar4->fields).PFJPLCAIGJH;
    bVar2 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0);
    bVar2 = iVar1 != 3 && !bVar2;
  }
  return (bool)((__this->fields).KIAJFCGANAH | bVar2);
}


// ===== private void APJEPMMMMOJ(object IMMNELPBGIF)  [RVA 0x3244DB0]
// CHDGOFBHAFI$$APJEPMMMMOJ @ RVA 0x3244DB0

void CHDGOFBHAFI__APJEPMMMMOJ(CHDGOFBHAFI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int *piVar3;
  GCIFMNHADDF_o *__this_00;
  NDPMLPGANCI_o *pNVar4;
  FKDLCJJOGIP_o *__this_01;
  
  if ((DAT_045670b0 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045670b0 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar3 = (int *)thunk_FUN_01bda96c();
    if ((*piVar3 != 0) && (bVar1 = KJFLIAMBKEB__HENGLKECBAC((MethodInfo *)0x0), bVar1)) {
      __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (GCIFMNHADDF_o *)0x0) {
        GCIFMNHADDF__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
        pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
          if (iVar2 != 5) {
            pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pNVar4 == (NDPMLPGANCI_o *)0x0) goto LAB_03344e9c;
            NDPMLPGANCI__EKPAFDJIAGI
                      (pNVar4,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                       (MethodInfo *)0x0);
          }
          __this_01 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_01 != (FKDLCJJOGIP_o *)0x0) {
            FKDLCJJOGIP__LGBOGFICFPF(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
LAB_03344e9c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void ANJLFIBGDHP()  [RVA 0x3244EA0]
// CHDGOFBHAFI$$ANJLFIBGDHP @ RVA 0x3244EA0

void CHDGOFBHAFI__ANJLFIBGDHP(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  PPJGIFEJMHP_o *pPVar1;
  System_Action_o *pSVar2;
  AADKBCFCLKK_o **ppAVar3;
  
  if ((DAT_045670b1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_HLINFJGKPNE__);
    FUN_01bab630(&Method_CHDGOFBHAFI_KPGCOFLGEAI__);
    DAT_045670b1 = 1;
  }
  pPVar1 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pPVar1 != (PPJGIFEJMHP_o *)0x0) {
    PPJGIFEJMHP__HKBJKGJHLNJ(pPVar1,pSVar2,(MethodInfo *)0x0);
    ppAVar3 = &(__this->fields).AABMLCNHHPN;
    *ppAVar3 = (AADKBCFCLKK_o *)0x0;
    thunk_FUN_01c20e04(ppAVar3,0);
    pPVar1 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar1 != (PPJGIFEJMHP_o *)0x0) {
      PPJGIFEJMHP__HKBJKGJHLNJ(pPVar1,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool KMNHPACMPFD()  [RVA 0x3244FA0]
// CHDGOFBHAFI$$KMNHPACMPFD @ RVA 0x3244FA0

bool CHDGOFBHAFI__KMNHPACMPFD(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  return (__this->fields).BLELLCNDBHN;
}


// ===== public void LGOOGCHEAMA(Action CJNHFNHJHPE)  [RVA 0x3244FA8]
// CHDGOFBHAFI$$LGOOGCHEAMA @ RVA 0x3244FA8

void CHDGOFBHAFI__LGOOGCHEAMA(CHDGOFBHAFI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045670b2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045670b2 = 1;
  }
  ppSVar4 = &(__this->fields).MHOOOLECDKK;
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


// ===== public void OJOMBBENIHM(bool AEDMPPIEKKP)  [RVA 0x3245044]
// CHDGOFBHAFI$$OJOMBBENIHM @ RVA 0x3245044

void CHDGOFBHAFI__OJOMBBENIHM(CHDGOFBHAFI_o *__this,bool AEDMPPIEKKP,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t iVar3;
  AJOGJBFNELI_o *pAVar4;
  CNLGMNIEGFG_o *pCVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  NODLJPNGNBG_o *pNVar7;
  NGOFOPOGBMJ_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  CHDGOFBHAFI_o *pCVar8;
  EEGDOGKBLNG_o *pEVar9;
  AKOMJPINHEN_o *__this_02;
  NDPMLPGANCI_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  AADKBCFCLKK_o *pAVar10;
  KDADMJGPAOM_o *pKVar11;
  DNELIPCHKLK_o *pDVar12;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar13;
  ACHLOMELAJE_o *pAVar14;
  LPAPAMPGDFN_o *pLVar15;
  long lVar16;
  PKHMIGFEJCL_o *pPVar17;
  System_String_o **ppSVar18;
  
  if ((DAT_045670b3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14949/*"Win"*/);
    FUN_01bab630(&StringLiteral_20401/*"raid_battle_leave"*/);
    FUN_01bab630(&StringLiteral_8676/*"Loss"*/);
    FUN_01bab630(&StringLiteral_10478/*"Probably we have already done endRaid! Look here for mistakes"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670b3 = 1;
  }
  pAVar10 = (__this->fields).AABMLCNHHPN;
  if (pAVar10 == (AADKBCFCLKK_o *)0x0) {
    return;
  }
  lVar16 = (pAVar10->fields).AMKHEHFFAKJ;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (pAVar4 != (AJOGJBFNELI_o *)0x0) {
    iVar3 = AJOGJBFNELI__OAACOOCKAHA(pAVar4,(MethodInfo *)0x0);
    if (lVar16 == iVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10478/*"Probably we have already done endRaid! Look here for mistakes"*/,(MethodInfo *)0x0);
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    pAVar10 = (__this->fields).AABMLCNHHPN;
    if ((pAVar10 != (AADKBCFCLKK_o *)0x0) && (pAVar4 != (AJOGJBFNELI_o *)0x0)) {
      AJOGJBFNELI__NADKOHFMNLK(pAVar4,(int32_t)(pAVar10->fields).AMKHEHFFAKJ,(MethodInfo *)0x0);
      pAVar10 = (__this->fields).AABMLCNHHPN;
      if ((pAVar10 != (AADKBCFCLKK_o *)0x0) &&
         (pKVar11 = (pAVar10->fields).LHFLMBNKPHF, pKVar11 != (KDADMJGPAOM_o *)0x0)) {
        iVar3 = (pKVar11->fields).IILCHFKCEEH;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pCVar5 = MGNPHCAAEIO__MJDCGINJMOP(iVar3,false,(MethodInfo *)0x0);
        pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (((pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
            (pCVar5 != (CNLGMNIEGFG_o *)0x0)) &&
           (pPVar17 = (pNVar6->fields).QuestParameters, pPVar17 != (PKHMIGFEJCL_o *)0x0)) {
          (pPVar17->fields).NMHCLFFOMJH = (pCVar5->fields).super.KOILJHHCIEE;
          thunk_FUN_01c20e04();
          pDVar12 = (pCVar5->fields).super.KOILJHHCIEE;
          if (pDVar12 != (DNELIPCHKLK_o *)0x0) {
            (pPVar17->fields).EICOIEGEFAF = (pDVar12->fields).GJFJPLHCBKJ;
            thunk_FUN_01c20e04();
            pAVar10 = (__this->fields).AABMLCNHHPN;
            if ((pAVar10 != (AADKBCFCLKK_o *)0x0) &&
               (pKVar11 = (pAVar10->fields).LHFLMBNKPHF, pKVar11 != (KDADMJGPAOM_o *)0x0)) {
              (pPVar17->fields).OILECKFDMDB = (pKVar11->fields).IILCHFKCEEH;
              pNVar7 = CHDGOFBHAFI__AFHLHFMLNEO
                                 ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                                  (pAVar10->fields).MPAIPMANDEO,method_00);
              if (pNVar7 != (NODLJPNGNBG_o *)0x0) {
                puVar1 = &StringLiteral_8676/*"Loss"*/;
                if ((pNVar7->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0) {
                  puVar1 = &StringLiteral_14949/*"Win"*/;
                }
                ppSVar18 = &(pPVar17->fields).LOLFFJGLKLD;
                *ppSVar18 = (System_String_o *)*puVar1;
                thunk_FUN_01c20e04(ppSVar18);
                bVar2 = OOBBAGLCFPF__FLMDOPMDKID((__this->fields).AABMLCNHHPN,(MethodInfo *)0x0);
                if ((bVar2) &&
                   (bVar2 = OOBBAGLCFPF__LJEHOIFPLJK((__this->fields).AABMLCNHHPN,(MethodInfo *)0x0)
                   , !bVar2)) {
                  __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
                  NGOFOPOGBMJ___ctor(__this_00,(MethodInfo *)0x0);
                  pAVar10 = (__this->fields).AABMLCNHHPN;
                  if ((pAVar10 == (AADKBCFCLKK_o *)0x0) || (__this_00 == (NGOFOPOGBMJ_o *)0x0))
                  goto LAB_03345428;
                  (__this_00->fields).GDKPGIBMFPA = (pAVar10->fields).AMKHEHFFAKJ;
                  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                  if (__this_01 == (KKLJIDJBFEI_o *)0x0) goto LAB_03345428;
                  KDPDBGNOFEN__KLNMLOOCAAO
                            ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20401/*"raid_battle_leave"*/,
                             (Google_Protobuf_IMessage_o *)__this_00,
                             (System_Action_KEFHDOHHHML__o *)0x0,0.0,(Il2CppObject *)0x0,
                             (MethodInfo *)0x0);
                }
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                if (pCVar8 != (CHDGOFBHAFI_o *)0x0) {
                  CHDGOFBHAFI__ANJLFIBGDHP(pCVar8,method_01);
                  pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
                    EEGDOGKBLNG__JJBFCLBGNBO(pEVar9,0,(MethodInfo *)0x0);
                    pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
                      EEGDOGKBLNG__FKAKMNIANAK(pEVar9,2,(MethodInfo *)0x0);
                      pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                      if (pCVar8 != (CHDGOFBHAFI_o *)0x0) {
                        pSVar13 = (pCVar8->fields).FELKMAJFHIE;
                        (pCVar8->fields).CMDMECMFCIK = 0;
                        if (pSVar13 != (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)0x0) {
                          (*(code *)(pSVar13->fields).super.super.invoke_impl)
                                    ((pSVar13->fields).super.super.method_code,0,
                                     (pSVar13->fields).super.super.method);
                          __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                          if (__this_02 != (AKOMJPINHEN_o *)0x0) {
                            AKOMJPINHEN__KHFOCHBBBLH(__this_02,2,(MethodInfo *)0x0);
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
                            pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->
                                      _EDIEPEOIMDF_k__BackingField;
                            if ((pAVar14 != (ACHLOMELAJE_o *)0x0) &&
                               (pLVar15 = (pAVar14->fields).LMCDOMHENMC,
                               pLVar15 != (LPAPAMPGDFN_o *)0x0)) {
                              if ((pLVar15->fields).AMIMEMOELHE != 0x32) {
                                __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                                if (__this_03 == (NDPMLPGANCI_o *)0x0) goto LAB_03345428;
                                NDPMLPGANCI__KJGGEPNHOBK(__this_03,(MethodInfo *)0x0);
                              }
                              if (!AEDMPPIEKKP) {
                                return;
                              }
                              pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance
                                                 ((MethodInfo *)0x0);
                              if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                                Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
                                          (pNVar6,0x24,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03345428:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NMCMPPIKBJP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3245454]
// CHDGOFBHAFI$$NMCMPPIKBJP @ RVA 0x3245454

void CHDGOFBHAFI__NMCMPPIKBJP(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  KCPFIELGGLA_o *GMCEHJAIFBJ;
  EEGDOGKBLNG_o *__this_00;
  
  if ((DAT_045670b4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KCPFIELGGLA>__);
    __this = (CHDGOFBHAFI_o *)FUN_01bab630(&StringLiteral_20404/*"raid_battle_player_start resposnse fail"*/);
    DAT_045670b4 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20404/*"raid_battle_player_start resposnse fail"*/,(MethodInfo *)0x0);
      return;
    }
    GMCEHJAIFBJ = (KCPFIELGGLA_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KCPFIELGGLA>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    __this = (CHDGOFBHAFI_o *)0x0;
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__BALIJLHGKFM(__this_00,GMCEHJAIFBJ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void MHJKLCKMFMO(KDADMJGPAOM NHKCCGPADIJ)  [RVA 0x3245544]
// CHDGOFBHAFI$$MHJKLCKMFMO @ RVA 0x3245544

void CHDGOFBHAFI__MHJKLCKMFMO(CHDGOFBHAFI_o *__this,KDADMJGPAOM_o *NHKCCGPADIJ,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  
  pAVar1 = (__this->fields).AABMLCNHHPN;
  if (pAVar1 != (AADKBCFCLKK_o *)0x0) {
    (pAVar1->fields).LHFLMBNKPHF = NHKCCGPADIJ;
    thunk_FUN_01c20e04();
    return;
  }
  return;
}


// ===== private void ECOKPPHJIIH(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3245558]
// CHDGOFBHAFI$$ECOKPPHJIIH @ RVA 0x3245558

void CHDGOFBHAFI__ECOKPPHJIIH(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  AADKBCFCLKK_o *pAVar4;
  long lVar5;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar6;
  HCKCBFOGMMJ_o *__this_01;
  System_String_o *pSVar7;
  System_String_array *values;
  UnityEngine_Object_o *x;
  FCJBEKHDLAF_o *__this_02;
  undefined4 local_24;
  
  if ((DAT_045670b5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_10909/*"RaidManager::onBattleFinishRoundEvent No raid fight  "*/);
    FUN_01bab630(&StringLiteral_88/*"\nMay be FightScene not fully loaded"*/);
    FUN_01bab630(&StringLiteral_10910/*"RaidManager::onBattleFinishRoundEvent fail"*/);
    DAT_045670b5 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
LAB_03345908:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03345908;
    pAVar4 = (__this->fields).AABMLCNHHPN;
    if (pAVar4 != (AADKBCFCLKK_o *)0x0) {
      (pAVar4->fields).LHFLMBNKPHF = (KDADMJGPAOM_o *)pIVar3[2].klass;
      thunk_FUN_01c20e04();
    }
    if ((__this->fields).CMDMECMFCIK == 2) {
      lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01b81620();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01b81620();
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          __this_02 = *(FCJBEKHDLAF_o **)(**(long **)(lVar5 + 0xb8) + 0x90);
          if ((__this_02 == (FCJBEKHDLAF_o *)0x0) ||
             (iVar2 = FCJBEKHDLAF__IHMLDBDLJON(__this_02,(MethodInfo *)0x0), iVar2 != 0x14)) {
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            if (values != (System_String_array *)0x0) {
              if ((int)values->max_length != 0) {
                values->m_Items[0] = StringLiteral_10909/*"RaidManager::onBattleFinishRoundEvent No raid fight  "*/;
                thunk_FUN_01c20e04(values->m_Items);
                local_24 = *(undefined4 *)&pIVar3[2].monitor;
                pSVar7 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = pSVar7;
                  thunk_FUN_01c20e04(values->m_Items + 1,pSVar7);
                  if (2 < (uint)values->max_length) {
                    values->m_Items[2] = StringLiteral_167/*" "*/;
                    thunk_FUN_01c20e04();
                    if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_03345908;
                    local_24 = *(undefined4 *)&((pIVar3[2].klass)->_1).namespaze;
                    pSVar7 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                    if (3 < (uint)values->max_length) {
                      values->m_Items[3] = pSVar7;
                      thunk_FUN_01c20e04(values->m_Items + 3,pSVar7);
                      if (4 < (uint)values->max_length) {
                        values->m_Items[4] = StringLiteral_88/*"\nMay be FightScene not fully loaded"*/;
                        thunk_FUN_01c20e04();
                        pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
                        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                        }
                        UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          else {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
              iVar6 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
              if (pIVar3[1].monitor != (void *)0x0) {
                if (iVar6 == *(long *)((long)pIVar3[1].monitor + 0x18)) {
                  return;
                }
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                if ((pIVar3[1].monitor != (void *)0x0) && (__this_01 != (HCKCBFOGMMJ_o *)0x0)) {
                  pSVar7 = HCKCBFOGMMJ__OKJEEFHMCCD
                                     (__this_01,*(int64_t *)((long)pIVar3[1].monitor + 0x18),true,
                                      (MethodInfo *)0x0);
                  if (pIVar3[2].klass != (Il2CppClass *)0x0) {
                    FCJBEKHDLAF__PKHKLAJCKDM
                              (__this_02,pSVar7,*(int32_t *)&pIVar3[2].monitor,
                               *(int32_t *)((long)&((pIVar3[2].klass)->_1).namespaze + 4),
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        goto LAB_03345908;
      }
    }
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10910/*"RaidManager::onBattleFinishRoundEvent fail"*/,(MethodInfo *)0x0);
  }
  return;
}


// ===== private void FHJKIMLIDMP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3245910]
// CHDGOFBHAFI$$FHJKIMLIDMP @ RVA 0x3245910

void CHDGOFBHAFI__FHJKIMLIDMP(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  bool bVar1;
  Il2CppObject *pIVar2;
  CNLGMNIEGFG_o *pCVar3;
  NGOFOPOGBMJ_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  AADKBCFCLKK_o *pAVar4;
  Il2CppClass *method_00;
  MethodInfo *in_x3;
  KDADMJGPAOM_o *pKVar5;
  
  if ((DAT_045670b6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_20401/*"raid_battle_leave"*/);
    FUN_01bab630(&StringLiteral_5869/*"Error get current battle info!"*/);
    DAT_045670b6 = 1;
  }
  if ((IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) ||
     (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), !bVar1)) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5869/*"Error get current battle info!"*/,(MethodInfo *)0x0);
    return;
  }
  pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                     (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pAVar4 = pIVar2[1].monitor;
    if (pAVar4 == (AADKBCFCLKK_o *)0x0) goto LAB_03345acc;
    if (0 < (pAVar4->fields).AMKHEHFFAKJ) {
      pKVar5 = (pAVar4->fields).LHFLMBNKPHF;
      if (pKVar5 == (KDADMJGPAOM_o *)0x0) {
LAB_03345acc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OILECKFDMDB = (pKVar5->fields).IILCHFKCEEH;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar3 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
      if (pCVar3 == (CNLGMNIEGFG_o *)0x0) {
        __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
        NGOFOPOGBMJ___ctor(__this_00,(MethodInfo *)0x0);
        if ((pIVar2[1].monitor != (void *)0x0) && (__this_00 != (NGOFOPOGBMJ_o *)0x0)) {
          (__this_00->fields).GDKPGIBMFPA = *(int64_t *)((long)pIVar2[1].monitor + 0x18);
          __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
            KDPDBGNOFEN__KLNMLOOCAAO
                      ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20401/*"raid_battle_leave"*/,
                       (Google_Protobuf_IMessage_o *)__this_00,(System_Action_KEFHDOHHHML__o *)0x0,
                       0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_03345acc;
      }
      pAVar4 = pIVar2[1].monitor;
    }
    method_00 = pIVar2[2].klass;
    CHDGOFBHAFI__BNPLDAHKIED(__this,pAVar4,(PGICCMFLDPI_o *)method_00,in_x3);
    pAVar4 = (__this->fields).AABMLCNHHPN;
    if (pAVar4 != (AADKBCFCLKK_o *)0x0) {
      CHDGOFBHAFI__BNMEADIMLGA(__this,(pAVar4->fields).AMKHEHFFAKJ,(MethodInfo *)method_00);
      return;
    }
  }
  return;
}


// ===== private void PFODHKJNBMG(object IMMNELPBGIF)  [RVA 0x3245E3C]
// CHDGOFBHAFI$$PFODHKJNBMG @ RVA 0x3245E3C

void CHDGOFBHAFI__PFODHKJNBMG(CHDGOFBHAFI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *pGVar2;
  System_Action_T__o *IELDNEAAPBE;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  
  if ((DAT_045670b7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_PFODHKJNBMG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    DAT_045670b7 = 1;
  }
  pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
    __this_01 = (pGVar2->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03345f44;
      Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_00,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_03345f44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KPGCOFLGEAI()  [RVA 0x3245F48]
// CHDGOFBHAFI$$KPGCOFLGEAI @ RVA 0x3245F48

void CHDGOFBHAFI__KPGCOFLGEAI(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  CHDGOFBHAFI_o *pCVar4;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  undefined1 auVar5 [16];
  
  if ((DAT_045670b8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_045670b8 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).CMDMECMFCIK != 2) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    auVar5._8_8_ = method;
    auVar5._0_8_ = lVar3;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      auVar5 = FUN_01b81620(lVar3,method);
    }
    lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_033460b0;
      uVar2 = Nekki_SF2_GUI_Shop_ShopScene__get_CurrentSliderType
                        ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                         (MethodInfo *)0x0);
      if ((uVar2 & 0xfffffffe) == 6) {
        return;
      }
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar4 == (CHDGOFBHAFI_o *)0x0) {
LAB_033460b0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IHODMKCBNKJ = (pCVar4->fields).AABMLCNHHPN;
    if (((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
        (bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0), !bVar1)) &&
       (bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IHODMKCBNKJ,(MethodInfo *)0x0), !bVar1)) {
      EDFDANKEBGF__KDKLIPFALGJ((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public void ANPOBDHGAOI(bool CJNHFNHJHPE)  [RVA 0x32460B4]
// CHDGOFBHAFI$$ANPOBDHGAOI @ RVA 0x32460B4

void CHDGOFBHAFI__ANPOBDHGAOI(CHDGOFBHAFI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GBGHPLFONHD = CJNHFNHJHPE;
  return;
}


// ===== public void IEMLFDPOMMD()  [RVA 0x32460C0]
// CHDGOFBHAFI$$IEMLFDPOMMD @ RVA 0x32460C0

void CHDGOFBHAFI__IEMLFDPOMMD(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  PPJGIFEJMHP_o *__this_00;
  System_Action_o *KCPFFLHCCIN;
  
                    /* try { // try from 033460d4 to 03446203 has its CatchHandler @ 033460d4
                       catch() { ... } // from try @ 033460d4 with catch @ 033460d4
                       catch() { ... } // from try @ 03346358 with catch @ 033460d4
                       catch() { ... } // from try @ 03346438 with catch @ 033460d4
                       catch() { ... } // from try @ 03346440 with catch @ 033460d4
                       catch() { ... } // from try @ 03346510 with catch @ 033460d4 */
  if ((DAT_045670b9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_KPGCOFLGEAI__);
    DAT_045670b9 = 1;
  }
  __this_00 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
  KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (PPJGIFEJMHP_o *)0x0) {
    PPJGIFEJMHP__HKBJKGJHLNJ(__this_00,KCPFFLHCCIN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BNMEADIMLGA(long ONDIKKMLEDD)  [RVA 0x3245C94]
// CHDGOFBHAFI$$BNMEADIMLGA @ RVA 0x3245C94

void CHDGOFBHAFI__BNMEADIMLGA(CHDGOFBHAFI_o *__this,int64_t ONDIKKMLEDD,MethodInfo *method)

{
  bool bVar1;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  System_Action_object__o *IELDNEAAPBE;
  NGOFOPOGBMJ_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *in_x4;
  
  if ((DAT_045670ba & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_APJEPMMMMOJ__);
    FUN_01bab630(&Method_CHDGOFBHAFI_FHJKIMLIDMP__);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_20400/*"raid_battle_get_info"*/);
    FUN_01bab630(&StringLiteral_18199/*"fastRaidLoad"*/);
    FUN_01bab630(&StringLiteral_16973/*"character_sensei"*/);
    DAT_045670ba = 1;
  }
  IHODMKCBNKJ = (__this->fields).AABMLCNHHPN;
  if (IHODMKCBNKJ == (AADKBCFCLKK_o *)0x0) {
    if (ONDIKKMLEDD != 0) {
      __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
      NGOFOPOGBMJ___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (NGOFOPOGBMJ_o *)0x0) {
        (__this_00->fields).GDKPGIBMFPA = ONDIKKMLEDD;
        __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20400/*"raid_battle_get_info"*/,
                     (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0);
    if (!bVar1) {
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      CHDGOFBHAFI__JBFJCBGGOOP(__this,StringLiteral_16973/*"character_sensei"*/,StringLiteral_18199/*"fastRaidLoad"*/,IELDNEAAPBE,in_x4);
      return;
    }
  }
  return;
}


// ===== public void KAKPCFDHFJM(int OILECKFDMDB, Action<KEFHDOHHHML> IELDNEAAPBE)  [RVA 0x3246498]
// CHDGOFBHAFI$$KAKPCFDHFJM @ RVA 0x3246498

void CHDGOFBHAFI__KAKPCFDHFJM
               (CHDGOFBHAFI_o *__this,int32_t OILECKFDMDB,System_Action_KEFHDOHHHML__o *IELDNEAAPBE,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *pSVar1;
  
                    /* catch() { ... } // from try @ 03346490 with catch @ 033464a8 */
  (__this->fields).KIAJFCGANAH = true;
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__BJNFKIGGKIH(__this_00,IELDNEAAPBE,OILECKFDMDB,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).LMKOLDHCAAK;
    if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 033464e8 to 0344650f has its CatchHandler @ 03346524 */
                    /* WARNING: Could not recover jumptable at 0x033464ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BFBKJDGKCAJ(object IMMNELPBGIF)  [RVA 0x32464F4]
// CHDGOFBHAFI$$BFBKJDGKCAJ @ RVA 0x32464F4

void CHDGOFBHAFI__BFBKJDGKCAJ(CHDGOFBHAFI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  
  if ((DAT_045670bb & 1) == 0) {
                    /* try { // try from 03346510 to 0344651b has its CatchHandler @ 033460d4 */
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0334651c to 03446523 has its CatchHandler @ 03346524 */
    DAT_045670bb = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 033464e8 with catch @ 03346524
                       catch() { ... } // from try @ 0334651c with catch @ 03346524 */
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 1) {
      JJPNLEPEAFM__OCJEIOMBDKP((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private void NFEEHFPJABC()  [RVA 0x32442E0]
// CHDGOFBHAFI$$NFEEHFPJABC @ RVA 0x32442E0

void CHDGOFBHAFI__NFEEHFPJABC(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  System_String_o *EHNFGMGKCHO;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = __this;
  if ((DAT_045670bc & 1) == 0) {
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    auVar1 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670bc = 1;
  }
  EHNFGMGKCHO = CHDGOFBHAFI__BGHMPINAEDC(auVar1._0_8_,auVar1._8_8_);
  JJPNLEPEAFM__OOOIOMHJONP
            (StringLiteral_17756/*"dlgAlertTitle"*/,EHNFGMGKCHO,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,
             (MethodInfo *)0x0);
  return;
}


// ===== private void KGPBODNEJMO(AADKBCFCLKK ODDALEAFOHI)  [RVA 0x3246578]
// CHDGOFBHAFI$$KGPBODNEJMO @ RVA 0x3246578

void CHDGOFBHAFI__KGPBODNEJMO(CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *ODDALEAFOHI,MethodInfo *method)

{
  PPJGIFEJMHP_o *pPVar1;
  System_Action_o *pSVar2;
  int64_t JNJCMIEHOHC;
  
  if ((DAT_045670bd & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_HLINFJGKPNE__);
    DAT_045670bd = 1;
  }
  pPVar1 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
  pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pPVar1 != (PPJGIFEJMHP_o *)0x0) {
    PPJGIFEJMHP__HKBJKGJHLNJ(pPVar1,pSVar2,(MethodInfo *)0x0);
    pPVar1 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    JNJCMIEHOHC = OOBBAGLCFPF__ECMGIIFNEDE(ODDALEAFOHI,(MethodInfo *)0x0);
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar1 != (PPJGIFEJMHP_o *)0x0) {
      PPJGIFEJMHP__LGDEICDAEAF(pPVar1,JNJCMIEHOHC,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool PGFAHOMKNBL()  [RVA 0x3246674]
// CHDGOFBHAFI$$PGFAHOMKNBL @ RVA 0x3246674

bool CHDGOFBHAFI__PGFAHOMKNBL(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NODLJPNGNBG_o *pNVar3;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *pAVar4;
  
  if ((DAT_045670be & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045670be = 1;
    method = extraout_x1;
  }
  pAVar4 = (__this->fields).AABMLCNHHPN;
  if (pAVar4 == (AADKBCFCLKK_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03346718;
    iVar2 = EEGDOGKBLNG__NJNJAECEPCP(__this_00,(MethodInfo *)0x0);
    bVar1 = iVar2 == 3;
  }
  else {
    pNVar3 = CHDGOFBHAFI__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (pAVar4->fields).MPAIPMANDEO,method);
    if (pNVar3 == (NODLJPNGNBG_o *)0x0) {
LAB_03346718:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (pNVar3->fields).PFJPLCAIGJH != 3;
  }
  return (bool)((__this->fields).KIAJFCGANAH == false & (bVar1 ^ 1U));
}


// ===== public AADKBCFCLKK GPBDJJFMIPF()  [RVA 0x324671C]
// CHDGOFBHAFI$$GPBDJJFMIPF @ RVA 0x324671C

AADKBCFCLKK_o * CHDGOFBHAFI__GPBDJJFMIPF(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  return (__this->fields).AABMLCNHHPN;
}


// ===== private void HEJMPGIGELH(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x3246724]
// CHDGOFBHAFI$$HEJMPGIGELH @ RVA 0x3246724

void CHDGOFBHAFI__HEJMPGIGELH(CHDGOFBHAFI_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
  if ((DAT_045670bf & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_CHDGOFBHAFI_HEJMPGIGELH__);
    DAT_045670bf = 1;
  }
  JJPNLEPEAFM__OCJEIOMBDKP((MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JBFJCBGGOOP(string IEPECMCLKJB, string IHNKCJHDDKD, Action<object> IELDNEAAPBE)  [RVA 0x324615C]
// CHDGOFBHAFI$$JBFJCBGGOOP @ RVA 0x324615C

void CHDGOFBHAFI__JBFJCBGGOOP
               (CHDGOFBHAFI_o *__this,System_String_o *IEPECMCLKJB,System_String_o *IHNKCJHDDKD,
               System_Action_object__o *IELDNEAAPBE,MethodInfo *method)

{
  uint uVar1;
  System_Action_object__c *pSVar2;
  bool bVar3;
  int32_t iVar4;
  long lVar5;
  FCJBEKHDLAF_o *__this_00;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_01;
  System_Delegate_o *pSVar6;
  System_Action_object__o *BLMFLPJJMPF;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_02;
  NBLEEDEAPHB_array *pNVar7;
  UnityEngine_Object_o *x;
  
  if ((DAT_045670c0 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_BFBKJDGKCAJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&StringLiteral_18050/*"enterRaid"*/);
                    /* try { // try from 03346204 to 0344622b has its CatchHandler @ 0334646c */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670c0 = 1;
  }
  lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* try { // try from 03346260 to 0344629b has its CatchHandler @ 03346478 */
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
                    /* try { // try from 0334629c to 034462a3 has its CatchHandler @ 03346468 */
    if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_03346494;
                    /* try { // try from 033462a8 to 034462b7 has its CatchHandler @ 03346450 */
    if (*(long *)(**(long **)(lVar5 + 0xb8) + 0x90) != 0) {
      lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
                    /* try { // try from 033462bc to 034462cb has its CatchHandler @ 03346474 */
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
                    /* try { // try from 033462d8 to 034462df has its CatchHandler @ 03346460 */
                    /* try { // try from 033462e8 to 034462ef has its CatchHandler @ 0334644c */
      if ((**(long **)(lVar5 + 0xb8) == 0) ||
         (__this_00 = *(FCJBEKHDLAF_o **)(**(long **)(lVar5 + 0xb8) + 0x90),
         __this_00 == (FCJBEKHDLAF_o *)0x0)) goto LAB_03346494;
      iVar4 = FCJBEKHDLAF__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
      if (iVar4 != 0) {
        return;
      }
    }
  }
  IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  __this_01 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
                    /* try { // try from 03346334 to 03446357 has its CatchHandler @ 03346454 */
                    /* try { // try from 03346358 to 03446423 has its CatchHandler @ 033460d4 */
  NBLEEDEAPHB___ctor(__this_01,IHNKCJHDDKD,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                     (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  lVar5 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    pNVar7 = (IJIPABLCAKE->fields)._items;
    (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
    if (pNVar7 != (NBLEEDEAPHB_array *)0x0) {
      uVar1 = (IJIPABLCAKE->fields)._size;
      if (uVar1 < (uint)pNVar7->max_length) {
        (IJIPABLCAKE->fields)._size = uVar1 + 1;
        pNVar7->m_Items[(int)uVar1] = __this_01;
        thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   (Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pSVar6 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      pSVar6 = System_Delegate__Combine(pSVar6,(System_Delegate_o *)IELDNEAAPBE,(MethodInfo *)0x0);
      pSVar2 = System_Action<object>_TypeInfo;
      if (pSVar6 == (System_Delegate_o *)0x0) {
                    /* try { // try from 03346430 to 03446433 has its CatchHandler @ 0334645c */
        BLMFLPJJMPF = (System_Action_object__o *)0x0;
      }
      else {
        BLMFLPJJMPF = (System_Action_object__o *)
                      thunk_FUN_01bda71c(pSVar6,System_Action<object>_TypeInfo);
        if (BLMFLPJJMPF == (System_Action_object__o *)0x0) {
                    /* try { // try from 03346424 to 03446427 has its CatchHandler @ 03346470 */
                    /* try { // try from 03346428 to 0344642b has its CatchHandler @ 03346464 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0334642c to 0344642f has its CatchHandler @ 03346470 */
          FUN_01babc64(pSVar6,pSVar2);
        }
      }
                    /* try { // try from 03346434 to 03446437 has its CatchHandler @ 03346458 */
                    /* try { // try from 03346438 to 0344643b has its CatchHandler @ 033460d4 */
      __this_02 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 0334643c to 0344643f has its CatchHandler @ 03346448 */
      if (__this_02 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* try { // try from 03346440 to 0344648f has its CatchHandler @ 033460d4 */
                    /* catch() { ... } // from try @ 0334643c with catch @ 03346448 */
                    /* catch() { ... } // from try @ 033462e8 with catch @ 0334644c */
                    /* catch() { ... } // from try @ 033462a8 with catch @ 03346450 */
                    /* catch() { ... } // from try @ 03346334 with catch @ 03346454 */
                    /* catch() { ... } // from try @ 03346434 with catch @ 03346458 */
                    /* catch() { ... } // from try @ 03346430 with catch @ 0334645c */
                    /* catch() { ... } // from try @ 033462d8 with catch @ 03346460 */
                    /* catch() { ... } // from try @ 03346428 with catch @ 03346464 */
                    /* catch() { ... } // from try @ 0334629c with catch @ 03346468 */
                    /* catch() { ... } // from try @ 03346204 with catch @ 0334646c */
                    /* catch() { ... } // from try @ 03346424 with catch @ 03346470
                       catch() { ... } // from try @ 0334642c with catch @ 03346470 */
                    /* catch() { ... } // from try @ 033462bc with catch @ 03346474 */
                    /* catch() { ... } // from try @ 03346260 with catch @ 03346478 */
        Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                  (__this_02,IEPECMCLKJB,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_18050/*"enterRaid"*/,5,0.0,0,false,
                   true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03346490 to 03446493 has its CatchHandler @ 033464a8 */
        return;
      }
    }
  }
LAB_03346494:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EHCGDODIIGF()  [RVA 0x32467C8]
// CHDGOFBHAFI$$EHCGDODIIGF @ RVA 0x32467C8

void CHDGOFBHAFI__EHCGDODIIGF(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *pNVar2;
  GCIFMNHADDF_o *pGVar3;
  System_Action_T__o *IELDNEAAPBE;
  PLIIGOCLJDL_o *pPVar4;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  
  if ((DAT_045670c1 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_PFODHKJNBMG__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_045670c1 = 1;
    method = extraout_x1;
  }
  if (((__this->fields).CMDMECMFCIK == 2) &&
     (pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0), method = extraout_x1_00,
     pNVar2 != (NDPMLPGANCI_o *)0x0)) {
    pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 == (NDPMLPGANCI_o *)0x0) goto LAB_03346954;
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(pNVar2,(MethodInfo *)0x0);
    method = extraout_x1_01;
    if (bVar1) {
      pGVar3 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pGVar3 == (GCIFMNHADDF_o *)0x0) goto LAB_03346954;
      __this_01 = (pGVar3->fields)._AOOFDKJAALA_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      method = extraout_x1_02;
      if (bVar1) {
        IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03346954;
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        method = extraout_x1_03;
      }
    }
  }
  CHDGOFBHAFI__ANJLFIBGDHP(__this,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (pPVar4 != (PLIIGOCLJDL_o *)0x0) {
    PLIIGOCLJDL__CMIAHPINBOM(pPVar4,(MethodInfo *)0x0);
    pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    if (pPVar4 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__HBBDJMCMNDE(pPVar4,(MethodInfo *)0x0);
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        EEGDOGKBLNG__FKAKMNIANAK(__this_00,1,(MethodInfo *)0x0);
        CHDGOFBHAFI__GJPOEDJOAAM(__this,false,method_00);
        return;
      }
    }
  }
LAB_03346954:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PNLACGIDHPI(CHDGOFBHAFI.DCENIHNBCAA LBKOHHHPNIP)  [RVA 0x324542C]
// CHDGOFBHAFI$$PNLACGIDHPI @ RVA 0x324542C

void CHDGOFBHAFI__PNLACGIDHPI(CHDGOFBHAFI_o *__this,int32_t LBKOHHHPNIP,MethodInfo *method)

{
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar1;
  
  pSVar1 = (__this->fields).FELKMAJFHIE;
  (__this->fields).CMDMECMFCIK = LBKOHHHPNIP;
  if (pSVar1 != (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0334544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,LBKOHHHPNIP,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ENIDGKKPNAO(Action<CHDGOFBHAFI.DCENIHNBCAA> CJNHFNHJHPE)  [RVA 0x3246958]
// CHDGOFBHAFI$$ENIDGKKPNAO @ RVA 0x3246958

void CHDGOFBHAFI__ENIDGKKPNAO
               (CHDGOFBHAFI_o *__this,System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar5;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *a;
  
  if ((DAT_045670c2 & 1) == 0) {
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    DAT_045670c2 = 1;
  }
  a = (__this->fields).FELKMAJFHIE;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void NKIFNICEBFF(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3246A08]
// CHDGOFBHAFI$$NKIFNICEBFF @ RVA 0x3246A08

void CHDGOFBHAFI__NKIFNICEBFF(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  AADKBCFCLKK_o *IIPPMAOIKHB;
  CHDGOFBHAFI_o *__this_00;
  EEOMEMBBGNA_o *pEVar1;
  CJFBGEEIPBA_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_045670c3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    DAT_045670c3 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    IIPPMAOIKHB = (AADKBCFCLKK_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      CHDGOFBHAFI__BNPLDAHKIED(__this_00,IIPPMAOIKHB,(PGICCMFLDPI_o *)0x0,in_x3);
      CHDGOFBHAFI__FBCCHHDEPDJ(__this,false,method_00);
      pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if ((pEVar1 != (EEOMEMBBGNA_o *)0x0) &&
         (__this_01 = (pEVar1->fields).GMNJEBCECDA, __this_01 != (CJFBGEEIPBA_o *)0x0)) {
        CJFBGEEIPBA__ODGGLKIMFCE(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BOPPNNMNDCB(object IMMNELPBGIF)  [RVA 0x3246AC8]
// CHDGOFBHAFI$$BOPPNNMNDCB @ RVA 0x3246AC8

void CHDGOFBHAFI__BOPPNNMNDCB(CHDGOFBHAFI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x3246ACC]
// CHDGOFBHAFI$$.ctor @ RVA 0x3246ACC

void CHDGOFBHAFI___ctor(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o **ppSVar1;
  System_Action_o **ppSVar2;
  KKLJIDJBFEI_o *pKVar3;
  System_Action_KEFHDOHHHML__o *pSVar4;
  NDPMLPGANCI_o *pNVar5;
  System_Action_DBMPKPJGIPI__o *pSVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar7;
  System_Action_o *pSVar8;
  DCHAJIMIFHP_o *pDVar9;
  
  if ((DAT_045670c4 & 1) == 0) {
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_ECOKPPHJIIH__);
    FUN_01bab630(&Method_CHDGOFBHAFI_EHCGDODIIGF__);
    FUN_01bab630(&Method_CHDGOFBHAFI_LGEMJFBPAGO__);
    FUN_01bab630(&Method_CHDGOFBHAFI_LKBMEILOMKO__);
    FUN_01bab630(&Method_CHDGOFBHAFI_NKIFNICEBFF__);
    FUN_01bab630(&Method_CHDGOFBHAFI_OMECKMHLPPP__);
    FUN_01bab630(&Method_CHDGOFBHAFI_<>c_BDDEHMBGCCA__);
    FUN_01bab630(&Method_CHDGOFBHAFI_<>c_FHJIKCNINBP__);
    FUN_01bab630(&Method_CHDGOFBHAFI_<>c_IHJGNIANNHD__);
    FUN_01bab630(&Method_CHDGOFBHAFI_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&CHDGOFBHAFI_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_20399/*"raid_battle_finish_round_event"*/);
    FUN_01bab630(&StringLiteral_20405/*"raid_battle_start_event"*/);
    FUN_01bab630(&StringLiteral_20481/*"refresh_raid_player_event"*/);
    FUN_01bab630(&StringLiteral_20397/*"raid_battle_finish_event"*/);
    DAT_045670c4 = 1;
    method = extraout_x1;
  }
  if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CHDGOFBHAFI_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar7 = CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar7 == (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)0x0) {
    if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CHDGOFBHAFI_<>c_TypeInfo,method);
    }
    pSVar7 = (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)
             thunk_FUN_01bda818(System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    ppSVar1 = &CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar7;
    thunk_FUN_01c20e04(ppSVar1,pSVar7);
  }
  if (__this != (CHDGOFBHAFI_o *)0x0) {
    (__this->fields).FELKMAJFHIE = pSVar7;
    thunk_FUN_01c20e04(&__this->fields,pSVar7);
    if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_1;
    if (pSVar8 == (System_Action_o *)0x0) {
      if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_1;
      *ppSVar2 = pSVar8;
      thunk_FUN_01c20e04(ppSVar2,pSVar8);
    }
    ppSVar2 = &(__this->fields).LMKOLDHCAAK;
    *ppSVar2 = pSVar8;
    thunk_FUN_01c20e04(ppSVar2,pSVar8);
    if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_2;
    if (pSVar8 == (System_Action_o *)0x0) {
      if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_2;
      *ppSVar2 = pSVar8;
      thunk_FUN_01c20e04(ppSVar2,pSVar8);
    }
    ppSVar2 = &(__this->fields).OJAPEIKHMAP;
    *ppSVar2 = pSVar8;
    thunk_FUN_01c20e04(ppSVar2,pSVar8);
    if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_3;
    if (pSVar8 == (System_Action_o *)0x0) {
      if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar2 = &CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__20_3;
      *ppSVar2 = pSVar8;
      thunk_FUN_01c20e04(ppSVar2,pSVar8);
    }
    ppSVar2 = &(__this->fields).MHOOOLECDKK;
    *ppSVar2 = pSVar8;
    thunk_FUN_01c20e04(ppSVar2,pSVar8);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).FELKMAJFHIE;
    (__this->fields).CMDMECMFCIK = 0;
    if (pSVar7 != (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)0x0) {
      (*(code *)(pSVar7->fields).super.super.invoke_impl)
                ((pSVar7->fields).super.super.method_code,0,(pSVar7->fields).super.super.method);
      (__this->fields).BLELLCNDBHN = false;
      (__this->fields).GBGHPLFONHD = false;
      (__this->fields).ANDOENDCBPM = 0;
      (__this->fields).KIAJFCGANAH = false;
      pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
        pDVar9 = (pKVar3->fields).super.FNHOHLGNHGN;
        pSVar4 = (System_Action_KEFHDOHHHML__o *)
                 thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
          DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_20399/*"raid_battle_finish_round_event"*/,pSVar4,(MethodInfo *)0x0);
          pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
            pDVar9 = (pKVar3->fields).super.FNHOHLGNHGN;
            pSVar4 = (System_Action_KEFHDOHHHML__o *)
                     thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
            System_Action<object>___ctor();
            if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
              DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_20405/*"raid_battle_start_event"*/,pSVar4,(MethodInfo *)0x0);
              pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
              if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
                pDVar9 = (pKVar3->fields).super.FNHOHLGNHGN;
                pSVar4 = (System_Action_KEFHDOHHHML__o *)
                         thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                System_Action<object>___ctor();
                if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
                  DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_20397/*"raid_battle_finish_event"*/,pSVar4,(MethodInfo *)0x0);
                  pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                  if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
                    pDVar9 = (pKVar3->fields).super.FNHOHLGNHGN;
                    pSVar4 = (System_Action_KEFHDOHHHML__o *)
                             thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    System_Action<object>___ctor();
                    if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
                      DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_20481/*"refresh_raid_player_event"*/,pSVar4,(MethodInfo *)0x0);
                      pNVar5 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                      pSVar6 = (System_Action_DBMPKPJGIPI__o *)
                               thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                      System_Action<Int32Enum>___ctor();
                      if (pNVar5 != (NDPMLPGANCI_o *)0x0) {
                        NDPMLPGANCI__NJBAKIMLGHB(pNVar5,pSVar6,(MethodInfo *)0x0);
                        pNVar5 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                        pSVar6 = (System_Action_DBMPKPJGIPI__o *)
                                 thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                        System_Action<Int32Enum>___ctor();
                        if (pNVar5 != (NDPMLPGANCI_o *)0x0) {
                          NDPMLPGANCI__EAPNEKLDLLM(pNVar5,pSVar6,(MethodInfo *)0x0);
                          pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                          pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                          System_Action___ctor();
                          if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
                            KKLJIDJBFEI__HKAALOKPBPG(pKVar3,pSVar8,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BNPLDAHKIED(AADKBCFCLKK IIPPMAOIKHB, PGICCMFLDPI PDDJCLHDJMG)  [RVA 0x3245AD0]
// CHDGOFBHAFI$$BNPLDAHKIED @ RVA 0x3245AD0

void CHDGOFBHAFI__BNPLDAHKIED
               (CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,PGICCMFLDPI_o *PDDJCLHDJMG,
               MethodInfo *method)

{
  bool bVar1;
  PGICCMFLDPI_o **ppPVar2;
  AADKBCFCLKK_o *IIPPMAOIKHB_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  CHDGOFBHAFI_o *__this_01;
  NODLJPNGNBG_o *pNVar3;
  AKOMJPINHEN_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  AADKBCFCLKK_o **ppAVar4;
  int index;
  
  if ((DAT_045670c5 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<NODLJPNGNBG>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_045670c5 = 1;
  }
  ppPVar2 = &(__this->fields).PAMNNAGEJGG;
  *ppPVar2 = PDDJCLHDJMG;
  thunk_FUN_01c20e04(ppPVar2,PDDJCLHDJMG);
  ppAVar4 = &(__this->fields).AABMLCNHHPN;
  if (*ppAVar4 != (AADKBCFCLKK_o *)0x0) {
    if (IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) goto LAB_03345bd8;
    if (((*ppAVar4)->fields).AMKHEHFFAKJ == (IIPPMAOIKHB->fields).AMKHEHFFAKJ) {
      IIPPMAOIKHB_00 = AADKBCFCLKK__Clone(IIPPMAOIKHB,(MethodInfo *)0x0);
      if ((IIPPMAOIKHB_00 != (AADKBCFCLKK_o *)0x0) && (*ppAVar4 != (AADKBCFCLKK_o *)0x0)) {
        AJKNKCLEEAD__KIAOELALKBL<object>
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)
                   (IIPPMAOIKHB_00->fields).MPAIPMANDEO,
                   (System_Collections_Generic_IList_T__o *)((*ppAVar4)->fields).MPAIPMANDEO,
                   Method_AJKNKCLEEAD_KIAOELALKBL<NODLJPNGNBG>__);
        __this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
        if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
          index = 0;
          do {
            if ((__this_00->fields).count <= index) {
              *ppAVar4 = IIPPMAOIKHB_00;
              goto LAB_03345bf8;
            }
            __this_01 = (CHDGOFBHAFI_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index
                                   ,
                                   Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                                  );
            CHDGOFBHAFI__PKKGAFHHDMN(__this_01,IIPPMAOIKHB_00,(NODLJPNGNBG_o *)__this_01,method);
            __this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
            index = index + 1;
          } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
        }
      }
      goto LAB_03345bd8;
    }
  }
  *ppAVar4 = IIPPMAOIKHB;
  IIPPMAOIKHB_00 = IIPPMAOIKHB;
LAB_03345bf8:
  thunk_FUN_01c20e04(ppAVar4,IIPPMAOIKHB_00);
  if ((*ppAVar4 != (AADKBCFCLKK_o *)0x0) &&
     (pNVar3 = CHDGOFBHAFI__AFHLHFMLNEO
                         ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                          ((*ppAVar4)->fields).MPAIPMANDEO,method_00),
     pNVar3 != (NODLJPNGNBG_o *)0x0)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
    if (__this_02 != (AKOMJPINHEN_o *)0x0) {
      method_02 = (MethodInfo *)0x0;
      AKOMJPINHEN__MCAIDEFDJHF(__this_02,IIPPMAOIKHB,(MethodInfo *)0x0);
      CHDGOFBHAFI__BNMEANHFGEB(__this,method_01);
      if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
        if (((IIPPMAOIKHB->fields).IOLELGMBJFL == false) &&
           (bVar1 = OOBBAGLCFPF__EJBFAOJGGNB(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
          CHDGOFBHAFI__KGPBODNEJMO(__this,IIPPMAOIKHB,method_02);
          return;
        }
        return;
      }
    }
  }
LAB_03345bd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OMECKMHLPPP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3247070]
// CHDGOFBHAFI$$OMECKMHLPPP @ RVA 0x3247070

void CHDGOFBHAFI__OMECKMHLPPP(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  bool bVar1;
  int32_t iVar2;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  CHDGOFBHAFI_o *pCVar3;
  EEGDOGKBLNG_o *__this_00;
  PEEIMHCMDND_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  PJKHAJKEHEL_o *pPVar4;
  System_String_o *IEPECMCLKJB;
  System_Action_object__o *IELDNEAAPBE;
  CNLGMNIEGFG_o *pCVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  KDADMJGPAOM_o *pKVar7;
  DNELIPCHKLK_o *pDVar8;
  PKHMIGFEJCL_o *pPVar9;
  System_String_o **ppSVar10;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_045670c6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_APJEPMMMMOJ__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_22534/*"СlanRaidStarted"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670c6 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) goto LAB_0334735c;
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  IIPPMAOIKHB = (AADKBCFCLKK_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar3 == (CHDGOFBHAFI_o *)0x0) goto LAB_0334735c;
  CHDGOFBHAFI__BNPLDAHKIED(pCVar3,IIPPMAOIKHB,(PGICCMFLDPI_o *)0x0,in_x3);
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_0334735c;
  bVar1 = EEGDOGKBLNG__JAIGNIGLBBN(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    if (__this_01 == (PEEIMHCMDND_o *)0x0) goto LAB_0334735c;
    PEEIMHCMDND__GMOEEEHEFKG(__this_01,false,(MethodInfo *)0x0);
  }
  if ((IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) ||
     (pKVar7 = (IIPPMAOIKHB->fields).LHFLMBNKPHF, pKVar7 == (KDADMJGPAOM_o *)0x0))
  goto LAB_0334735c;
  OILECKFDMDB = (pKVar7->fields).IILCHFKCEEH;
  __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_02 == (NDPMLPGANCI_o *)0x0) goto LAB_0334735c;
  iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_02,(MethodInfo *)0x0);
  if (iVar2 == 5) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar3 == (CHDGOFBHAFI_o *)0x0) goto LAB_0334735c;
    if ((pCVar3->fields).BLELLCNDBHN == false) goto LAB_033471f8;
    JJPNLEPEAFM__OCJEIOMBDKP((MethodInfo *)0x0);
  }
  else {
LAB_033471f8:
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar5 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    if (pCVar5 == (CNLGMNIEGFG_o *)0x0) goto LAB_0334735c;
    if ((pCVar5->fields).super.IFJLLGPGMHM != (OOMHDDBCBJP_o *)0x0) {
      OKBIKHHKOEN = (pCVar5->fields).super.MECHOBPGHFJ;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      pPVar4 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
      if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
        IEPECMCLKJB = OFFIONDOEPM__GKOLODJCIOK((pPVar4->fields).NILOEHGNJNL,(MethodInfo *)0x0);
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        CHDGOFBHAFI__JBFJCBGGOOP(__this,IEPECMCLKJB,StringLiteral_22534/*"СlanRaidStarted"*/,IELDNEAAPBE,in_x4);
      }
    }
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar5 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (((pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) && (pCVar5 != (CNLGMNIEGFG_o *)0x0))
     && (pPVar9 = (pNVar6->fields).QuestParameters, pPVar9 != (PKHMIGFEJCL_o *)0x0)) {
    (pPVar9->fields).NMHCLFFOMJH = (pCVar5->fields).super.KOILJHHCIEE;
    thunk_FUN_01c20e04();
    pDVar8 = (pCVar5->fields).super.KOILJHHCIEE;
    if (pDVar8 != (DNELIPCHKLK_o *)0x0) {
      (pPVar9->fields).EICOIEGEFAF = (pDVar8->fields).GJFJPLHCBKJ;
      thunk_FUN_01c20e04();
      (pPVar9->fields).OILECKFDMDB = OILECKFDMDB;
      ppSVar10 = &(pPVar9->fields).LOLFFJGLKLD;
      *ppSVar10 = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04(ppSVar10);
      pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar6,0x23,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0334735c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HMBJHHDACKC(Action CJNHFNHJHPE)  [RVA 0x3247360]
// CHDGOFBHAFI$$HMBJHHDACKC @ RVA 0x3247360

void CHDGOFBHAFI__HMBJHHDACKC(CHDGOFBHAFI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045670c7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045670c7 = 1;
  }
  ppSVar4 = &(__this->fields).LMKOLDHCAAK;
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


// ===== public CHDGOFBHAFI.DCENIHNBCAA ACFAHGGIILN()  [RVA 0x32473FC]
// CHDGOFBHAFI$$ACFAHGGIILN @ RVA 0x32473FC

int32_t CHDGOFBHAFI__ACFAHGGIILN(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  return (__this->fields).CMDMECMFCIK;
}


// ===== public void JADOIEAEGKL(long HLEFMLKLFFD)  [RVA 0x3247404]
// CHDGOFBHAFI$$JADOIEAEGKL @ RVA 0x3247404

void CHDGOFBHAFI__JADOIEAEGKL(CHDGOFBHAFI_o *__this,int64_t HLEFMLKLFFD,MethodInfo *method)

{
  PPJGIFEJMHP_o *__this_00;
  System_Action_o *KCPFFLHCCIN;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)HLEFMLKLFFD;
  if ((DAT_045670c8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_KPGCOFLGEAI__);
    DAT_045670c8 = 1;
    method_00 = extraout_x1;
  }
  if (HLEFMLKLFFD != 0) {
    CHDGOFBHAFI__IEMLFDPOMMD(__this,method_00);
    __this_00 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (PPJGIFEJMHP_o *)0x0) {
      PPJGIFEJMHP__LGDEICDAEAF(__this_00,HLEFMLKLFFD,KCPFFLHCCIN,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public NODLJPNGNBG GKJIBPANAGN(NODLJPNGNBG MOEKOMCEEMM)  [RVA 0x3244BB8]
// CHDGOFBHAFI$$GKJIBPANAGN @ RVA 0x3244BB8

NODLJPNGNBG_o *
CHDGOFBHAFI__GKJIBPANAGN(CHDGOFBHAFI_o *__this,NODLJPNGNBG_o *MOEKOMCEEMM,MethodInfo *method)

{
  NODLJPNGNBG_o *pNVar1;
  MethodInfo *in_x3;
  
  pNVar1 = CHDGOFBHAFI__PKKGAFHHDMN(__this,(__this->fields).AABMLCNHHPN,MOEKOMCEEMM,in_x3);
  return pNVar1;
}


// ===== public void GMHKJNAIEAG(bool JAJCPIICHNL)  [RVA 0x32474C4]
// CHDGOFBHAFI$$GMHKJNAIEAG @ RVA 0x32474C4

void CHDGOFBHAFI__GMHKJNAIEAG(CHDGOFBHAFI_o *__this,bool JAJCPIICHNL,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *pSVar1;
  
  (__this->fields).KIAJFCGANAH = false;
  if (JAJCPIICHNL) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 == (KKLJIDJBFEI_o *)0x0) goto LAB_03347508;
    KKLJIDJBFEI__IPHHKDOLHPN(__this_00,(System_Action_KEFHDOHHHML__o *)0x0,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).OJAPEIKHMAP;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03347504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
LAB_03347508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LGEMJFBPAGO(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x324750C]
// CHDGOFBHAFI$$LGEMJFBPAGO @ RVA 0x324750C

void CHDGOFBHAFI__LGEMJFBPAGO(CHDGOFBHAFI_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  if (((__this->fields).GBGHPLFONHD != false) &&
     ((__this->fields).AABMLCNHHPN != (AADKBCFCLKK_o *)0x0)) {
    (__this->fields).GBGHPLFONHD = false;
    JJPNLEPEAFM__OCJEIOMBDKP((MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void KDLABEFIDFG(AADKBCFCLKK DKMMBMBMJBO)  [RVA 0x324752C]
// CHDGOFBHAFI$$KDLABEFIDFG @ RVA 0x324752C

void CHDGOFBHAFI__KDLABEFIDFG(CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  NODLJPNGNBG_o *pNVar1;
  KKLJIDJBFEI_o *__this_00;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)DKMMBMBMJBO;
  if ((DAT_045670c9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_NMCMPPIKBJP__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_20403/*"raid_battle_player_start"*/);
    DAT_045670c9 = 1;
    method_00 = extraout_x1;
  }
  if ((DKMMBMBMJBO != (AADKBCFCLKK_o *)0x0) &&
     (pNVar1 = CHDGOFBHAFI__AFHLHFMLNEO
                         ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                          (DKMMBMBMJBO->fields).MPAIPMANDEO,method_00),
     pNVar1 != (NODLJPNGNBG_o *)0x0)) {
    if ((pNVar1->fields).DMFDEJEDMPO != false) {
      return;
    }
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    __this_01 = (Google_Protobuf_WellKnownTypes_Empty_o *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    Google_Protobuf_WellKnownTypes_Empty___ctor(__this_01,(MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_00,StringLiteral_20403/*"raid_battle_player_start"*/,
                 (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static NODLJPNGNBG AFHLHFMLNEO(IList<NODLJPNGNBG> JPKOCGKEPKM)  [RVA 0x32440BC]
// CHDGOFBHAFI$$AFHLHFMLNEO @ RVA 0x32440BC

NODLJPNGNBG_o *
CHDGOFBHAFI__AFHLHFMLNEO
          (System_Collections_Generic_IList_NODLJPNGNBG__o *JPKOCGKEPKM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  EEGDOGKBLNG_o *__this;
  int64_t iVar4;
  VirtualInvokeData *pVVar5;
  NODLJPNGNBG_o *pNVar6;
  ICBMOMGINFH_o **ppIVar7;
  MethodInfo *extraout_x1;
  System_Collections_Generic_IList_NODLJPNGNBG__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  uint uVar11;
  
  if ((DAT_045670ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    FUN_01bab630(&StringLiteral_10907/*"RaidManager::GetOurPlayer: can't find our player, returning stub!"*/);
    DAT_045670ca = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((__this == (EEGDOGKBLNG_o *)0x0) ||
     (iVar4 = EEGDOGKBLNG__APCMGOCHMGC(__this,(MethodInfo *)0x0),
     JPKOCGKEPKM == (System_Collections_Generic_IList_NODLJPNGNBG__o *)0x0)) {
LAB_033442dc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar11 = 0;
  do {
    pSVar8 = JPKOCGKEPKM->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<NODLJPNGNBG>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_033441dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(JPKOCGKEPKM,System_Collections_Generic_ICollection<NODLJPNGNBG>_TypeInfo,0
                         );
LAB_033441dc:
    iVar3 = (*pVVar5->methodPtr)(JPKOCGKEPKM,pVVar5->method);
    if (iVar3 <= (int)uVar11) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10907/*"RaidManager::GetOurPlayer: can't find our player, returning stub!"*/,(MethodInfo *)0x0);
      pNVar6 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo);
      NODLJPNGNBG___ctor(pNVar6,(MethodInfo *)0x0);
      if (pNVar6 != (NODLJPNGNBG_o *)0x0) {
        (pNVar6->fields).ANAJGHJEEOC = iVar4;
        (pNVar6->fields).LINGIJDCLLC = 0;
        ppIVar7 = &(pNVar6->fields).PMMFPJJOPKE;
        *ppIVar7 = (ICBMOMGINFH_o *)0x0;
        thunk_FUN_01c20e04(ppIVar7,0);
        (pNVar6->fields).DMFDEJEDMPO = true;
        (pNVar6->fields).PFJPLCAIGJH = 1;
        return pNVar6;
      }
      goto LAB_033442dc;
    }
    pSVar8 = JPKOCGKEPKM->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IList<NODLJPNGNBG>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_0334423c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(JPKOCGKEPKM,System_Collections_Generic_IList<NODLJPNGNBG>_TypeInfo,0);
LAB_0334423c:
    pNVar6 = (NODLJPNGNBG_o *)(*pVVar5->methodPtr)(JPKOCGKEPKM,(ulong)uVar11,pVVar5->method);
    if (pNVar6 == (NODLJPNGNBG_o *)0x0) goto LAB_033442dc;
    uVar11 = uVar11 + 1;
    if ((pNVar6->fields).ANAJGHJEEOC == iVar4) {
      return pNVar6;
    }
  } while( true );
}


// ===== private void FFAGNLLDPGN()  [RVA 0x324439C]
// CHDGOFBHAFI$$FFAGNLLDPGN @ RVA 0x324439C

void CHDGOFBHAFI__FFAGNLLDPGN(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  NBLEEDEAPHB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_01;
  System_Action_object__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  NBLEEDEAPHB_array *pNVar3;
  
  if ((DAT_045670cb & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_BFBKJDGKCAJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&StringLiteral_17819/*"dlgRaidEnded"*/);
    FUN_01bab630(&StringLiteral_16817/*"btnResult"*/);
    FUN_01bab630(&StringLiteral_16973/*"character_sensei"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670cb = 1;
    method = extraout_x1;
  }
  IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
  NBLEEDEAPHB___ctor(__this_00,StringLiteral_17819/*"dlgRaidEnded"*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0
                     ,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                     (MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
  if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    pNVar3 = (IJIPABLCAKE->fields)._items;
    (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
    if (pNVar3 != (NBLEEDEAPHB_array *)0x0) {
      uVar1 = (IJIPABLCAKE->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (IJIPABLCAKE->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   (Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                  (__this_01,StringLiteral_16973/*"character_sensei"*/,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_16817/*"btnResult"*/,1,0.0,0
                   ,false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HLINFJGKPNE()  [RVA 0x3247640]
// CHDGOFBHAFI$$HLINFJGKPNE @ RVA 0x3247640

void CHDGOFBHAFI__HLINFJGKPNE(CHDGOFBHAFI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  CHDGOFBHAFI__FBCCHHDEPDJ(__this,true,in_x2);
  return;
}

