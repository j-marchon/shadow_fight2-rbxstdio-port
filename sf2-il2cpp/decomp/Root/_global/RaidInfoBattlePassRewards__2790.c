// TypeDefIndex 2790
// Namespace: 
// public class RaidInfoBattlePassRewards : MonoBehaviour
// Fields:
//   private LabelAlias _reward1; // 0x20
//   private LabelAlias _reward2; // 0x28
//   private LabelAlias _reward3; // 0x30
//   private LabelAlias _reward4; // 0x38
//   private LabelAlias _reward4GroupName; // 0x40
//   private const float MBKHFPKMMAD = 0.7;
//   private const float KDGGJNJMMPK = 5;

// ===== public void UpdateInfo(OHDDKGHEEPA BANHBMINMMP, string KJODHCEONMG)  [RVA 0x3414C44]
// RaidInfoBattlePassRewards$$UpdateInfo @ RVA 0x3414C44

void RaidInfoBattlePassRewards__UpdateInfo
               (RaidInfoBattlePassRewards_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,
               System_String_o *KJODHCEONMG,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  System_Collections_Generic_IEnumerable_T__o *collection;
  long lVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Object_array *pSVar6;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_01;
  HBNENINHPGF_o *pHVar7;
  RaidInfoBattlePassRewards_o *__this_02;
  System_String_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *__this_03;
  System_String_array *values;
  undefined8 uVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  BHEDGAKGKPO_StaticFields *pBVar11;
  System_Collections_Generic_IEnumerable_T__c *pSVar12;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  ulong uVar14;
  System_String_o *pSVar15;
  JKDFEBLBMOF_o *COPNBALDNLF;
  undefined4 local_68;
  int32_t local_64;
  
  if ((DAT_0456809e & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<JKDFEBLBMOF>__);
    FUN_01bab630(&Nekki_SF2_GUI_LabelAlias___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelAlias>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<LabelAlias>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    FUN_01bab630(&StringLiteral_20417/*"raid_reward_places"*/);
    FUN_01bab630(&StringLiteral_20416/*"raid_reward_place"*/);
    DAT_0456809e = 1;
  }
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    plVar4 = (long *)(*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                               (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (plVar4 == (long *)0x0) {
      return;
    }
    bVar2 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
       (*(CNLGMNIEGFG_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
        CNLGMNIEGFG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar4);
    }
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 FUN_01bab718(Nekki_SF2_GUI_LabelAlias___TypeInfo,4);
    if (collection != (System_Collections_Generic_IEnumerable_T__o *)0x0) {
      pSVar12 = (System_Collections_Generic_IEnumerable_T__c *)(__this->fields)._reward1;
      if ((pSVar12 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pSVar12,(collection->klass->_1).element_class), lVar5 == 0)) {
LAB_03515220:
        uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar10,0);
      }
      if (*(int *)&collection[1].monitor == 0) goto LAB_0351521c;
      collection[2].klass = pSVar12;
      thunk_FUN_01c20e04(collection + 2,pSVar12);
      pNVar13 = (__this->fields)._reward2;
      if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pNVar13,(collection->klass->_1).element_class), lVar5 == 0))
      goto LAB_03515220;
      if (*(uint *)&collection[1].monitor < 2) goto LAB_0351521c;
      collection[2].monitor = pNVar13;
      thunk_FUN_01c20e04(&collection[2].monitor,pNVar13);
      pSVar12 = (System_Collections_Generic_IEnumerable_T__c *)(__this->fields)._reward3;
      if ((pSVar12 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pSVar12,(collection->klass->_1).element_class), lVar5 == 0))
      goto LAB_03515220;
      if (*(uint *)&collection[1].monitor < 3) goto LAB_0351521c;
      collection[3].klass = pSVar12;
      thunk_FUN_01c20e04(collection + 3,pSVar12);
      pNVar13 = (__this->fields)._reward4;
      if ((pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pNVar13,(collection->klass->_1).element_class), lVar5 == 0))
      goto LAB_03515220;
      if (*(uint *)&collection[1].monitor < 4) goto LAB_0351521c;
      collection[3].monitor = pNVar13;
      thunk_FUN_01c20e04(&collection[3].monitor,pNVar13);
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<LabelAlias>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,collection,Method_System_Collections_Generic_List<LabelAlias>__ctor__);
      if ((System_Collections_Generic_Dictionary_int__object__o *)plVar4[0x32] !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        source = System_Collections_Generic_Dictionary<int,_object>__get_Values
                           ((System_Collections_Generic_Dictionary_int__object__o *)plVar4[0x32],
                            Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__
                           );
        pSVar6 = System_Linq_Enumerable__ToArray<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            Method_System_Linq_Enumerable_ToArray<JKDFEBLBMOF>__);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        }
        __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
        if (((__this_01 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
            (pHVar7 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_01,KJODHCEONMG,(MethodInfo *)0x0),
            pHVar7 != (HBNENINHPGF_o *)0x0)) &&
           (__this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
          if (0 < (__this_00->fields)._size) {
            pSVar15 = (pHVar7->fields)._PGCEKJLODEJ_k__BackingField;
            uVar14 = 0;
            do {
              if (pSVar6 == (System_Object_array *)0x0) goto LAB_03515218;
              uVar1 = (uint)pSVar6->max_length;
              if ((long)uVar14 < (long)(int)uVar1) {
                if (uVar1 <= uVar14) goto LAB_0351521c;
                COPNBALDNLF = (JKDFEBLBMOF_o *)pSVar6->m_Items[uVar14];
                __this_02 = (RaidInfoBattlePassRewards_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      (__this_00,(int32_t)uVar14,
                                       Method_System_Collections_Generic_List<LabelAlias>_get_Item__
                                      );
                if (COPNBALDNLF == (JKDFEBLBMOF_o *)0x0) goto LAB_03514ff0;
                pSVar8 = RaidInfoBattlePassRewards__ACHEEICHHHJ
                                   (__this_02,COPNBALDNLF,KJODHCEONMG,pSVar15,in_x4);
                if (__this_02 == (RaidInfoBattlePassRewards_o *)0x0) goto LAB_03515218;
                (*__this_02->klass[4]._1.gc_desc)(__this_02,pSVar8,__this_02->klass[4]._1.name);
                pUVar9 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                if ((pUVar9 == (UnityEngine_Transform_o *)0x0) ||
                   (pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0),
                   pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_03515218;
                __this_03 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar8,(MethodInfo *)0x0);
                if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto LAB_03515218;
                bVar3 = (bool)(~bVar3 & 1);
              }
              else {
                __this_02 = (RaidInfoBattlePassRewards_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      (__this_00,(int32_t)uVar14,
                                       Method_System_Collections_Generic_List<LabelAlias>_get_Item__
                                      );
LAB_03514ff0:
                if (((__this_02 == (RaidInfoBattlePassRewards_o *)0x0) ||
                    (pUVar9 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
                    pUVar9 == (UnityEngine_Transform_o *)0x0)) ||
                   ((pUVar9 = UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0),
                    pUVar9 == (UnityEngine_Transform_o *)0x0 ||
                    (__this_03 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                    __this_03 == (UnityEngine_GameObject_o *)0x0)))) goto LAB_03515218;
                bVar3 = false;
              }
              UnityEngine_GameObject__SetActive(__this_03,bVar3,(MethodInfo *)0x0);
              uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)(__this_00->fields)._size);
          }
          local_64 = OHDDKGHEEPA__NLMMJCACKPC(BANHBMINMMP,(MethodInfo *)0x0);
          if (local_64 < 5) {
            local_68 = 4;
            pSVar15 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            pSVar8 = RaidInfoBattlePassRewards__PACBLOGMBNM(StringLiteral_20416/*"raid_reward_place"*/,method_00);
            pSVar15 = System_String__Concat(pSVar15,StringLiteral_167/*" "*/,pSVar8,(MethodInfo *)0x0);
          }
          else {
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            local_68 = 4;
            pSVar15 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            if (values == (System_String_array *)0x0) goto LAB_03515218;
            if ((int)values->max_length == 0) {
LAB_0351521c:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            values->m_Items[0] = pSVar15;
            thunk_FUN_01c20e04(values->m_Items,pSVar15);
            if ((uint)values->max_length < 2) goto LAB_0351521c;
            values->m_Items[1] = StringLiteral_1223/*"-"*/;
            thunk_FUN_01c20e04(values->m_Items + 1);
            pSVar15 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
            if ((uint)values->max_length < 3) goto LAB_0351521c;
            values->m_Items[2] = pSVar15;
            thunk_FUN_01c20e04(values->m_Items + 2,pSVar15);
            if ((uint)values->max_length < 4) goto LAB_0351521c;
            values->m_Items[3] = StringLiteral_167/*" "*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
            pSVar15 = RaidInfoBattlePassRewards__PACBLOGMBNM(StringLiteral_20417/*"raid_reward_places"*/,method_01);
            if ((uint)values->max_length < 5) goto LAB_0351521c;
            values->m_Items[4] = pSVar15;
            thunk_FUN_01c20e04();
            pSVar15 = System_String__Concat(values,(MethodInfo *)0x0);
          }
          pNVar13 = (__this->fields)._reward4GroupName;
          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar11 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar13->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar11->FHIAKPJBBCB).fields.r,(pBVar11->FHIAKPJBBCB).fields.g,
                       (pBVar11->FHIAKPJBBCB).fields.b,(pBVar11->FHIAKPJBBCB).fields.a,pNVar13,
                       (pNVar13->klass->vtable)._23_set_color.method);
            pNVar13 = (__this->fields)._reward4GroupName;
            if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar13,pSVar15,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03515218:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x341560C]
// RaidInfoBattlePassRewards$$.ctor @ RVA 0x341560C

void RaidInfoBattlePassRewards___ctor(RaidInfoBattlePassRewards_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal static string PACBLOGMBNM(string JCLPIKHEKBB)  [RVA 0x34155BC]
// RaidInfoBattlePassRewards$$PACBLOGMBNM @ RVA 0x34155BC

System_String_o *
RaidInfoBattlePassRewards__PACBLOGMBNM(System_String_o *JCLPIKHEKBB,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456809f & 1) == 0) {
    FUN_01bab630(&StringLiteral_15810/*"^"*/);
    DAT_0456809f = 1;
  }
  pSVar1 = System_String__Concat
                     (StringLiteral_15810/*"^"*/,JCLPIKHEKBB,StringLiteral_15810/*"^"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool CheckBattlePassRewards(OHDDKGHEEPA BANHBMINMMP, string KJODHCEONMG)  [RVA 0x3415614]
// RaidInfoBattlePassRewards$$CheckBattlePassRewards @ RVA 0x3415614

/* WARNING: Removing unreachable block (ram,0x03515914) */

bool RaidInfoBattlePassRewards__CheckBattlePassRewards
               (RaidInfoBattlePassRewards_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,
               System_String_o *KJODHCEONMG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  long *plVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar4;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_02;
  int iVar5;
  byte bVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045680a0 & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    __this = (RaidInfoBattlePassRewards_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_Dictionary_ValueCollection<int,_JKDFEBLBMOF>_GetEnumerator__
                         );
    DAT_045680a0 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    plVar3 = (long *)(*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                               (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (plVar3 == (long *)0x0) {
      return false;
    }
    bVar6 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar3 + 0x130) < bVar6) ||
       (*(CNLGMNIEGFG_c **)(*(long *)(*plVar3 + 200) + (ulong)bVar6 * 8 + -8) !=
        CNLGMNIEGFG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this = (RaidInfoBattlePassRewards_o *)0x0;
    if ((System_Collections_Generic_Dictionary_int__object__o *)plVar3[0x32] !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_00 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_int__object__o *)plVar3[0x32],
                             Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__
                            );
      __this = (RaidInfoBattlePassRewards_o *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                  (&local_b8,__this_00,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<int,_JKDFEBLBMOF>_GetEnumerator__
                  );
        bVar6 = 0;
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._dictionary = local_b8.fields._dictionary;
        local_80.fields._currentValue = local_b8.fields._currentValue;
        do {
          do {
            bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_MoveNext__
                              );
            pIVar1 = local_80.fields._currentValue;
            if (!bVar2) {
              iVar5 = 8;
              goto LAB_035158ac;
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (__this_01 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pJVar4 = JMDPBFOCHHP__OJOIAONADNG(__this_01,pIVar1[1].monitor,(MethodInfo *)0x0);
          } while (pJVar4 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0);
          __this_02 = (pJVar4->fields).GFBNJPMOEKD;
          if (__this_02 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                     (System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list =
               (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
          local_a0.fields._current = local_b8.fields._currentValue;
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_a0,
                               Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                              );
            if (!bVar2) {
              iVar5 = 3;
              goto LAB_0351584c;
            }
            if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = System_String__op_Equality
                              ((System_String_o *)local_a0.fields._current[1].klass,KJODHCEONMG,
                               (MethodInfo *)0x0);
          } while (!bVar2);
          bVar6 = 1;
          iVar5 = 7;
LAB_0351584c:
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
        } while ((iVar5 == 3) || (iVar5 == 0));
LAB_035158ac:
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_Dispose__
                  );
        return (bool)(bVar6 & iVar5 == 7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private string ACHEEICHHHJ(JKDFEBLBMOF COPNBALDNLF, string KJODHCEONMG, string JLHMEOEFKPJ)  [RVA 0x3415234]
// RaidInfoBattlePassRewards$$ACHEEICHHHJ @ RVA 0x3415234

System_String_o *
RaidInfoBattlePassRewards__ACHEEICHHHJ
          (RaidInfoBattlePassRewards_o *__this,JKDFEBLBMOF_o *COPNBALDNLF,
          System_String_o *KJODHCEONMG,System_String_o *JLHMEOEFKPJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar3;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  System_String_array *values;
  System_String_o *pSVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined4 local_28;
  int iStack_24;
  
  if ((DAT_045680a1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_506/*" offsety="*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_525/*" scale="*/);
    FUN_01bab630(&StringLiteral_251/*" /> "*/);
    DAT_045680a1 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  local_28 = 0;
  iStack_24 = 0;
  if (COPNBALDNLF != (JKDFEBLBMOF_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_0351553c;
    pJVar3 = JMDPBFOCHHP__OJOIAONADNG(__this_00,(COPNBALDNLF->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
    ;
    if (pJVar3 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
      __this_01 = (pJVar3->fields).GFBNJPMOEKD;
      if (__this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_0351553c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                          );
        pIVar1 = local_50.fields._current;
        if (!bVar2) break;
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          ((System_String_o *)local_50.fields._current[1].klass,KJODHCEONMG,
                           (MethodInfo *)0x0);
        if (bVar2) {
          iStack_24 = *(int *)&pIVar1[1].monitor + iStack_24;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__)
      ;
    }
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2422/*"<quad name="*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = JLHMEOEFKPJ;
        thunk_FUN_01c20e04(values->m_Items + 1,JLHMEOEFKPJ);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_525/*" scale="*/;
          fVar5 = (float)thunk_FUN_01c20e04(values->m_Items + 2);
          local_28 = 0x3f333333;
          pSVar4 = System_Single__ToString(fVar5,(MethodInfo *)&stack0xffffffffffffffd8);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar4;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_506/*" offsety="*/;
              fVar5 = (float)thunk_FUN_01c20e04(values->m_Items + 4);
              local_28 = 0x40a00000;
              pSVar4 = System_Single__ToString(fVar5,(MethodInfo *)&stack0xffffffffffffffd8);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar4;
                thunk_FUN_01c20e04(values->m_Items + 5,pSVar4);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_251/*" /> "*/;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  pSVar4 = System_Int32__ToString
                                     ((int32_t)&stack0xffffffffffffffdc,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar4;
                    thunk_FUN_01c20e04();
                    pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                    return pSVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0351553c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

