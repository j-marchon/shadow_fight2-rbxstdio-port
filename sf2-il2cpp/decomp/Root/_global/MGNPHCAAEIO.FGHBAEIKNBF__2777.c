// TypeDefIndex 2777
// Namespace: 
// public class MGNPHCAAEIO.FGHBAEIKNBF
// Fields:
//   public List<KFGGMKHNCGM> BJGBOCFLEGO; // 0x10

// ===== public void DGLJCGNHLIG()  [RVA 0x3411728]
// MGNPHCAAEIO.FGHBAEIKNBF$$DGLJCGNHLIG @ RVA 0x3411728

void MGNPHCAAEIO_FGHBAEIKNBF__DGLJCGNHLIG(MGNPHCAAEIO_FGHBAEIKNBF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  KMJDCOABCCG_o *__this_00;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_FGHBAEIKNBF_o *pMVar2;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_01;
  int index;
  System_Collections_Generic_List_object__o *__this_02;
  int index_00;
  
  if ((DAT_04568088 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568088 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
  if ((pMVar2 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) &&
     (__this_01 = (pMVar2->fields).BJGBOCFLEGO,
     __this_01 != (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0)) {
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
        if (pIVar1 != (Il2CppObject *)0x0) {
          __this_02 = pIVar1[1].monitor;
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03511854;
          if (0 < (__this_02->fields)._size) {
            index_00 = 0;
            do {
              __this_00 = (KMJDCOABCCG_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    (__this_02,index_00,
                                     Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__)
              ;
              if (__this_00 == (KMJDCOABCCG_o *)0x0) goto LAB_03511854;
              KMJDCOABCCG__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
              index_00 = index_00 + 1;
            } while (index_00 < (__this_02->fields)._size);
          }
        }
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    return;
  }
LAB_03511854:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KMJDCOABCCG MDAFMGBHOGB(string KGLJICLJHEL)  [RVA 0x3411858]
// MGNPHCAAEIO.FGHBAEIKNBF$$MDAFMGBHOGB @ RVA 0x3411858

/* WARNING: Removing unreachable block (ram,0x03511a7c) */

KMJDCOABCCG_o *
MGNPHCAAEIO_FGHBAEIKNBF__MDAFMGBHOGB
          (MGNPHCAAEIO_FGHBAEIKNBF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  KMJDCOABCCG_o *pKVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568089 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    DAT_04568089 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BJGBOCFLEGO;
  if (__this_00 == (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    if (!bVar1) {
      pKVar2 = (KMJDCOABCCG_o *)0x0;
      break;
    }
    if ((KMJDCOABCCG_o *)local_70.fields._current == (KMJDCOABCCG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)
                 &((KMJDCOABCCG_Fields *)((long)local_70.fields._current + 0x10))->ICOLJMCHFEC;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,__this_01,
               Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
      pKVar2 = (KMJDCOABCCG_o *)local_90.fields._current;
      if (!bVar1) {
        pKVar2 = (KMJDCOABCCG_o *)0x0;
        uVar3 = 2;
        goto LAB_035119d0;
      }
      if ((KMJDCOABCCG_o *)local_90.fields._current == (KMJDCOABCCG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__op_Equality
                        (((KMJDCOABCCG_Fields *)((long)local_90.fields._current + 0x10))->
                         JIJLBFGKNJK,KGLJICLJHEL,(MethodInfo *)0x0);
    } while (!bVar1);
    uVar3 = 6;
LAB_035119d0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
  return pKVar2;
}


// ===== public void HNIHOIAMDPC(XmlNode MNPCOGBCAED)  [RVA 0x3411B18]
// MGNPHCAAEIO.FGHBAEIKNBF$$HNIHOIAMDPC @ RVA 0x3411B18

/* WARNING: Removing unreachable block (ram,0x03511e30) */

void MGNPHCAAEIO_FGHBAEIKNBF__HNIHOIAMDPC
               (MGNPHCAAEIO_FGHBAEIKNBF_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  KFGGMKHNCGM_o *__this_00;
  System_Collections_Generic_List_KFGGMKHNCGM__o *pSVar5;
  long lVar6;
  KFGGMKHNCGM_array *pKVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_0456808a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KFGGMKHNCGM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456808a = 1;
  }
  pSVar5 = (__this->fields).BJGBOCFLEGO;
  if (pSVar5 != (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (MNPCOGBCAED,
                                    (MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03511c64;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03511c64:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_03511dd0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03511db8;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03511cc4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03511cc4:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        __this_00 = (KFGGMKHNCGM_o *)thunk_FUN_01bda818(KFGGMKHNCGM_TypeInfo);
        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB);
          }
        }
        KFGGMKHNCGM___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<KFGGMKHNCGM>_Add__;
        pSVar5 = (__this->fields).BJGBOCFLEGO;
        if (pSVar5 == (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pKVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pKVar7 == (KFGGMKHNCGM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pKVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pKVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pKVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03511db8:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03511dec;
    }
  }
LAB_03511dd0:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03511dec:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public List<KMJDCOABCCG> EGAMDFPKABL()  [RVA 0x3411EFC]
// MGNPHCAAEIO.FGHBAEIKNBF$$EGAMDFPKABL @ RVA 0x3411EFC

System_Collections_Generic_List_KMJDCOABCCG__o *
MGNPHCAAEIO_FGHBAEIKNBF__EGAMDFPKABL(MGNPHCAAEIO_FGHBAEIKNBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_00;
  Il2CppObject *pIVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_01;
  KFGGMKHNCGM_o *pKVar4;
  KMJDCOABCCG_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  FEPPOONJCGI_o *pFVar6;
  KMJDCOABCCG_array *pKVar7;
  System_Collections_Generic_List_PANJAHAFBMD__o *__this_02;
  int index;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_03;
  int index_00;
  
  if ((DAT_0456808b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456808b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KMJDCOABCCG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
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
  if (((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
      (pFVar6 = (pAVar5->fields).IMJJJJJMMHL, pFVar6 != (FEPPOONJCGI_o *)0x0)) &&
     (__this_02 = (pFVar6->fields).MCDCFBOBJGI,
     __this_02 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0)) {
    if (0 < (__this_02->fields)._size) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03512170;
        KGLJICLJHEL = pIVar3[1].monitor;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
        if (__this_01 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) goto LAB_03512170;
        pKVar4 = MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED(__this_01,KGLJICLJHEL,method_00);
        if (pKVar4 != (KFGGMKHNCGM_o *)0x0) {
          __this_03 = (pKVar4->fields).EHGOHNHDKPP;
          if (__this_03 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) goto LAB_03512170;
          if (0 < (__this_03->fields)._size) {
            index_00 = 0;
            do {
              item = (KMJDCOABCCG_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_03,index_00,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
              lVar2 = Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__;
              if (item == (KMJDCOABCCG_o *)0x0) goto LAB_03512170;
              if ((item->fields).ADHFHEJFJPK <= *(int *)&pIVar3[2].klass) {
                if (__this_00 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0)
                goto LAB_03512170;
                pKVar7 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pKVar7 == (KMJDCOABCCG_array *)0x0) goto LAB_03512170;
                uVar1 = (__this_00->fields)._size;
                if (uVar1 < (uint)pKVar7->max_length) {
                  (__this_00->fields)._size = uVar1 + 1;
                  pKVar7->m_Items[(int)uVar1] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
              index_00 = index_00 + 1;
            } while (index_00 < (__this_03->fields)._size);
          }
        }
        index = index + 1;
      } while (index < (__this_02->fields)._size);
    }
    return __this_00;
  }
LAB_03512170:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<MGNDHCBAPEN<KMJDCOABCCG, int>> EBKMLNCHIEP(List<string> MDEBDNLAEKA)  [RVA 0x3412174]
// MGNPHCAAEIO.FGHBAEIKNBF$$EBKMLNCHIEP @ RVA 0x3412174

/* WARNING: Removing unreachable block (ram,0x035124b0) */

System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *
MGNPHCAAEIO_FGHBAEIKNBF__EBKMLNCHIEP
          (MGNPHCAAEIO_FGHBAEIKNBF_o *__this,System_Collections_Generic_List_string__o *MDEBDNLAEKA,
          MethodInfo *method)

{
  uint JGGJNLLANAE;
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_01;
  KFGGMKHNCGM_o *pKVar5;
  FEPPOONJCGI_o *__this_02;
  PANJAHAFBMD_o *pPVar6;
  MGNDHCBAPEN_KMJDCOABCCG__int__o *__this_03;
  ACHLOMELAJE_o *pAVar7;
  MGNDHCBAPEN_KMJDCOABCCG__int__array *pMVar8;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_04;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456808c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456808c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>__ctor__);
  if (MDEBDNLAEKA == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)MDEBDNLAEKA,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    do {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      pIVar3 = local_80.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        return __this_00;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
      if (__this_01 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pKVar5 = MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED(__this_01,(System_String_o *)pIVar3,method);
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
      pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar7 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (pAVar7->fields).IMJJJJJMMHL;
      if (__this_02 == (FEPPOONJCGI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = (MethodInfo *)0x0;
      pPVar6 = FEPPOONJCGI__HALKOOLIBED(__this_02,(System_String_o *)pIVar3,(MethodInfo *)0x0);
    } while ((pKVar5 == (KFGGMKHNCGM_o *)0x0) || (pPVar6 == (PANJAHAFBMD_o *)0x0));
    __this_04 = (pKVar5->fields).EHGOHNHDKPP;
    if (__this_04 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    JGGJNLLANAE = (pPVar6->fields).GAMONLCHOKL;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_04,
               Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
      pIVar3 = local_a0.fields._current;
      if (!bVar4) break;
      if ((System_String_o *)local_a0.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      KGLJICLJHEL = ((System_String_o *)((long)local_a0.fields._current + 0x18))->monitor;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = MGNPHCAAEIO__GPNEFMMHHNG(KGLJICLJHEL,(MethodInfo *)0x0);
      if (!bVar4) {
        __this_03 = (MGNDHCBAPEN_KMJDCOABCCG__int__o *)
                    thunk_FUN_01bda818(MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
        method = (MethodInfo *)(ulong)JGGJNLLANAE;
        MGNDHCBAPEN<object,_int>___ctor
                  ((MGNDHCBAPEN_T1__T2__o *)__this_03,pIVar3,JGGJNLLANAE,
                   Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
        lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__;
        if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar8 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pMVar8 == (MGNDHCBAPEN_KMJDCOABCCG__int__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pMVar8->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pMVar8->m_Items[(int)uVar1] = __this_03;
          thunk_FUN_01c20e04(pMVar8->m_Items + (int)uVar1,__this_03);
        }
        else {
          method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (Il2CppObject *)__this_03,(MethodInfo_26E4DAC *)method);
        }
      }
    } while (*(int *)&((System_String_Fields *)((long)pIVar3 + 0x10))->_firstChar <=
             (int)JGGJNLLANAE);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
  } while( true );
}


// ===== public KFGGMKHNCGM HALKOOLIBED(string KGLJICLJHEL)  [RVA 0x3410BF8]
// MGNPHCAAEIO.FGHBAEIKNBF$$HALKOOLIBED @ RVA 0x3410BF8

KFGGMKHNCGM_o *
MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED
          (MGNPHCAAEIO_FGHBAEIKNBF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_00;
  KFGGMKHNCGM_o *pKVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456808d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
    DAT_0456808d = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BJGBOCFLEGO;
  if (__this_00 == (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    pKVar2 = (KFGGMKHNCGM_o *)local_48.fields._current;
    if (!bVar1) {
      pKVar2 = (KFGGMKHNCGM_o *)0x0;
      break;
    }
    if ((KFGGMKHNCGM_o *)local_48.fields._current == (KFGGMKHNCGM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((KFGGMKHNCGM_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
  return pKVar2;
}


// ===== public void .ctor()  [RVA 0x3412628]
// MGNPHCAAEIO.FGHBAEIKNBF$$.ctor @ RVA 0x3412628

void MGNPHCAAEIO_FGHBAEIKNBF___ctor(MGNPHCAAEIO_FGHBAEIKNBF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456808e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KFGGMKHNCGM>_TypeInfo);
    DAT_0456808e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KFGGMKHNCGM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KFGGMKHNCGM>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFGGMKHNCGM>__ctor__);
  (__this->fields).BJGBOCFLEGO = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

