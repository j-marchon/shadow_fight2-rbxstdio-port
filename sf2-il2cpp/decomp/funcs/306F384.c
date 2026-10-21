// EEGDOGKBLNG$$KFDOOFMOAEH @ RVA 0x306F384

void EEGDOGKBLNG__KFDOOFMOAEH
               (EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *CHMGGEMGDPE,bool CBBJMNGHMIF,MethodInfo *method
               )

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Il2CppObject *pIVar3;
  uint uVar4;
  KAMBBJFPLGM_o *pKVar5;
  System_Action_IList_PIADCKMDDAK___o *pSVar6;
  int iVar7;
  
  if ((DAT_04565f53 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f53 = 1;
  }
  pKVar5 = (__this->fields).MLAAJICBOAD;
  if (pKVar5 == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  __this_00 = (pKVar5->fields).AKFPFIHIHOC;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (__this_00->fields).count;
    iVar7 = 1;
    bVar2 = 0 < iVar1;
    while (bVar2) {
      pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,iVar7 + -1,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) || (CHMGGEMGDPE == (PIADCKMDDAK_o *)0x0))
      goto LAB_0316f4d0;
      bVar2 = System_String__op_Equality
                        (pIVar3[1].monitor,(CHMGGEMGDPE->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
      if (bVar2) {
        if (CBBJMNGHMIF) {
          uVar4 = (CHMGGEMGDPE->fields).GDKPGIBMFPA + *(int *)&pIVar3[2].klass;
          uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar4 = (CHMGGEMGDPE->fields).GDKPGIBMFPA;
        }
        *(uint *)&pIVar3[2].klass = uVar4;
        goto LAB_0316f49c;
      }
      pKVar5 = (__this->fields).MLAAJICBOAD;
      if (pKVar5 == (KAMBBJFPLGM_o *)0x0) goto LAB_0316f4d0;
      __this_00 = (pKVar5->fields).AKFPFIHIHOC;
      bVar2 = iVar7 < iVar1;
      iVar7 = iVar7 + 1;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
      goto LAB_0316f4d0;
    }
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (Il2CppObject *)CHMGGEMGDPE,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
LAB_0316f49c:
    pKVar5 = (__this->fields).MLAAJICBOAD;
    if ((pKVar5 != (KAMBBJFPLGM_o *)0x0) &&
       (pSVar6 = (__this->fields).DAGJHIAIOML, pSVar6 != (System_Action_IList_PIADCKMDDAK___o *)0x0)
       ) {
                    /* WARNING: Could not recover jumptable at 0x0316f4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar6->fields).super.super.invoke_impl)
                ((pSVar6->fields).super.super.method_code,(pKVar5->fields).AKFPFIHIHOC,
                 (pSVar6->fields).super.super.method);
      return;
    }
  }
LAB_0316f4d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

