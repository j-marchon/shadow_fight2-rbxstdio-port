// JFDPMLLJKFH$$RandomizeObscuredVars @ RVA 0x3339FD4

void JFDPMLLJKFH__RandomizeObscuredVars(JFDPMLLJKFH_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *__this_00;
  Il2CppObject *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  Il2CppObject *local_90;
  Il2CppObject *pIStack_88;
  uint8_t uStack_80;
  uint8_t uStack_7f;
  uint8_t uStack_7e;
  uint8_t uStack_7d;
  float fStack_7c;
  undefined8 local_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_04567964 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Value__)
    ;
    DAT_04567964 = 1;
  }
  local_40 = 0;
  local_b0 = (Il2CppObject *)0x0;
  uStack_a8._0_1_ = 0;
  uStack_a8._1_1_ = 0;
  uStack_a8._2_1_ = 0;
  uStack_a8._3_1_ = 0;
  uStack_a8._4_4_ = 0.0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_48 = 0;
  local_70.fields._getEnumeratorRetType._0_1_ = 0;
  local_70.fields._getEnumeratorRetType._1_1_ = 0;
  local_70.fields._getEnumeratorRetType._2_1_ = 0;
  local_70.fields._getEnumeratorRetType._3_1_ = 0;
  local_70.fields._36_4_ = 0.0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0._0_1_ = false;
  local_a0._1_1_ = false;
  local_a0._2_2_ = 0;
  AJNNHGGLGIF__RandomizeObscuredVars((AJNNHGGLGIF_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_ObscuredFloat>__GetEnumerator
              (&local_70,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__);
    while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                             ), uVar2 = local_70.fields._32_8_, bVar3) {
      pIStack_88 = local_70.fields._current.fields.value;
      local_90 = local_70.fields._current.fields.key;
      local_78 = uStack_48;
      uVar1 = local_78;
      uStack_80 = (undefined1)local_70.fields._getEnumeratorRetType;
      uStack_7f = local_70.fields._getEnumeratorRetType._1_1_;
      uStack_7e = local_70.fields._getEnumeratorRetType._2_1_;
      uStack_7d = local_70.fields._getEnumeratorRetType._3_1_;
      fStack_7c = (float)local_70.fields._36_4_;
      local_78._0_4_ = (undefined4)uStack_48;
      local_a0._0_1_ = local_78._0_1_;
      local_a0._1_1_ = local_78._1_1_;
      local_a0._2_2_ = local_78._2_2_;
      local_70.fields._getEnumeratorRetType = (int32_t)uVar2;
      local_70.fields._36_4_ = SUB84(uVar2,4);
      uStack_a8._0_1_ = (undefined1)local_70.fields._getEnumeratorRetType;
      uStack_a8._1_1_ = local_70.fields._getEnumeratorRetType._1_1_;
      uStack_a8._2_1_ = local_70.fields._getEnumeratorRetType._2_1_;
      uStack_a8._3_1_ = local_70.fields._getEnumeratorRetType._3_1_;
      uStack_a8._4_4_ = (float)local_70.fields._36_4_;
      local_b0 = local_70.fields._current.fields.value;
      local_78 = uVar1;
      local_70.fields._32_8_ = uVar2;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

