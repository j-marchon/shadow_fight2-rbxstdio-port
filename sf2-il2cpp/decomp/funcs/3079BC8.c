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
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
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
            if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            CFEANGJDHEE__CEOCJPLKFNF
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

