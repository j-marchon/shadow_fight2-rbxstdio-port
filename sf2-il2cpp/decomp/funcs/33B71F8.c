// GGHCLMEFIGO$$IAKHIFOFLGO @ RVA 0x33B71F8

void GGHCLMEFIGO__IAKHIFOFLGO(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  int64_t iVar5;
  GGHCLMEFIGO_OENHIHPIEPH_o *__this_03;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  System_Object_array *pSVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_T__o SStack_98;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  
  if ((DAT_04567d76 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_GGHCLMEFIGO_JIMFACKOHOP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_Invoke__);
    DAT_04567d76 = 1;
    method = extraout_x1;
  }
  SStack_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_80.fields._index = 0;
  SStack_80.fields._version = 0;
  SStack_80.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  lVar7 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_02 = (__this->fields).PMNIDGNGCCG;
  if (__this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&SStack_98,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    bVar2 = false;
    SStack_80.fields._index = SStack_98.fields._index;
    SStack_80.fields._version = SStack_98.fields._version;
    SStack_80.fields._list = SStack_98.fields._list;
    SStack_80.fields._current = SStack_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&SStack_80,
                              Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                             ), __this_00 = SStack_80.fields._current, bVar4) {
      if ((IGFGDDANEPE_o *)SStack_80.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)SStack_80.fields._current,(MethodInfo *)0x0)
      ;
      lVar3 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
      if (iVar5 < 1) {
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,__this_00);
        }
        else {
          in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,__this_00,(MethodInfo_26E4DAC *)in_x2);
        }
      }
      else {
        iVar5 = IGFGDDANEPE__OMMIKNKEKJN((IGFGDDANEPE_o *)__this_00,(MethodInfo *)0x0);
        if (iVar5 <= lVar7) {
          GGHCLMEFIGO__AFPDMLCLGJM(__this,(IGFGDDANEPE_o *)__this_00,in_x2);
          lVar3 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = __this_00;
            bVar2 = true;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,__this_00);
          }
          else {
            bVar2 = true;
            in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,__this_00,(MethodInfo_26E4DAC *)in_x2);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&SStack_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (__this_01->fields)._size) {
        if (bVar2) {
          __this_03 = (__this->fields).LNPBODFAFII;
          if (__this_03 == (GGHCLMEFIGO_OENHIHPIEPH_o *)0x0) goto LAB_034b6ae8;
          UnityEngine_Events_UnityEvent<object>__Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_03,(Il2CppObject *)__this_01,
                     Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_Invoke__);
        }
        action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
        System_Action<object>___ctor();
        System_Collections_Generic_List<object>__ForEach
                  (__this_01,action,Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
      }
      return;
    }
  }
LAB_034b6ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

