// TypeDefIndex 642
// Namespace: 
// public class IHEKBNOFOKD : GJFEBGNFFBA
// Fields:
//   private static List<KeyValuePair<string, Func<string>>> FIDOJDOEFIH; // 0x0

// ===== protected override string FGBGAKLKONL()  [RVA 0x35CAF98]
// IHEKBNOFOKD$$FGBGAKLKONL @ RVA 0x35CAF98

System_String_o * IHEKBNOFOKD__FGBGAKLKONL(IHEKBNOFOKD_o *__this,MethodInfo *method)

{
  uint length;
  undefined4 uVar1;
  Il2CppObject *OOGPLJBADCD;
  long lVar2;
  bool bVar3;
  System_Text_StringBuilder_o *__this_00;
  Roster_o *__this_01;
  System_Func_string__o **ppSVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  System_String_o *pSVar6;
  System_String_o *b;
  System_String_array *values;
  System_String_o *pSVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_KeyValuePair_string__Func_string____o *pSVar8;
  System_Func_string__o *pSVar9;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  long lStack_a8;
  undefined4 local_98;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  long lStack_78;
  int local_64;
  
  if ((DAT_04568fa0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Func<string>>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Func<string>>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Func<string>>>_get_Current__
                );
    FUN_01bab630(&System_Func<string>_TypeInfo);
    FUN_01bab630(&IHEKBNOFOKD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Func<string>>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Func<string>>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_Clear__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_GetEnumerator__
                );
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_IHEKBNOFOKD_<>c_AANEKOHAABI__);
    FUN_01bab630(&Method_IHEKBNOFOKD_<>c_HOFJBICDLMK__);
    FUN_01bab630(&Method_IHEKBNOFOKD_<>c_JEPJBJJCDIB__);
    FUN_01bab630(&Method_IHEKBNOFOKD_<>c_JLAEDNPFJFA__);
    FUN_01bab630(&Method_IHEKBNOFOKD_<>c_KBFGPLLOHKH__);
    FUN_01bab630(&Method_IHEKBNOFOKD_<>c_KELLCGINCJD__);
    FUN_01bab630(&IHEKBNOFOKD_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_19489/*"local{0,99$}"*/);
    FUN_01bab630(&StringLiteral_19488/*"local{$0.99}"*/);
    FUN_01bab630(&StringLiteral_18191/*"failed "*/);
    FUN_01bab630(&StringLiteral_19492/*"local{1+1}"*/);
    FUN_01bab630(&StringLiteral_417/*" failed</color>"*/);
    FUN_01bab630(&StringLiteral_19490/*"local{0.99$}"*/);
    FUN_01bab630(&StringLiteral_261/*" <color=red>"*/);
    FUN_01bab630(&StringLiteral_470/*" localization("*/);
    FUN_01bab630(&StringLiteral_1882/*"10"*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_19487/*"local{$0,99}"*/);
    FUN_01bab630(&StringLiteral_19494/*"local{_VariableWithUniqueName3467y4343}"*/);
    FUN_01bab630(&StringLiteral_1114/*") need("*/);
    FUN_01bab630(&StringLiteral_10710/*"QuestConditionTests "*/);
    FUN_01bab630(&StringLiteral_10670/*"QuestCondition tests"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_21528/*"tmptestvar1"*/);
    DAT_04568fa0 = 1;
    method = extraout_x1;
  }
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  lStack_78 = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_98 = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pSVar7 = StringLiteral_1/*""*/;
  local_64 = 0;
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
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (Roster_o *)0x0) {
    Roster__LMJFPPDAPBF(__this_01,StringLiteral_21528/*"tmptestvar1"*/,StringLiteral_1882/*"10"*/,1,(MethodInfo *)0x0);
    if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = IHEKBNOFOKD_TypeInfo->static_fields->FIDOJDOEFIH;
    if (pSVar8 != (System_Collections_Generic_List_KeyValuePair_string__Func_string____o *)0x0) {
      length = (pSVar8->fields)._size;
      method_00 = (MethodInfo *)(ulong)length;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = StringLiteral_19488/*"local{$0.99}"*/;
      pSVar9 = IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_0;
      if (pSVar9 == (System_Func_string__o *)0x0) {
        if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Func_string__o *)thunk_FUN_01bda818(System_Func<string>_TypeInfo);
        method_00 = Method_IHEKBNOFOKD_<>c_JEPJBJJCDIB__;
        System_Func<object>___ctor();
        ppSVar4 = &IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_0;
        *ppSVar4 = pSVar9;
        thunk_FUN_01c20e04(ppSVar4,pSVar9);
      }
      if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IHEKBNOFOKD__BENDMCOBOKL(pSVar6,pSVar9,method_00);
      if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = StringLiteral_19490/*"local{0.99$}"*/;
      pSVar9 = IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_1;
      if (pSVar9 == (System_Func_string__o *)0x0) {
        if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Func_string__o *)thunk_FUN_01bda818(System_Func<string>_TypeInfo);
        method_00 = Method_IHEKBNOFOKD_<>c_AANEKOHAABI__;
        System_Func<object>___ctor();
        ppSVar4 = &IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_1;
        *ppSVar4 = pSVar9;
        thunk_FUN_01c20e04(ppSVar4,pSVar9);
      }
      if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IHEKBNOFOKD__BENDMCOBOKL(pSVar6,pSVar9,method_00);
      if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = StringLiteral_19487/*"local{$0,99}"*/;
      pSVar9 = IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_2;
      if (pSVar9 == (System_Func_string__o *)0x0) {
        if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Func_string__o *)thunk_FUN_01bda818(System_Func<string>_TypeInfo);
        method_00 = Method_IHEKBNOFOKD_<>c_KBFGPLLOHKH__;
        System_Func<object>___ctor();
        ppSVar4 = &IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_2;
        *ppSVar4 = pSVar9;
        thunk_FUN_01c20e04(ppSVar4,pSVar9);
      }
      if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IHEKBNOFOKD__BENDMCOBOKL(pSVar6,pSVar9,method_00);
      if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = StringLiteral_19489/*"local{0,99$}"*/;
      pSVar9 = IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_3;
      if (pSVar9 == (System_Func_string__o *)0x0) {
        if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Func_string__o *)thunk_FUN_01bda818(System_Func<string>_TypeInfo);
        method_00 = Method_IHEKBNOFOKD_<>c_JLAEDNPFJFA__;
        System_Func<object>___ctor();
        ppSVar4 = &IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_3;
        *ppSVar4 = pSVar9;
        thunk_FUN_01c20e04(ppSVar4,pSVar9);
      }
      if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IHEKBNOFOKD__BENDMCOBOKL(pSVar6,pSVar9,method_00);
      if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = StringLiteral_19494/*"local{_VariableWithUniqueName3467y4343}"*/;
      pSVar9 = IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_4;
      if (pSVar9 == (System_Func_string__o *)0x0) {
        if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Func_string__o *)thunk_FUN_01bda818(System_Func<string>_TypeInfo);
        method_00 = Method_IHEKBNOFOKD_<>c_HOFJBICDLMK__;
        System_Func<object>___ctor();
        ppSVar4 = &IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_4;
        *ppSVar4 = pSVar9;
        thunk_FUN_01c20e04(ppSVar4,pSVar9);
      }
      if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IHEKBNOFOKD__BENDMCOBOKL(pSVar6,pSVar9,method_00);
      if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = StringLiteral_19492/*"local{1+1}"*/;
      pSVar9 = IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_5;
      if (pSVar9 == (System_Func_string__o *)0x0) {
        if ((IHEKBNOFOKD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Func_string__o *)thunk_FUN_01bda818(System_Func<string>_TypeInfo);
        method_00 = Method_IHEKBNOFOKD_<>c_KELLCGINCJD__;
        System_Func<object>___ctor();
        ppSVar4 = &IHEKBNOFOKD_<>c_TypeInfo->static_fields->__9__2_5;
        *ppSVar4 = pSVar9;
        thunk_FUN_01c20e04(ppSVar4,pSVar9);
      }
      if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IHEKBNOFOKD__BENDMCOBOKL(pSVar6,pSVar9,method_00);
      pSVar8 = IHEKBNOFOKD_TypeInfo->static_fields->FIDOJDOEFIH;
      if (pSVar8 != (System_Collections_Generic_List_KeyValuePair_string__Func_string____o *)0x0) {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
                  (&local_c0,(System_Collections_Generic_List_T__o *)pSVar8,
                   Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_GetEnumerator__
                  );
        uVar1 = local_98;
        local_90.fields._index = local_c0.fields._index;
        local_90.fields._version = local_c0.fields._version;
        local_90.fields._list = local_c0.fields._list;
        lStack_78 = lStack_a8;
        local_90.fields._current = local_c0.fields._current;
        while( true ) {
          do {
            bVar3 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                              (&local_90,
                               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Func<string>>>_MoveNext__
                              );
            lVar2 = lStack_78;
            OOGPLJBADCD = local_90.fields._current;
            if (!bVar3) {
              local_98 = uVar1;
              System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Func<string>>>_Dispose__
                        );
              if (0 < local_64) {
                GJFEBGNFFBA__FKGKPCDMPCP((GJFEBGNFFBA_o *)__this,__this_00,(MethodInfo *)0x0);
                GJFEBGNFFBA__ILHNDPBPGAN
                          ((GJFEBGNFFBA_o *)__this,true,StringLiteral_10670/*"QuestCondition tests"*/,__this_00,
                           (MethodInfo *)0x0);
                pSVar6 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                pSVar7 = System_String__Concat
                                   (pSVar7,StringLiteral_261/*" <color=red>"*/,pSVar6,StringLiteral_417/*" failed</color>"*/,
                                    (MethodInfo *)0x0);
              }
              pSVar7 = System_String__Concat(StringLiteral_10710/*"QuestConditionTests "*/,pSVar7,(MethodInfo *)0x0);
              return pSVar7;
            }
            pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar5 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            HLAGOHADLKH = (pNVar5->fields).QuestParameters;
            if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
            }
            pSVar6 = MFBNFJGBPBB__HAKLDDOPIAF
                               (HLAGOHADLKH,(System_String_o *)OOGPLJBADCD,(MethodInfo *)0x0);
            pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar5 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = MFBNFJGBPBB__LPLONLCAIGL
                               (pSVar6,(pNVar5->fields).QuestParameters,(MethodInfo *)0x0);
            if (lVar2 == 0) {
              local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            b = (System_String_o *)
                (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
            bVar3 = System_String__op_Inequality(pSVar6,b,(MethodInfo *)0x0);
          } while (!bVar3);
          local_64 = local_64 + 1;
          values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
          if (values == (System_String_array *)0x0) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((int)values->max_length == 0) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[0] = StringLiteral_18191/*"failed "*/;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 2) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[1] = (System_String_o *)OOGPLJBADCD;
          thunk_FUN_01c20e04(values->m_Items + 1,OOGPLJBADCD);
          if ((uint)values->max_length < 3) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[2] = StringLiteral_470/*" localization("*/;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 4) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[3] = pSVar6;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar6);
          if ((uint)values->max_length < 5) break;
          values->m_Items[4] = StringLiteral_1114/*") need("*/;
          thunk_FUN_01c20e04();
          if ((uint)values->max_length < 6) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[5] = b;
          thunk_FUN_01c20e04(values->m_Items + 5,b);
          if ((uint)values->max_length < 7) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          values->m_Items[6] = StringLiteral_1100/*")"*/;
          thunk_FUN_01c20e04();
          pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
            local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Text_StringBuilder__AppendLine(__this_00,pSVar6,(MethodInfo *)0x0);
        }
        local_98 = uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void BENDMCOBOKL(string DIHAKADKIKM, Func<string> OLCNFFOMADA)  [RVA 0x35CBD44]
// IHEKBNOFOKD$$BENDMCOBOKL @ RVA 0x35CBD44

void IHEKBNOFOKD__BENDMCOBOKL
               (System_String_o *DIHAKADKIKM,System_Func_string__o *OLCNFFOMADA,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_string__Func_string___array *pSVar3;
  System_Collections_Generic_List_KeyValuePair_string__Func_string____o *__this;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  Il2CppObject local_40;
  
  if ((DAT_04568fa1 & 1) == 0) {
    FUN_01bab630(&IHEKBNOFOKD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Func<string>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_Add__);
    DAT_04568fa1 = 1;
  }
  if ((IHEKBNOFOKD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = IHEKBNOFOKD_TypeInfo->static_fields->FIDOJDOEFIH;
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (System_Func_string__o *)0x0;
  __this_00.fields.value = (Il2CppObject *)DIHAKADKIKM;
  __this_00.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_00,(Il2CppObject *)OLCNFFOMADA,
             Method_System_Collections_Generic_KeyValuePair<string,_Func<string>>__ctor__,in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_Add__;
  if (__this != (System_Collections_Generic_List_KeyValuePair_string__Func_string____o *)0x0) {
    item.fields.value = local_40.monitor;
    item.fields.key = (Il2CppObject *)local_40.klass;
    pSVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar3 != (System_Collections_Generic_KeyValuePair_string__Func_string___array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
        pSVar3->m_Items[(int)uVar1].fields.value = local_40.monitor;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35CBE5C]
// IHEKBNOFOKD$$.cctor @ RVA 0x35CBE5C

void IHEKBNOFOKD___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__Func_string____o *__this;
  
  if ((DAT_04568fa2 & 1) == 0) {
    FUN_01bab630(&IHEKBNOFOKD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_TypeInfo);
    DAT_04568fa2 = 1;
  }
  __this = (System_Collections_Generic_List_KeyValuePair_string__Func_string____o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_TypeInfo
                             );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>__ctor__);
  IHEKBNOFOKD_TypeInfo->static_fields->FIDOJDOEFIH = __this;
  thunk_FUN_01c20e04(IHEKBNOFOKD_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x35CBEF4]
// IHEKBNOFOKD$$.ctor @ RVA 0x35CBEF4

void IHEKBNOFOKD___ctor(IHEKBNOFOKD_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fa3 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04568fa3 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

