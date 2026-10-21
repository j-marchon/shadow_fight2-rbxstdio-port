// TypeDefIndex 3345
// Namespace: 
// [CompilerGenerated]
// private sealed class IJCLCKIJJDH.POLPDOALJOO
// Fields:
//   public IJCLCKIJJDH <>4__this; // 0x10
//   public MFBFOBDKLBC operation; // 0x18
//   public List<MFBFOBDKLBC> operations; // 0x20

// ===== public void .ctor()  [RVA 0x3530824]
// IJCLCKIJJDH.POLPDOALJOO$$.ctor @ RVA 0x3530824

void IJCLCKIJJDH_POLPDOALJOO___ctor(IJCLCKIJJDH_POLPDOALJOO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void DMFBJOPEABP(bool success)  [RVA 0x3531060]
// IJCLCKIJJDH.POLPDOALJOO$$DMFBJOPEABP @ RVA 0x3531060

void IJCLCKIJJDH_POLPDOALJOO__DMFBJOPEABP
               (IJCLCKIJJDH_POLPDOALJOO_o *__this,bool success,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Type_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  IJCLCKIJJDH_o *pIVar4;
  
  if ((DAT_04568a5e & 1) == 0) {
    FUN_01bab630(&StringLiteral_5551/*"END operation '"*/);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_851/*"' with FAILURE! Login stopped..."*/);
    DAT_04568a5e = 1;
  }
  __this_00 = (Il2CppObject *)(__this->fields).operation;
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar4 = (__this->fields).__4__this;
    pSVar1 = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pSVar2 = (System_String_o *)
               (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
      if (success) {
        pSVar2 = System_String__Concat
                           (StringLiteral_5551/*"END operation '"*/,pSVar2,StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
        pMVar3 = (MethodInfo *)0x0;
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pIVar4,pSVar2,(MethodInfo *)0x0);
        pIVar4 = (__this->fields).__4__this;
        if (pIVar4 != (IJCLCKIJJDH_o *)0x0) {
          (pIVar4->fields).PGGDMOEHIJI = (pIVar4->fields).PGGDMOEHIJI + 1;
          IJCLCKIJJDH__HIDNIOLOJMJ(pIVar4,(__this->fields).operations,pMVar3);
          return;
        }
      }
      else {
        pSVar2 = System_String__Concat
                           (StringLiteral_5551/*"END operation '"*/,pSVar2,StringLiteral_851/*"' with FAILURE! Login stopped..."*/,(MethodInfo *)0x0);
        pMVar3 = (MethodInfo *)0x0;
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)pIVar4,pSVar2,(MethodInfo *)0x0);
        pIVar4 = (__this->fields).__4__this;
        if (pIVar4 != (IJCLCKIJJDH_o *)0x0) {
          IJCLCKIJJDH__FGNINNOOCCL(pIVar4,false,pMVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

