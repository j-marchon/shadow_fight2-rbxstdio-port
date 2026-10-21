// JJPNLEPEAFM$$PPDAJIKOKBE @ RVA 0x35318A0

void JJPNLEPEAFM__PPDAJIKOKBE(bool COEGCLJJOBM,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar3;
  GCIFMNHADDF_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  long *plVar8;
  System_String_o *a;
  long lVar9;
  Il2CppClass *pIVar10;
  void *pvVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined8 uVar14;
  MethodInfo *in_stack_ffffffffffffff68;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568a62 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_get_Current__);
    FUN_01bab630(&Method_GCIFMNHADDF_JCELKAOGMDO<SimpleDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SimpleDialog>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SimpleDialog>_get_Count__);
    FUN_01bab630(&StringLiteral_17809);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a62 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (COEGCLJJOBM) {
    pNVar3 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) goto LAB_03631c18;
    if (((pNVar3->fields).BDDIHIFJADE != false) && ((pNVar3->fields).JDNKKGPNHPB == 1)) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
    }
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((__this != (GCIFMNHADDF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  GCIFMNHADDF__JCELKAOGMDO<object>
                            (__this,Method_GCIFMNHADDF_JCELKAOGMDO<SimpleDialog>__),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    if ((__this_00->fields)._size < 1) {
LAB_03631b98:
      JJPNLEPEAFM__OJEGBDGIKGH
                (0x154,StringLiteral_17850,StringLiteral_17809,StringLiteral_9679,StringLiteral_1,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
                 in_stack_ffffffffffffff68);
    }
    else {
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar5 = Method_System_Array_Empty<string>__;
      lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar9 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar9 = *(long *)(lVar5 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01b81620();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      pSVar7 = StringLiteral_17809;
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03631c18;
      pIVar10 = pIVar4->klass;
      uVar14 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar10->_2).rank;
      uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar10->vtable + (*piVar13 + 0xc);
            goto LAB_03631ab4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03631ab4:
      pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,pSVar7,uVar14,pVVar6->method);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<SimpleDialog>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_MoveNext__
                            );
          pIVar4 = local_70.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_Dispose__);
            goto LAB_03631b98;
          }
          if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (local_70.fields._current[5].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            ((System_String_o *)
                             (local_70.fields._current[5].klass)->vtable[10].method,
                             StringLiteral_17850,(MethodInfo *)0x0);
        } while (!bVar2);
        pvVar11 = pIVar4[0xc].monitor;
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          (*(System_String_o **)((long)pvVar11 + 0x1e0),StringLiteral_17809,
                           (MethodInfo *)0x0);
        if (bVar2) break;
        plVar8 = pIVar4[0xc].monitor;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        a = (System_String_o *)
            (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
        bVar2 = System_String__op_Equality(a,pSVar7,(MethodInfo *)0x0);
      } while (!bVar2);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<SimpleDialog>_Dispose__
                );
    }
    return;
  }
LAB_03631c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

