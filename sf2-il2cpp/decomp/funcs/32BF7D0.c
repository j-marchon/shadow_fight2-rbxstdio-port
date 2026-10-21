// Nekki.SF2.GUI.Dialogs.StoryDialog$$LCGFJKFJKJK @ RVA 0x32BF7D0

void Nekki_SF2_GUI_Dialogs_StoryDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar4;
  Il2CppObject *pIVar5;
  int32_t index;
  Il2CppClass *pIVar6;
  
  if ((DAT_045674bd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__,DNBBBGEENMM);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674bd = 1;
  }
  if ((__this->fields).NHNBEPIDGIB == false) {
    pSVar4 = (__this->fields).NMBDHGCKNII;
    if (pSVar4 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_033bf94c;
    index = (__this->fields).NOHLNBNJKHD;
  }
  else {
    pSVar4 = (__this->fields).NMBDHGCKNII;
    if (pSVar4 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_033bf94c;
    index = (pSVar4->fields)._size + -1;
    (__this->fields).NOHLNBNJKHD = index;
  }
  if (index + 1 < (pSVar4->fields)._size) {
    pIVar5 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,index,
                        Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033bf94c;
    (*(__this->klass->vtable)._47_AOHAKEEHGKG.methodPtr)
              (__this,pIVar5[2].klass,(__this->klass->vtable)._47_AOHAKEEHGKG.method);
  }
  pSVar4 = (__this->fields).NMBDHGCKNII;
  if (pSVar4 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    iVar2 = (pSVar4->fields)._size;
    if ((__this->fields).NOHLNBNJKHD + 1 == iVar2) {
      bVar3 = System_String__op_Equality
                        ((__this->fields).BGANBKJCMNM,StringLiteral_1,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar4 = (__this->fields).NMBDHGCKNII;
        if ((pSVar4 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,
                                (__this->fields).NOHLNBNJKHD,
                                Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
           pIVar5 == (Il2CppObject *)0x0)) goto LAB_033bf94c;
        pIVar5 = pIVar5 + 2;
      }
      else {
        pIVar5 = (Il2CppObject *)&(__this->fields).BGANBKJCMNM;
      }
      pIVar6 = pIVar5->klass;
    }
    else {
      if (iVar2 != 0) {
        return;
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields).BGANBKJCMNM,StringLiteral_1,(MethodInfo *)0x0);
      lVar1 = 0x80;
      if (!bVar3) {
        lVar1 = 0x160;
      }
      pIVar6 = *(Il2CppClass **)((long)&__this->klass + lVar1);
    }
    (__this->fields).super.NIEHEOKFPAN = (System_String_o *)pIVar6;
    thunk_FUN_01c20e04();
                    /* WARNING: Could not recover jumptable at 0x033bf948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._44_EGHBJLDNOMA.methodPtr)
              (__this,(__this->klass->vtable)._44_EGHBJLDNOMA.method);
    return;
  }
LAB_033bf94c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

