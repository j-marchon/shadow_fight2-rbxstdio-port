// TypeDefIndex 2910
// Namespace: 
// public class NDPMLPGANCI
// Fields:
//   private Action<GLINEGMOOBM> NKKEKIKFFCJ; // 0x10
//   private Action<DBMPKPJGIPI> MNMJGAENNOP; // 0x18
//   private Action<DBMPKPJGIPI> LGEMJFBPAGO; // 0x20
//   private Action<DBMPKPJGIPI> DPHGELLABKO; // 0x28
//   private Action FMABLOGPGMC; // 0x30
//   private static NDPMLPGANCI KNOHKIKFEBL; // 0x0
//   public static bool EHFCPINCBGC; // 0x8
//   public GLINEGMOOBM KLPOKEJLDHG; // 0x38
//   private bool MBMMKMMJODA; // 0x40
//   private bool JDNPDPLDNAL; // 0x41
//   private bool BCCMIAOKPBI; // 0x42
//   private bool BNHCMDDLIPB; // 0x43
//   private bool JCPABCJKJMC; // 0x44
//   private IEnumerator BNKPMKJJJAK; // 0x48

// ===== public void NPDADBCINPL()  [RVA 0x344954C]
// NDPMLPGANCI$$NPDADBCINPL @ RVA 0x344954C

void NDPMLPGANCI__NPDADBCINPL(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *x;
  PlayerData_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  GLINEGMOOBM_o *pGVar4;
  
  if ((DAT_04568256 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568256 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  x = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pGVar4 = (__this->fields).KLPOKEJLDHG;
  if (pGVar4 == (GLINEGMOOBM_o *)0x0) goto LAB_035496a8;
  iVar1 = (pGVar4->fields).DBMPKPJGIPI;
  if (1 < iVar1 - 10U) {
    if (iVar1 == 4) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanShowChatNowInShopScene
                        ((MethodInfo *)0x0);
      if (bVar2) goto LAB_03549644;
    }
    else if ((iVar1 != 6) ||
            (bVar2 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0), !bVar2
            )) {
LAB_03549644:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 == (PlayerData_o *)0x0) goto LAB_035496a8;
      bVar2 = PlayerData__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) goto LAB_035496a8;
        UNRECOVERED_JUMPTABLE = (x->klass->vtable)._20_Show.methodPtr;
        pMVar3 = (x->klass->vtable)._20_Show.method;
        goto LAB_03549698;
      }
    }
  }
  if (x != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    UNRECOVERED_JUMPTABLE = (x->klass->vtable)._17_Hide.methodPtr;
    pMVar3 = (x->klass->vtable)._17_Hide.method;
LAB_03549698:
                    /* WARNING: Could not recover jumptable at 0x035496a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(x,pMVar3);
    return;
  }
LAB_035496a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EAPNEKLDLLM(Action<DBMPKPJGIPI> CJNHFNHJHPE)  [RVA 0x34496AC]
// NDPMLPGANCI$$EAPNEKLDLLM @ RVA 0x34496AC

void NDPMLPGANCI__EAPNEKLDLLM
               (NDPMLPGANCI_o *__this,System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DBMPKPJGIPI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *pSVar5;
  System_Action_DBMPKPJGIPI__o **ppSVar6;
  System_Action_DBMPKPJGIPI__o *a;
  
  if ((DAT_04568257 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_04568257 = 1;
  }
  ppSVar6 = &(__this->fields).LGEMJFBPAGO;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<DBMPKPJGIPI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DBMPKPJGIPI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DBMPKPJGIPI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void IHCKINILJCB(bool HEAHOADCLAP, bool GBCNCHFKMCD = True)  [RVA 0x344975C]
// NDPMLPGANCI$$IHCKINILJCB @ RVA 0x344975C

void NDPMLPGANCI__IHCKINILJCB
               (NDPMLPGANCI_o *__this,bool HEAHOADCLAP,bool GBCNCHFKMCD,MethodInfo *method)

{
  (__this->fields).BCCMIAOKPBI = HEAHOADCLAP;
  NDPMLPGANCI__LLKODNOJFPJ(__this,GBCNCHFKMCD,(MethodInfo *)(ulong)GBCNCHFKMCD);
  return;
}


// ===== public void NJBAKIMLGHB(Action<DBMPKPJGIPI> CJNHFNHJHPE)  [RVA 0x3449804]
// NDPMLPGANCI$$NJBAKIMLGHB @ RVA 0x3449804

void NDPMLPGANCI__NJBAKIMLGHB
               (NDPMLPGANCI_o *__this,System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DBMPKPJGIPI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *pSVar5;
  System_Action_DBMPKPJGIPI__o **ppSVar6;
  System_Action_DBMPKPJGIPI__o *source;
  
  if ((DAT_04568258 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_04568258 = 1;
  }
  ppSVar6 = &(__this->fields).LGEMJFBPAGO;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<DBMPKPJGIPI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DBMPKPJGIPI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DBMPKPJGIPI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ELJIPDIDPJD()  [RVA 0x34498B4]
// NDPMLPGANCI$$ELJIPDIDPJD @ RVA 0x34498B4

void NDPMLPGANCI__ELJIPDIDPJD(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  int32_t HONPNKFABKF;
  long lVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  FFHKCJAOPLI_o *__this_01;
  int DFOADJEEDKK;
  MethodInfo *in_x5;
  GLINEGMOOBM_o *pGVar2;
  
  if ((DAT_04568259 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568259 = 1;
  }
  pGVar2 = (__this->fields).KLPOKEJLDHG;
  if (pGVar2 != (GLINEGMOOBM_o *)0x0) {
    DFOADJEEDKK = (pGVar2->fields).DBMPKPJGIPI;
    if (DFOADJEEDKK != 4) {
      __this_01 = (FFHKCJAOPLI_o *)0x0;
LAB_035499ec:
      NDPMLPGANCI__EKPAFDJIAGI
                (__this,DFOADJEEDKK,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,true,
                 in_x5);
      return;
    }
    lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
      HONPNKFABKF = Nekki_SF2_GUI_Shop_ShopScene__get_CurrentSliderType
                              ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),
                               (MethodInfo *)0x0);
      lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620(lVar1);
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      if ((**(long **)(lVar1 + 0xb8) != 0) &&
         (__this_00 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar1 + 0xb8) + 0x178),
         __this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
        IKKAMAMLIKA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo
                                (__this_00,(MethodInfo *)0x0);
        __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
        in_x5 = (MethodInfo *)0x0;
        FFHKCJAOPLI___ctor(__this_01,HONPNKFABKF,IKKAMAMLIKA,(System_String_o *)0x0,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
        DFOADJEEDKK = 4;
        goto LAB_035499ec;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JKAFOFMGDOA()  [RVA 0x3449A04]
// NDPMLPGANCI$$JKAFOFMGDOA @ RVA 0x3449A04

void NDPMLPGANCI__JKAFOFMGDOA(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  KKEKKPIDGBK_o *pKVar4;
  VirtualInvokeData *pVVar5;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  GLINEGMOOBM_o *pGVar6;
  KKEKKPIDGBK_c *pKVar7;
  Il2CppObject *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = (ulong)__this;
  if ((DAT_0456825a & 1) == 0) {
    FUN_01bab630(&FightList_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    auVar11 = FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_0456825a = 1;
  }
  pGVar6 = (__this->fields).KLPOKEJLDHG;
  if (pGVar6 != (GLINEGMOOBM_o *)0x0) {
    if ((pGVar6->fields).DBMPKPJGIPI == 5) {
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
      auVar11._1_7_ = 0;
      auVar11[0] = bVar3;
      auVar11._8_8_ = extraout_x1;
      if (bVar3) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar4 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar4 == (KKEKKPIDGBK_o *)0x0) goto LAB_03549be8;
        pKVar7 = pKVar4->klass;
        uVar2._0_1_ = (pKVar7->_2).rank;
        uVar2._1_1_ = (pKVar7->_2).minimumAlignment;
        uVar9 = (ulong)uVar2;
        if (uVar9 != 0) {
          piVar10 = &((pKVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar5 = pKVar7->vtable + (*piVar10 + 4);
              goto LAB_03549b04;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pKVar4,KKEKKPIDGBK_TypeInfo,4);
LAB_03549b04:
        auVar11 = (*pVVar5->methodPtr)(pKVar4,3,0,1,pVVar5->method);
      }
    }
    method_00 = auVar11._8_8_;
    pGVar6 = (__this->fields).KLPOKEJLDHG;
    if (pGVar6 != (GLINEGMOOBM_o *)0x0) {
      switch((pGVar6->fields).DBMPKPJGIPI) {
      case 3:
      case 5:
      case 7:
        goto switchD_03549b48_caseD_3;
      case 4:
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanShowChatNowInShopScene
                          ((MethodInfo *)0x0);
        auVar11._1_7_ = 0;
        auVar11[0] = bVar3;
        auVar11._8_8_ = extraout_x1_00;
        method_00 = extraout_x1_00;
        if (!bVar3) goto switchD_03549b48_default;
switchD_03549b48_caseD_3:
        NDPMLPGANCI__DHMIJAAHPEI(__this,method_00);
        return;
      case 6:
        pIVar8 = (pGVar6->fields).KOANCCDDBDA;
        if (pIVar8 != (Il2CppObject *)0x0) {
          bVar1 = (FightList_TypeInfo->_2).naturalAligment;
          if ((bVar1 <= (pIVar8->klass->_2).naturalAligment) &&
             ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)FightList_TypeInfo)) {
            if (pIVar8 == (Il2CppObject *)0x0) break;
            if (*(int *)&pIVar8[1].monitor != 0) goto switchD_03549b48_default;
          }
        }
        return;
      default:
switchD_03549b48_default:
        NDPMLPGANCI__KJGGEPNHOBK(auVar11._0_8_,auVar11._8_8_);
        return;
      }
    }
  }
LAB_03549be8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CEJCBKDBJNH(ModuleHolder CNONPGEIGJM)  [RVA 0x3449D90]
// NDPMLPGANCI$$CEJCBKDBJNH @ RVA 0x3449D90

void NDPMLPGANCI__CEJCBKDBJNH
               (NDPMLPGANCI_o *__this,Nekki_SF2_GUI_ModuleHolder_o *CNONPGEIGJM,MethodInfo *method)

{
  Nekki_SF2_GUI_ModuleHolder_o *extraout_x1;
  
  if ((DAT_0456825b & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456825b = 1;
    CNONPGEIGJM = extraout_x1;
  }
  NDPMLPGANCI__AMHCCGMLBOE(__this,(MethodInfo *)CNONPGEIGJM);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils__HGEBEEICLLN((MethodInfo *)0x0);
  GameUtils__HMGOIPKIDBB((MethodInfo *)0x0);
  GameUtils__BHMIDFLCAHJ((MethodInfo *)0x0);
  return;
}


// ===== public void JBFHBECEOAP(Action<GLINEGMOOBM> CJNHFNHJHPE)  [RVA 0x3449FF4]
// NDPMLPGANCI$$JBFHBECEOAP @ RVA 0x3449FF4

void NDPMLPGANCI__JBFHBECEOAP
               (NDPMLPGANCI_o *__this,System_Action_GLINEGMOOBM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GLINEGMOOBM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GLINEGMOOBM__o *pSVar5;
  System_Action_GLINEGMOOBM__o *source;
  
  if ((DAT_0456825c & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    DAT_0456825c = 1;
  }
  source = (__this->fields).NKKEKIKFFCJ;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<GLINEGMOOBM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GLINEGMOOBM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GLINEGMOOBM__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ILJKHKMFKAJ(Action<DBMPKPJGIPI> CJNHFNHJHPE)  [RVA 0x344A0A4]
// NDPMLPGANCI$$ILJKHKMFKAJ @ RVA 0x344A0A4

void NDPMLPGANCI__ILJKHKMFKAJ
               (NDPMLPGANCI_o *__this,System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DBMPKPJGIPI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *pSVar5;
  System_Action_DBMPKPJGIPI__o **ppSVar6;
  System_Action_DBMPKPJGIPI__o *source;
  
  if ((DAT_0456825d & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_0456825d = 1;
  }
  ppSVar6 = &(__this->fields).DPHGELLABKO;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<DBMPKPJGIPI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DBMPKPJGIPI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DBMPKPJGIPI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor()  [RVA 0x344A154]
// NDPMLPGANCI$$.ctor @ RVA 0x344A154

void NDPMLPGANCI___ctor(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  GLINEGMOOBM_o *__this_00;
  GLINEGMOOBM_o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456825e & 1) == 0) {
    FUN_01bab630(&GLINEGMOOBM_TypeInfo);
    DAT_0456825e = 1;
    method = extraout_x1;
  }
  __this_00 = (GLINEGMOOBM_o *)thunk_FUN_01bda818(GLINEGMOOBM_TypeInfo,method);
  GLINEGMOOBM___ctor(__this_00,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).KLPOKEJLDHG;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool AEDLPDCGDFG()  [RVA 0x344A1C0]
// NDPMLPGANCI$$AEDLPDCGDFG @ RVA 0x344A1C0

bool NDPMLPGANCI__AEDLPDCGDFG(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  return (__this->fields).BCCMIAOKPBI;
}


// ===== public bool CDFDLPCIFCC()  [RVA 0x344A1C8]
// NDPMLPGANCI$$CDFDLPCIFCC @ RVA 0x344A1C8

bool NDPMLPGANCI__CDFDLPCIFCC(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  bool bVar1;
  LPAPAMPGDFN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  Roster_o *pAVar2;
  
  if ((DAT_0456825f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456825f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (Roster_o *)0x0) &&
       (__this_00 = (pAVar2->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0)) {
      bVar1 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return true;
}


// ===== public bool CGBBNLDDCGH()  [RVA 0x344A2BC]
// NDPMLPGANCI$$CGBBNLDDCGH @ RVA 0x344A2BC

bool NDPMLPGANCI__CGBBNLDDCGH(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  return (__this->fields).JCPABCJKJMC;
}


// ===== public void LMMJGPKGCDJ(Action<DBMPKPJGIPI> CJNHFNHJHPE)  [RVA 0x344A2C4]
// NDPMLPGANCI$$LMMJGPKGCDJ @ RVA 0x344A2C4

void NDPMLPGANCI__LMMJGPKGCDJ
               (NDPMLPGANCI_o *__this,System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DBMPKPJGIPI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *pSVar5;
  System_Action_DBMPKPJGIPI__o **ppSVar6;
  System_Action_DBMPKPJGIPI__o *source;
  
  if ((DAT_04568260 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_04568260 = 1;
  }
  ppSVar6 = &(__this->fields).MNMJGAENNOP;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<DBMPKPJGIPI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DBMPKPJGIPI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DBMPKPJGIPI__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool EKPAFDJIAGI(DBMPKPJGIPI DFOADJEEDKK, object IMMNELPBGIF, Action<object> IELDNEAAPBE, bool FNICKINPJMM = True)  [RVA 0x3441204]
// NDPMLPGANCI$$EKPAFDJIAGI @ RVA 0x3441204

/* WARNING: Type propagation algorithm not settling */

bool NDPMLPGANCI__EKPAFDJIAGI
               (NDPMLPGANCI_o *__this,int32_t DFOADJEEDKK,Il2CppObject *IMMNELPBGIF,
               System_Action_object__o *IELDNEAAPBE,bool FNICKINPJMM,MethodInfo *method)

{
  bool bVar1;
  int32_t ELHAJJAHLHM;
  int32_t CPGKPBEINGA;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar7;
  GLINEGMOOBM_o *pGVar8;
  Il2CppObject **ppIVar9;
  System_Action_object__o **ppSVar10;
  undefined8 uVar11;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *pMVar12;
  System_Action_GLINEGMOOBM__o *pSVar13;
  System_String_o *a;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar14;
  System_String_o **ppSVar15;
  PKHMIGFEJCL_o *pPVar16;
  int32_t local_64;
  
                    /* catch() { ... } // from try @ 03540f3c with catch @ 03541204
                       try { // try from 03541204 to 03641283 has its CatchHandler @ 03540ce8 */
                    /* catch() { ... } // from try @ 0354111c with catch @ 03541210 */
                    /* catch() { ... } // from try @ 03541200 with catch @ 03541214 */
                    /* catch() { ... } // from try @ 0354110c with catch @ 03541218 */
                    /* catch() { ... } // from try @ 035410b0 with catch @ 0354121c */
                    /* catch() { ... } // from try @ 035411f8 with catch @ 03541220 */
                    /* catch() { ... } // from try @ 035410dc with catch @ 03541224 */
                    /* catch() { ... } // from try @ 0354102c with catch @ 03541228
                       catch() { ... } // from try @ 035410a4 with catch @ 03541228 */
                    /* catch() { ... } // from try @ 03541080 with catch @ 0354122c */
                    /* catch() { ... } // from try @ 035411f4 with catch @ 03541230 */
                    /* catch() { ... } // from try @ 03541010 with catch @ 03541234 */
                    /* catch() { ... } // from try @ 03541038 with catch @ 03541238 */
                    /* catch() { ... } // from try @ 035411f0 with catch @ 0354123c */
                    /* catch() { ... } // from try @ 035411ec with catch @ 03541240 */
                    /* catch() { ... } // from try @ 0354106c with catch @ 03541244 */
                    /* catch() { ... } // from try @ 035411e8 with catch @ 03541248 */
                    /* catch() { ... } // from try @ 03540ff8 with catch @ 0354124c */
                    /* catch() { ... } // from try @ 03540fe0 with catch @ 03541250 */
                    /* catch() { ... } // from try @ 035411e4 with catch @ 03541254 */
                    /* catch() { ... } // from try @ 035411e0 with catch @ 03541258 */
                    /* catch() { ... } // from try @ 035411dc with catch @ 0354125c */
                    /* catch() { ... } // from try @ 035411d8 with catch @ 03541260 */
                    /* catch() { ... } // from try @ 035411d0 with catch @ 03541264 */
  if ((DAT_04568261 & 1) == 0) {
                    /* catch() { ... } // from try @ 03540f18 with catch @ 03541268 */
                    /* catch() { ... } // from try @ 03540ed4 with catch @ 0354126c */
                    /* catch() { ... } // from try @ 03540fc0 with catch @ 03541270 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4041);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4042);
                    /* try { // try from 03541284 to 03641287 has its CatchHandler @ 035412b4 */
                    /* try { // try from 03541288 to 036412c3 has its CatchHandler @ 03540ce8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4043);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4044);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4045);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4046);
                    /* catch() { ... } // from try @ 03541284 with catch @ 035412b4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4047);
                    /* try { // try from 035412c4 to 036412d7 has its CatchHandler @ 03541334 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4048);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4049);
                    /* catch() { ... } // from try @ 03540eb4 with catch @ 035412d8
                       try { // try from 035412d8 to 036412e7 has its CatchHandler @ 03540ce8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4050);
                    /* try { // try from 035412e8 to 036412eb has its CatchHandler @ 03541310 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 035412ec to 03641317 has its CatchHandler @ 03540ce8 */
    FUN_01bab630(&DBMPKPJGIPI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* catch() { ... } // from try @ 035412e8 with catch @ 03541310 */
                    /* try { // try from 03541318 to 0364131f has its CatchHandler @ 03541334 */
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
                    /* try { // try from 03541320 to 0364132b has its CatchHandler @ 03540ce8 */
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 0354132c to 03641333 has its CatchHandler @ 03541334 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 035411b4 with catch @ 03541334
                       catch() { ... } // from try @ 035412c4 with catch @ 03541334
                       catch() { ... } // from try @ 03541318 with catch @ 03541334
                       catch() { ... } // from try @ 0354132c with catch @ 03541334 */
    DAT_04568261 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4041,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4042,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* try { // try from 035413a0 to 036414b7 has its CatchHandler @ 035413a0
                       catch() { ... } // from try @ 035413a0 with catch @ 035413a0
                       catch() { ... } // from try @ 035415a8 with catch @ 035413a0
                       catch() { ... } // from try @ 03541628 with catch @ 035413a0
                       catch() { ... } // from try @ 03541680 with catch @ 035413a0
                       catch() { ... } // from try @ 035416b0 with catch @ 035413a0 */
  local_64 = DFOADJEEDKK;
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(DBMPKPJGIPI_TypeInfo,&local_64);
  if (args == (System_Object_array *)0x0) goto LAB_035418ac;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
    uVar11 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar11,0);
  }
  if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  args->m_Items[0] = pIVar5;
  thunk_FUN_01c20e04(args->m_Items,pIVar5);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar12 = (MethodInfo *)0x0;
  UnityEngine_Debug__LogFormat(pSVar4,args,(MethodInfo *)0x0);
  bVar1 = SceneManagerSF__HENGLKECBAC((MethodInfo *)0x0);
  if (bVar1) {
    if (NDPMLPGANCI_TypeInfo->static_fields->EHFCPINCBGC == false) {
      pNVar7 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if ((pNVar7 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
         (pPVar16 = (pNVar7->fields).QuestParameters, pPVar16 != (PKHMIGFEJCL_o *)0x0)) {
        (pPVar16->fields).FBIABCNMNMD = (pPVar16->fields).DLOIHNBNGDB;
        thunk_FUN_01c20e04();
                    /* try { // try from 03541578 to 0364157f has its CatchHandler @ 03541638 */
        pSVar4 = ScreenTypeExtension__BELOCFNPIAN(DFOADJEEDKK,method_00);
        ppSVar15 = &(pPVar16->fields).GABDPMIFKDG;
        *ppSVar15 = pSVar4;
                    /* try { // try from 0354158c to 03641593 has its CatchHandler @ 0354165c */
        thunk_FUN_01c20e04(ppSVar15,pSVar4);
        ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar16->fields).CHFDDNODLGP,(MethodInfo *)0x0);
                    /* try { // try from 035415a0 to 036415a7 has its CatchHandler @ 03541650 */
                    /* try { // try from 035415a8 to 036415ff has its CatchHandler @ 035413a0 */
        CPGKPBEINGA = NDPMLPGANCI__MMEAMOLPALM(DFOADJEEDKK,IMMNELPBGIF,pMVar12);
        if ((IMMNELPBGIF != (Il2CppObject *)0x0) ||
           ((pMVar12 = extraout_x1, DFOADJEEDKK != 4 && (DFOADJEEDKK != 7)))) {
          pGVar8 = (__this->fields).KLPOKEJLDHG;
          if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_035418ac;
          ppIVar9 = &(pGVar8->fields).KOANCCDDBDA;
          *ppIVar9 = IMMNELPBGIF;
          thunk_FUN_01c20e04(ppIVar9,IMMNELPBGIF);
          pMVar12 = extraout_x1_00;
        }
        if (FNICKINPJMM) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = GameUtils__BIFPGEGFDLK(ELHAJJAHLHM,CPGKPBEINGA,(MethodInfo *)0x0);
          pMVar12 = extraout_x1_01;
          if (bVar1) {
                    /* try { // try from 03541600 to 03641603 has its CatchHandler @ 03541658 */
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03541604 to 0364160b has its CatchHandler @ 03541654 */
                    /* try { // try from 0354160c to 0364160f has its CatchHandler @ 0354164c */
                    /* try { // try from 03541610 to 03641613 has its CatchHandler @ 03541648 */
                    /* try { // try from 03541614 to 03641617 has its CatchHandler @ 03541640 */
                    /* try { // try from 03541618 to 0364161b has its CatchHandler @ 0354163c */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4047,
                       (MethodInfo *)0x0);
                    /* try { // try from 0354161c to 03641623 has its CatchHandler @ 03541634 */
                    /* try { // try from 03541624 to 03641627 has its CatchHandler @ 0354162c */
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03541628 to 0364167b has its CatchHandler @ 035413a0 */
                    /* catch() { ... } // from try @ 03541624 with catch @ 0354162c */
                    /* catch() { ... } // from try @ 03541534 with catch @ 03541630 */
                    /* catch() { ... } // from try @ 0354161c with catch @ 03541634 */
                    /* catch() { ... } // from try @ 03541578 with catch @ 03541638 */
                    /* catch() { ... } // from try @ 03541618 with catch @ 0354163c */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4048,
                       (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03541614 with catch @ 03541640 */
                    /* catch() { ... } // from try @ 035414d4 with catch @ 03541644 */
                    /* catch() { ... } // from try @ 03541610 with catch @ 03541648 */
                    /* catch() { ... } // from try @ 0354160c with catch @ 0354164c */
            pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035415a0 with catch @ 03541650 */
                    /* catch() { ... } // from try @ 03541604 with catch @ 03541654 */
                    /* catch() { ... } // from try @ 03541600 with catch @ 03541658 */
                    /* catch() { ... } // from try @ 0354158c with catch @ 0354165c */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035414e0 with catch @ 03541660 */
                    /* catch() { ... } // from try @ 035414b8 with catch @ 03541664 */
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
            return false;
          }
        }
        a = (pPVar16->fields).DLOIHNBNGDB;
                    /* try { // try from 0354167c to 0364167f has its CatchHandler @ 035416a0 */
                    /* try { // try from 03541680 to 036416a7 has its CatchHandler @ 035413a0 */
        pSVar4 = ScreenTypeExtension__BELOCFNPIAN(4,pMVar12);
        bVar1 = System_String__op_Equality(a,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0354167c with catch @ 035416a0 */
        if (bVar1) {
                    /* try { // try from 035416a8 to 036416af has its CatchHandler @ 035416c4 */
          if (DAT_04565b84 == '\0') {
                    /* try { // try from 035416b0 to 036416bb has its CatchHandler @ 035413a0 */
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                    /* try { // try from 035416bc to 036416c3 has its CatchHandler @ 035416c4 */
            DAT_04565b84 = '\x01';
          }
                    /* catch() { ... } // from try @ 035416a8 with catch @ 035416c4
                       catch() { ... } // from try @ 035416bc with catch @ 035416c4 */
          pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar1) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_035418ac;
            Nekki_SF2_GUI_Menu_MainMenu__SetNormalViewMode(pNVar14,false,(MethodInfo *)0x0);
          }
        }
        if (DAT_04565b84 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
          DAT_04565b84 = '\x01';
        }
        pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_035418ac;
          Nekki_SF2_GUI_Menu_MainMenu__UpdateRubySale(pNVar14,(MethodInfo *)0x0);
        }
        pGVar8 = (__this->fields).KLPOKEJLDHG;
        if (pGVar8 != (GLINEGMOOBM_o *)0x0) {
          ppSVar10 = &(pGVar8->fields).LAALDDOEANK;
          *ppSVar10 = IELDNEAAPBE;
          (pGVar8->fields).DKMBJLMFPKA = (pGVar8->fields).DBMPKPJGIPI;
          (pGVar8->fields).DBMPKPJGIPI = DFOADJEEDKK;
          thunk_FUN_01c20e04(ppSVar10,IELDNEAAPBE);
          NDPMLPGANCI__LDBLBIEOFEO(__this,method_01);
          UnityEngine_Input__set_multiTouchEnabled
                    (DFOADJEEDKK == 6 || DFOADJEEDKK == 3,(MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4049,
                     (MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4050,
                     (MethodInfo *)0x0);
          pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
          pSVar13 = (__this->fields).NKKEKIKFFCJ;
          if (pSVar13 != (System_Action_GLINEGMOOBM__o *)0x0) {
            (*(code *)(pSVar13->fields).super.super.invoke_impl)
                      ((pSVar13->fields).super.super.method_code,(__this->fields).KLPOKEJLDHG,
                       (pSVar13->fields).super.super.method);
          }
          return true;
        }
      }
LAB_035418ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4045,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4046,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  else {
                    /* try { // try from 035414b8 to 036414bf has its CatchHandler @ 03541664 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4043,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035414d4 to 036414db has its CatchHandler @ 03541644 */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 035414e0 to 036414eb has its CatchHandler @ 03541660 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4044,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
                    /* try { // try from 03541534 to 0364153b has its CatchHandler @ 03541630 */
  return false;
}


// ===== public static void GIENGNEGHPJ()  [RVA 0x344A710]
// NDPMLPGANCI$$GIENGNEGHPJ @ RVA 0x344A710

void NDPMLPGANCI__GIENGNEGHPJ(MethodInfo *method)

{
  NDPMLPGANCI_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_04568262 & 1) == 0) {
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    DAT_04568262 = 1;
  }
  if (NDPMLPGANCI_TypeInfo->static_fields->KNOHKIKFEBL != (NDPMLPGANCI_o *)0x0) {
    return;
  }
  auVar1 = thunk_FUN_01bda818();
  __this = auVar1._0_8_;
  NDPMLPGANCI___ctor(__this,auVar1._8_8_);
  NDPMLPGANCI_TypeInfo->static_fields->KNOHKIKFEBL = __this;
  thunk_FUN_01c20e04(NDPMLPGANCI_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MMMJCENBINB(bool MDEOLMMEEDM)  [RVA 0x344A78C]
// NDPMLPGANCI$$MMMJCENBINB @ RVA 0x344A78C

void NDPMLPGANCI__MMMJCENBINB(NDPMLPGANCI_o *__this,bool MDEOLMMEEDM,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Show(MDEOLMMEEDM,(MethodInfo *)0x0);
  return;
}


// ===== public bool FHLFKIOFBKL()  [RVA 0x344A798]
// NDPMLPGANCI$$FHLFKIOFBKL @ RVA 0x344A798

bool NDPMLPGANCI__FHLFKIOFBKL(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  int iVar1;
  GLINEGMOOBM_o *pGVar2;
  
  pGVar2 = (__this->fields).KLPOKEJLDHG;
  if (pGVar2 != (GLINEGMOOBM_o *)0x0) {
    iVar1 = (pGVar2->fields).DBMPKPJGIPI;
    return iVar1 == 3 || iVar1 == 6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DDBDIDEBJOB(ModuleHolder CNONPGEIGJM)  [RVA 0x344A7C8]
// NDPMLPGANCI$$DDBDIDEBJOB @ RVA 0x344A7C8

void NDPMLPGANCI__DDBDIDEBJOB
               (NDPMLPGANCI_o *__this,Nekki_SF2_GUI_ModuleHolder_o *CNONPGEIGJM,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__Clear(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FKFIIDIJIEI(Action<DBMPKPJGIPI> CJNHFNHJHPE)  [RVA 0x344A7E8]
// NDPMLPGANCI$$FKFIIDIJIEI @ RVA 0x344A7E8

void NDPMLPGANCI__FKFIIDIJIEI
               (NDPMLPGANCI_o *__this,System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DBMPKPJGIPI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *pSVar5;
  System_Action_DBMPKPJGIPI__o **ppSVar6;
  System_Action_DBMPKPJGIPI__o *a;
  
  if ((DAT_04568263 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_04568263 = 1;
  }
  ppSVar6 = &(__this->fields).DPHGELLABKO;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<DBMPKPJGIPI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DBMPKPJGIPI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DBMPKPJGIPI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void AMHCCGMLBOE()  [RVA 0x3449DFC]
// NDPMLPGANCI$$AMHCCGMLBOE @ RVA 0x3449DFC

void NDPMLPGANCI__AMHCCGMLBOE(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Action_object__o **ppSVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  System_String_o *pSVar5;
  KKEKKPIDGBK_o *pKVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *method_00;
  GLINEGMOOBM_o *pGVar8;
  System_Action_object__o *pSVar9;
  System_Action_DBMPKPJGIPI__o *pSVar10;
  System_Action_o *pSVar11;
  KKEKKPIDGBK_c *pKVar12;
  ulong uVar13;
  int32_t *piVar14;
  PKHMIGFEJCL_o *pPVar15;
  System_String_o **ppSVar16;
  
  if ((DAT_04568264 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04568264 = 1;
  }
  pGVar8 = (__this->fields).KLPOKEJLDHG;
  if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_03549ff0;
  if ((pGVar8->fields).DBMPKPJGIPI != 0) {
    pSVar9 = (pGVar8->fields).LAALDDOEANK;
    if (pSVar9 == (System_Action_object__o *)0x0) {
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03549ff0;
      Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar4,(MethodInfo *)0x0);
    }
    else {
      (*(code *)(pSVar9->fields).super.super.invoke_impl)
                ((pSVar9->fields).super.super.method_code,0,(pSVar9->fields).super.super.method);
      pGVar8 = (__this->fields).KLPOKEJLDHG;
      if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_03549ff0;
      ppSVar3 = &(pGVar8->fields).LAALDDOEANK;
      *ppSVar3 = (System_Action_object__o *)0x0;
      thunk_FUN_01c20e04(ppSVar3,0);
    }
  }
  pSVar10 = (__this->fields).LGEMJFBPAGO;
  if (pSVar10 != (System_Action_DBMPKPJGIPI__o *)0x0) {
    pGVar8 = (__this->fields).KLPOKEJLDHG;
    if (pGVar8 == (GLINEGMOOBM_o *)0x0) goto LAB_03549ff0;
    (*(code *)(pSVar10->fields).super.super.invoke_impl)
              ((pSVar10->fields).super.super.method_code,(pGVar8->fields).DBMPKPJGIPI,
               (pSVar10->fields).super.super.method);
  }
  pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pGVar8 = (__this->fields).KLPOKEJLDHG, pGVar8 != (GLINEGMOOBM_o *)0x0)) {
    pPVar15 = (pNVar4->fields).QuestParameters;
    pSVar5 = ScreenTypeExtension__BELOCFNPIAN((pGVar8->fields).DBMPKPJGIPI,method_00);
    if (pPVar15 != (PKHMIGFEJCL_o *)0x0) {
      ppSVar16 = &(pPVar15->fields).DLOIHNBNGDB;
      *ppSVar16 = pSVar5;
      thunk_FUN_01c20e04(ppSVar16,pSVar5);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0x30,(MethodInfo *)0x0);
        pSVar11 = (__this->fields).FMABLOGPGMC;
        if (pSVar11 != (System_Action_o *)0x0) {
          (*(code *)(pSVar11->fields).super.super.invoke_impl)
                    ((pSVar11->fields).super.super.method_code,(pSVar11->fields).super.super.method)
          ;
        }
        pGVar8 = (__this->fields).KLPOKEJLDHG;
        if (pGVar8 != (GLINEGMOOBM_o *)0x0) {
          if ((pGVar8->fields).DBMPKPJGIPI == 5) {
            if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
            if (bVar2) {
              if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pKVar6 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
              if (pKVar6 != (KKEKKPIDGBK_o *)0x0) {
                pKVar12 = pKVar6->klass;
                uVar1._0_1_ = (pKVar12->_2).rank;
                uVar1._1_1_ = (pKVar12->_2).minimumAlignment;
                uVar13 = (ulong)uVar1;
                if (uVar13 != 0) {
                  piVar14 = &((pKVar12->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                        (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                      pVVar7 = pKVar12->vtable + (*piVar14 + 4);
                      goto LAB_03549fd0;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KKEKKPIDGBK_TypeInfo,4);
LAB_03549fd0:
                    /* WARNING: Could not recover jumptable at 0x03549fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pVVar7->methodPtr)(pKVar6,3,0,1,pVVar7->method);
                return;
              }
              goto LAB_03549ff0;
            }
          }
          return;
        }
      }
    }
  }
LAB_03549ff0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MBHCCJNGJEK()  [RVA 0x344A898]
// NDPMLPGANCI$$MBHCCJNGJEK @ RVA 0x344A898

void NDPMLPGANCI__MBHCCJNGJEK(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Hide((MethodInfo *)0x0);
  return;
}


// ===== public void LLKODNOJFPJ(bool AHCMAIOOIKM)  [RVA 0x344976C]
// NDPMLPGANCI$$LLKODNOJFPJ @ RVA 0x344976C

void NDPMLPGANCI__LLKODNOJFPJ(NDPMLPGANCI_o *__this,bool AHCMAIOOIKM,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *extraout_x0;
  bool_conflict OOGPLJBADCD;
  MethodInfo *in_x3;
  
  if (((__this->fields).BCCMIAOKPBI == false) && ((__this->fields).BNHCMDDLIPB == false)) {
    bVar1 = (__this->fields).JCPABCJKJMC != false;
  }
  else {
    bVar1 = true;
  }
  if ((__this->fields).MBMMKMMJODA == bVar1) {
    if ((bVar1 == false) || ((__this->fields).JDNPDPLDNAL == AHCMAIOOIKM)) {
      return;
    }
    (__this->fields).JDNPDPLDNAL = AHCMAIOOIKM;
    NDPMLPGANCI__APBBAFIMHHC(__this,true,true,in_x3);
    AHCMAIOOIKM = (__this->fields).JDNPDPLDNAL;
    OOGPLJBADCD = (__this->fields).MBMMKMMJODA;
    __this = extraout_x0;
  }
  else {
    (__this->fields).MBMMKMMJODA = bVar1;
    (__this->fields).JDNPDPLDNAL = AHCMAIOOIKM;
    if (bVar1 == false) {
      AHCMAIOOIKM = true;
      OOGPLJBADCD = false;
    }
    else {
      OOGPLJBADCD = true;
    }
  }
  NDPMLPGANCI__APBBAFIMHHC(__this,OOGPLJBADCD,AHCMAIOOIKM,in_x3);
  return;
}


// ===== public void JIEDKPCPLHA(Action CJNHFNHJHPE)  [RVA 0x344A8BC]
// NDPMLPGANCI$$JIEDKPCPLHA @ RVA 0x344A8BC

void NDPMLPGANCI__JIEDKPCPLHA(NDPMLPGANCI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568265 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568265 = 1;
  }
  ppSVar4 = &(__this->fields).FMABLOGPGMC;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void DHMIJAAHPEI()  [RVA 0x3449C54]
// NDPMLPGANCI$$DHMIJAAHPEI @ RVA 0x3449C54

void NDPMLPGANCI__DHMIJAAHPEI(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  PlayerData_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568266 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568266 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (PlayerData_o *)0x0) {
    bVar1 = PlayerData__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      NDPMLPGANCI__KJGGEPNHOBK((NDPMLPGANCI_o *)(ulong)bVar1,method_00);
      return;
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel(pNVar2,3,true,(MethodInfo *)0x0)
      ;
      pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel
                  (pNVar2,2,false,(MethodInfo *)0x0);
        NDPMLPGANCI__NPDADBCINPL(__this,method_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LDBLBIEOFEO()  [RVA 0x344A688]
// NDPMLPGANCI$$LDBLBIEOFEO @ RVA 0x344A688

void NDPMLPGANCI__LDBLBIEOFEO(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  DialogsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_DBMPKPJGIPI__o *pSVar1;
  GLINEGMOOBM_o *pGVar2;
  
  pSVar1 = (__this->fields).DPHGELLABKO;
  if (pSVar1 != (System_Action_DBMPKPJGIPI__o *)0x0) {
    pGVar2 = (__this->fields).KLPOKEJLDHG;
    if (pGVar2 == (GLINEGMOOBM_o *)0x0) goto LAB_0354a70c;
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pGVar2->fields).DKMBJLMFPKA,
               (pSVar1->fields).super.super.method);
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).KLPOKEJLDHG;
    if (pGVar2 != (GLINEGMOOBM_o *)0x0) {
      SceneManagerSF__BKCFPHNEONL((pGVar2->fields).DBMPKPJGIPI,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).MNMJGAENNOP;
      method_00 = extraout_x1;
      if (pSVar1 != (System_Action_DBMPKPJGIPI__o *)0x0) {
        pGVar2 = (__this->fields).KLPOKEJLDHG;
        if (pGVar2 == (GLINEGMOOBM_o *)0x0) goto LAB_0354a70c;
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,(pGVar2->fields).DBMPKPJGIPI,
                   (pSVar1->fields).super.super.method);
        method_00 = extraout_x1_00;
      }
      NDPMLPGANCI__JKAFOFMGDOA(__this,method_00);
      return;
    }
  }
LAB_0354a70c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static HPPDIEDAKEC MMEAMOLPALM(DBMPKPJGIPI FHLNEPNIODE, object OCMMDIHLKMH)  [RVA 0x344A590]
// NDPMLPGANCI$$MMEAMOLPALM @ RVA 0x344A590

int32_t NDPMLPGANCI__MMEAMOLPALM(int32_t FHLNEPNIODE,Il2CppObject *OCMMDIHLKMH,MethodInfo *method)

{
  byte bVar1;
  RaidManager_o *pCVar2;
  int32_t iVar3;
  
  if ((DAT_04568267 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568267 = 1;
  }
  if (FHLNEPNIODE == 4) {
    if (OCMMDIHLKMH != (Il2CppObject *)0x0) {
      bVar1 = (FFHKCJAOPLI_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (OCMMDIHLKMH->klass->_2).naturalAligment) &&
         ((OCMMDIHLKMH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)FFHKCJAOPLI_TypeInfo)) {
        if (OCMMDIHLKMH != (Il2CppObject *)0x0) {
          return *(int32_t *)&OCMMDIHLKMH[1].klass;
        }
        goto LAB_0354a684;
      }
    }
    iVar3 = 1;
  }
  else if (FHLNEPNIODE == 5) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar2 == (RaidManager_o *)0x0) {
LAB_0354a684:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = 0x10;
    if ((pCVar2->fields).BLELLCNDBHN != false) {
      iVar3 = 0x11;
    }
  }
  else if (FHLNEPNIODE == 7) {
    iVar3 = 10;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


// ===== public void PHFCKPKDMBK(bool MDKMKBGODBK, bool GBCNCHFKMCD = True)  [RVA 0x344A958]
// NDPMLPGANCI$$PHFCKPKDMBK @ RVA 0x344A958

void NDPMLPGANCI__PHFCKPKDMBK
               (NDPMLPGANCI_o *__this,bool MDKMKBGODBK,bool GBCNCHFKMCD,MethodInfo *method)

{
  (__this->fields).JCPABCJKJMC = MDKMKBGODBK;
  NDPMLPGANCI__LLKODNOJFPJ(__this,GBCNCHFKMCD,(MethodInfo *)(ulong)GBCNCHFKMCD);
  return;
}


// ===== public void FNNPPGPMCFE(bool KKOIPECGGLL, bool GBCNCHFKMCD = True, int IFDBGDGOLPK = 0)  [RVA 0x344A968]
// NDPMLPGANCI$$FNNPPGPMCFE @ RVA 0x344A968

void NDPMLPGANCI__FNNPPGPMCFE
               (NDPMLPGANCI_o *__this,bool KKOIPECGGLL,bool GBCNCHFKMCD,int32_t IFDBGDGOLPK,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  
  if ((DAT_04568268 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_NDPMLPGANCI_OPHFJEIJHJI_DAHOCAIKMID__);
    FUN_01bab630(&NDPMLPGANCI_OPHFJEIJHJI_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568268 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NDPMLPGANCI_OPHFJEIJHJI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(bool *)&__this_00[1].monitor = KKOIPECGGLL;
    *(bool *)((long)&__this_00[1].monitor + 1) = GBCNCHFKMCD;
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar9 = &(__this->fields).BNKPMKJJJAK;
    pSVar10 = *ppSVar9;
    if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
      pPVar6 = pPVar3->klass;
      uVar1._0_1_ = (pPVar6->_2).rank;
      uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar6->vtable + (*piVar8 + 1);
            goto LAB_0354aa84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_0354aa84:
      method_00 = pVVar4->method;
      (*pVVar4->methodPtr)(pPVar3,pSVar10);
      *ppSVar9 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar9,0);
      if ((*(bool_conflict *)&__this_00[1].monitor & 0 < IFDBGDGOLPK) == 0) {
        (__this->fields).BNHCMDDLIPB = *(bool_conflict *)&__this_00[1].monitor;
        NDPMLPGANCI__LLKODNOJFPJ(__this,*(bool *)((long)&__this_00[1].monitor + 1),method_00);
        return;
      }
      pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar3->klass;
        uVar2._0_1_ = (pPVar6->_2).rank;
        uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar2;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + (*piVar8 + 2);
              goto LAB_0354ab7c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_0354ab7c:
        pSVar10 = (System_Collections_IEnumerator_o *)
                  (*pVVar4->methodPtr)
                            ((ulong)(uint)((float)IFDBGDGOLPK / 1000.0),pPVar3,uVar5,pVVar4->method)
        ;
        *ppSVar9 = pSVar10;
        thunk_FUN_01c20e04(ppSVar9,pSVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DPOGMNHMKON(Action CJNHFNHJHPE)  [RVA 0x344ABC0]
// NDPMLPGANCI$$DPOGMNHMKON @ RVA 0x344ABC0

void NDPMLPGANCI__DPOGMNHMKON(NDPMLPGANCI_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04568269 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568269 = 1;
  }
  ppSVar4 = &(__this->fields).FMABLOGPGMC;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void MFGPEJCIEEE(bool GBCNCHFKMCD)  [RVA 0x344A8A0]
// NDPMLPGANCI$$MFGPEJCIEEE @ RVA 0x344A8A0

void NDPMLPGANCI__MFGPEJCIEEE(NDPMLPGANCI_o *__this,bool GBCNCHFKMCD,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  NDPMLPGANCI__APBBAFIMHHC(__this,(__this->fields).MBMMKMMJODA,GBCNCHFKMCD,in_x3);
  return;
}


// ===== public static void DGLJCGNHLIG()  [RVA 0x344ACC4]
// NDPMLPGANCI$$DGLJCGNHLIG @ RVA 0x344ACC4

void NDPMLPGANCI__DGLJCGNHLIG(MethodInfo *method)

{
  if ((DAT_0456826a & 1) == 0) {
    FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    DAT_0456826a = 1;
  }
  NDPMLPGANCI_TypeInfo->static_fields->KNOHKIKFEBL = (NDPMLPGANCI_o *)0x0;
  thunk_FUN_01c20e04(NDPMLPGANCI_TypeInfo->static_fields,0);
  return;
}


// ===== public static NDPMLPGANCI AIHNLLGNBLC()  [RVA 0x344119C]
// NDPMLPGANCI$$AIHNLLGNBLC @ RVA 0x344119C

NDPMLPGANCI_o * NDPMLPGANCI__AIHNLLGNBLC(MethodInfo *method)

{
                    /* try { // try from 035411b4 to 036411cf has its CatchHandler @ 03541334 */
  if ((DAT_0456826b & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&NDPMLPGANCI_TypeInfo);
    DAT_0456826b = 1;
  }
  NDPMLPGANCI__GIENGNEGHPJ(method);
                    /* try { // try from 035411d0 to 036411d7 has its CatchHandler @ 03541264 */
                    /* try { // try from 035411d8 to 036411db has its CatchHandler @ 03541260 */
                    /* try { // try from 035411dc to 036411df has its CatchHandler @ 0354125c */
                    /* try { // try from 035411e0 to 036411e3 has its CatchHandler @ 03541258 */
                    /* try { // try from 035411e4 to 036411e7 has its CatchHandler @ 03541254 */
  return NDPMLPGANCI_TypeInfo->static_fields->KNOHKIKFEBL;
}


// ===== private void APBBAFIMHHC(bool OOGPLJBADCD, bool GBCNCHFKMCD = True)  [RVA 0x344AC5C]
// NDPMLPGANCI$$APBBAFIMHHC @ RVA 0x344AC5C

void NDPMLPGANCI__APBBAFIMHHC
               (NDPMLPGANCI_o *__this,bool OOGPLJBADCD,bool GBCNCHFKMCD,MethodInfo *method)

{
  if ((DAT_0456826c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_0456826c = 1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_LockScreen__Lock(OOGPLJBADCD,GBCNCHFKMCD,(MethodInfo *)0x0);
  return;
}


// ===== public void IIOPONEHEGP(Action<GLINEGMOOBM> CJNHFNHJHPE)  [RVA 0x344AD18]
// NDPMLPGANCI$$IIOPONEHEGP @ RVA 0x344AD18

void NDPMLPGANCI__IIOPONEHEGP
               (NDPMLPGANCI_o *__this,System_Action_GLINEGMOOBM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_GLINEGMOOBM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_GLINEGMOOBM__o *pSVar5;
  System_Action_GLINEGMOOBM__o *a;
  
  if ((DAT_0456826d & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    DAT_0456826d = 1;
  }
  a = (__this->fields).NKKEKIKFFCJ;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<GLINEGMOOBM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<GLINEGMOOBM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_GLINEGMOOBM__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void IFJFFPAKLKB(Action<DBMPKPJGIPI> CJNHFNHJHPE)  [RVA 0x344ADC8]
// NDPMLPGANCI$$IFJFFPAKLKB @ RVA 0x344ADC8

void NDPMLPGANCI__IFJFFPAKLKB
               (NDPMLPGANCI_o *__this,System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DBMPKPJGIPI__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DBMPKPJGIPI__o *pSVar5;
  System_Action_DBMPKPJGIPI__o **ppSVar6;
  System_Action_DBMPKPJGIPI__o *a;
  
  if ((DAT_0456826e & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    DAT_0456826e = 1;
  }
  ppSVar6 = &(__this->fields).MNMJGAENNOP;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<DBMPKPJGIPI>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DBMPKPJGIPI>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DBMPKPJGIPI__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void KJGGEPNHOBK()  [RVA 0x3449BEC]
// NDPMLPGANCI$$KJGGEPNHOBK @ RVA 0x3449BEC

void NDPMLPGANCI__KJGGEPNHOBK(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456826f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_0456826f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03549c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._17_Hide.methodPtr)(pNVar1,(pNVar1->klass->vtable)._17_Hide.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DBMPKPJGIPI FFIOCEOHPEM()  [RVA 0x34411E8]
// NDPMLPGANCI$$FFIOCEOHPEM @ RVA 0x34411E8

int32_t NDPMLPGANCI__FFIOCEOHPEM(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  GLINEGMOOBM_o *pGVar1;
  
                    /* try { // try from 035411e8 to 036411eb has its CatchHandler @ 03541248 */
                    /* try { // try from 035411ec to 036411ef has its CatchHandler @ 03541240 */
  pGVar1 = (__this->fields).KLPOKEJLDHG;
                    /* try { // try from 035411f0 to 036411f3 has its CatchHandler @ 0354123c */
  if (pGVar1 != (GLINEGMOOBM_o *)0x0) {
                    /* try { // try from 035411f4 to 036411f7 has its CatchHandler @ 03541230 */
                    /* try { // try from 035411f8 to 036411fb has its CatchHandler @ 03541220 */
                    /* try { // try from 035411fc to 036411ff has its CatchHandler @ 03540ce8 */
    return (pGVar1->fields).DBMPKPJGIPI;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03541200 to 03641203 has its CatchHandler @ 03541214 */
  FUN_01bab8c8();
}


// ===== private void BGJLGOKOABF()  [RVA 0x344A8B0]
// NDPMLPGANCI$$BGJLGOKOABF @ RVA 0x344A8B0

void NDPMLPGANCI__BGJLGOKOABF(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  NDPMLPGANCI__APBBAFIMHHC(__this,(__this->fields).MBMMKMMJODA,true,in_x3);
  return;
}

