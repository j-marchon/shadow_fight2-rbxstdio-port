// TypeDefIndex 2776
// Namespace: 
// public class GameUtils.ONAGKGIEEGI
// Fields:
//   public Dictionary<string, LKPNOBFEAKD> HPJKPNJHGMF; // 0x10
//   public Dictionary<string, LKPNOBFEAKD> MEMCHPHKGHF; // 0x18
//   public Dictionary<string, LKPNOBFEAKD> BLAMCAPFOPD; // 0x20
//   public Dictionary<string, LKPNOBFEAKD> FEGHKKNNNLE; // 0x28

// ===== public LKPNOBFEAKD EOHNEGGPIOL(string KBPFIOOMDHJ)  [RVA 0x3410900]
// GameUtils.ONAGKGIEEGI$$EOHNEGGPIOL @ RVA 0x3410900

LKPNOBFEAKD_o *
GameUtils_ONAGKGIEEGI__EOHNEGGPIOL
          (GameUtils_ONAGKGIEEGI_o *__this,System_String_o *KBPFIOOMDHJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  GameUtils_FGHBAEIKNBF_o *__this_00;
  KFGGMKHNCGM_o *pKVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar5;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_01;
  int index;
  int iVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04568082 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568082 = 1;
  }
  iVar6 = 0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  do {
    ppSVar5 = &(__this->fields).BLAMCAPFOPD;
    if ((iVar6 != 0) && (ppSVar5 = &(__this->fields).FEGHKKNNNLE, iVar6 != 2)) {
      ppSVar5 = &(__this->fields).MEMCHPHKGHF;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5 ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                             ), pIVar1 = local_90.fields._current.fields.value, bVar2) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((LKPNOBFEAKD_o *)pIVar1 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = GameUtils_TypeInfo->static_fields->AIHLHCIPKJJ;
      if (__this_00 == (GameUtils_FGHBAEIKNBF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pKVar3 = GameUtils_FGHBAEIKNBF__HALKOOLIBED
                         (__this_00,((LKPNOBFEAKD_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                          method);
      if (pKVar3 != (KFGGMKHNCGM_o *)0x0) {
        __this_01 = (pKVar3->fields).EHGOHNHDKPP;
        if (__this_01 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (0 < (__this_01->fields)._size) {
          index = 0;
          do {
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method = (MethodInfo *)0x0;
            bVar2 = System_String__op_Equality
                              ((System_String_o *)pIVar4[2].klass,KBPFIOOMDHJ,(MethodInfo *)0x0);
            if (bVar2) {
              System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                        );
              return (LKPNOBFEAKD_o *)pIVar1;
            }
            index = index + 1;
          } while (index < (__this_01->fields)._size);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
              );
    iVar6 = iVar6 + 1;
    if (iVar6 == 3) {
      return (LKPNOBFEAKD_o *)0x0;
    }
  } while( true );
}


// ===== public void .ctor()  [RVA 0x3410D54]
// GameUtils.ONAGKGIEEGI$$.ctor @ RVA 0x3410D54

void GameUtils_ONAGKGIEEGI___ctor(GameUtils_ONAGKGIEEGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568083 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
    DAT_04568083 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo,
                              method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
  (__this->fields).HPJKPNJHGMF =
       (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
  ppSVar2 = &(__this->fields).MEMCHPHKGHF;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
  ppSVar2 = &(__this->fields).BLAMCAPFOPD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
  ppSVar2 = &(__this->fields).FEGHKKNNNLE;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ENMHDGDKLJD()  [RVA 0x3410E48]
// GameUtils.ONAGKGIEEGI$$ENMHDGDKLJD @ RVA 0x3410E48

void GameUtils_ONAGKGIEEGI__ENMHDGDKLJD(GameUtils_ONAGKGIEEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04568084 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    DAT_04568084 = 1;
    method = extraout_x1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HPJKPNJHGMF;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_50,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                  );
        return;
      }
      if ((LKPNOBFEAKD_o *)local_50.fields._current.fields.value == (LKPNOBFEAKD_o *)0x0) break;
      LKPNOBFEAKD__ENMHDGDKLJD
                ((LKPNOBFEAKD_o *)local_50.fields._current.fields.value,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void HNIHOIAMDPC(XmlNode MNPCOGBCAED)  [RVA 0x3410FA4]
// GameUtils.ONAGKGIEEGI$$HNIHOIAMDPC @ RVA 0x3410FA4

/* WARNING: Removing unreachable block (ram,0x0351134c) */

void GameUtils_ONAGKGIEEGI__HNIHOIAMDPC
               (GameUtils_ONAGKGIEEGI_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  LKPNOBFEAKD_o *__this_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04568085 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LKPNOBFEAKD_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568085 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HPJKPNJHGMF;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar2,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).MEMCHPHKGHF
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar2,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).BLAMCAPFOPD;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Clear
                  (pSVar2,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__)
        ;
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).FEGHKKNNNLE;
        if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (System_Collections_Generic_Dictionary<object,_object>__Clear
                       (pSVar2,
                        Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__),
            MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0)) &&
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
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_03511114;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03511114:
            uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if ((uVar6 & 1) == 0) {
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              if (plVar3 == (long *)0x0) {
                return;
              }
              lVar5 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 == 0) goto LAB_035112d8;
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_035112c0;
            }
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_03511174;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03511174:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
            __this_00 = (LKPNOBFEAKD_o *)thunk_FUN_01bda818(LKPNOBFEAKD_TypeInfo);
            if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
            }
            LKPNOBFEAKD___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
            if (__this_00 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields).HPJKPNJHGMF;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__)
            ;
            switch((__this_00->fields).DPLMPLDJKKB) {
            case 0:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).BLAMCAPFOPD;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              break;
            case 1:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).MEMCHPHKGHF;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              break;
            case 2:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).FEGHKKNNNLE;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              break;
            case 3:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).BLAMCAPFOPD;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).MEMCHPHKGHF;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_035112c0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_035112f4;
    }
  }
LAB_035112d8:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035112f4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public Dictionary<string, LKPNOBFEAKD> KKDGMGAEHMD(LKPNOBFEAKD.CCEDNJMAAIN KEMDLBKINAD)  [RVA 0x3410BD0]
// GameUtils.ONAGKGIEEGI$$KKDGMGAEHMD @ RVA 0x3410BD0

System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *
GameUtils_ONAGKGIEEGI__KKDGMGAEHMD
          (GameUtils_ONAGKGIEEGI_o *__this,int32_t KEMDLBKINAD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar1;
  
  if (KEMDLBKINAD == 2) {
    ppSVar1 = &(__this->fields).FEGHKKNNNLE;
  }
  else {
    ppSVar1 = &(__this->fields).MEMCHPHKGHF;
    if (KEMDLBKINAD == 0) {
      ppSVar1 = &(__this->fields).BLAMCAPFOPD;
    }
  }
  return *ppSVar1;
}


// ===== public Dictionary<string, LKPNOBFEAKD> KKDGMGAEHMD(FightList FBFPLEFCDOK)  [RVA 0x3411448]
// GameUtils.ONAGKGIEEGI$$KKDGMGAEHMD @ RVA 0x3411448

System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *
GameUtils_ONAGKGIEEGI__KKDGMGAEHMD
          (GameUtils_ONAGKGIEEGI_o *__this,FightList_o *FBFPLEFCDOK,MethodInfo *method)

{
  Roster_o *pAVar1;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  
  if ((DAT_04568086 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568086 = 1;
  }
  if ((FBFPLEFCDOK == (FightList_o *)0x0) || ((FBFPLEFCDOK->fields).JDNKKGPNHPB != 0x14)) {
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
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppSVar2 = &(__this->fields).BLAMCAPFOPD;
    if ((pAVar1->fields).IOHEOKOOJFA != true) {
      ppSVar2 = &(__this->fields).MEMCHPHKGHF;
    }
  }
  else {
    ppSVar2 = &(__this->fields).FEGHKKNNNLE;
  }
  return *ppSVar2;
}


// ===== public Dictionary<string, LKPNOBFEAKD> CDHEBBAJMHK(string ACCIHBHMFPN, LKPNOBFEAKD.CCEDNJMAAIN KEMDLBKINAD)  [RVA 0x3411510]
// GameUtils.ONAGKGIEEGI$$CDHEBBAJMHK @ RVA 0x3411510

System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *
GameUtils_ONAGKGIEEGI__CDHEBBAJMHK
          (GameUtils_ONAGKGIEEGI_o *__this,System_String_o *ACCIHBHMFPN,int32_t KEMDLBKINAD,
          MethodInfo *method)

{
  Il2CppObject *key;
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04568087 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    DAT_04568087 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
  if (KEMDLBKINAD == 2) {
    ppSVar2 = &(__this->fields).FEGHKKNNNLE;
  }
  else if (KEMDLBKINAD == 0) {
    ppSVar2 = &(__this->fields).BLAMCAPFOPD;
  }
  else {
    ppSVar2 = &(__this->fields).MEMCHPHKGHF;
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar2 !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_70,(System_Collections_Generic_Dictionary_object__object__o *)*ppSVar2,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                        );
      value = local_70.fields._current.fields.value;
      key = local_70.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                  );
        return (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)__this_00;
      }
      if (local_70.fields._current.fields.value == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        (local_70.fields._current.fields.value[1].monitor,ACCIHBHMFPN,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,key,value,
                   Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

