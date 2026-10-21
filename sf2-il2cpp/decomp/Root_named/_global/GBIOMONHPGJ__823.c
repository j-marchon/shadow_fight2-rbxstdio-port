// TypeDefIndex 823
// Namespace: 
// public static class GBIOMONHPGJ
// Fields:
//   private static bool DHKAODBNGNJ; // 0x0
//   private static readonly Queue<IEJKLPPLHMO> IDIHCKPDBOO; // 0x8
//   private static readonly List<IEJKLPPLHMO> IMEAALCCAGP; // 0x10

// ===== private static void .cctor()  [RVA 0x3079764]
// GBIOMONHPGJ$$.cctor @ RVA 0x3079764

void GBIOMONHPGJ___cctor(MethodInfo *method)

{
  System_Collections_Generic_Queue_IEJKLPPLHMO__o *__this;
  System_Collections_Generic_Queue_IEJKLPPLHMO__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IEJKLPPLHMO__o **ppSVar2;
  
  if ((DAT_04565fca & 1) == 0) {
    FUN_01bab630(&GBIOMONHPGJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEJKLPPLHMO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IEJKLPPLHMO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<IEJKLPPLHMO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Queue<IEJKLPPLHMO>_TypeInfo);
    DAT_04565fca = 1;
  }
  __this = (System_Collections_Generic_Queue_IEJKLPPLHMO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Queue<IEJKLPPLHMO>_TypeInfo);
  System_Collections_Generic_Queue<object>___ctor
            ((System_Collections_Generic_Queue_T__o *)__this,
             Method_System_Collections_Generic_Queue<IEJKLPPLHMO>__ctor__);
  ppSVar1 = &GBIOMONHPGJ_TypeInfo->static_fields->IDIHCKPDBOO;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IEJKLPPLHMO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IEJKLPPLHMO>__ctor__);
  ppSVar2 = &GBIOMONHPGJ_TypeInfo->static_fields->IMEAALCCAGP;
  *ppSVar2 = (System_Collections_Generic_List_IEJKLPPLHMO__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  return;
}


// ===== public static void GIENGNEGHPJ()  [RVA 0x307984C]
// GBIOMONHPGJ$$GIENGNEGHPJ @ RVA 0x307984C

void GBIOMONHPGJ__GIENGNEGHPJ(MethodInfo *method)

{
  GBIOMONHPGJ_c *pGVar1;
  Il2CppObject *EFENHAFFBAG;
  System_Func_IEnumerable_IEJKLPPLHMO___o **ppSVar2;
  CMAJEGMJEMH_o *__this;
  HFLKAPIOLHF_o *__this_00;
  IEJKLPPLHMO_o *pIVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar4;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  GBIOMONHPGJ_StaticFields *pGVar5;
  System_Collections_Generic_Queue_IEJKLPPLHMO__o *__this_01;
  System_Func_IEnumerable_IEJKLPPLHMO___o *pSVar6;
  
  if ((DAT_04565fcb & 1) == 0) {
    FUN_01bab630(&CGOBMFJEDCI_TypeInfo);
    FUN_01bab630(&CMAJEGMJEMH_TypeInfo);
    FUN_01bab630(&FLKONHPKDBC_TypeInfo);
    FUN_01bab630(&System_Func<IEnumerable<IEJKLPPLHMO>>_TypeInfo);
    FUN_01bab630(&GBIOMONHPGJ_TypeInfo);
    FUN_01bab630(&HFLKAPIOLHF_TypeInfo);
    FUN_01bab630(&HLHBKABHAGN_TypeInfo);
    FUN_01bab630(&LLGBPOPMPDE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<IEJKLPPLHMO>_Dequeue__);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<IEJKLPPLHMO>_get_Count__);
    FUN_01bab630(&Method_GBIOMONHPGJ_<>c_ENGCNBCOBAE__);
    FUN_01bab630(&Method_GBIOMONHPGJ_<>c_OAJKAJMHIHC__);
    FUN_01bab630(&GBIOMONHPGJ_<>c_TypeInfo);
    DAT_04565fcb = 1;
  }
  if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar5 = GBIOMONHPGJ_TypeInfo->static_fields;
  if (pGVar5->DHKAODBNGNJ != false) {
    return;
  }
  if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pGVar5 = GBIOMONHPGJ_TypeInfo->static_fields;
  }
  pGVar1 = GBIOMONHPGJ_TypeInfo;
  pGVar5->DHKAODBNGNJ = true;
  while( true ) {
    if ((pGVar1->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pGVar1 = GBIOMONHPGJ_TypeInfo;
    }
    __this_01 = pGVar1->static_fields->IDIHCKPDBOO;
    if (__this_01 == (System_Collections_Generic_Queue_IEJKLPPLHMO__o *)0x0) break;
    if ((__this_01->fields)._size < 1) {
      if ((GBIOMONHPGJ_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = GBIOMONHPGJ_<>c_TypeInfo->static_fields->__9__3_0;
      if (pSVar6 == (System_Func_IEnumerable_IEJKLPPLHMO___o *)0x0) {
        if ((GBIOMONHPGJ_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = (System_Func_IEnumerable_IEJKLPPLHMO___o *)
                 thunk_FUN_01bda818(System_Func<IEnumerable<IEJKLPPLHMO>>_TypeInfo);
        System_Func<object>___ctor();
        ppSVar2 = &GBIOMONHPGJ_<>c_TypeInfo->static_fields->__9__3_0;
        *ppSVar2 = pSVar6;
        thunk_FUN_01c20e04(ppSVar2,pSVar6);
      }
      __this = (CMAJEGMJEMH_o *)thunk_FUN_01bda818(CMAJEGMJEMH_TypeInfo);
      CMAJEGMJEMH___ctor(__this,pSVar6,(MethodInfo *)0x0);
      pMVar4 = extraout_x1;
      if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar4 = extraout_x1_00;
      }
      GBIOMONHPGJ__CEOCJPLKFNF((IEJKLPPLHMO_o *)__this,pMVar4);
      if ((GBIOMONHPGJ_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = GBIOMONHPGJ_<>c_TypeInfo->static_fields->__9__3_1;
      if (pSVar6 == (System_Func_IEnumerable_IEJKLPPLHMO___o *)0x0) {
        if ((GBIOMONHPGJ_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = (System_Func_IEnumerable_IEJKLPPLHMO___o *)
                 thunk_FUN_01bda818(System_Func<IEnumerable<IEJKLPPLHMO>>_TypeInfo);
        System_Func<object>___ctor();
        ppSVar2 = &GBIOMONHPGJ_<>c_TypeInfo->static_fields->__9__3_1;
        *ppSVar2 = pSVar6;
        thunk_FUN_01c20e04(ppSVar2,pSVar6);
      }
      __this_00 = (HFLKAPIOLHF_o *)thunk_FUN_01bda818(HFLKAPIOLHF_TypeInfo);
      HFLKAPIOLHF___ctor(__this_00,pSVar6,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_01;
      if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar4 = extraout_x1_02;
      }
      GBIOMONHPGJ__CEOCJPLKFNF((IEJKLPPLHMO_o *)__this_00,pMVar4);
      pIVar3 = (IEJKLPPLHMO_o *)thunk_FUN_01bda818(CGOBMFJEDCI_TypeInfo);
      CGOBMFJEDCI___ctor((CGOBMFJEDCI_o *)pIVar3,(MethodInfo *)0x0);
      GBIOMONHPGJ__CEOCJPLKFNF(pIVar3,method_01);
      pIVar3 = (IEJKLPPLHMO_o *)thunk_FUN_01bda818(HLHBKABHAGN_TypeInfo);
      HLHBKABHAGN___ctor((HLHBKABHAGN_o *)pIVar3,(MethodInfo *)0x0);
      GBIOMONHPGJ__CEOCJPLKFNF(pIVar3,method_02);
      pIVar3 = (IEJKLPPLHMO_o *)thunk_FUN_01bda818(FLKONHPKDBC_TypeInfo);
      FLKONHPKDBC___ctor((FLKONHPKDBC_o *)pIVar3,(MethodInfo *)0x0);
      GBIOMONHPGJ__CEOCJPLKFNF(pIVar3,method_03);
      pIVar3 = (IEJKLPPLHMO_o *)thunk_FUN_01bda818(LLGBPOPMPDE_TypeInfo);
      LLGBPOPMPDE___ctor((LLGBPOPMPDE_o *)pIVar3,(MethodInfo *)0x0);
      GBIOMONHPGJ__CEOCJPLKFNF(pIVar3,method_04);
      return;
    }
    if ((pGVar1->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      __this_01 = GBIOMONHPGJ_TypeInfo->static_fields->IDIHCKPDBOO;
      if (__this_01 == (System_Collections_Generic_Queue_IEJKLPPLHMO__o *)0x0) break;
    }
    EFENHAFFBAG = System_Collections_Generic_Queue<object>__Dequeue
                            ((System_Collections_Generic_Queue_T__o *)__this_01,
                             Method_System_Collections_Generic_Queue<IEJKLPPLHMO>_Dequeue__);
    GBIOMONHPGJ__CEOCJPLKFNF((IEJKLPPLHMO_o *)EFENHAFFBAG,method_00);
    pGVar1 = GBIOMONHPGJ_TypeInfo;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CEOCJPLKFNF(IEJKLPPLHMO EFENHAFFBAG)  [RVA 0x3079BC8]
// GBIOMONHPGJ$$CEOCJPLKFNF @ RVA 0x3079BC8

/* WARNING: Removing unreachable block (ram,0x0317a0e4) */
/* WARNING: Removing unreachable block (ram,0x0317a174) */

void GBIOMONHPGJ__CEOCJPLKFNF(IEJKLPPLHMO_o *EFENHAFFBAG,MethodInfo *method)

{
  void **ppvVar1;
  uint uVar2;
  byte bVar3;
  Il2CppObject *__this;
  undefined8 *puVar4;
  long *plVar5;
  System_String_o *EFENHAFFBAG_00;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *IEHEDNIMCBI;
  System_Collections_Generic_Queue_IEJKLPPLHMO__o *__this_01;
  MethodInfo *extraout_x1;
  void *pvVar6;
  long lVar7;
  System_Object_array *pSVar8;
  ulong uVar9;
  int *piVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  GHACLGGJIKK_CDAKEOFFIAJ_o *__this_02;
  
  if ((DAT_04565fcc & 1) == 0) {
    FUN_01bab630(&GHACLGGJIKK_CDAKEOFFIAJ_TypeInfo);
    FUN_01bab630(&Console_TypeInfo);
    FUN_01bab630(&Method_GBIOMONHPGJ_DEEJFELBABJ_NENFHIHOKBA__);
    FUN_01bab630(&GBIOMONHPGJ_DEEJFELBABJ_TypeInfo);
    FUN_01bab630(&GBIOMONHPGJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEJKLPPLHMO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<IEJKLPPLHMO>_Enqueue__);
    DAT_04565fcc = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(GBIOMONHPGJ_DEEJFELBABJ_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pIVar11 = __this + 1;
    pIVar11->klass = (Il2CppClass *)EFENHAFFBAG;
    thunk_FUN_01c20e04(pIVar11,EFENHAFFBAG);
    if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (GBIOMONHPGJ_TypeInfo->static_fields->DHKAODBNGNJ == false) {
      if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = GBIOMONHPGJ_TypeInfo->static_fields->IDIHCKPDBOO;
      if (__this_01 != (System_Collections_Generic_Queue_IEJKLPPLHMO__o *)0x0) {
        System_Collections_Generic_Queue<object>__Enqueue
                  ((System_Collections_Generic_Queue_T__o *)__this_01,(Il2CppObject *)pIVar11->klass
                   ,Method_System_Collections_Generic_Queue<IEJKLPPLHMO>_Enqueue__);
        return;
      }
    }
    else {
      pIVar12 = pIVar11->klass;
      if (pIVar12 != (Il2CppClass *)0x0) {
        pvVar6 = (pIVar12->_1).image;
        uVar9 = (ulong)*(ushort *)((long)pvVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)((long)pvVar6 + 0xb0) + 8);
          do {
            if (*(IEJKLPPLHMO_c **)(piVar10 + -2) == IEJKLPPLHMO_TypeInfo) {
              puVar4 = (undefined8 *)((long)pvVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_03179d48;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(pIVar12,IEJKLPPLHMO_TypeInfo,1);
LAB_03179d48:
        plVar5 = (long *)(*(code *)*puVar4)(pIVar12,puVar4[1]);
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerable_string__c **)(piVar10 + -2) ==
                  System_Collections_Generic_IEnumerable<string>_TypeInfo) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03179db0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01b81914(plVar5,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_03179db0:
          plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ppvVar1 = &__this[1].monitor;
          do {
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03179e30;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03179e30:
            uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
            if ((uVar9 & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                return;
              }
              lVar7 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 == 0) goto LAB_0317a0b4;
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_0317a09c;
            }
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar10 + -2) ==
                    System_Collections_Generic_IEnumerator<string>_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03179e94;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_03179e94:
            EFENHAFFBAG_00 = (System_String_o *)(*(code *)*puVar4)(plVar5,puVar4[1]);
            if ((GBIOMONHPGJ_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            lVar7 = Method_System_Collections_Generic_List<IEJKLPPLHMO>_Add__;
            __this_00 = (System_Collections_Generic_List_object__o *)
                        GBIOMONHPGJ_TypeInfo->static_fields->IMEAALCCAGP;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar12 = pIVar11->klass;
            pSVar8 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar8->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar8->m_Items[(int)uVar2] = (Il2CppObject *)pIVar12;
              thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)pIVar12,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar12 = pIVar11->klass;
            if (pIVar12 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pvVar6 = (pIVar12->_1).image;
            uVar9 = (ulong)*(ushort *)((long)pvVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)((long)pvVar6 + 0xb0) + 8);
              do {
                if (*(IEJKLPPLHMO_c **)(piVar10 + -2) == IEJKLPPLHMO_TypeInfo) {
                  puVar4 = (undefined8 *)((long)pvVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_03179f84;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(pIVar12,IEJKLPPLHMO_TypeInfo,2);
LAB_03179f84:
            IEHEDNIMCBI = (System_String_o *)(*(code *)*puVar4)(pIVar12,puVar4[1]);
            __this_02 = *ppvVar1;
            if (__this_02 == (GHACLGGJIKK_CDAKEOFFIAJ_o *)0x0) {
              __this_02 = (GHACLGGJIKK_CDAKEOFFIAJ_o *)
                          thunk_FUN_01bda818(GHACLGGJIKK_CDAKEOFFIAJ_TypeInfo);
              GHACLGGJIKK_CDAKEOFFIAJ___ctor
                        (__this_02,__this,Method_GBIOMONHPGJ_DEEJFELBABJ_NENFHIHOKBA__,
                         (MethodInfo *)0x0);
              *ppvVar1 = __this_02;
              thunk_FUN_01c20e04(ppvVar1,__this_02);
            }
            pIVar12 = pIVar11->klass;
            if (pIVar12 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pvVar6 = (pIVar12->_1).image;
            uVar9 = (ulong)*(ushort *)((long)pvVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)((long)pvVar6 + 0xb0) + 8);
              do {
                if (*(IEJKLPPLHMO_c **)(piVar10 + -2) == IEJKLPPLHMO_TypeInfo) {
                  puVar4 = (undefined8 *)((long)pvVar6 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                  goto LAB_0317a030;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(pIVar12,IEJKLPPLHMO_TypeInfo,4);
LAB_0317a030:
            bVar3 = (*(code *)*puVar4)(pIVar12,puVar4[1]);
            if ((Console_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            Console__CEOCJPLKFNF
                      (EFENHAFFBAG_00,IEHEDNIMCBI,__this_02,(bool)(bVar3 & 1),true,(MethodInfo *)0x0
                      );
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0317a09c:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0317a0d0;
    }
  }
LAB_0317a0b4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0317a0d0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}

