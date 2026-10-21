// CLIMGHHIDIK$$DPKNNBKIMDG @ RVA 0x3312C08

System_String_o *
CLIMGHHIDIK__DPKNNBKIMDG(CLIMGHHIDIK_o *__this,System_String_o *HBDNGIDONHG,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  LEGDPJHPEOB_o *pLVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  System_Text_StringBuilder_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_Func_TSource__bool__o *predicate;
  FPPKHNNABAD_o *__this_01;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_02;
  System_String_o *pSVar7;
  System_String_o *str3;
  System_String_array *pSVar8;
  System_Collections_Generic_List_FPPKHNNABAD__o *source;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  undefined1 local_b0 [8];
  void *pvStack_a8;
  int32_t local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined2 local_88 [2];
  undefined2 local_84 [2];
  undefined1 local_80 [8];
  void *pvStack_78;
  LEGDPJHPEOB_o *local_70;
  char local_64 [4];
  
  if ((DAT_045677c2 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<FPPKHNNABAD>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    FUN_01bab630(&LEGDPJHPEOB_NEKBOKBKCPA_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_ToString__);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    FUN_01bab630(&Method_CLIMGHHIDIK_OFBDPHOCCEM_LMIOJODJCIM__);
    FUN_01bab630(&CLIMGHHIDIK_OFBDPHOCCEM_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_492);
    FUN_01bab630(&StringLiteral_18701);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_377);
    FUN_01bab630(&StringLiteral_20467);
    FUN_01bab630(&StringLiteral_2472);
    FUN_01bab630(&StringLiteral_448);
    FUN_01bab630(&StringLiteral_2179);
    FUN_01bab630(&StringLiteral_20371);
    FUN_01bab630(&StringLiteral_2475);
    FUN_01bab630(&StringLiteral_4561);
    FUN_01bab630(&StringLiteral_595);
    DAT_045677c2 = 1;
  }
  local_64[0] = '\0';
  local_80 = (undefined1  [8])0x0;
  pvStack_78 = (void *)0x0;
  local_70 = (LEGDPJHPEOB_o *)0x0;
  local_84[0] = 0;
  local_88[0] = 0;
  local_90 = 0;
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(CLIMGHHIDIK_OFBDPHOCCEM_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5 = pIVar5 + 1;
    pIVar5->klass = (Il2CppClass *)HBDNGIDONHG;
    thunk_FUN_01c20e04(pIVar5,HBDNGIDONHG);
    __this_00 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      source = (pNVar6->fields).QuestsAll;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<FPPKHNNABAD,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      __this_01 = (FPPKHNNABAD_o *)
                  System_Linq_Enumerable__FirstOrDefault<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             Method_System_Linq_Enumerable_FirstOrDefault<FPPKHNNABAD>__);
      if (__this_01 == (FPPKHNNABAD_o *)0x0) {
        pSVar7 = System_String__Concat
                           (StringLiteral_20371,(System_String_o *)pIVar5->klass,StringLiteral_492,
                            (MethodInfo *)0x0);
        return pSVar7;
      }
      pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        AAJBIMFNMBB = (pNVar6->fields).QuestParameters;
        __this_02 = FPPKHNNABAD__EDELKHPPNCM(__this_01,(MethodInfo *)0x0);
        local_64[0] = '\x01';
        if (__this_02 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_b0,
                     (System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
          local_70 = (LEGDPJHPEOB_o *)CONCAT44(uStack_9c,local_a0);
          pvStack_78 = pvStack_a8;
          local_80 = local_b0;
          uVar2 = local_90;
          while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                                    Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__
                                   ), pLVar3 = local_70, bVar4) {
            local_84[0] = 0;
            if (local_70 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar4 = LEGDPJHPEOB__DGCODECJJCC(local_70,AAJBIMFNMBB,(MethodInfo *)0x0);
            local_b0 = (undefined1  [8])((ulong)local_b0 & 0xffffffffffff0000);
            System_Nullable<bool>___ctor
                      ((System_Nullable_bool__o)SUB82(local_b0,0),bVar4,
                       Method_System_Nullable<bool>__ctor__);
            local_84[0] = local_b0._0_2_;
            if (((ulong)local_b0 & 0xff) != 0) {
              local_90 = uVar2;
              bVar4 = System_String__IsNullOrEmpty((pLVar3->fields).HGLHAHMIGDB,(MethodInfo *)0x0);
              if ((bVar4) &&
                 (bVar4 = System_String__IsNullOrEmpty
                                    ((pLVar3->fields).NKNANOCKLNG,(MethodInfo *)0x0), bVar4)) {
                local_b0 = (undefined1  [8])LEGDPJHPEOB_NEKBOKBKCPA_TypeInfo;
                pvStack_a8 = (void *)0xffffffffffffffff;
                local_a0 = (pLVar3->fields).HJBFKFHHAEO;
                pSVar7 = System_Enum__ToString((System_Enum_o *)local_b0,(MethodInfo *)0x0);
                local_88[0] = local_84[0];
                str3 = System_Nullable<bool>__ToString
                                 ((System_Nullable_bool__o)SUB82(local_88,0),
                                  Method_System_Nullable<bool>_ToString__);
                pSVar7 = System_String__Concat
                                   (StringLiteral_4561,pSVar7,StringLiteral_448,str3,
                                    (MethodInfo *)0x0);
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Text_StringBuilder__AppendLine(__this_00,pSVar7,(MethodInfo *)0x0);
              }
              else {
                pSVar8 = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
                if (pSVar8 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if ((int)pSVar8->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[0] = StringLiteral_4561;
                thunk_FUN_01c20e04();
                if ((uint)pSVar8->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[1] = (pLVar3->fields).HGLHAHMIGDB;
                thunk_FUN_01c20e04();
                if ((uint)pSVar8->max_length < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[2] = StringLiteral_167;
                thunk_FUN_01c20e04();
                puVar1 = &StringLiteral_2472;
                if ((pLVar3->fields).CKPHGNCGNHK != false) {
                  puVar1 = &StringLiteral_595;
                }
                if ((uint)pSVar8->max_length < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[3] = (System_String_o *)*puVar1;
                thunk_FUN_01c20e04();
                if ((uint)pSVar8->max_length < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[4] = StringLiteral_167;
                thunk_FUN_01c20e04();
                if ((uint)pSVar8->max_length < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[5] = (pLVar3->fields).NKNANOCKLNG;
                thunk_FUN_01c20e04();
                if ((uint)pSVar8->max_length < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[6] = StringLiteral_448;
                thunk_FUN_01c20e04();
                local_88[0] = local_84[0];
                pSVar7 = System_Nullable<bool>__ToString
                                   ((System_Nullable_bool__o)SUB82(local_88,0),
                                    Method_System_Nullable<bool>_ToString__);
                if ((uint)pSVar8->max_length < 8) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pSVar8->m_Items[7] = pSVar7;
                thunk_FUN_01c20e04();
                pSVar7 = System_String__Concat(pSVar8,(MethodInfo *)0x0);
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Text_StringBuilder__AppendLine(__this_00,pSVar7,(MethodInfo *)0x0);
              }
              bVar4 = System_Nullable<bool>__get_Value
                                ((System_Nullable_bool__o)SUB82(local_84,0),
                                 Method_System_Nullable<bool>_get_Value__);
              uVar2 = local_90;
              if (!bVar4) {
                local_64[0] = '\0';
              }
            }
          }
          local_90 = uVar2;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                     Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
          pSVar8 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
          if (pSVar8 != (System_String_array *)0x0) {
            if ((int)pSVar8->max_length != 0) {
              pSVar8->m_Items[0] = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
              thunk_FUN_01c20e04(pSVar8->m_Items);
              if (1 < (uint)pSVar8->max_length) {
                pSVar8->m_Items[1] = StringLiteral_377;
                thunk_FUN_01c20e04(pSVar8->m_Items + 1);
                puVar1 = &StringLiteral_20467;
                if (local_64[0] != '\0') {
                  puVar1 = &StringLiteral_18701;
                }
                if (2 < (uint)pSVar8->max_length) {
                  pSVar8->m_Items[2] = (System_String_o *)*puVar1;
                  thunk_FUN_01c20e04(pSVar8->m_Items + 2);
                  if (3 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[3] = StringLiteral_2475;
                    thunk_FUN_01c20e04();
                    /* try { // try from 03413478 to 035136fb has its CatchHandler @ 03413478
                       catch() { ... } // from try @ 03413478 with catch @ 03413478
                       catch() { ... } // from try @ 03413830 with catch @ 03413478
                       catch() { ... } // from try @ 03413ad8 with catch @ 03413478
                       catch() { ... } // from try @ 03413bc4 with catch @ 03413478
                       catch() { ... } // from try @ 03413c80 with catch @ 03413478
                       catch() { ... } // from try @ 03413cb8 with catch @ 03413478
                       catch() { ... } // from try @ 03413ef8 with catch @ 03413478
                       catch() { ... } // from try @ 03413f14 with catch @ 03413478
                       catch() { ... } // from try @ 03413f5c with catch @ 03413478
                       catch() { ... } // from try @ 03413f9c with catch @ 03413478 */
                    if ((bool_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar7 = System_Boolean__ToString(SUB81(local_64,0),(MethodInfo *)0x0);
                    if (4 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[4] = pSVar7;
                      thunk_FUN_01c20e04(pSVar8->m_Items + 4,pSVar7);
                      if (5 < (uint)pSVar8->max_length) {
                        pSVar8->m_Items[5] = StringLiteral_2179;
                        thunk_FUN_01c20e04();
                        pSVar7 = System_String__Concat(pSVar8,(MethodInfo *)0x0);
                        if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                          System_Text_StringBuilder__AppendLine(__this_00,pSVar7,(MethodInfo *)0x0);
                          pSVar7 = (System_String_o *)
                                   (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                             (__this_00,
                                              (__this_00->klass->vtable)._3_ToString.method);
                          return pSVar7;
                        }
                        goto LAB_0341354c;
                      }
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_0341354c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

