// PJKHAJKEHEL$$LLPCGJOHLAE @ RVA 0x3042DA0

void PJKHAJKEHEL__LLPCGJOHLAE
               (PJKHAJKEHEL_o *__this,
               System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *HAONBBDNJID,
               System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *ELKJHGBCEKJ,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MGNDHCBAPEN_T1__T2__o *__this_00;
  int index;
  Il2CppClass *pIVar3;
  float fVar4;
  float fVar5;
  void *local_c0;
  Il2CppClass *pIStack_b8;
  undefined4 local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565dc9 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_set_Item__
                );
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_ObscuredFloat>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_ObscuredFloat>_TypeInfo);
    DAT_04565dc9 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (ELKJHGBCEKJ != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_object__o *)ELKJHGBCEKJ,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__);
    local_80.fields._current =
         (Il2CppObject *)CONCAT44(local_a0.fields._current._4_4_,local_a0.fields._current._0_4_);
    local_80.fields._index = local_a0.fields._index;
    local_80.fields._version = local_a0.fields._version;
    local_80.fields._list = local_a0.fields._list;
LAB_03142eac:
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                      );
    if (bVar1) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (HAONBBDNJID ==
          (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < (HAONBBDNJID->fields)._size) {
        pIVar3 = local_80.fields._current[1].klass;
        fVar5 = *(float *)&local_80.fields._current[1].monitor;
        index = 0;
        do {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)HAONBBDNJID,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                             );
          if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_String__op_Equality
                            ((System_String_o *)pIVar2[1].klass,(System_String_o *)pIVar3,
                             (MethodInfo *)0x0);
          if (bVar1) {
            pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)HAONBBDNJID,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                               );
            if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar3 = pIVar2[1].klass;
            pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)HAONBBDNJID,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Item__
                               );
            if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_b0 = *(undefined4 *)&pIVar2[2].monitor;
            pIStack_b8 = pIVar2[2].klass;
            local_c0 = pIVar2[1].monitor;
            fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,
                               (MethodInfo *)0x0);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,fVar5 + fVar4,
                       (MethodInfo *)0x0);
            __this_00 = (MGNDHCBAPEN_T1__T2__o *)
                        thunk_FUN_01bda818(MGNDHCBAPEN<string,_ObscuredFloat>_TypeInfo);
            MGNDHCBAPEN<object,_ObscuredFloat>___ctor
                      (__this_00,(Il2CppObject *)pIVar3,
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,
                       Method_MGNDHCBAPEN<string,_ObscuredFloat>__ctor__);
            System_Collections_Generic_List<object>__set_Item
                      ((System_Collections_Generic_List_object__o *)HAONBBDNJID,index,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_set_Item__
                      );
            break;
          }
          index = index + 1;
        } while (index < (HAONBBDNJID->fields)._size);
      }
      goto LAB_03142eac;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
              );
  }
  return;
}

