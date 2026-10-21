// PFOMHOLCODE$$JPLLADNFNOC @ RVA 0x334E5F0

System_String_o *
PFOMHOLCODE__JPLLADNFNOC
          (System_Collections_Generic_List_NBLEEDEAPHB__o *CGOJNOMNFCL,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Text_StringBuilder_o *__this;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  MethodInfo *extraout_x1;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  void *pvVar12;
  undefined8 uVar13;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567a1e & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_137);
    FUN_01bab630(&StringLiteral_22469);
    DAT_04567a1e = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (CGOJNOMNFCL != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)CGOJNOMNFCL,
               Method_System_Collections_Generic_List<NBLEEDEAPHB>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_MoveNext__);
      pIVar2 = local_80.fields._current;
      if (!bVar3) break;
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(local_80.fields._current[2].monitor,(MethodInfo *)0x0);
      if (bVar3) {
        pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar5 = Method_System_Array_Empty<string>__;
        pvVar12 = pIVar2[1].monitor;
        lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar8 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar8 = *(long *)(lVar5 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01b81620();
        }
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar9 = pIVar4->klass;
        uVar13 = **(undefined8 **)(lVar5 + 0xb8);
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
              goto LAB_0344e800;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0344e800:
        pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,pvVar12,uVar13,pVVar6->method);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_137,(MethodInfo *)0x0);
        if (__this == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__Append(__this,pSVar7,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<NBLEEDEAPHB>_Dispose__);
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar7 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      if (pSVar7 != (System_String_o *)0x0) {
        pSVar7 = System_String__Replace
                           (pSVar7,StringLiteral_22469,StringLiteral_137,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

