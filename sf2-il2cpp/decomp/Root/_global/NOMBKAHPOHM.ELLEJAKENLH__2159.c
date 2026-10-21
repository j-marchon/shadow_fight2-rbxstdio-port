// TypeDefIndex 2159
// Namespace: 
// [CompilerGenerated]
// private sealed class NOMBKAHPOHM.ELLEJAKENLH
// Fields:
//   public Predicate<NCCFNKMICGK> condition; // 0x10
//   public NOMBKAHPOHM <>4__this; // 0x18

// ===== internal bool PAFEJOBBDOK(NCCFNKMICGK offer)  [RVA 0x32DAD04]
// NOMBKAHPOHM.ELLEJAKENLH$$PAFEJOBBDOK @ RVA 0x32DAD04

bool NOMBKAHPOHM_ELLEJAKENLH__PAFEJOBBDOK
               (NOMBKAHPOHM_ELLEJAKENLH_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  undefined1 uVar1;
  System_Predicate_NCCFNKMICGK__o *pSVar2;
  
  pSVar2 = (__this->fields).condition;
  if (pSVar2 != (System_Predicate_NCCFNKMICGK__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033dad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,offer,
                       (pSVar2->fields).super.super.method);
    return (bool)uVar1;
  }
  return true;
}


// ===== public void .ctor()  [RVA 0x32D8C90]
// NOMBKAHPOHM.ELLEJAKENLH$$.ctor @ RVA 0x32D8C90

void NOMBKAHPOHM_ELLEJAKENLH___ctor(NOMBKAHPOHM_ELLEJAKENLH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void BJHKAJOAIAC(NCCFNKMICGK offer)  [RVA 0x32DAD24]
// NOMBKAHPOHM.ELLEJAKENLH$$BJHKAJOAIAC @ RVA 0x32DAD24

void NOMBKAHPOHM_ELLEJAKENLH__BJHKAJOAIAC
               (NOMBKAHPOHM_ELLEJAKENLH_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  Il2CppObject *item;
  NCCFNKMICGK_c *pNVar5;
  System_String_o *pSVar6;
  NOMBKAHPOHM_o *pNVar7;
  ulong uVar8;
  int32_t *piVar9;
  FPPKHNNABAD_o *__this_00;
  
  if ((DAT_045675b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b9 = 1;
  }
  pNVar7 = (__this->fields).__4__this;
  if ((pNVar7 != (NOMBKAHPOHM_o *)0x0) && (offer != (NCCFNKMICGK_o *)0x0)) {
    pNVar5 = offer->klass;
    __this_00 = (pNVar7->fields).NDBPOFMECGL;
    uVar1._0_1_ = (pNVar5->_2).rank;
    uVar1._1_1_ = (pNVar5->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pNVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar4 = pNVar5->vtable + (*piVar9 + 2);
          goto LAB_033dadc8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,2);
LAB_033dadc8:
    item = (Il2CppObject *)(*pVVar4->methodPtr)(offer,pVVar4->method);
    lVar3 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
      pSVar6 = (__this_00->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(__this_00->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(__this_00->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar6 != (System_String_o *)0x0) {
        uVar2 = *(uint *)&(__this_00->fields)._GPEFIOMJHNN_k__BackingField;
        if (uVar2 < *(uint *)&pSVar6[1].klass) {
          *(uint *)&(__this_00->fields)._GPEFIOMJHNN_k__BackingField = uVar2 + 1;
          (&pSVar6[1].monitor)[(int)uVar2] = item;
          thunk_FUN_01c20e04();
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

