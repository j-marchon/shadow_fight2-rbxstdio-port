// EEGDOGKBLNG$$KILLKMHKIMI @ RVA 0x3071028

void EEGDOGKBLNG__KILLKMHKIMI
               (EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *LNAHOKBLFGA,bool CBBJMNGHMIF,MethodInfo *method
               )

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  KAMBBJFPLGM_o *pKVar4;
  undefined8 *puVar5;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar6;
  System_Action_IList_PIADCKMDDAK___o *pSVar7;
  System_String_o *pSVar8;
  int index;
  int32_t local_48;
  uint local_44;
  
  method_00 = (MethodInfo *)(ulong)CBBJMNGHMIF;
  if ((DAT_04565f6c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    FUN_01bab630(&StringLiteral_16321);
    FUN_01bab630(&StringLiteral_19845);
    DAT_04565f6c = 1;
  }
  if ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  EEGDOGKBLNG__LLNLBFAEJNC(__this,LNAHOKBLFGA,method_00);
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if ((pKVar4 != (KAMBBJFPLGM_o *)0x0) &&
     (pGVar6 = (pKVar4->fields).LEJBLHJFJHP,
     pGVar6 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    iVar1 = (pGVar6->fields).count;
    if (0 < iVar1) {
      bVar2 = false;
      index = 0;
      do {
        if ((((bVar2) ||
             (pGVar6 = (pKVar4->fields).LEJBLHJFJHP,
             pGVar6 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) ||
            (pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                                ), pIVar3 == (Il2CppObject *)0x0)) ||
           (LNAHOKBLFGA == (PIADCKMDDAK_o *)0x0)) goto LAB_03171234;
        bVar2 = System_String__op_Equality
                          (pIVar3[1].monitor,(LNAHOKBLFGA->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
        if (bVar2) {
          if (CBBJMNGHMIF) {
            local_44 = (LNAHOKBLFGA->fields).GDKPGIBMFPA + *(int *)&pIVar3[2].klass;
            local_44 = local_44 & ((int)local_44 >> 0x1f ^ 0xffffffffU);
          }
          else {
            local_44 = (LNAHOKBLFGA->fields).GDKPGIBMFPA;
          }
          *(uint *)&pIVar3[2].klass = local_44;
          pSVar8 = pIVar3[1].monitor;
          pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
          puVar5 = &StringLiteral_16321;
          goto LAB_031711d8;
        }
        pKVar4 = (__this->fields).MLAAJICBOAD;
        index = index + 1;
        bVar2 = pKVar4 == (KAMBBJFPLGM_o *)0x0;
      } while (iVar1 != index);
      if (pKVar4 == (KAMBBJFPLGM_o *)0x0) goto LAB_03171234;
    }
    pGVar6 = (pKVar4->fields).LEJBLHJFJHP;
    if ((pGVar6 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) &&
       (Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,
                   (Il2CppObject *)LNAHOKBLFGA,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__),
       LNAHOKBLFGA != (PIADCKMDDAK_o *)0x0)) {
      pSVar8 = (LNAHOKBLFGA->fields).GJNOEAKNMOG;
      local_48 = (LNAHOKBLFGA->fields).GDKPGIBMFPA;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
      puVar5 = &StringLiteral_19845;
LAB_031711d8:
      pSVar8 = System_String__Format
                         ((System_String_o *)*puVar5,(Il2CppObject *)pSVar8,pIVar3,(MethodInfo *)0x0
                         );
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
      pKVar4 = (__this->fields).MLAAJICBOAD;
      if ((pKVar4 != (KAMBBJFPLGM_o *)0x0) &&
         (pSVar7 = (__this->fields).MMCHECDCGKF,
         pSVar7 != (System_Action_IList_PIADCKMDDAK___o *)0x0)) {
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,(pKVar4->fields).LEJBLHJFJHP,
                   (pSVar7->fields).super.super.method);
        return;
      }
    }
  }
LAB_03171234:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

