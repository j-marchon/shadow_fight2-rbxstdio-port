// Original name: Nekki.SF2.GUI.Dialogs.DialogsManager  (obfuscated GCIFMNHADDF)
// TypeDefIndex 1559
// Namespace: 
// public class DialogsManager : OMLLDCIMLBB<object>
// Fields:
//   public const FNGHHNDKDJB.JPKOOJFFHEG LKMKCODCBDC = 1;
//   private Action<BaseDialog> FIDNHJLFPHC; // 0x18
//   private Action<BaseDialog> LANNHNJHOLM; // 0x20
//   private static DialogsManager CBDMFFMCJBK; // 0x0
//   private readonly List<DialogsManager.NFAHLBCFIPD> EDBKLOENEPB; // 0x28
//   private readonly List<BaseDialog> IMMJEIGBAAC; // 0x30
//   private BaseDialog <AOOFDKJAALA>k__BackingField; // 0x38

// ===== public void JNDNMPDMDGB(Action<BaseDialog> CJNHFNHJHPE)  [RVA 0x31AAFB8]
// DialogsManager$$JNDNMPDMDGB @ RVA 0x31AAFB8

void DialogsManager__JNDNMPDMDGB
               (DialogsManager_o *__this,System_Action_BaseDialog__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BaseDialog__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BaseDialog__o *pSVar5;
  System_Action_BaseDialog__o **ppSVar6;
  System_Action_BaseDialog__o *source;
  
                    /* catch() { ... } // from try @ 032aab34 with catch @ 032aafb8 */
                    /* catch() { ... } // from try @ 032aae80 with catch @ 032aafbc */
                    /* catch() { ... } // from try @ 032aae70 with catch @ 032aafc0 */
                    /* catch() { ... } // from try @ 032aa68c with catch @ 032aafc4 */
                    /* catch() { ... } // from try @ 032aa950 with catch @ 032aafc8 */
                    /* catch() { ... } // from try @ 032aa888 with catch @ 032aafcc */
                    /* catch() { ... } // from try @ 032aae50 with catch @ 032aafd0 */
                    /* catch() { ... } // from try @ 032aae40 with catch @ 032aafd4 */
                    /* catch() { ... } // from try @ 032aa868 with catch @ 032aafd8 */
  if ((DAT_04566b37 & 1) == 0) {
                    /* catch() { ... } // from try @ 032aae30 with catch @ 032aafdc */
                    /* catch() { ... } // from try @ 032aa724 with catch @ 032aafe0 */
                    /* catch() { ... } // from try @ 032aae20 with catch @ 032aafe4 */
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
                    /* catch() { ... } // from try @ 032aa94c with catch @ 032aafe8 */
                    /* catch() { ... } // from try @ 032aa838 with catch @ 032aafec */
    DAT_04566b37 = 1;
  }
                    /* catch() { ... } // from try @ 032aae10 with catch @ 032aaff0 */
  ppSVar6 = &(__this->fields).LANNHNJHOLM;
                    /* catch() { ... } // from try @ 032aa688 with catch @ 032aaff4 */
                    /* catch() { ... } // from try @ 032aae00 with catch @ 032aaff8 */
  source = *ppSVar6;
  do {
                    /* catch() { ... } // from try @ 032aadf0 with catch @ 032aaffc */
                    /* catch() { ... } // from try @ 032aade0 with catch @ 032ab000 */
                    /* catch() { ... } // from try @ 032aa820 with catch @ 032ab004 */
                    /* catch() { ... } // from try @ 032aa7c4 with catch @ 032ab008 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BaseDialog>_TypeInfo;
                    /* catch() { ... } // from try @ 032aa65c with catch @ 032ab00c */
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 032aa7b4 with catch @ 032ab02c */
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 032aa720 with catch @ 032ab010 */
                    /* catch() { ... } // from try @ 032aa9f4 with catch @ 032ab014 */
                    /* catch() { ... } // from try @ 032aa900 with catch @ 032ab018 */
                    /* catch() { ... } // from try @ 032aadc4 with catch @ 032ab01c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseDialog>_TypeInfo);
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 032aad74 with catch @ 032ab05c */
                    /* catch() { ... } // from try @ 032aa9e0 with catch @ 032ab060 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032aa7b0 with catch @ 032ab064 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 032aa63c with catch @ 032ab030 */
                    /* catch() { ... } // from try @ 032aad94 with catch @ 032ab034 */
                    /* catch() { ... } // from try @ 032aa9e4 with catch @ 032ab038 */
    pSVar5 = (System_Action_BaseDialog__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* catch() { ... } // from try @ 032aad84 with catch @ 032ab03c */
    bVar2 = source != pSVar5;
    source = pSVar5;
                    /* catch() { ... } // from try @ 032aa7ec with catch @ 032ab040 */
  } while (bVar2);
  return;
}


// ===== public void DGKGLFOKOLG(Action<BaseDialog> CJNHFNHJHPE)  [RVA 0x31AB068]
// DialogsManager$$DGKGLFOKOLG @ RVA 0x31AB068

void DialogsManager__DGKGLFOKOLG
               (DialogsManager_o *__this,System_Action_BaseDialog__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BaseDialog__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BaseDialog__o *pSVar5;
  System_Action_BaseDialog__o **ppSVar6;
  System_Action_BaseDialog__o *a;
  
                    /* catch() { ... } // from try @ 032aa60c with catch @ 032ab068 */
                    /* catch() { ... } // from try @ 032aa6d0 with catch @ 032ab06c */
                    /* catch() { ... } // from try @ 032aa8fc with catch @ 032ab070 */
                    /* catch() { ... } // from try @ 032aad54 with catch @ 032ab074 */
                    /* catch() { ... } // from try @ 032aad44 with catch @ 032ab078 */
                    /* catch() { ... } // from try @ 032aa5f0 with catch @ 032ab07c */
                    /* catch() { ... } // from try @ 032aad24 with catch @ 032ab088 */
  if ((DAT_04566b38 & 1) == 0) {
                    /* catch() { ... } // from try @ 032aa9b4 with catch @ 032ab08c */
                    /* catch() { ... } // from try @ 032aa8b8 with catch @ 032ab090 */
                    /* catch() { ... } // from try @ 032aacf8 with catch @ 032ab094 */
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    DAT_04566b38 = 1;
  }
                    /* catch() { ... } // from try @ 032aa784 with catch @ 032ab0a0 */
  ppSVar6 = &(__this->fields).FIDNHJLFPHC;
                    /* catch() { ... } // from try @ 032aa6cc with catch @ 032ab0a4 */
                    /* catch() { ... } // from try @ 032aacdc with catch @ 032ab0a8 */
  a = *ppSVar6;
  do {
                    /* catch() { ... } // from try @ 032aa984 with catch @ 032ab0ac */
                    /* catch() { ... } // from try @ 032aaccc with catch @ 032ab0b0 */
                    /* catch() { ... } // from try @ 032aa5c4 with catch @ 032ab0b4 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BaseDialog>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 032aac8c with catch @ 032ab0dc */
      lVar4 = 0;
    }
    else {
                    /* try { // try from 032ab0c4 to 033ab10f has its CatchHandler @ 032aa15c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseDialog>_TypeInfo);
                    /* catch() { ... } // from try @ 032aa75c with catch @ 032ab0d0 */
                    /* catch() { ... } // from try @ 032aacac with catch @ 032ab0d4 */
      if (lVar4 == 0) {
                    /* try { // try from 032ab110 to 033ab113 has its CatchHandler @ 032ab180 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 032aa8b4 with catch @ 032ab0e0 */
    pSVar5 = (System_Action_BaseDialog__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* catch() { ... } // from try @ 032aacbc with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aad14 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aad34 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aad64 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aae60 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aae90 with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aaecc with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aaefc with catch @ 032ab0ec
                       catch() { ... } // from try @ 032aaf2c with catch @ 032ab0ec */
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* catch() { ... } // from try @ 032aac6c with catch @ 032ab0f8 */
                    /* catch() { ... } // from try @ 032aa4e0 with catch @ 032ab0fc */
  return;
}


// ===== public void EDJNGLJDHFO(bool CJNHFNHJHPE, BaseDialog LMEHKLFGEHI)  [RVA 0x31AB118]
// DialogsManager$$EDJNGLJDHFO @ RVA 0x31AB118

void DialogsManager__EDJNGLJDHFO
               (DialogsManager_o *__this,bool CJNHFNHJHPE,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_00;
  
                    /* try { // try from 032ab128 to 033ab12f has its CatchHandler @ 032ab650 */
  if ((DAT_04566b39 & 1) == 0) {
                    /* try { // try from 032ab150 to 033ab157 has its CatchHandler @ 032ab630 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_JLFCOKLPCGO_OFADDGOGEEO__);
                    /* try { // try from 032ab164 to 033ab167 has its CatchHandler @ 032ab194 */
    FUN_01bab630(&DialogsManager_JLFCOKLPCGO_TypeInfo);
                    /* try { // try from 032ab16c to 033ab16f has its CatchHandler @ 032ab190 */
                    /* try { // try from 032ab174 to 033ab17b has its CatchHandler @ 032ab18c */
    FUN_01bab630(&Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_Find__);
                    /* try { // try from 032ab17c to 033ab1b7 has its CatchHandler @ 032aa15c */
                    /* catch() { ... } // from try @ 032ab110 with catch @ 032ab180 */
    FUN_01bab630(&System_Predicate<DialogsManager_NFAHLBCFIPD>_TypeInfo);
                    /* catch() { ... } // from try @ 032ab174 with catch @ 032ab18c */
    FUN_01bab630(&StringLiteral_5355/*"DialogsManager::ShowDialogCanvasBackground: show with deleted dialog"*/);
                    /* catch() { ... } // from try @ 032ab16c with catch @ 032ab190 */
                    /* catch() { ... } // from try @ 032ab164 with catch @ 032ab194 */
    DAT_04566b39 = 1;
  }
                    /* catch() { ... } // from try @ 032aac58 with catch @ 032ab198 */
                    /* catch() { ... } // from try @ 032aa4bc with catch @ 032ab19c */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(DialogsManager_JLFCOKLPCGO_TypeInfo);
                    /* catch() { ... } // from try @ 032aa488 with catch @ 032ab1a0 */
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 032ab1b8 to 033ab1bb has its CatchHandler @ 032ab638 */
                    /* try { // try from 032ab1bc to 033ab5e3 has its CatchHandler @ 032aa15c */
    pIVar1[1].klass = (Il2CppClass *)LMEHKLFGEHI;
    thunk_FUN_01c20e04(pIVar1 + 1,LMEHKLFGEHI);
    __this_00 = (__this->fields).EDBKLOENEPB;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DialogsManager_NFAHLBCFIPD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_Find__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        *(bool *)&pIVar1[1].monitor = CJNHFNHJHPE;
        DialogsManager__MCKCJDBPAFB(__this,method_00);
        return;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5355/*"DialogsManager::ShowDialogCanvasBackground: show with deleted dialog"*/,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HAMCIMDBOCI()  [RVA 0x31AB400]
// DialogsManager$$HAMCIMDBOCI @ RVA 0x31AB400

void DialogsManager__HAMCIMDBOCI(DialogsManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_04566b3a & 1) == 0) {
    FUN_01bab630(&FNGHHNDKDJB_TypeInfo);
    DAT_04566b3a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FNGHHNDKDJB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    FNGHHNDKDJB__AKNFEIFMJKL((FNGHHNDKDJB_o *)__this_00,(__this->fields).IMMJEIGBAAC,1,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<BaseDialog> EEMNHEEFEON()  [RVA 0x31AB468]
// DialogsManager$$EEMNHEEFEON @ RVA 0x31AB468

System_Collections_Generic_List_BaseDialog__o *
DialogsManager__EEMNHEEFEON(DialogsManager_o *__this,MethodInfo *method)

{
  return (__this->fields).IMMJEIGBAAC;
}


// ===== public void DEAPPIKAHEP()  [RVA 0x31AB470]
// DialogsManager$$DEAPPIKAHEP @ RVA 0x31AB470

void DialogsManager__DEAPPIKAHEP(DialogsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  
  if ((DAT_04566b3b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b3b = 1;
    method = extraout_x1;
  }
  while( true ) {
    pNVar2 = (__this->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) break;
    pNVar2 = (__this->fields)._AOOFDKJAALA_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pNVar2->klass->vtable)._20_Close.methodPtr)(pNVar2,(pNVar2->klass->vtable)._20_Close.method);
    method = extraout_x1_00;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x31AB4F8]
// DialogsManager$$.ctor @ RVA 0x31AB4F8

void DialogsManager___ctor(DialogsManager_o *__this,MethodInfo *method)

{
  System_Action_BaseDialog__o **ppSVar1;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_00;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o **ppSVar2;
  System_Collections_Generic_List_BaseDialog__o *__this_01;
  System_Collections_Generic_List_BaseDialog__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_BaseDialog__o *pSVar4;
  
  if ((DAT_04566b3c & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&Method_GCIFMNHADDF_<>c_IPCGKPOAKEA__);
    FUN_01bab630(&Method_GCIFMNHADDF_<>c_OKDAPCHBPJO__);
    FUN_01bab630(&DialogsManager_<>c_TypeInfo);
    DAT_04566b3c = 1;
    method = extraout_x1;
  }
  if ((DialogsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DialogsManager_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = DialogsManager_<>c_TypeInfo->static_fields->__9__29_0;
  if (pSVar4 == (System_Action_BaseDialog__o *)0x0) {
    if ((DialogsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DialogsManager_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_BaseDialog__o *)thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 032ab5e4 to 033ab5e7 has its CatchHandler @ 032ab654 */
                    /* try { // try from 032ab5e8 to 033ab5ff has its CatchHandler @ 032aa15c */
    System_Action<object>___ctor();
                    /* try { // try from 032ab600 to 033ab617 has its CatchHandler @ 032ab6cc */
    ppSVar1 = &DialogsManager_<>c_TypeInfo->static_fields->__9__29_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (DialogsManager_o *)0x0) {
    ppSVar1 = &(__this->fields).FIDNHJLFPHC;
                    /* try { // try from 032ab618 to 033ab61b has its CatchHandler @ 032aa15c */
    *ppSVar1 = pSVar4;
                    /* try { // try from 032ab61c to 033ab61f has its CatchHandler @ 032ab648 */
                    /* try { // try from 032ab620 to 033ab627 has its CatchHandler @ 032ab644 */
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
                    /* try { // try from 032ab628 to 033ab62f has its CatchHandler @ 032ab6cc */
    if ((DialogsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032ab150 with catch @ 032ab630
                       try { // try from 032ab630 to 033ab673 has its CatchHandler @ 032aa15c */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 032aaf98 with catch @ 032ab634 */
    }
                    /* catch() { ... } // from try @ 032ab1b8 with catch @ 032ab638 */
                    /* catch() { ... } // from try @ 032ab620 with catch @ 032ab644 */
                    /* catch() { ... } // from try @ 032ab61c with catch @ 032ab648 */
                    /* catch() { ... } // from try @ 032aa468 with catch @ 032ab64c */
                    /* catch() { ... } // from try @ 032ab128 with catch @ 032ab650 */
                    /* catch() { ... } // from try @ 032ab5e4 with catch @ 032ab654 */
    pSVar4 = DialogsManager_<>c_TypeInfo->static_fields->__9__29_1;
                    /* catch() { ... } // from try @ 032aa44c with catch @ 032ab658 */
                    /* catch() { ... } // from try @ 032aa430 with catch @ 032ab65c */
    if (pSVar4 == (System_Action_BaseDialog__o *)0x0) {
      if ((DialogsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032ab674 to 033ab677 has its CatchHandler @ 032ab6a0 */
        thunk_FUN_01ba7564();
                    /* try { // try from 032ab678 to 033ab6af has its CatchHandler @ 032aa15c */
      }
      pSVar4 = (System_Action_BaseDialog__o *)thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo)
      ;
                    /* catch() { ... } // from try @ 032ab674 with catch @ 032ab6a0 */
      System_Action<object>___ctor();
                    /* try { // try from 032ab6b0 to 033ab6b7 has its CatchHandler @ 032ab6cc */
                    /* try { // try from 032ab6b8 to 033ab6c3 has its CatchHandler @ 032aa15c */
      ppSVar1 = &DialogsManager_<>c_TypeInfo->static_fields->__9__29_1;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
                    /* try { // try from 032ab6c4 to 033ab6cb has its CatchHandler @ 032ab6cc */
    ppSVar1 = &(__this->fields).LANNHNJHOLM;
    *ppSVar1 = pSVar4;
                    /* catch() { ... } // from try @ 032ab600 with catch @ 032ab6cc
                       catch() { ... } // from try @ 032ab628 with catch @ 032ab6cc
                       catch() { ... } // from try @ 032ab6b0 with catch @ 032ab6cc
                       catch() { ... } // from try @ 032ab6c4 with catch @ 032ab6cc */
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    __this_00 = (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_TypeInfo
                                  );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>__ctor__);
    ppSVar2 = &(__this->fields).EDBKLOENEPB;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    __this_01 = (System_Collections_Generic_List_BaseDialog__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<BaseDialog>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<BaseDialog>__ctor__);
    ppSVar3 = &(__this->fields).IMMJEIGBAAC;
    *ppSVar3 = __this_01;
    thunk_FUN_01c20e04(ppSVar3,__this_01);
    OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LDLLGJNAKKP(BaseDialog LMEHKLFGEHI)  [RVA 0x31AB740]
// DialogsManager$$LDLLGJNAKKP @ RVA 0x31AB740

void DialogsManager__LDLLGJNAKKP
               (DialogsManager_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar4;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  System_Action_BaseDialog__o *pSVar6;
  System_Collections_Generic_List_BaseDialog__o *__this_01;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_02;
  
  if ((DAT_04566b3d & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BNFLBFKMCAG_NHBPEJLCPFK__);
    FUN_01bab630(&Method_GCIFMNHADDF_BNFLBFKMCAG_PPJAJIDFHCG__);
    FUN_01bab630(&DialogsManager_BNFLBFKMCAG_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_AELBAPFOKHK<BaseDialog>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_RemoveAll__);
    FUN_01bab630(&System_Predicate<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Predicate<DialogsManager_NFAHLBCFIPD>_TypeInfo);
    DAT_04566b3d = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(DialogsManager_BNFLBFKMCAG_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)LMEHKLFGEHI;
    thunk_FUN_01c20e04(pIVar2,LMEHKLFGEHI);
    __this_01 = (__this->fields).IMMJEIGBAAC;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<BaseDialog>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_BaseDialog__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)__this_01,pSVar3,
                 Method_System_Collections_Generic_List<BaseDialog>_RemoveAll__);
      __this_02 = (__this->fields).EDBKLOENEPB;
      pSVar3 = (System_Predicate_T__o *)
               thunk_FUN_01bda818(System_Predicate<DialogsManager_NFAHLBCFIPD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_02 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAll
                  ((System_Collections_Generic_List_object__o *)__this_02,pSVar3,
                   Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_RemoveAll__);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)(__this->fields).IMMJEIGBAAC,
                           Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
        if (bVar1) {
          ppNVar4 = &(__this->fields)._AOOFDKJAALA_k__BackingField;
          *ppNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
          thunk_FUN_01c20e04(ppNVar4,0);
          __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
          if (__this_00 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) goto LAB_032ab974;
          bVar1 = false;
        }
        else {
          pNVar5 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)
                   DJNBJHPDKDP__AELBAPFOKHK<object>
                             ((System_Collections_Generic_List_T__o *)(__this->fields).IMMJEIGBAAC,
                              Method_DJNBJHPDKDP_AELBAPFOKHK<BaseDialog>__);
          (__this->fields)._AOOFDKJAALA_k__BackingField = pNVar5;
          thunk_FUN_01c20e04();
          __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
          if (__this_00 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) goto LAB_032ab974;
          bVar1 = true;
        }
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches
                  (__this_00,bVar1,(MethodInfo *)0x0);
        DialogsManager__MCKCJDBPAFB(__this,method_00);
        pSVar6 = (__this->fields).LANNHNJHOLM;
        method_01 = extraout_x1;
        if (pSVar6 != (System_Action_BaseDialog__o *)0x0) {
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,
                     (__this->fields)._AOOFDKJAALA_k__BackingField,
                     (pSVar6->fields).super.super.method);
          method_01 = extraout_x1_00;
        }
        pSVar6 = (__this->fields).FIDNHJLFPHC;
        if (pSVar6 != (System_Action_BaseDialog__o *)0x0) {
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,pIVar2->klass,
                     (pSVar6->fields).super.super.method);
          method_01 = extraout_x1_01;
        }
        DialogsManager__HAMCIMDBOCI(__this,method_01);
        return;
      }
    }
  }
LAB_032ab974:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IDKIMGGFFNH()  [RVA 0x31AB980]
// DialogsManager$$IDKIMGGFFNH @ RVA 0x31AB980

void DialogsManager__IDKIMGGFFNH(DialogsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar2;
  
  if ((DAT_04566b3e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b3e = 1;
    method = extraout_x1;
  }
  while( true ) {
    pNVar2 = (__this->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields)._AOOFDKJAALA_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).IsQuestDialog != false) break;
    (*(pNVar2->klass->vtable)._20_Close.methodPtr)(pNVar2,(pNVar2->klass->vtable)._20_Close.method);
    method = extraout_x1_00;
  }
  return;
}


// ===== private void CFDKIEPPLGM(BaseDialog CJNHFNHJHPE)  [RVA 0x31ABA10]
// DialogsManager$$CFDKIEPPLGM @ RVA 0x31ABA10

void DialogsManager__CFDKIEPPLGM
               (DialogsManager_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._AOOFDKJAALA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void EOAPHMAFKKP(Action<BaseDialog> CJNHFNHJHPE)  [RVA 0x31ABA18]
// DialogsManager$$EOAPHMAFKKP @ RVA 0x31ABA18

void DialogsManager__EOAPHMAFKKP
               (DialogsManager_o *__this,System_Action_BaseDialog__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BaseDialog__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BaseDialog__o *pSVar5;
  System_Action_BaseDialog__o **ppSVar6;
  System_Action_BaseDialog__o *a;
  
  if ((DAT_04566b3f & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    DAT_04566b3f = 1;
  }
  ppSVar6 = &(__this->fields).LANNHNJHOLM;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BaseDialog>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseDialog>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BaseDialog__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void IEHJBHAHKDJ(HKMLPEALIII CMPFDDMPDGN, object IMMNELPBGIF)  [RVA 0x31ABAC8]
// DialogsManager$$IEHJBHAHKDJ @ RVA 0x31ABAC8

void DialogsManager__IEHJBHAHKDJ
               (DialogsManager_o *__this,int32_t CMPFDDMPDGN,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  System_Collections_Generic_List_BaseDialog__o *__this_00;
  DialogsManager_NFAHLBCFIPD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_Dialogs_BaseDialog_array *pNVar7;
  DialogsManager_NFAHLBCFIPD_array *pGVar8;
  System_Action_BaseDialog__o *pSVar9;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar10;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_02;
  
  if ((DAT_04566b40 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_Add__);
    FUN_01bab630(&DialogsManager_NFAHLBCFIPD_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b40 = 1;
  }
  pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
    pNVar5 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__Create
                       (pNVar4,CMPFDDMPDGN,(MethodInfo *)0x0);
    ppNVar10 = &(__this->fields)._AOOFDKJAALA_k__BackingField;
    *ppNVar10 = pNVar5;
    thunk_FUN_01c20e04(ppNVar10);
    pNVar5 = *ppNVar10;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    lVar2 = Method_System_Collections_Generic_List<BaseDialog>_Add__;
    if (bVar3) {
      return;
    }
    __this_00 = (__this->fields).IMMJEIGBAAC;
    if (__this_00 != (System_Collections_Generic_List_BaseDialog__o *)0x0) {
      pNVar5 = (__this->fields)._AOOFDKJAALA_k__BackingField;
      pNVar7 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar7 != (Nekki_SF2_GUI_Dialogs_BaseDialog_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar7->m_Items[(int)uVar1] = pNVar5;
          thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        __this_02 = (__this->fields).EDBKLOENEPB;
        __this_01 = (DialogsManager_NFAHLBCFIPD_o *)
                    thunk_FUN_01bda818(DialogsManager_NFAHLBCFIPD_TypeInfo);
        (__this_01->fields).DPAPCJMICGO = true;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields).BHDFAAMNDNC = (__this->fields)._AOOFDKJAALA_k__BackingField;
        thunk_FUN_01c20e04();
        (__this_01->fields).DPAPCJMICGO = true;
        lVar2 = Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_Add__;
        if (__this_02 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
          pGVar8 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pGVar8 != (DialogsManager_NFAHLBCFIPD_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pGVar8->max_length) {
              (__this_02->fields)._size = uVar1 + 1;
              pGVar8->m_Items[(int)uVar1] = __this_01;
              thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar1,__this_01);
              pMVar6 = extraout_x1;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              pMVar6 = extraout_x1_00;
            }
            DialogsManager__MCKCJDBPAFB(__this,pMVar6);
            Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
            pNVar4 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches
                        (pNVar4,true,(MethodInfo *)0x0);
              pNVar5 = *ppNVar10;
              if (pNVar5 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                (*(pNVar5->klass->vtable)._33_Init.methodPtr)
                          (pNVar5,IMMNELPBGIF,(pNVar5->klass->vtable)._33_Init.method);
                pSVar9 = (__this->fields).LANNHNJHOLM;
                pMVar6 = extraout_x1_01;
                if (pSVar9 != (System_Action_BaseDialog__o *)0x0) {
                  (*(code *)(pSVar9->fields).super.super.invoke_impl)
                            ((pSVar9->fields).super.super.method_code,*ppNVar10,
                             (pSVar9->fields).super.super.method);
                  pMVar6 = extraout_x1_02;
                }
                DialogsManager__HAMCIMDBOCI(__this,pMVar6);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static DialogsManager AIHNLLGNBLC()  [RVA 0x31ABD30]
// DialogsManager$$AIHNLLGNBLC @ RVA 0x31ABD30

DialogsManager_o * DialogsManager__AIHNLLGNBLC(MethodInfo *method)

{
  DialogsManager_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04566b41 & 1) == 0) {
    FUN_01bab630(&DialogsManager_TypeInfo);
    DAT_04566b41 = 1;
  }
  __this = DialogsManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (DialogsManager_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    DialogsManager___ctor(__this,auVar1._8_8_);
    DialogsManager_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(DialogsManager_TypeInfo->static_fields,__this);
  }
  return __this;
}


// ===== public BaseDialog KNILMOHFHJM()  [RVA 0x31ABDA8]
// DialogsManager$$KNILMOHFHJM @ RVA 0x31ABDA8

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
DialogsManager__KNILMOHFHJM(DialogsManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._AOOFDKJAALA_k__BackingField;
}


// ===== private void MCKCJDBPAFB()  [RVA 0x31AB278]
// DialogsManager$$MCKCJDBPAFB @ RVA 0x31AB278

void DialogsManager__MCKCJDBPAFB(DialogsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566b42 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<DialogsManager_NFAHLBCFIPD>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DialogsManager_NFAHLBCFIPD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DialogsManager_NFAHLBCFIPD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DialogsManager_NFAHLBCFIPD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_GetEnumerator__);
    DAT_04566b42 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).EDBKLOENEPB,
                     Method_DJNBJHPDKDP_OBECCOPBADO<DialogsManager_NFAHLBCFIPD>__);
  __this_01 = (__this->fields).EDBKLOENEPB;
  if (__this_01 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
    bVar1 = !bVar1;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<DialogsManager_NFAHLBCFIPD>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<DialogsManager_NFAHLBCFIPD>_MoveNext__
                        );
      if (!bVar2) goto LAB_032ab34c;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(char *)&local_38.fields._current[1].monitor != '\0');
    bVar1 = false;
LAB_032ab34c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<DialogsManager_NFAHLBCFIPD>_Dispose__)
    ;
    __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DialogCanvasController__EnableBackground
                (__this_00,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BaseDialog ACDDKABEBAP(HKMLPEALIII CMPFDDMPDGN, object IMMNELPBGIF)  [RVA 0x31ABDB0]
// DialogsManager$$ACDDKABEBAP @ RVA 0x31ABDB0

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
DialogsManager__ACDDKABEBAP(int32_t CMPFDDMPDGN,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  DialogsManager_o *pGVar1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  pGVar1 = DialogsManager__AIHNLLGNBLC((MethodInfo *)(ulong)(uint)CMPFDDMPDGN);
  if (pGVar1 != (DialogsManager_o *)0x0) {
    DialogsManager__IEHJBHAHKDJ(pGVar1,CMPFDDMPDGN,IMMNELPBGIF,in_x3);
    pGVar1 = DialogsManager__AIHNLLGNBLC(method_00);
    if (pGVar1 != (DialogsManager_o *)0x0) {
      return (pGVar1->fields)._AOOFDKJAALA_k__BackingField;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CPBKBNKHOPH(Action<BaseDialog> CJNHFNHJHPE)  [RVA 0x31ABDF0]
// DialogsManager$$CPBKBNKHOPH @ RVA 0x31ABDF0

void DialogsManager__CPBKBNKHOPH
               (DialogsManager_o *__this,System_Action_BaseDialog__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BaseDialog__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BaseDialog__o *pSVar5;
  System_Action_BaseDialog__o **ppSVar6;
  System_Action_BaseDialog__o *source;
  
  if ((DAT_04566b43 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    DAT_04566b43 = 1;
  }
  ppSVar6 = &(__this->fields).FIDNHJLFPHC;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BaseDialog>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BaseDialog>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BaseDialog__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

