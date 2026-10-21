// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$MBAONPCGIOF @ RVA 0x3253C04

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MBAONPCGIOF
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  FEKEAPCCOOB_o *__this_00;
  TabView_o *x;
  ulong uVar5;
  KKLJIDJBFEI_o *__this_01;
  PGICCMFLDPI_o *pPVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  long lVar13;
  int32_t *piVar14;
  undefined8 uVar15;
  
  if ((DAT_0456714d & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_4282);
    FUN_01bab630(&StringLiteral_4281);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456714d = 1;
  }
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 == (FEKEAPCCOOB_o *)0x0) goto LAB_03353fe4;
  x = FEKEAPCCOOB__CKNDOOPOOEF(__this_00,(MethodInfo *)0x0);
  if (x == (TabView_o *)0x0) {
LAB_03353cf0:
    x = (TabView_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03353cf0;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_TypeInfo) {
      x = (TabView_o *)0x0;
    }
  }
  uVar5 = (*(__this->klass->vtable)._15_IsOpened.methodPtr)
                    (__this,(__this->klass->vtable)._15_IsOpened.method);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (x == (TabView_o *)0x0) {
LAB_03353fe4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)&x[1].monitor != 2) {
    return;
  }
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_01 == (KKLJIDJBFEI_o *)0x0) ||
     (pPVar6 = KKLJIDJBFEI__MPBLBEGCAKP(__this_01,(MethodInfo *)0x0), pPVar6 == (PGICCMFLDPI_o *)0x0
     )) goto LAB_03353fe4;
  uVar5 = (__this->fields).LMANLFKJNKN;
  if ((long)uVar5 < 0) {
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = Method_System_Array_Empty<string>__;
    lVar13 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar13 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar13 = *(long *)(lVar9 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01b81620();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03353fe4;
    pIVar12 = pIVar8->klass;
    lVar9 = **(long **)(lVar9 + 0xb8);
    uVar3._0_1_ = (pIVar12->_2).rank;
    uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar5 = (ulong)uVar3;
    uVar15 = StringLiteral_4281;
    if (uVar5 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        uVar15 = StringLiteral_4281;
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_03353f40;
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
        uVar15 = StringLiteral_4281;
      } while (uVar5 != 0);
    }
  }
  else {
    pMVar11 = extraout_x1;
    if ((long)uVar5 <= (pPVar6->fields).GDKPGIBMFPA) goto LAB_03353fcc;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = MGNPHCAAEIO__HIIEINMMNGG(uVar5 / 1000,(MethodInfo *)0x0);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar9 = FUN_01bab718(string___TypeInfo,1);
    if (lVar9 == 0) goto LAB_03353fe4;
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar9 + 0x20) = pSVar7;
    thunk_FUN_01c20e04((undefined8 *)(lVar9 + 0x20),pSVar7);
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03353fe4;
    pIVar12 = pIVar8->klass;
    uVar2._0_1_ = (pIVar12->_2).rank;
    uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar5 = (ulong)uVar2;
    uVar15 = StringLiteral_4282;
    if (uVar5 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) goto LAB_03353f40;
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar5 != 0);
    }
  }
  pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03353f50:
  pSVar7 = (System_String_o *)(*pVVar10->methodPtr)(pIVar8,uVar15,lVar9,pVVar10->method);
  pMVar11 = StringLiteral_9679;
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_17850,pSVar7,(System_String_o *)StringLiteral_9679,StringLiteral_1,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,false,true,true,true,
             (MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__SelectTabWithChannel(__this,3,pMVar11);
  pMVar11 = extraout_x1_00;
LAB_03353fcc:
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__BHLHBBKAFHH(__this,pMVar11);
  return;
LAB_03353f40:
  pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
  goto LAB_03353f50;
}

