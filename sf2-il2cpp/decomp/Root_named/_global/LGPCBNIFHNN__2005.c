// TypeDefIndex 2005
// Namespace: 
// public class LGPCBNIFHNN : MNBNELNLOCB, IDisposable
// Fields:
//   private Action BIFPFOCAPFD; // 0x10
//   private Action<string> NLMBGOCHKPK; // 0x18
//   private Action<PCJHNLGCCOB> BHPIBGKHPCP; // 0x20
//   private static FirebaseApp IDKDPGDCJGO; // 0x0

// ===== public void FIILGBEMHCH(Action CJNHFNHJHPE)  [RVA 0x3294D60]
// LGPCBNIFHNN$$FIILGBEMHCH @ RVA 0x3294D60

void LGPCBNIFHNN__FIILGBEMHCH(LGPCBNIFHNN_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_0456735b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456735b = 1;
  }
  a = (__this->fields).BIFPFOCAPFD;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void DPGBEJBEBPD(Task CEDLNMHKAAI)  [RVA 0x3294DFC]
// LGPCBNIFHNN$$DPGBEJBEBPD @ RVA 0x3294DFC

void LGPCBNIFHNN__DPGBEJBEBPD
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_o *CEDLNMHKAAI,MethodInfo *method)

{
  System_EventHandler_MessageReceivedEventArgs__o *value;
  System_Threading_Tasks_Task_string__o *task;
  System_Action_Task_T___o *continuation;
  MethodInfo *in_x3;
  System_Action_o *pSVar1;
  
  if ((DAT_0456735c & 1) == 0) {
    FUN_01bab630(&System_Action<Task<string>>_TypeInfo);
    FUN_01bab630(&System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_CLOAADIFLBI__);
    FUN_01bab630(&Method_LGPCBNIFHNN_GHKLIKABHCD__);
    FUN_01bab630(&Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<string>__);
    FUN_01bab630(&StringLiteral_11277/*"RequestPermission"*/);
    DAT_0456735c = 1;
  }
  LGPCBNIFHNN__JFNOJHNGDFB(__this,CEDLNMHKAAI,StringLiteral_11277/*"RequestPermission"*/,in_x3);
  pSVar1 = (__this->fields).BIFPFOCAPFD;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
  }
  value = (System_EventHandler_MessageReceivedEventArgs__o *)
          thunk_FUN_01bda818(System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
  System_EventHandler<object>___ctor();
  Firebase_Messaging_FirebaseMessaging__add_MessageReceived(value,(MethodInfo *)0x0);
  task = Firebase_Messaging_FirebaseMessaging__GetTokenAsync((MethodInfo *)0x0);
  continuation = (System_Action_Task_T___o *)
                 thunk_FUN_01bda818(System_Action<Task<string>>_TypeInfo);
  System_Action<object>___ctor();
  Firebase_Extensions_TaskExtension__ContinueWithOnMainThread<object>
            ((System_Threading_Tasks_Task_T__o *)task,continuation,
             Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<string>__);
  return;
}


// ===== public void DHDEELLOJDC(Action<string> CJNHFNHJHPE)  [RVA 0x32953EC]
// LGPCBNIFHNN$$DHDEELLOJDC @ RVA 0x32953EC

void LGPCBNIFHNN__DHDEELLOJDC
               (LGPCBNIFHNN_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_0456735d & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_0456735d = 1;
  }
  ppSVar6 = &(__this->fields).NLMBGOCHKPK;
  source = *ppSVar6;
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
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void JFNOJHNGDFB(Task AEHHDFACMOH, string FKINGJHIAMB)  [RVA 0x3294F3C]
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
    FUN_01bab630(&StringLiteral_8613/*"LogTaskCompletion: "*/);
    FUN_01bab630(&StringLiteral_376/*" completed."*/);
    FUN_01bab630(&StringLiteral_52/*"\n	Error='{0}', Exception='{1}'"*/);
    FUN_01bab630(&StringLiteral_405/*" encounted an error:"*/);
    FUN_01bab630(&StringLiteral_368/*" canceled."*/);
    DAT_0456735e = 1;
  }
  if (AEHHDFACMOH != (System_Threading_Tasks_Task_o *)0x0) {
    bVar4 = System_Threading_Tasks_Task__get_IsCompleted(AEHHDFACMOH,(MethodInfo *)0x0);
    if (bVar4) {
      puVar10 = &StringLiteral_376/*" completed."*/;
    }
    else {
      bVar4 = System_Threading_Tasks_Task__get_IsCanceled(AEHHDFACMOH,(MethodInfo *)0x0);
      if (!bVar4) {
        bVar4 = System_Threading_Tasks_Task__get_IsFaulted(AEHHDFACMOH,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        pSVar5 = System_String__Concat
                           (StringLiteral_8613/*"LogTaskCompletion: "*/,FKINGJHIAMB,StringLiteral_405/*" encounted an error:"*/,(MethodInfo *)0x0);
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
              pSVar5 = System_String__Format(StringLiteral_52/*"\n	Error='{0}', Exception='{1}'"*/,arg0,arg1,(MethodInfo *)0x0);
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
      puVar10 = &StringLiteral_368/*" canceled."*/;
    }
    pSVar5 = System_String__Concat
                       (StringLiteral_8613/*"LogTaskCompletion: "*/,FKINGJHIAMB,(System_String_o *)*puVar10,(MethodInfo *)0x0
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


// ===== public void BIEFPKNCHOG(Action CJNHFNHJHPE)  [RVA 0x329549C]
// LGPCBNIFHNN$$BIEFPKNCHOG @ RVA 0x329549C

void LGPCBNIFHNN__BIEFPKNCHOG(LGPCBNIFHNN_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_0456735f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456735f = 1;
  }
  source = (__this->fields).BIFPFOCAPFD;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void EBCIDPCILBA(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x3295538]
// LGPCBNIFHNN$$EBCIDPCILBA @ RVA 0x3295538

void LGPCBNIFHNN__EBCIDPCILBA
               (LGPCBNIFHNN_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *a;
  
  if ((DAT_04567360 & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04567360 = 1;
  }
  ppSVar6 = &(__this->fields).BHPIBGKHPCP;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x32955E8]
// LGPCBNIFHNN$$GIMAJOGGBHM @ RVA 0x32955E8

void LGPCBNIFHNN__GIMAJOGGBHM(LGPCBNIFHNN_o *__this,MethodInfo *method)

{
  System_Threading_Tasks_Task_T__o *task;
  System_Action_Task_T___o *continuation;
  
  if ((DAT_04567361 & 1) == 0) {
    FUN_01bab630(&System_Action<Task<DependencyStatus>>_TypeInfo);
    FUN_01bab630(&Firebase_FirebaseApp_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_BJBCPJINDJN__);
    FUN_01bab630(&
                 Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<DependencyStatus>__
                );
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    FUN_01bab630(&StringLiteral_7531/*"Initialize: CheckAndFixDependenciesAsync started."*/);
    DAT_04567361 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7531/*"Initialize: CheckAndFixDependenciesAsync started."*/,(MethodInfo *)0x0);
  if ((Firebase_FirebaseApp_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  task = (System_Threading_Tasks_Task_T__o *)
         Firebase_FirebaseApp__CheckAndFixDependenciesAsync((MethodInfo *)0x0);
  continuation = (System_Action_Task_T___o *)
                 thunk_FUN_01bda818(System_Action<Task<DependencyStatus>>_TypeInfo);
  System_Action<object>___ctor();
  Firebase_Extensions_TaskExtension__ContinueWithOnMainThread<Int32Enum>
            (task,continuation,
             Method_Firebase_Extensions_TaskExtension_ContinueWithOnMainThread<DependencyStatus>__);
  return;
}


// ===== public void .ctor()  [RVA 0x32957C4]
// LGPCBNIFHNN$$.ctor @ RVA 0x32957C4

void LGPCBNIFHNN___ctor(LGPCBNIFHNN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GHKLIKABHCD(Task<string> LNAIFAPJFEL)  [RVA 0x32957CC]
// LGPCBNIFHNN$$GHKLIKABHCD @ RVA 0x32957CC

void LGPCBNIFHNN__GHKLIKABHCD
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_string__o *LNAIFAPJFEL,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *in_x3;
  System_Action_string__o *pSVar2;
  
  if ((DAT_04567362 & 1) == 0) {
    FUN_01bab630(&Method_System_Threading_Tasks_Task<string>_get_Result__);
    FUN_01bab630(&StringLiteral_6835/*"GetTokenAsync"*/);
    DAT_04567362 = 1;
  }
  LGPCBNIFHNN__JFNOJHNGDFB
            (__this,(System_Threading_Tasks_Task_o *)LNAIFAPJFEL,StringLiteral_6835/*"GetTokenAsync"*/,in_x3);
  pSVar2 = (__this->fields).NLMBGOCHKPK;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    if (LNAIFAPJFEL != (System_Threading_Tasks_Task_string__o *)0x0) {
      pIVar1 = System_Threading_Tasks_Task<object>__get_Result
                         ((System_Threading_Tasks_Task_object__o *)LNAIFAPJFEL,
                          Method_System_Threading_Tasks_Task<string>_get_Result__);
                    /* WARNING: Could not recover jumptable at 0x03395864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,pIVar1,(pSVar2->fields).super.super.method
                );
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void CLOAADIFLBI(object OKOHDENADGD, MessageReceivedEventArgs BFPCMHPBAGL)  [RVA 0x329587C]
// LGPCBNIFHNN$$CLOAADIFLBI @ RVA 0x329587C

void LGPCBNIFHNN__CLOAADIFLBI
               (LGPCBNIFHNN_o *__this,Il2CppObject *OKOHDENADGD,
               Firebase_Messaging_MessageReceivedEventArgs_o *BFPCMHPBAGL,MethodInfo *method)

{
  undefined1 auVar1 [16];
  Firebase_Messaging_FirebaseMessage_o *pFVar2;
  Firebase_Messaging_FirebaseNotification_o *pFVar3;
  System_Action_PCJHNLGCCOB__o *pSVar4;
  undefined1 auVar5 [16];
  System_String_o *local_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  System_String_o *local_90;
  System_Collections_Generic_IDictionary_string__string__o *local_88;
  System_String_o *local_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_Collections_Generic_IDictionary_string__string__o *local_60;
  System_String_o *local_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  System_Collections_Generic_IDictionary_string__string__o *local_30;
  
  auVar1._8_8_ = OKOHDENADGD;
  auVar1._0_8_ = __this;
  auVar5._8_8_ = OKOHDENADGD;
  auVar5._0_8_ = __this;
  pSVar4 = (__this->fields).BHPIBGKHPCP;
  if (pSVar4 == (System_Action_PCJHNLGCCOB__o *)0x0) {
    return;
  }
  pSStack_98 = (System_String_o *)0x0;
  pSStack_a0 = (System_String_o *)0x0;
  local_88 = (System_Collections_Generic_IDictionary_string__string__o *)0x0;
  local_90 = (System_String_o *)0x0;
  if ((BFPCMHPBAGL != (Firebase_Messaging_MessageReceivedEventArgs_o *)0x0) &&
     (pFVar2 = (BFPCMHPBAGL->fields)._Message_k__BackingField, auVar5 = auVar1,
     pFVar2 != (Firebase_Messaging_FirebaseMessage_o *)0x0)) {
    local_a8 = (pFVar2->fields)._From_k__BackingField;
    auVar5 = thunk_FUN_01c20e04(&local_a8);
    pFVar2 = (BFPCMHPBAGL->fields)._Message_k__BackingField;
    if (pFVar2 != (Firebase_Messaging_FirebaseMessage_o *)0x0) {
      pSStack_a0 = (pFVar2->fields)._MessageId_k__BackingField;
      auVar5 = thunk_FUN_01c20e04(&pSStack_a0);
      pFVar2 = (BFPCMHPBAGL->fields)._Message_k__BackingField;
      if (pFVar2 != (Firebase_Messaging_FirebaseMessage_o *)0x0) {
        pFVar3 = (pFVar2->fields)._Notification_k__BackingField;
        if (pFVar3 == (Firebase_Messaging_FirebaseNotification_o *)0x0) {
          pSStack_98 = (System_String_o *)0x0;
        }
        else {
          pSStack_98 = (pFVar3->fields)._Title_k__BackingField;
        }
        auVar5 = thunk_FUN_01c20e04(&pSStack_98);
        pFVar2 = (BFPCMHPBAGL->fields)._Message_k__BackingField;
        if (pFVar2 != (Firebase_Messaging_FirebaseMessage_o *)0x0) {
          pFVar3 = (pFVar2->fields)._Notification_k__BackingField;
          if (pFVar3 == (Firebase_Messaging_FirebaseNotification_o *)0x0) {
            local_90 = (System_String_o *)0x0;
          }
          else {
            local_90 = (pFVar3->fields)._Body_k__BackingField;
          }
          auVar5 = thunk_FUN_01c20e04(&local_90);
          pFVar2 = (BFPCMHPBAGL->fields)._Message_k__BackingField;
          if (pFVar2 != (Firebase_Messaging_FirebaseMessage_o *)0x0) {
            local_88 = (pFVar2->fields)._Data_k__BackingField;
            thunk_FUN_01c20e04(&local_88);
            local_60 = local_88;
            pSStack_78 = pSStack_a0;
            local_80 = local_a8;
            pSStack_68 = local_90;
            pSStack_70 = pSStack_98;
            pSStack_48 = pSStack_a0;
            local_50 = local_a8;
            pSStack_38 = local_90;
            pSStack_40 = pSStack_98;
            local_30 = local_88;
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,&local_50,
                       (pSVar4->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
}


// ===== private void BJBCPJINDJN(Task<DependencyStatus> BFNOHFKOABI)  [RVA 0x3295988]
// LGPCBNIFHNN$$BJBCPJINDJN @ RVA 0x3295988

void LGPCBNIFHNN__BJBCPJINDJN
               (LGPCBNIFHNN_o *__this,System_Threading_Tasks_Task_DependencyStatus__o *BFNOHFKOABI,
               MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  Firebase_FirebaseApp_o *pFVar2;
  System_Threading_Tasks_Task_o *task;
  System_Action_Task__o *continuation;
  MethodInfo *method_00;
  int32_t local_54;
  
  if ((DAT_04567363 & 1) == 0) {
    FUN_01bab630(&System_Action<Task>_TypeInfo);
    FUN_01bab630(&Firebase_DependencyStatus_TypeInfo);
    FUN_01bab630(&Firebase_FirebaseApp_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_DPGBEJBEBPD__);
    FUN_01bab630(&LGPCBNIFHNN_TypeInfo);
    FUN_01bab630(&Method_System_Threading_Tasks_Task<DependencyStatus>_get_Result__);
    FUN_01bab630(&StringLiteral_4295/*"CheckAndFixDependencies"*/);
    FUN_01bab630(&StringLiteral_22397/*"{0}: result of dependencies check '{1}'"*/);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    FUN_01bab630(&StringLiteral_7535/*"Initialize: firebase services unavailable!"*/);
    DAT_04567363 = 1;
  }
  if (BFNOHFKOABI != (System_Threading_Tasks_Task_DependencyStatus__o *)0x0) {
    local_54 = System_Threading_Tasks_Task<Int32Enum>__get_Result
                         ((System_Threading_Tasks_Task_TResult__o *)BFNOHFKOABI,
                          Method_System_Threading_Tasks_Task<DependencyStatus>_get_Result__);
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(Firebase_DependencyStatus_TypeInfo,&local_54);
    method_00 = (MethodInfo *)0x0;
    JLNPKGGFFDD = System_String__Format
                            (StringLiteral_22397/*"{0}: result of dependencies check '{1}'"*/,StringLiteral_7529/*"Initialize"*/,arg1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    LGPCBNIFHNN__JFNOJHNGDFB
              (__this,(System_Threading_Tasks_Task_o *)BFNOHFKOABI,StringLiteral_4295/*"CheckAndFixDependencies"*/,method_00);
    if ((Firebase_FirebaseApp_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = Firebase_FirebaseApp__get_DefaultInstance((MethodInfo *)0x0);
    LGPCBNIFHNN_TypeInfo->static_fields->IDKDPGDCJGO = pFVar2;
    thunk_FUN_01c20e04(LGPCBNIFHNN_TypeInfo->static_fields,pFVar2);
    iVar1 = System_Threading_Tasks_Task<Int32Enum>__get_Result
                      ((System_Threading_Tasks_Task_TResult__o *)BFNOHFKOABI,
                       Method_System_Threading_Tasks_Task<DependencyStatus>_get_Result__);
    if (iVar1 == 0) {
      task = Firebase_Messaging_FirebaseMessaging__RequestPermissionAsync((MethodInfo *)0x0);
      continuation = (System_Action_Task__o *)thunk_FUN_01bda818(System_Action<Task>_TypeInfo);
      System_Action<object>___ctor();
      Firebase_Extensions_TaskExtension__ContinueWithOnMainThread
                (task,continuation,(MethodInfo *)0x0);
    }
    else {
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_7535/*"Initialize: firebase services unavailable!"*/,(MethodInfo *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GDGDKAFDIEF(Action<PCJHNLGCCOB> CJNHFNHJHPE)  [RVA 0x3295B94]
// LGPCBNIFHNN$$GDGDKAFDIEF @ RVA 0x3295B94

void LGPCBNIFHNN__GDGDKAFDIEF
               (LGPCBNIFHNN_o *__this,System_Action_PCJHNLGCCOB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PCJHNLGCCOB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PCJHNLGCCOB__o *pSVar5;
  System_Action_PCJHNLGCCOB__o **ppSVar6;
  System_Action_PCJHNLGCCOB__o *source;
  
  if ((DAT_04567364 & 1) == 0) {
    FUN_01bab630(&System_Action<PCJHNLGCCOB>_TypeInfo);
    DAT_04567364 = 1;
  }
  ppSVar6 = &(__this->fields).BHPIBGKHPCP;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<PCJHNLGCCOB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PCJHNLGCCOB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PCJHNLGCCOB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Dispose()  [RVA 0x3295C44]
// LGPCBNIFHNN$$Dispose @ RVA 0x3295C44

void LGPCBNIFHNN__Dispose(LGPCBNIFHNN_o *__this,MethodInfo *method)

{
  System_EventHandler_MessageReceivedEventArgs__o *value;
  
  if ((DAT_04567365 & 1) == 0) {
    FUN_01bab630(&System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
    FUN_01bab630(&Method_LGPCBNIFHNN_CLOAADIFLBI__);
    FUN_01bab630(&LGPCBNIFHNN_TypeInfo);
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_04567365 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  LGPCBNIFHNN_TypeInfo->static_fields->IDKDPGDCJGO = (Firebase_FirebaseApp_o *)0x0;
  thunk_FUN_01c20e04(LGPCBNIFHNN_TypeInfo->static_fields,0);
  value = (System_EventHandler_MessageReceivedEventArgs__o *)
          thunk_FUN_01bda818(System_EventHandler<MessageReceivedEventArgs>_TypeInfo);
  System_EventHandler<object>___ctor();
  Firebase_Messaging_FirebaseMessaging__remove_MessageReceived(value,(MethodInfo *)0x0);
  return;
}


// ===== public void LKDDCBPLCIG(Action<string> CJNHFNHJHPE)  [RVA 0x3295D20]
// LGPCBNIFHNN$$LKDDCBPLCIG @ RVA 0x3295D20

void LGPCBNIFHNN__LKDDCBPLCIG
               (LGPCBNIFHNN_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04567366 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04567366 = 1;
  }
  ppSVar6 = &(__this->fields).NLMBGOCHKPK;
  a = *ppSVar6;
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
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

