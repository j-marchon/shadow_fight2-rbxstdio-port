// JFDPMLLJKFH$$DIGLGKAPOAB @ RVA 0x33392D8

void JFDPMLLJKFH__DIGLGKAPOAB(JFDPMLLJKFH_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *__this_00;
  FPLCEOJCPOD_o *pFVar4;
  MethodInfo *pMVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  Il2CppObject *local_100 [3];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_e8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  
  if ((DAT_04567961 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
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
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredFloat>_get_Value__)
    ;
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_3217);
    DAT_04567961 = 1;
  }
  local_80 = 0;
  local_68 = 0;
  local_b0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_88 = 0;
  local_b0.fields._getEnumeratorRetType = 0;
  local_b0.fields._36_4_ = 0;
  local_b0.fields._version = 0;
  local_b0.fields._index = 0;
  local_b0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_ObscuredFloat>__GetEnumerator
            (&local_e8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_GetEnumerator__);
  local_b0.fields._version = local_e8.fields._version;
  local_b0.fields._index = local_e8.fields._index;
  local_b0.fields._current.fields.value = local_e8.fields._current.fields.value;
  local_b0.fields._current.fields.key = local_e8.fields._current.fields.key;
  uStack_88 = uStack_c0;
  local_b0.fields._getEnumeratorRetType = local_e8.fields._getEnumeratorRetType;
  local_b0.fields._36_4_ = local_e8.fields._36_4_;
  local_80 = local_b8;
  while( true ) {
    while( true ) {
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__MoveNext
                          (&local_b0,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_MoveNext__
                          );
        uVar8 = uStack_88;
        pIVar6 = local_b0.fields._current.fields.key;
        if (!bVar3) {
          System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredFloat>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredFloat>_Dispose__
                    );
          return;
        }
        local_100[1] = (Il2CppObject *)local_b0.fields._32_8_;
        local_100[0] = local_b0.fields._current.fields.value;
        local_100[2]._0_1_ = uStack_88._0_1_;
        local_100[2]._1_1_ = uStack_88._1_1_;
        local_100[2]._2_2_ = uStack_88._2_2_;
        uStack_88 = uVar8;
        fVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_100,
                           (MethodInfo *)0x0);
        iVar1 = (__this->fields).super.JGJNBILDCHK;
        if (iVar1 != 1) break;
        local_68 = local_68 & 0xffffffff;
        if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (IMMNELPBGIF[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar5 = (IMMNELPBGIF[2].klass)->vtable[9].method;
        if (pMVar5 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                          ((FPLCEOJCPOD_o *)pMVar5,(System_String_o *)pIVar6,
                           (int32_t *)((long)&local_68 + 4),true,false,(MethodInfo *)0x0);
        if (IMMNELPBGIF[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar3);
        }
        pMVar5 = (IMMNELPBGIF[2].klass)->vtable[9].method;
        if (pMVar5 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar1 = -0x80000000;
        if (fVar9 != INFINITY) {
          iVar1 = (int)fVar9;
        }
        FPLCEOJCPOD__FOOHBJNHOKK
                  ((FPLCEOJCPOD_o *)pMVar5,(System_String_o *)pIVar6,local_68._4_4_ + iVar1,false,
                   (MethodInfo *)0x0);
      }
      if (iVar1 == 2) break;
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_e8.fields._dictionary._0_4_ = (__this->fields).super.JGJNBILDCHK;
      pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_e8);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (lVar7 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar7 == 0)) {
        uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar8,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar6;
      thunk_FUN_01c20e04(args->m_Items,pIVar6);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_3217,args,(MethodInfo *)0x0);
    }
    local_68 = local_68 & 0xffffffff00000000;
    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (IMMNELPBGIF[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar4 = *(FPLCEOJCPOD_o **)((long)IMMNELPBGIF[2].monitor + 0x1d0);
    if (pFVar4 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                      (pFVar4,(System_String_o *)pIVar6,(int32_t *)&local_68,true,false,
                       (MethodInfo *)0x0);
    if (IMMNELPBGIF[2].monitor == (void *)0x0) break;
    pFVar4 = *(FPLCEOJCPOD_o **)((long)IMMNELPBGIF[2].monitor + 0x1d0);
    if (pFVar4 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = -0x80000000;
    if (fVar9 != INFINITY) {
      iVar1 = (int)fVar9;
    }
    FPLCEOJCPOD__FOOHBJNHOKK
              (pFVar4,(System_String_o *)pIVar6,(int)local_68 + iVar1,false,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar3);
}

