// TypeDefIndex 1123
// Namespace: Nekki.SF2.GUI.Dialogs
// public class TradeDialog : BaseDialog
// Fields:
//   private LabelAlias _text; // 0xC8
//   private CheckBox _checkbox; // 0xD0
//   private LabelAlias _checkboxLabel; // 0xD8
//   private string JOIGFPPEHGI; // 0xE0
//   private string CKAKBPJOALE; // 0xE8
//   private long HGCGINNLIEC; // 0xF0
//   private CAKCKIAJAFO PCNEDMAJMOJ; // 0xF8
//   private TradeDialog.KEHKALMFNHN OFJCBIEADON; // 0xFC
//   private long BHBEFOMAGCC; // 0x100
//   private string MLPKGJACOFA; // 0x108
//   private bool KGEDEAGBKGB; // 0x110

// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x30F389C]
// Nekki.SF2.GUI.Dialogs.TradeDialog$$Init @ RVA 0x30F389C

void Nekki_SF2_GUI_Dialogs_TradeDialog__Init
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  undefined8 uVar10;
  System_String_o **ppSVar11;
  bool value;
  undefined1 uVar12;
  undefined8 *puVar13;
  long lVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  System_String_o *pSVar18;
  System_String_o *DOEJEADIJEJ;
  Nekki_SF2_GUI_LabelAlias_o *pNVar19;
  undefined8 uVar20;
  
  if ((DAT_0456643e & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&KIDHEMFNDEK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_20991/*"shopBuy"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17810/*"dlgOrderButton"*/);
    FUN_01bab630(&StringLiteral_17847/*"dlgUpgradeTitle"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17768/*"dlgBuyTitle"*/);
    FUN_01bab630(&StringLiteral_17767/*"dlgBuyMessage"*/);
    FUN_01bab630(&StringLiteral_17821/*"dlgRaidFastBuy"*/);
    FUN_01bab630(&StringLiteral_17846/*"dlgUpgradeMessage"*/);
    FUN_01bab630(&StringLiteral_17845/*"dlgUpgradeButton"*/);
    FUN_01bab630(&StringLiteral_17812/*"dlgOrderTitle"*/);
    FUN_01bab630(&StringLiteral_17811/*"dlgOrderMessage"*/);
    DAT_0456643e = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PCNEDMAJMOJ = 0;
    (__this->fields).OFJCBIEADON = 0;
    (__this->fields).HGCGINNLIEC = 0;
    (__this->fields).MLPKGJACOFA = (System_String_o *)0x0;
    (__this->fields).BHBEFOMAGCC = 0;
    thunk_FUN_01c20e04(&(__this->fields).MLPKGJACOFA,0);
    uVar12 = false;
  }
  else {
    bVar2 = (KIDHEMFNDEK_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)KIDHEMFNDEK_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).HGCGINNLIEC = (int64_t)IMMNELPBGIF[2].klass;
    *(void **)&(__this->fields).PCNEDMAJMOJ = IMMNELPBGIF[1].monitor;
    (__this->fields).BHBEFOMAGCC = (int64_t)IMMNELPBGIF[2].monitor;
    (__this->fields).MLPKGJACOFA = (System_String_o *)IMMNELPBGIF[3].klass;
    thunk_FUN_01c20e04(&(__this->fields).MLPKGJACOFA);
    uVar12 = *(undefined1 *)&IMMNELPBGIF[3].monitor;
  }
  iVar1 = (__this->fields).OFJCBIEADON;
  (__this->fields).KGEDEAGBKGB = (bool_conflict)uVar12;
  pSVar18 = StringLiteral_20991/*"shopBuy"*/;
  DOEJEADIJEJ = StringLiteral_17845/*"dlgUpgradeButton"*/;
  if (iVar1 == 1) {
    (__this->fields).JOIGFPPEHGI = StringLiteral_17847/*"dlgUpgradeTitle"*/;
    thunk_FUN_01c20e04();
    puVar13 = &StringLiteral_17846/*"dlgUpgradeMessage"*/;
LAB_031f3a84:
    (__this->fields).CKAKBPJOALE = (System_String_o *)*puVar13;
    thunk_FUN_01c20e04();
  }
  else {
    DOEJEADIJEJ = StringLiteral_9679/*"OK"*/;
    if (iVar1 == 0) {
      (__this->fields).JOIGFPPEHGI = StringLiteral_17768/*"dlgBuyTitle"*/;
      thunk_FUN_01c20e04();
      puVar13 = &StringLiteral_17767/*"dlgBuyMessage"*/;
      DOEJEADIJEJ = pSVar18;
      goto LAB_031f3a84;
    }
  }
  pSVar4 = StringLiteral_17845/*"dlgUpgradeButton"*/;
  pSVar18 = StringLiteral_17810/*"dlgOrderButton"*/;
  if (0 < (__this->fields).BHBEFOMAGCC) {
    if ((__this->fields).OFJCBIEADON == 1) {
      (__this->fields).JOIGFPPEHGI = StringLiteral_17847/*"dlgUpgradeTitle"*/;
      thunk_FUN_01c20e04();
      puVar13 = &StringLiteral_17846/*"dlgUpgradeMessage"*/;
      pSVar18 = pSVar4;
    }
    else {
      (__this->fields).JOIGFPPEHGI = StringLiteral_17812/*"dlgOrderTitle"*/;
      thunk_FUN_01c20e04();
      puVar13 = &StringLiteral_17811/*"dlgOrderMessage"*/;
    }
    (__this->fields).CKAKBPJOALE = (System_String_o *)*puVar13;
    thunk_FUN_01c20e04();
    DOEJEADIJEJ = pSVar18;
  }
  pNVar5 = (__this->fields)._checkbox;
  if (pNVar5 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
    if ((__this->fields).KGEDEAGBKGB == false) {
      pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        pNVar19 = (__this->fields)._checkboxLabel;
        if ((pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar19,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          value = false;
LAB_031f3cb8:
          UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
          ppSVar11 = &(__this->fields).super.NIEHEOKFPAN;
          *ppSVar11 = DOEJEADIJEJ;
          thunk_FUN_01c20e04(ppSVar11,DOEJEADIJEJ);
          if ((IMMNELPBGIF != (Il2CppObject *)0x0) && (IMMNELPBGIF[1].klass != (Il2CppClass *)0x0))
          {
            Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                       (System_Action_T__o *)IMMNELPBGIF[1].klass,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
          }
          Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(__this->fields).JOIGFPPEHGI,
                     DOEJEADIJEJ,StringLiteral_3640/*"CANCEL"*/,3,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      Nekki_SF2_GUI_Scripts_CheckBox__set_State(pNVar5,1,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._checkbox;
      if ((pNVar5 != (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
        pNVar19 = (__this->fields)._checkboxLabel;
        pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar8 = Method_System_Array_Empty<string>__;
        lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar14 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar14 = *(long *)(lVar8 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01b81620();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        uVar10 = StringLiteral_17821/*"dlgRaidFastBuy"*/;
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar15 = pIVar7->klass;
          uVar20 = **(undefined8 **)(lVar8 + 0xb8);
          uVar3._0_1_ = (pIVar15->_2).rank;
          uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
          uVar16 = (ulong)uVar3;
          if (uVar16 != 0) {
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar15->vtable + (*piVar17 + 0xc);
                goto LAB_031f3c70;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031f3c70:
          uVar10 = (*pVVar9->methodPtr)(pIVar7,uVar10,uVar20,pVVar9->method);
          if (pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar19->klass->vtable)._75_set_text.methodPtr)
                      (pNVar19,uVar10,(pNVar19->klass->vtable)._75_set_text.method);
            pNVar19 = (__this->fields)._checkboxLabel;
            if ((pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar19,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              value = true;
              goto LAB_031f3cb8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x30F3D34]
// Nekki.SF2.GUI.Dialogs.TradeDialog$$OnClose @ RVA 0x30F3D34

void Nekki_SF2_GUI_Dialogs_TradeDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar3;
  
  if ((DAT_0456643f & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456643f = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) && ((__this->fields).KGEDEAGBKGB != false)) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c(IMMNELPBGIF);
    if (0 < *piVar2) {
      pNVar3 = (__this->fields)._checkbox;
      if (pNVar3 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
LAB_031f3e94:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (pNVar3->fields).OIKLOAGFFGO;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0)
      {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_031f3e94;
        ACHLOMELAJE__BNAPCHJBJEA(__this_00,iVar1 != 0,(MethodInfo *)0x0);
      }
    }
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x30F3E98]
// Nekki.SF2.GUI.Dialogs.TradeDialog$$.ctor @ RVA 0x30F3E98

void Nekki_SF2_GUI_Dialogs_TradeDialog___ctor
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,MethodInfo *method)

{
  if ((DAT_04566440 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566440 = 1;
  }
  (__this->fields).JOIGFPPEHGI = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).CKAKBPJOALE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x30F3F00]
// Nekki.SF2.GUI.Dialogs.TradeDialog$$GKPJMHOFIOO @ RVA 0x30F3F00

void Nekki_SF2_GUI_Dialogs_TradeDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  int32_t iVar7;
  JMDPBFOCHHP_o *pJVar8;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar9;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *EDEHNHIHDDH;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar10;
  System_String_o *pSVar11;
  System_String_array *values;
  Il2CppObject *pIVar12;
  long lVar13;
  VirtualInvokeData *pVVar14;
  Il2CppObject *pIVar15;
  Il2CppObject *arg2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar16;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar17;
  System_String_o **ppSVar18;
  long lVar19;
  Il2CppClass *pIVar20;
  ulong uVar21;
  int32_t *piVar22;
  System_String_o *pSVar23;
  undefined8 uVar24;
  int32_t local_6c;
  int32_t local_68;
  int32_t local_64;
  System_TimeSpan_Fields local_58;
  
  if ((DAT_04566441 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_11980/*"Shard"*/);
    FUN_01bab630(&StringLiteral_22506/*"}{"*/);
    FUN_01bab630(&StringLiteral_22269/*"{0:D2}:{1:D2}:{2:D2}"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_22268/*"{0:D2}:{1:D2}"*/);
    FUN_01bab630(&StringLiteral_17776/*"dlgCurrencyQuestion{"*/);
    FUN_01bab630(&StringLiteral_17844/*"dlgTimeUpgrade"*/);
    FUN_01bab630(&StringLiteral_17843/*"dlgTimeDelivery"*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_18941/*"img::"*/);
    DAT_04566441 = 1;
    method = extraout_x1;
  }
  pSVar11 = StringLiteral_18941/*"img::"*/;
  local_58._ticks = 0;
  iVar2 = (__this->fields).PCNEDMAJMOJ;
  if (iVar2 == 3) {
    bVar6 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    if (bVar6) {
LAB_031f4164:
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar9 = LPGPNBGHDBD__OICLMNIHIJJ((MethodInfo *)0x0);
      if (pJVar9 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
        bVar6 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
        if (bVar6) goto LAB_031f4784;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((pJVar8 == (JMDPBFOCHHP_o *)0x0) ||
           (pJVar9 = JMDPBFOCHHP__DIFLKMKBENA
                               (pJVar8,(__this->fields).MLPKGJACOFA,false,(MethodInfo *)0x0),
           pJVar9 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) goto LAB_031f4784;
      }
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar8 == (JMDPBFOCHHP_o *)0x0) goto LAB_031f4784;
      pJVar9 = JMDPBFOCHHP__DIFLKMKBENA(pJVar8,(__this->fields).MLPKGJACOFA,false,(MethodInfo *)0x0)
      ;
      if (pJVar9 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) goto LAB_031f4164;
      EDEHNHIHDDH = (pJVar9->fields).LIJCIBIOOOH;
      if (EDEHNHIHDDH == (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)
      goto LAB_031f4784;
      if ((EDEHNHIHDDH->fields)._size < 1) goto LAB_031f4164;
      pIVar12 = DJNBJHPDKDP__PHPELPFMOII<object>
                          ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                           Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
      if ((pIVar12 == (Il2CppObject *)0x0) || (pIVar12[1].klass == (Il2CppClass *)0x0))
      goto LAB_031f4784;
      bVar6 = System_String__Contains
                        ((System_String_o *)pIVar12[1].klass,StringLiteral_11980/*"Shard"*/,(MethodInfo *)0x0);
      if (!bVar6) goto LAB_031f4164;
    }
    pIVar12 = DJNBJHPDKDP__PHPELPFMOII<object>
                        ((System_Collections_Generic_List_T__o *)(pJVar9->fields).LIJCIBIOOOH,
                         Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (((pIVar12 == (Il2CppObject *)0x0) || (pJVar8 == (JMDPBFOCHHP_o *)0x0)) ||
       (pJVar10 = JMDPBFOCHHP__DOKLIOAMCCO
                            (pJVar8,(System_String_o *)pIVar12[1].klass,(MethodInfo *)0x0),
       pJVar10 == (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0)) goto LAB_031f4784;
    ppSVar18 = &(pJVar10->fields).APBICPEOMOM;
LAB_031f423c:
    pSVar11 = System_String__Concat(pSVar11,*ppSVar18,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 == 1) {
      ppSVar18 = (System_String_o **)&StringLiteral_9095/*"MiscSprites.ruby"*/;
      goto LAB_031f423c;
    }
    if (iVar2 == 0) {
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
      }
      pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar17 == (ACHLOMELAJE_o *)0x0) goto LAB_031f4784;
      ppSVar18 = &(pAVar17->fields).FAAJGHKHEBI;
      goto LAB_031f423c;
    }
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values == (System_String_array *)0x0) goto LAB_031f4784;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = StringLiteral_17776/*"dlgCurrencyQuestion{"*/;
    thunk_FUN_01c20e04(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar11;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar11);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_22506/*"}{"*/;
        thunk_FUN_01c20e04(values->m_Items + 2);
        pSVar11 = System_Int64__ToString((int64_t)&(__this->fields).HGCGINNLIEC,(MethodInfo *)0x0);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar11;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar11);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_22500/*"}"*/;
            thunk_FUN_01c20e04();
            pSVar11 = System_String__Concat(values,(MethodInfo *)0x0);
            pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
            lVar13 = Method_System_Array_Empty<string>__;
            pSVar23 = (__this->fields).CKAKBPJOALE;
            lVar19 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
            if (lVar19 == 0) {
              FUN_01b8167c(Method_System_Array_Empty<string>__);
              lVar19 = *(long *)(lVar13 + 0x38);
            }
            lVar19 = *(long *)(lVar19 + 0x10);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = FUN_01b81620();
            }
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_01ba7564();
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01b81620();
            }
            if (pIVar12 != (Il2CppObject *)0x0) {
              pIVar20 = pIVar12->klass;
              uVar24 = **(undefined8 **)(lVar13 + 0xb8);
              uVar3._0_1_ = (pIVar20->_2).rank;
              uVar3._1_1_ = (pIVar20->_2).minimumAlignment;
              uVar21 = (ulong)uVar3;
              if (uVar21 != 0) {
                piVar22 = &((pIVar20->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar14 = pIVar20->vtable + (*piVar22 + 0xc);
                    goto LAB_031f4408;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              pVVar14 = (VirtualInvokeData *)FUN_01b81914(pIVar12,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031f4408:
              pSVar23 = (System_String_o *)
                        (*pVVar14->methodPtr)(pIVar12,pSVar23,uVar24,pVVar14->method);
              pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                  (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
              lVar13 = Method_System_Array_Empty<string>__;
              lVar19 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
              if (lVar19 == 0) {
                FUN_01b8167c(Method_System_Array_Empty<string>__);
                lVar19 = *(long *)(lVar13 + 0x38);
              }
              lVar19 = *(long *)(lVar19 + 0x10);
              if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
                lVar19 = FUN_01b81620();
              }
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ba7564();
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_01b81620();
              }
              if (pIVar12 != (Il2CppObject *)0x0) {
                pIVar20 = pIVar12->klass;
                uVar24 = **(undefined8 **)(lVar13 + 0xb8);
                uVar4._0_1_ = (pIVar20->_2).rank;
                uVar4._1_1_ = (pIVar20->_2).minimumAlignment;
                uVar21 = (ulong)uVar4;
                if (uVar21 != 0) {
                  piVar22 = &((pIVar20->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                        (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                      pVVar14 = pIVar20->vtable + (*piVar22 + 0xc);
                      goto LAB_031f44dc;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                pVVar14 = (VirtualInvokeData *)FUN_01b81914(pIVar12,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031f44dc:
                pSVar11 = (System_String_o *)
                          (*pVVar14->methodPtr)(pIVar12,pSVar11,uVar24,pVVar14->method);
                pSVar11 = System_String__Concat(pSVar23,StringLiteral_47/*"\n"*/,pSVar11,(MethodInfo *)0x0);
                lVar13 = (__this->fields).BHBEFOMAGCC;
                if (0 < lVar13) {
                  puVar1 = &StringLiteral_17843/*"dlgTimeDelivery"*/;
                  if ((__this->fields).OFJCBIEADON != 0) {
                    puVar1 = &StringLiteral_17844/*"dlgTimeUpgrade"*/;
                  }
                  uVar24 = *puVar1;
                  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  local_58._ticks =
                       (int64_t)System_TimeSpan__FromSeconds((double)lVar13,(MethodInfo *)0x0);
                  iVar7 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_58,(MethodInfo *)0x0)
                  ;
                  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
                  }
                  if (iVar7 < 1) {
                    local_64 = System_TimeSpan__get_Minutes
                                         ((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
                    pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    local_68 = System_TimeSpan__get_Seconds
                                         ((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
                    pIVar15 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
                    pSVar23 = System_String__Format
                                        (StringLiteral_22268/*"{0:D2}:{1:D2}"*/,pIVar12,pIVar15,(MethodInfo *)0x0);
                  }
                  else {
                    local_64 = System_TimeSpan__get_Hours
                                         ((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
                    pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    local_68 = System_TimeSpan__get_Minutes
                                         ((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
                    pIVar15 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
                    local_6c = System_TimeSpan__get_Seconds
                                         ((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
                    arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
                    pSVar23 = System_String__Format
                                        (StringLiteral_22269/*"{0:D2}:{1:D2}:{2:D2}"*/,pIVar12,pIVar15,arg2,(MethodInfo *)0x0)
                    ;
                  }
                  pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                  lVar13 = FUN_01bab718(string___TypeInfo,1);
                  if (lVar13 == 0) goto LAB_031f4784;
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_031f4788;
                  *(undefined8 *)(lVar13 + 0x20) = pSVar23;
                  thunk_FUN_01c20e04((undefined8 *)(lVar13 + 0x20),pSVar23);
                  if (pIVar12 == (Il2CppObject *)0x0) goto LAB_031f4784;
                  pIVar20 = pIVar12->klass;
                  uVar5._0_1_ = (pIVar20->_2).rank;
                  uVar5._1_1_ = (pIVar20->_2).minimumAlignment;
                  uVar21 = (ulong)uVar5;
                  if (uVar21 != 0) {
                    piVar22 = &((pIVar20->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar14 = pIVar20->vtable + (*piVar22 + 0xc);
                        goto LAB_031f471c;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  pVVar14 = (VirtualInvokeData *)FUN_01b81914(pIVar12,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031f471c:
                  pSVar23 = (System_String_o *)
                            (*pVVar14->methodPtr)(pIVar12,uVar24,lVar13,pVVar14->method);
                  pSVar11 = System_String__Concat
                                      (pSVar11,StringLiteral_47/*"\n"*/,pSVar23,(MethodInfo *)0x0);
                }
                pNVar16 = (__this->fields)._text;
                if (pNVar16 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar16->klass->vtable)._75_set_text.methodPtr)
                            (pNVar16,pSVar11,(pNVar16->klass->vtable)._75_set_text.method);
                  return;
                }
              }
            }
LAB_031f4784:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
LAB_031f4788:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

