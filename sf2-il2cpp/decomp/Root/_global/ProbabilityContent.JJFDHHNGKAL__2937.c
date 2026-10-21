// TypeDefIndex 2937
// Namespace: 
// [CompilerGenerated]
// private sealed class ProbabilityContent.JJFDHHNGKAL
// Fields:
//   public JMDPBFOCHHP.NOPCEDPNNKO raidItems; // 0x10
//   public ProbabilityContent <>4__this; // 0x18

// ===== public void .ctor()  [RVA 0x348E998]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$.ctor @ RVA 0x348E998

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal float JHIHBFFCHHP(List<DDMHMABAHHD> items, JMDPBFOCHHP.FNILDHLJBBJ.ONIINJPBENK cType)  [RVA 0x348E9A0]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$JHIHBFFCHHP @ RVA 0x348E9A0

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__JHIHBFFCHHP
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
                System_Collections_Generic_List_DDMHMABAHHD__o *items,int32_t cType,
                MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *pIVar2;
  IGFGDDANEPE_o *pIVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this_01;
  ACHLOMELAJE_o *pAVar4;
  int index;
  GGHCLMEFIGO_o *__this_02;
  float fVar5;
  float fVar6;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  if ((DAT_04568403 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<DDMHMABAHHD>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<DDMHMABAHHD>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&System_Func<DDMHMABAHHD,_bool>_TypeInfo);
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<DDMHMABAHHD>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_MLBNMCKCLDH__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568403 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<DDMHMABAHHD,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  source = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)items,predicate,
                      Method_System_Linq_Enumerable_Where<DDMHMABAHHD>__);
  __this_00 = System_Linq_Enumerable__ToList<object>
                        (source,Method_System_Linq_Enumerable_ToList<DDMHMABAHHD>__);
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)__this_00,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<DDMHMABAHHD>__);
  fVar5 = 0.0;
  if (!bVar1) {
    if (cType == 1) {
      if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) {
LAB_0358ed7c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
      fVar5 = 0.0;
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
          return fVar5;
        }
        if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (__this->fields).__4__this;
        if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar6 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                          (__this_01,items,
                           *(float *)((long)&local_90.fields._current[1].monitor + 4),
                           (MethodInfo *)0x0);
        fVar5 = fVar5 + fVar6;
      } while (fVar5 != 1.0);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__)
      ;
LAB_0358ec50:
      fVar5 = 1.0;
    }
    else {
      fVar6 = 0.0;
      if (cType == 2) {
        if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_0358ed7c;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
        local_90.fields._index = local_a8.fields._index;
        local_90.fields._version = local_a8.fields._version;
        local_90.fields._list = local_a8.fields._list;
        local_90.fields._current = local_a8.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_90,
                                  Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                                 ), bVar1) {
          if (fVar6 == 0.0) {
            if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            fVar6 = 1.0 - *(float *)&local_90.fields._current[2].klass;
          }
          else {
            if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            fVar6 = fVar6 * (1.0 - *(float *)&local_90.fields._current[2].klass);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
        fVar5 = 1.0 - fVar6;
        if (fVar6 == 0.0) {
          fVar5 = fVar6;
        }
      }
      else {
        if (cType == 3) {
          if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_0358ed7c;
          if (0 < (__this_00->fields)._size) {
            index = 0;
            do {
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
              pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_0358ed7c;
              __this_02 = (pAVar4->fields).OIDPLCLELEN;
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,index,
                                  Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
              if ((pIVar2 == (Il2CppObject *)0x0) || (__this_02 == (GGHCLMEFIGO_o *)0x0))
              goto LAB_0358ed7c;
              pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA
                                 (__this_02,(System_String_o *)pIVar2[1].klass,(MethodInfo *)0x0);
              if (pIVar3 == (IGFGDDANEPE_o *)0x0) goto LAB_0358ec50;
              index = index + 1;
            } while (index < (__this_00->fields)._size);
          }
        }
        fVar5 = 0.0;
      }
    }
  }
  return fVar5;
}


// ===== internal bool MLBNMCKCLDH(DDMHMABAHHD i)  [RVA 0x348EE38]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$MLBNMCKCLDH @ RVA 0x348EE38

bool Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__MLBNMCKCLDH
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
               DDMHMABAHHD_o *i,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar3;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar4;
  ACHLOMELAJE_o *pAVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_01;
  
  if ((DAT_04568404 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_PMOFDNANHOL__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Find__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
    FUN_01bab630(&StringLiteral_5562/*"EQUIPMENT"*/);
    DAT_04568404 = 1;
  }
  pIVar2 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)i;
    thunk_FUN_01c20e04(pIVar2 + 1,i);
    pJVar4 = (__this->fields).raidItems;
    if (pJVar4 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
      __this_01 = (pJVar4->fields).GADHINPJDAF;
      match = (System_Predicate_T__o *)
              thunk_FUN_01bda818(System_Predicate<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
        pIVar2 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_01,match,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Find__);
        bVar1 = false;
        if (pIVar2 != (Il2CppObject *)0x0) {
          bVar1 = System_String__op_Equality(pIVar2[4].monitor,StringLiteral_5562/*"EQUIPMENT"*/,(MethodInfo *)0x0)
          ;
          if (bVar1) {
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
            pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
               (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_0358efdc;
            pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA
                               (__this_00,(System_String_o *)pIVar2[1].klass,(MethodInfo *)0x0);
            bVar1 = pIVar3 == (IGFGDDANEPE_o *)0x0;
          }
          else {
            bVar1 = false;
          }
        }
        return bVar1;
      }
    }
  }
LAB_0358efdc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal float OBOLNPNGGBH(JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ container, JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ parentContainer, float parentContChance = 1)  [RVA 0x348EFE8]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$OBOLNPNGGBH @ RVA 0x348EFE8

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *container,
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *parentContainer,float parentContChance,
                MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar3;
  MethodInfo *method_00;
  float parentContChance_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568405 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    DAT_04568405 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    parentContChance_00 =
         Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                   (__this_00,container,parentContainer,parentContChance,(MethodInfo *)0x0);
    if (container != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
      fVar4 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__JHIHBFFCHHP
                        (__this,(container->fields).GFBNJPMOEKD,(container->fields).MOIGDPBNMNI,
                         method_00);
      fVar4 = parentContChance_00 * fVar4;
      fVar7 = 1.0;
      if (((fVar4 != 1.0) &&
          (bVar2 = IBLAPCINJBO__BDLEIEHBFAD<object>
                             ((System_Collections_Generic_List_T__o *)
                              (container->fields).BAPMMGFEIDM,
                              Method_IBLAPCINJBO_BDLEIEHBFAD<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__)
          , fVar7 = fVar4, !bVar2)) && (iVar1 = (container->fields).MOIGDPBNMNI, iVar1 != 3)) {
        if (iVar1 == 2) {
          pSVar3 = (container->fields).BAPMMGFEIDM;
          if (pSVar3 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
                        0x0) goto LAB_0358f268;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                     Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                    );
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          fVar7 = 0.0;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_70,
                                    Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                   ), bVar2) {
            fVar5 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                              (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)
                                      local_70.fields._current,container,parentContChance_00,
                               method_00);
            fVar6 = fVar7 * (1.0 - fVar5);
            bVar2 = fVar7 != 0.0;
            fVar7 = 1.0 - fVar5;
            if (bVar2) {
              fVar7 = fVar6;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                    );
          if (fVar7 != 0.0) {
            fVar7 = 1.0 - fVar7;
          }
        }
        else {
          fVar7 = 0.0;
          if (iVar1 == 1) {
            pSVar3 = (container->fields).BAPMMGFEIDM;
            if (pSVar3 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
                          0x0) goto LAB_0358f268;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                       Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                      );
            fVar7 = 0.0;
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_70,
                                      Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                     ), bVar2) {
              fVar5 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                                (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)
                                        local_70.fields._current,container,parentContChance_00,
                                 method_00);
              fVar7 = fVar7 + fVar5;
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                      );
          }
        }
        fVar7 = 1.0 - (1.0 - fVar4) * (1.0 - fVar7);
      }
      return fVar7;
    }
  }
LAB_0358f268:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

