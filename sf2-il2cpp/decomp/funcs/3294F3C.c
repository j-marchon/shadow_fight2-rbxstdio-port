// LGPCBNIFHNN$$JFNOJHNGDFB @ RVA 0x3294F3C

/* WARNING: Removing unreachable block (ram,0x033952cc) */
/* WARNING: Removing unreachable block (ram,0x0339531c) */

void LGPCBNIFHNN__JFNOJHNGDFB
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_o *AEHHDFACMOH,
               System_String_o *FKINGJHIAMB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_Text_StringBuilder_o *__this_00;
  System_AggregateException_o *pSVar6;
  System_Collections_ObjectModel_ReadOnlyCollection_Exception__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *arg1;
  Il2CppObject *arg0;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int32_t *piVar12;
  undefined4 local_54;
  
  if ((DAT_0456735e & 1) == 0) {
    FUN_01bab630(&Firebase_Messaging_Error_TypeInfo);
    FUN_01bab630(&Firebase_FirebaseException_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<Exception>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>_GetEnumerator__
                );
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_8613);
    FUN_01bab630(&StringLiteral_376);
    FUN_01bab630(&StringLiteral_52);
    FUN_01bab630(&StringLiteral_405);
    FUN_01bab630(&StringLiteral_368);
    DAT_0456735e = 1;
  }
  if (AEHHDFACMOH != (System_Threading_Tasks_Task_o *)0x0) {
    bVar4 = System_Threading_Tasks_Task__get_IsCompleted(AEHHDFACMOH,(MethodInfo *)0x0);
    if (bVar4) {
      puVar10 = &StringLiteral_376;
    }
    else {
      bVar4 = System_Threading_Tasks_Task__get_IsCanceled(AEHHDFACMOH,(MethodInfo *)0x0);
      if (!bVar4) {
        bVar4 = System_Threading_Tasks_Task__get_IsFaulted(AEHHDFACMOH,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        pSVar5 = System_String__Concat
                           (StringLiteral_8613,FKINGJHIAMB,StringLiteral_405,(MethodInfo *)0x0);
        __this_00 = (System_Text_StringBuilder_o *)
                    thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
        pSVar6 = System_Threading_Tasks_Task__get_Exception(AEHHDFACMOH,(MethodInfo *)0x0);
        if (((pSVar6 != (System_AggregateException_o *)0x0) &&
            (pSVar6 = System_AggregateException__Flatten(pSVar6,(MethodInfo *)0x0),
            pSVar6 != (System_AggregateException_o *)0x0)) &&
           (__this_01 = (pSVar6->fields).m_innerExceptions,
           __this_01 != (System_Collections_ObjectModel_ReadOnlyCollection_Exception__o *)0x0)) {
          pSVar7 = System_Collections_ObjectModel_ReadOnlyCollection<object>__GetEnumerator
                             ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_01,
                              Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>_GetEnumerator__
                             );
          if (pSVar7 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar9 = pSVar7->klass;
            uVar1._0_1_ = (pSVar9->_2).rank;
            uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
            uVar11 = (ulong)uVar1;
            if (uVar11 != 0) {
              piVar12 = &((pSVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar8 = pSVar9->vtable + *piVar12;
                  goto LAB_03395194;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            pVVar8 = (VirtualInvokeData *)
                     FUN_01b81914(pSVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03395194:
            uVar11 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
            if ((uVar11 & 1) == 0) {
              if (pSVar7 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_033952c0;
              pSVar9 = pSVar7->klass;
              uVar3._0_1_ = (pSVar9->_2).rank;
              uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
              uVar11 = (ulong)uVar3;
              if (uVar11 == 0) goto LAB_03395298;
              piVar12 = &((pSVar9->_1).interfaceOffsets)->offset;
              goto LAB_03395280;
            }
            pSVar9 = pSVar7->klass;
            uVar2._0_1_ = (pSVar9->_2).rank;
            uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
            uVar11 = (ulong)uVar2;
            if (uVar11 != 0) {
              piVar12 = &((pSVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IEnumerator<Exception>_TypeInfo) {
                  pVVar8 = pSVar9->vtable + *piVar12;
                  goto LAB_033951f0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            pVVar8 = (VirtualInvokeData *)
                     FUN_01b81914(pSVar7,System_Collections_Generic_IEnumerator<Exception>_TypeInfo,
                                  0);
LAB_033951f0:
            arg1 = (Il2CppObject *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
            if ((arg1 != (Il2CppObject *)0x0) &&
               (arg1->klass == (Il2CppClass *)Firebase_FirebaseException_TypeInfo)) {
              local_54 = *(undefined4 *)((long)&arg1[8].monitor + 4);
              arg0 = (Il2CppObject *)thunk_FUN_01bda448(Firebase_Messaging_Error_TypeInfo,&local_54)
              ;
              pSVar5 = System_String__Format(StringLiteral_52,arg0,arg1,(MethodInfo *)0x0);
              if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Text_StringBuilder__Append(__this_00,pSVar5,(MethodInfo *)0x0);
            }
          } while( true );
        }
        goto LAB_03395310;
      }
      puVar10 = &StringLiteral_368;
    }
    pSVar5 = System_String__Concat
                       (StringLiteral_8613,FKINGJHIAMB,(System_String_o *)*puVar10,(MethodInfo *)0x0
                       );
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
    return;
  }
  goto LAB_03395310;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03395280:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar8 = pSVar9->vtable + *piVar12;
      goto LAB_033952b4;
    }
  }
LAB_03395298:
  pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7,System_IDisposable_TypeInfo,0);
LAB_033952b4:
  (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
LAB_033952c0:
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    pSVar5 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
    return;
  }
LAB_03395310:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

