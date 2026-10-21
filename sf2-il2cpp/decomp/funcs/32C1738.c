// Nekki.SF2.GUI.Dialogs.StoryDialog$$AGDKMMJMLFM @ RVA 0x32C1738

void Nekki_SF2_GUI_Dialogs_StoryDialog__AGDKMMJMLFM
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *pMVar5;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  
  if ((DAT_045674cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674cd = 1;
  }
  pSVar3 = (__this->fields).NMBDHGCKNII;
  index = (__this->fields).NOHLNBNJKHD + 1;
  (__this->fields).NOHLNBNJKHD = index;
  if (pSVar3 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (index == iVar1 + -1) {
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      (*(__this->klass->vtable)._43_CJEEDJHKDBE.methodPtr)
                (__this,pIVar4,(__this->klass->vtable)._43_CJEEDJHKDBE.method);
      bVar2 = System_String__op_Equality
                        ((__this->fields).BGANBKJCMNM,StringLiteral_1,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (__this->fields).NMBDHGCKNII;
        if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
           (pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,
                                (__this->fields).NOHLNBNJKHD,
                                Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
           pIVar4 == (Il2CppObject *)0x0)) goto LAB_033c18c8;
        pIVar4 = pIVar4 + 2;
      }
      else {
        pIVar4 = (Il2CppObject *)&(__this->fields).BGANBKJCMNM;
      }
      (__this->fields).super.NIEHEOKFPAN = (System_String_o *)pIVar4->klass;
      thunk_FUN_01c20e04();
      UNRECOVERED_JUMPTABLE = (__this->klass->vtable)._44_EGHBJLDNOMA.methodPtr;
      pMVar5 = (__this->klass->vtable)._44_EGHBJLDNOMA.method;
    }
    else {
      if (iVar1 <= index) {
                    /* WARNING: Could not recover jumptable at 0x033c18c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._13_OnClose.methodPtr)
                  (__this,IMMNELPBGIF,(__this->klass->vtable)._13_OnClose.method);
        return;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      (*(__this->klass->vtable)._43_CJEEDJHKDBE.methodPtr)
                (__this,pIVar4,(__this->klass->vtable)._43_CJEEDJHKDBE.method);
      pSVar3 = (__this->fields).NMBDHGCKNII;
      if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,
                              (__this->fields).NOHLNBNJKHD,
                              Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
         pIVar4 == (Il2CppObject *)0x0)) goto LAB_033c18c8;
      (*(__this->klass->vtable)._47_AOHAKEEHGKG.methodPtr)
                (__this,pIVar4[2].klass,(__this->klass->vtable)._47_AOHAKEEHGKG.method);
      UNRECOVERED_JUMPTABLE = (__this->klass->vtable)._42_PMLICAPHBJD.methodPtr;
      pMVar5 = (__this->klass->vtable)._42_PMLICAPHBJD.method;
    }
                    /* WARNING: Could not recover jumptable at 0x033c18a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(__this,pMVar5);
    return;
  }
LAB_033c18c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

