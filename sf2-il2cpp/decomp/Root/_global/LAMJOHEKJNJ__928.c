// TypeDefIndex 928
// Namespace: 
// public class LAMJOHEKJNJ
// Fields:
//   private Action<string> HMIIDMMEAED; // 0x10
//   private XmlNode <OLIGHNIEIGK>k__BackingField; // 0x18
//   private readonly Dictionary<string, LPEBBHNDFCG> DIKHJEINHID; // 0x20

// ===== public void NPCIBMAAJPM(long ANDHBPGOCOM)  [RVA 0x30A1314]
// LAMJOHEKJNJ$$NPCIBMAAJPM @ RVA 0x30A1314

void LAMJOHEKJNJ__NPCIBMAAJPM(LAMJOHEKJNJ_o *__this,int64_t ANDHBPGOCOM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Action_T__o *action;
  MethodInfo *method_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_string__LPEBBHNDFCG__o *source_00;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  Il2CppObject *pIStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  Il2CppObject *pIStack_68;
  
  if ((DAT_04566140 & 1) == 0) {
    FUN_01bab630(&System_Action<LPEBBHNDFCG>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KeyValuePair<string,_LPEBBHNDFCG>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<string,_LPEBBHNDFCG>>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_get_Current__
                );
    FUN_01bab630(&System_Func<KeyValuePair<string,_LPEBBHNDFCG>,_bool>_TypeInfo);
    FUN_01bab630(&Method_LAMJOHEKJNJ_IKAELAEDJIM_PLPOMACLDGN__);
    FUN_01bab630(&Method_LAMJOHEKJNJ_IKAELAEDJIM_POKBBKPLFPK__);
    FUN_01bab630(&LAMJOHEKJNJ_IKAELAEDJIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LPEBBHNDFCG>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LPEBBHNDFCG>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPEBBHNDFCG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPEBBHNDFCG>_ForEach__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_LPEBBHNDFCG>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<LPEBBHNDFCG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LPEBBHNDFCG>_TypeInfo);
    DAT_04566140 = 1;
  }
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(LAMJOHEKJNJ_IKAELAEDJIM_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[1].klass = (Il2CppClass *)ANDHBPGOCOM;
    pIVar4[1].monitor = __this;
    thunk_FUN_01c20e04(&pIVar4[1].monitor,__this);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<LPEBBHNDFCG>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<LPEBBHNDFCG>__ctor__);
    source_00 = (__this->fields).DIKHJEINHID;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<KeyValuePair<string,_LPEBBHNDFCG>,_bool>_TypeInfo);
    System_Func<KeyValuePair<object,_object>,_bool>___ctor();
    method_00 = Method_System_Linq_Enumerable_Where<KeyValuePair<string,_LPEBBHNDFCG>>__;
    source = System_Linq_Enumerable__Where<KeyValuePair<object,_object>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                        (MethodInfo_1EB0AE8 *)
                        Method_System_Linq_Enumerable_Where<KeyValuePair<string,_LPEBBHNDFCG>>__);
    __this_01 = System_Linq_Enumerable__ToList<KeyValuePair<object,_object>>
                          (source,
                           Method_System_Linq_Enumerable_ToList<KeyValuePair<string,_LPEBBHNDFCG>>__
                          );
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
                (&local_a0,(System_Collections_Generic_List_T__o *)__this_01,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_LPEBBHNDFCG>>_GetEnumerator__
                );
      local_80.fields._index = local_a0.fields._index;
      local_80.fields._version = local_a0.fields._version;
      local_80.fields._list = local_a0.fields._list;
      pIStack_68 = pIStack_88;
      local_80.fields._current = local_a0.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_MoveNext__
                               ), pIVar4 = pIStack_68, bVar3) {
        LAMJOHEKJNJ__EKEDMLKAGIK(__this,(System_String_o *)local_80.fields._current,method_00);
        lVar2 = Method_System_Collections_Generic_List<LPEBBHNDFCG>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = pIVar4;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,pIVar4);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,pIVar4,(MethodInfo_26E4DAC *)method_00);
        }
      }
      System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_LPEBBHNDFCG>>_Dispose__
                );
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LPEBBHNDFCG>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  (__this_00,action,Method_System_Collections_Generic_List<LPEBBHNDFCG>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EBHKHMHKPEP(XmlNode CJNHFNHJHPE)  [RVA 0x30A16E4]
// LAMJOHEKJNJ$$EBHKHMHKPEP @ RVA 0x30A16E4

void LAMJOHEKJNJ__EBHKHMHKPEP
               (LAMJOHEKJNJ_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OLIGHNIEIGK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void EKEDMLKAGIK(string KGLJICLJHEL)  [RVA 0x30A1680]
// LAMJOHEKJNJ$$EKEDMLKAGIK @ RVA 0x30A1680

void LAMJOHEKJNJ__EKEDMLKAGIK(LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_o *pPVar2;
  System_String_o **ppSVar3;
  System_Action_string__o *pSVar4;
  
  pSVar4 = (__this->fields).HMIIDMMEAED;
  if (pSVar4 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,KGLJICLJHEL,
               (pSVar4->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar2 = (pNVar1->fields).QuestParameters, pPVar2 != (PKHMIGFEJCL_o *)0x0)) {
    ppSVar3 = &(pPVar2->fields).BEMCEBHHIEC;
    *ppSVar3 = KGLJICLJHEL;
    thunk_FUN_01c20e04(ppSVar3,KGLJICLJHEL);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x18,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NCBMPCGHHFK(LPEBBHNDFCG HIDBHIKNOBC)  [RVA 0x30A16EC]
// LAMJOHEKJNJ$$NCBMPCGHHFK @ RVA 0x30A16EC

void LAMJOHEKJNJ__NCBMPCGHHFK(LAMJOHEKJNJ_o *__this,LPEBBHNDFCG_o *HIDBHIKNOBC,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566141 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Add__);
    DAT_04566141 = 1;
  }
  if (HIDBHIKNOBC != (LPEBBHNDFCG_o *)0x0) {
    LAMJOHEKJNJ__OJAKPICKBBC(__this,(HIDBHIKNOBC->fields)._COIPKAKHDFP_k__BackingField,false,in_x3);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).DIKHJEINHID;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,(Il2CppObject *)(HIDBHIKNOBC->fields)._COIPKAKHDFP_k__BackingField,
                 (Il2CppObject *)HIDBHIKNOBC,
                 Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OJAKPICKBBC(string KGLJICLJHEL, bool MGAAKBCIIIC = False)  [RVA 0x30A175C]
// LAMJOHEKJNJ$$OJAKPICKBBC @ RVA 0x30A175C

void LAMJOHEKJNJ__OJAKPICKBBC
               (LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,bool MGAAKBCIIIC,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  MethodInfo *method_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04566142 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__);
    DAT_04566142 = 1;
  }
  local_28 = (Il2CppMethodPointer)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DIKHJEINHID;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)method_00,
                       Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__
                      );
    if (bVar1) {
      if (MGAAKBCIIIC) {
        LAMJOHEKJNJ__EKEDMLKAGIK(__this,KGLJICLJHEL,method_00);
      }
      if (local_28 != (Il2CppMethodPointer)0x0) {
        pSVar3 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
        if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a1828;
        (*(pSVar3->klass->vtable)._25_RemoveChild.methodPtr)
                  (pSVar3,*(undefined8 *)(local_28 + 0x20),
                   (pSVar3->klass->vtable)._25_RemoveChild.method);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).DIKHJEINHID;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_031a1828;
      System_Collections_Generic_Dictionary<object,_object>__Remove
                (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                 Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Remove__);
    }
    return;
  }
LAB_031a1828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NCBMPCGHHFK(string KGLJICLJHEL, long FDLDDBDHBPG)  [RVA 0x30A182C]
// LAMJOHEKJNJ$$NCBMPCGHHFK @ RVA 0x30A182C

void LAMJOHEKJNJ__NCBMPCGHHFK
               (LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,int64_t FDLDDBDHBPG,
               MethodInfo *method)

{
  LPEBBHNDFCG_o *__this_00;
  
  if ((DAT_04566143 & 1) == 0) {
    FUN_01bab630(&LPEBBHNDFCG_TypeInfo);
    DAT_04566143 = 1;
  }
  __this_00 = (LPEBBHNDFCG_o *)thunk_FUN_01bda818(LPEBBHNDFCG_TypeInfo);
  LPEBBHNDFCG___ctor(__this_00,KGLJICLJHEL,FDLDDBDHBPG,(MethodInfo *)0x0);
  LAMJOHEKJNJ__NCBMPCGHHFK(__this,__this_00,(MethodInfo *)FDLDDBDHBPG);
  return;
}


// ===== public LPEBBHNDFCG FENHANFAIND(string KGLJICLJHEL)  [RVA 0x30A18A0]
// LAMJOHEKJNJ$$FENHANFAIND @ RVA 0x30A18A0

LPEBBHNDFCG_o *
LAMJOHEKJNJ__FENHANFAIND(LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  LPEBBHNDFCG_o *local_28;
  
  if ((DAT_04566144 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__);
    DAT_04566144 = 1;
  }
  local_28 = (LPEBBHNDFCG_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).DIKHJEINHID;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__TryGetValue
              (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__);
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30A1910]
// LAMJOHEKJNJ$$.ctor @ RVA 0x30A1910

/* WARNING: Removing unreachable block (ram,0x031a1ba8) */

void LAMJOHEKJNJ___ctor(LAMJOHEKJNJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__LPEBBHNDFCG__o **ppSVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  System_Xml_XmlNode_o **ppSVar9;
  
  if ((DAT_04566145 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566145 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>__ctor__);
  ppSVar2 = &(__this->fields).DIKHJEINHID;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__LPEBBHNDFCG__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar9 = &(__this->fields)._OLIGHNIEIGK_k__BackingField;
  *ppSVar9 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar9,AHDGNOJPPIB);
  pSVar3 = *ppSVar9;
  if ((pSVar3 == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031a1a60;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_031a1a60:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_031a1b58;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_031a1ac0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x1;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_031a1ac0:
    pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3);
      }
    }
    LAMJOHEKJNJ__NCBMPCGHHFK(__this,pSVar3,method);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031a1b74;
    }
  }
LAB_031a1b58:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031a1b74:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public void NCBMPCGHHFK(XmlNode AHDGNOJPPIB)  [RVA 0x30A1C6C]
// LAMJOHEKJNJ$$NCBMPCGHHFK @ RVA 0x30A1C6C

void LAMJOHEKJNJ__NCBMPCGHHFK
               (LAMJOHEKJNJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  LPEBBHNDFCG_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566146 & 1) == 0) {
    FUN_01bab630(&LPEBBHNDFCG_TypeInfo);
    DAT_04566146 = 1;
  }
  __this_00 = (LPEBBHNDFCG_o *)thunk_FUN_01bda818(LPEBBHNDFCG_TypeInfo);
  method_00 = (MethodInfo *)0x0;
  LPEBBHNDFCG___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
  LAMJOHEKJNJ__NCBMPCGHHFK(__this,__this_00,method_00);
  return;
}


// ===== public XmlNode NBLFIEEHECP()  [RVA 0x30A1CD8]
// LAMJOHEKJNJ$$NBLFIEEHECP @ RVA 0x30A1CD8

System_Xml_XmlNode_o * LAMJOHEKJNJ__NBLFIEEHECP(LAMJOHEKJNJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._OLIGHNIEIGK_k__BackingField;
}


// ===== public void DHNDFPNHOLD(Action<string> CJNHFNHJHPE)  [RVA 0x30A1CE0]
// LAMJOHEKJNJ$$DHNDFPNHOLD @ RVA 0x30A1CE0

void LAMJOHEKJNJ__DHNDFPNHOLD
               (LAMJOHEKJNJ_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o *source;
  
  if ((DAT_04566147 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04566147 = 1;
  }
  source = (__this->fields).HMIIDMMEAED;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void LCBDJAMCGNB(Action<string> CJNHFNHJHPE)  [RVA 0x30A1D90]
// LAMJOHEKJNJ$$LCBDJAMCGNB @ RVA 0x30A1D90

void LAMJOHEKJNJ__LCBDJAMCGNB
               (LAMJOHEKJNJ_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o *a;
  
  if ((DAT_04566148 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04566148 = 1;
  }
  a = (__this->fields).HMIIDMMEAED;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

