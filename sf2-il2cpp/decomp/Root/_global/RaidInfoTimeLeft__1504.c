// TypeDefIndex 1504
// Namespace: 
// public class RaidInfoTimeLeft : MonoBehaviour
// Fields:
//   private LabelAlias _timeLable; // 0x20
//   private OOMHDDBCBJP ACMHOIKOLBE; // 0x28

// ===== public void UpdateInfo(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x319CF44]
// RaidInfoTimeLeft$$UpdateInfo @ RVA 0x319CF44

void RaidInfoTimeLeft__UpdateInfo
               (RaidInfoTimeLeft_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    (__this->fields).ACMHOIKOLBE = BANHBMINMMP;
    thunk_FUN_01c20e04();
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x319CF54]
// RaidInfoTimeLeft$$.ctor @ RVA 0x319CF54

void RaidInfoTimeLeft___ctor(RaidInfoTimeLeft_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OnEnable()  [RVA 0x319CF5C]
// RaidInfoTimeLeft$$OnEnable @ RVA 0x319CF5C

void RaidInfoTimeLeft__OnEnable(RaidInfoTimeLeft_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ab5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_RaidInfoTimeLeft_IAKHIFOFLGO__);
    DAT_04566ab5 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== protected void OnDisable()  [RVA 0x319D000]
// RaidInfoTimeLeft$$OnDisable @ RVA 0x319D000

void RaidInfoTimeLeft__OnDisable(RaidInfoTimeLeft_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ab6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_RaidInfoTimeLeft_IAKHIFOFLGO__);
    DAT_04566ab6 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void IAKHIFOFLGO()  [RVA 0x319D0A4]
// RaidInfoTimeLeft$$IAKHIFOFLGO @ RVA 0x319D0A4

void RaidInfoTimeLeft__IAKHIFOFLGO(RaidInfoTimeLeft_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  bool bVar6;
  OLKPEJMEBPJ_o *__this_00;
  int64_t NFBEBOIDJLL;
  System_Action_o *CJNHFNHJHPE;
  long lVar7;
  MEJIKMPNBNL_o *__this_01;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *EFIHACGLMNA;
  OOMHDDBCBJP_o *pOVar11;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  Nekki_SF2_GUI_LabelAlias_o *pNVar16;
  Nekki_SF2_GUI_Map_MapScene_o *__this_02;
  undefined8 uVar17;
  
  if ((DAT_04566ab7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_RaidInfoTimeLeft_IAKHIFOFLGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_255/*" : "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_13805/*"TimeSecondsShort"*/);
    DAT_04566ab7 = 1;
  }
  pOVar11 = (__this->fields).ACMHOIKOLBE;
  if ((pOVar11 == (OOMHDDBCBJP_o *)0x0) ||
     (__this_00 = (pOVar11->fields).LFJPDELEIHG, __this_00 == (OLKPEJMEBPJ_o *)0x0))
  goto LAB_0329d6a0;
  NFBEBOIDJLL = OLKPEJMEBPJ__KPPFAPANAMH(__this_00,(MethodInfo *)0x0);
  if (NFBEBOIDJLL < 1) {
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01b81620();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01b81620();
    }
    __this_02 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar7 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    NFBEBOIDJLL = 0;
    if (bVar6) {
      if (__this_02 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_0329d6a0;
      Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden
                (__this_02,(__this->fields).ACMHOIKOLBE,(MethodInfo *)0x0);
      pOVar11 = (__this->fields).ACMHOIKOLBE;
      if ((pOVar11 == (OOMHDDBCBJP_o *)0x0) ||
         (__this_01 = (pOVar11->fields).IAJPHAAMKPC, __this_01 == (MEJIKMPNBNL_o *)0x0))
      goto LAB_0329d6a0;
      pOVar11 = MEJIKMPNBNL__ANCEMNBGNAN(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapScene__SelectBattle(__this_02,pOVar11,0.0,(MethodInfo *)0x0);
      NFBEBOIDJLL = 0;
    }
  }
  pNVar16 = (__this->fields)._timeLable;
  pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar7 = Method_System_Array_Empty<string>__;
  lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar12 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar12 = *(long *)(lVar7 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01b81620();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  uVar5 = StringLiteral_13795/*"TimeDaysShort"*/;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar13 = pIVar8->klass;
    uVar17 = **(undefined8 **)(lVar7 + 0xb8);
    uVar1._0_1_ = (pIVar13->_2).rank;
    uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
    uVar14 = (ulong)uVar1;
    if (uVar14 != 0) {
      piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
          goto LAB_0329d370;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0329d370:
    pSVar10 = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar5,uVar17,pVVar9->method);
    pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar7 = Method_System_Array_Empty<string>__;
    lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar12 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar12 = *(long *)(lVar7 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01b81620();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01b81620();
    }
    uVar5 = StringLiteral_13796/*"TimeHourShort"*/;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar13 = pIVar8->klass;
      uVar17 = **(undefined8 **)(lVar7 + 0xb8);
      uVar2._0_1_ = (pIVar13->_2).rank;
      uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
      uVar14 = (ulong)uVar2;
      if (uVar14 != 0) {
        piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
            goto LAB_0329d448;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0329d448:
      JONDDIMGADB = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar5,uVar17,pVVar9->method);
      pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar7 = Method_System_Array_Empty<string>__;
      lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar12 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar12 = *(long *)(lVar7 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01b81620();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      uVar5 = StringLiteral_13800/*"TimeMinuteShort"*/;
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar13 = pIVar8->klass;
        uVar17 = **(undefined8 **)(lVar7 + 0xb8);
        uVar3._0_1_ = (pIVar13->_2).rank;
        uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar3;
        if (uVar14 != 0) {
          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
              goto LAB_0329d520;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0329d520:
        FCLHIDDAHIJ = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar5,uVar17,pVVar9->method);
        pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar7 = Method_System_Array_Empty<string>__;
        lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar12 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar12 = *(long *)(lVar7 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01b81620();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        uVar5 = StringLiteral_13805/*"TimeSecondsShort"*/;
        if (pIVar8 != (Il2CppObject *)0x0) {
          pIVar13 = pIVar8->klass;
          uVar17 = **(undefined8 **)(lVar7 + 0xb8);
          uVar4._0_1_ = (pIVar13->_2).rank;
          uVar4._1_1_ = (pIVar13->_2).minimumAlignment;
          uVar14 = (ulong)uVar4;
          if (uVar14 != 0) {
            piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                goto LAB_0329d600;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0329d600:
          EFIHACGLMNA = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,uVar5,uVar17,pVVar9->method);
          pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                              (NFBEBOIDJLL,true,true,true,true,false,false,StringLiteral_255/*" : "*/,pSVar10
                               ,true,true,true,true,true,JONDDIMGADB,FCLHIDDAHIJ,EFIHACGLMNA,4,
                               (MethodInfo *)0x0);
          if (pNVar16 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329d69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar16->klass->vtable)._75_set_text.methodPtr)
                      (pNVar16,pSVar10,(pNVar16->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
LAB_0329d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsTimeEnded(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x319D6A4]
// RaidInfoTimeLeft$$IsTimeEnded @ RVA 0x319D6A4

bool RaidInfoTimeLeft__IsTimeEnded
               (RaidInfoTimeLeft_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  OLKPEJMEBPJ_o *__this_00;
  int64_t iVar2;
  
  if ((BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) ||
     (__this_00 = (BANHBMINMMP->fields).LFJPDELEIHG, __this_00 == (OLKPEJMEBPJ_o *)0x0)) {
    bVar1 = true;
  }
  else {
    iVar2 = OLKPEJMEBPJ__KPPFAPANAMH(__this_00,(MethodInfo *)0x0);
    bVar1 = iVar2 < 1;
  }
  return bVar1;
}

