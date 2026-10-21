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

