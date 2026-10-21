// TypeDefIndex 169
// Namespace: 
// public class EBPOGHJNIEK : OHPOFOPJIMB
// Fields:

// ===== public void .ctor()  [RVA 0x3110778]
// EBPOGHJNIEK$$.ctor @ RVA 0x3110778

void EBPOGHJNIEK___ctor(EBPOGHJNIEK_o *__this,MethodInfo *method)

{
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,1,0,(MethodInfo *)0x0);
  return;
}


// ===== public override void IKDPMKOIDMP()  [RVA 0x3110788]
// EBPOGHJNIEK$$IKDPMKOIDMP @ RVA 0x3110788

/* WARNING: Removing unreachable block (ram,0x03210a24) */

void EBPOGHJNIEK__IKDPMKOIDMP(EBPOGHJNIEK_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  DNELIPCHKLK_o *pDVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  NLPJLHOEAOE_o *pNVar4;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar5;
  System_Predicate_T__o *match;
  PKHMIGFEJCL_o *pPVar6;
  DNELIPCHKLK_o **ppDVar7;
  DNELIPCHKLK_o *pDVar8;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456657f & 1) == 0) {
    FUN_01bab630(&Method_EBPOGHJNIEK_BLBOECLFKOE_MNPIHPAJADK__);
    FUN_01bab630(&EBPOGHJNIEK_BLBOECLFKOE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_RemoveAll__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<OOMHDDBCBJP>_TypeInfo);
    DAT_0456657f = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar2->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar7 = &(pPVar6->fields).NMHCLFFOMJH;
    pDVar8 = *ppDVar7;
    pDVar3 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar7 = pDVar3;
    thunk_FUN_01c20e04(ppDVar7,pDVar3);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
    pNVar4 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pNVar4 != (NLPJLHOEAOE_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0)) {
      __this_02 = (pNVar4->fields).DEKLKEHGJEB;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
          *ppDVar7 = pDVar8;
          thunk_FUN_01c20e04();
          length = (__this_00->fields)._size;
          (__this_00->fields)._size = 0;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,
                                (MethodInfo *)0x0);
          }
          OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
          return;
        }
        if ((Il2CppClass *)local_80.fields._current == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (((Il2CppClass_1 *)&(local_80.fields._current)->klass)->this_arg).data;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,__this_01,
                   Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                                 ), bVar1) {
          pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(EBPOGHJNIEK_BLBOECLFKOE_TypeInfo);
          System_Object___ctor(pIVar5,(MethodInfo *)0x0);
          if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar5 = pIVar5 + 1;
          pIVar5->klass = (Il2CppClass *)local_a0.fields._current;
          thunk_FUN_01c20e04(pIVar5);
          if (pIVar5->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OOMHDDBCBJP__CCANMOPIFEC((OOMHDDBCBJP_o *)pIVar5->klass,(MethodInfo *)0x0);
          match = (System_Predicate_T__o *)
                  thunk_FUN_01bda818(System_Predicate<OOMHDDBCBJP>_TypeInfo);
          System_Predicate<object>___ctor();
          if (__this_02 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__RemoveAll
                    ((System_Collections_Generic_List_object__o *)__this_02,match,
                     Method_System_Collections_Generic_List<OOMHDDBCBJP>_RemoveAll__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x3110BD0]
// EBPOGHJNIEK$$BNNIDPDMOIL @ RVA 0x3110BD0

bool EBPOGHJNIEK__BNNIDPDMOIL(EBPOGHJNIEK_o *__this,MethodInfo *method)

{
  return true;
}

