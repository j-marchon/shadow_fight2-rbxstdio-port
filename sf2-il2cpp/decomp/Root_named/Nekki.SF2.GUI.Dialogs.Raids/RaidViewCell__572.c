// TypeDefIndex 572
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidViewCell : BaseScrollItem
// Fields:
//   private const float KKEAMMBPAJE = 1;
//   private const float DDCFJGKJNPE = 5;
//   private static readonly string CNEFGALKDDI; // 0x0
//   private static readonly string CBOLBCCOBLA; // 0x8
//   private static readonly string NKHHIFKCKBB; // 0x10
//   private CanvasGroup _canvasGroup; // 0x130
//   private LabelAlias _playerPosition; // 0x138
//   private ResolutionImage _bgPic; // 0x140
//   private ResolutionImage _playerStatusIcon; // 0x148
//   private ResolutionImage _danBg; // 0x150
//   private LabelAlias _danLbl; // 0x158
//   private SFButton _nameButton; // 0x160
//   private LabelAlias _name; // 0x168
//   private SFButton _blameButton; // 0x170
//   private ResolutionImage _blameIcon; // 0x178
//   private LabelAlias _damage; // 0x180
//   private ResolutionImage _chest; // 0x188
//   private SFButton _damageHintButton; // 0x190
//   private Transform _damageHintMountRoot; // 0x198
//   private SFButton _chestHintButton; // 0x1A0
//   private Transform _chestHintMountRoot; // 0x1A8
//   private HintBoxAutoKilled _hintPrefab; // 0x1B0
//   private RectTransform _clanLogoMountRoot; // 0x1B8
//   private IFFFKKMMKFO <LAIJDPOGGKB>k__BackingField; // 0x1C0
//   private SimpleScroll PDHMLFAMNCO; // 0x1C8
//   private ClanLogoImage FDOKACGMDHB; // 0x1D0
//   private static long PNKHCOIIPLL; // 0x18
//   private static Dictionary<long, OJEHKJHEBID> JLLAGIOFBAI; // 0x20

// ===== private void PHMCJLDOJPD()  [RVA 0x35ADEAC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$PHMCJLDOJPD @ RVA 0x35ADEAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  RaidManager_o *pCVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  AJOGJBFNELI_o *__this_00;
  SFButton_o *pSVar6;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  GCPFDLNAFDF_c *pGVar7;
  IFFFKKMMKFO_o *pIVar8;
  GKLPDMLELJF_o *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  
  if ((DAT_04568e6a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e6a = 1;
  }
  bVar2 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar3 != (RaidManager_o *)0x0) {
    IHODMKCBNKJ = (pCVar3->fields).AABMLCNHHPN;
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
    }
    pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar4 == (GCPFDLNAFDF_o *)0x0) goto LAB_036ae098;
    pGVar7 = pGVar4->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)KADDELABILH_TypeInfo) {
          pVVar5 = pGVar7->vtable + (*piVar11 + 5);
          goto LAB_036adfc4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,KADDELABILH_TypeInfo,5);
LAB_036adfc4:
    uVar10 = (*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if ((uVar10 & 1) != 0) {
      pIVar8 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
      if (pIVar8 == (IFFFKKMMKFO_o *)0x0) goto LAB_036ae098;
      if (((pIVar8->fields)._FPBBMLACBJE_k__BackingField == false) &&
         (bVar2 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0), bVar2)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
        if ((((IHODMKCBNKJ == (AADKBCFCLKK_o *)0x0) ||
             (pIVar8 = (__this->fields)._LAIJDPOGGKB_k__BackingField, pIVar8 == (IFFFKKMMKFO_o *)0x0
             )) || (pGVar9 = (pIVar8->fields)._IPNPNPOLCFO_k__BackingField,
                   pGVar9 == (GKLPDMLELJF_o *)0x0)) || (__this_00 == (AJOGJBFNELI_o *)0x0))
        goto LAB_036ae098;
        bVar2 = AJOGJBFNELI__PMLFNFMEKDO
                          (__this_00,(IHODMKCBNKJ->fields).AMKHEHFFAKJ,(pGVar9->fields).ANAJGHJEEOC,
                           (MethodInfo *)0x0);
        if (bVar2) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PNNAAJPIFGC(__this,method_00);
        }
        else {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__EGNLFEGLGPK(__this,method_00);
        }
        pSVar6 = (__this->fields)._blameButton;
        if ((pSVar6 == (SFButton_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036ae098;
        bVar2 = true;
        goto LAB_036ae064;
      }
    }
    pSVar6 = (__this->fields)._blameButton;
    if ((pSVar6 != (SFButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = false;
LAB_036ae064:
      UnityEngine_GameObject__SetActive(__this_01,bVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036ae098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CNOCKOGHKJO(float FMPJLBLNHMC)  [RVA 0x35AE178]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$CNOCKOGHKJO @ RVA 0x35AE178

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CNOCKOGHKJO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,float FMPJLBLNHMC,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields)._canvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,FMPJLBLNHMC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PNNAAJPIFGC()  [RVA 0x35AE118]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$PNNAAJPIFGC @ RVA 0x35AE118

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PNNAAJPIFGC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  SFButton_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  __this_00 = (__this->fields)._blameButton;
  if (__this_00 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._blameIcon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (0x3f000000,0x3f000000,0x3f000000,0x3f800000,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._blameIcon;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar1,0.25,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCMPNFLGPPE()  [RVA 0x35AE194]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$NCMPNFLGPPE @ RVA 0x35AE194

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NCMPNFLGPPE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  int64_t CJNHFNHJHPE;
  System_String_o *pSVar1;
  System_String_o *str0;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  IFFFKKMMKFO_o *pIVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  long lVar5;
  undefined8 *puVar6;
  Nekki_SF2_GUI_LabelAlias_c *pNVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_3c;
  long local_38;
  
  if ((DAT_04568e6b & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_8188/*"K"*/);
    FUN_01bab630(&StringLiteral_8705/*"M"*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04568e6b = 1;
    method = extraout_x1;
  }
  local_38 = 0;
  local_3c = 0;
  pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar3 == (IFFFKKMMKFO_o *)0x0) goto LAB_036ae464;
  fVar10 = (pIVar3->fields).JOAHABGBLEF;
  CJNHFNHJHPE = -0x8000000000000000;
  if (fVar10 != INFINITY) {
    CJNHFNHJHPE = (long)fVar10;
  }
  if (1e+06 <= fVar10) {
    local_38 = CJNHFNHJHPE / 1000000;
    str0 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
    local_3c = ((int)CJNHFNHJHPE % 1000000) / 100000;
    pSVar1 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
    puVar6 = &StringLiteral_8705/*"M"*/;
LAB_036ae3b0:
    pSVar1 = System_String__Concat
                       (str0,StringLiteral_1377/*"."*/,pSVar1,(System_String_o *)*puVar6,(MethodInfo *)0x0)
    ;
  }
  else {
    if (100000.0 <= fVar10) {
      local_38 = CJNHFNHJHPE / 1000;
      str0 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
      lVar5 = (long)(int)fVar10 * 0x10624dd3;
      local_3c = -6;
      if (fVar10 != INFINITY) {
        local_3c = (int)(short)((short)(int)fVar10 +
                               ((short)(uint)((ulong)lVar5 >> 0x26) - (short)(lVar5 >> 0x3f)) *
                               -1000) / 100;
      }
      pSVar1 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
      puVar6 = &StringLiteral_8188/*"K"*/;
      goto LAB_036ae3b0;
    }
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
    }
    pSVar1 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._damage;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (pIVar3 != (IFFFKKMMKFO_o *)0x0) {
      fVar11 = (pIVar3->fields).ECNFDCBBAEN;
      fVar10 = (pIVar3->fields).JOAHABGBLEF;
      pNVar2 = (__this->fields)._damage;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
      if (fVar11 <= fVar10) {
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pNVar7 = pNVar2->klass;
          fVar8 = (pBVar4->FHIAKPJBBCB).fields.b;
          fVar9 = (pBVar4->FHIAKPJBBCB).fields.a;
          fVar10 = (pBVar4->FHIAKPJBBCB).fields.r;
          fVar11 = (pBVar4->FHIAKPJBBCB).fields.g;
          goto LAB_036ae438;
        }
      }
      else if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pNVar7 = pNVar2->klass;
        fVar8 = (pBVar4->LMIPLAFCFBL).fields.b;
        fVar9 = (pBVar4->LMIPLAFCFBL).fields.a;
        fVar10 = (pBVar4->LMIPLAFCFBL).fields.r;
        fVar11 = (pBVar4->LMIPLAFCFBL).fields.g;
LAB_036ae438:
        (*(pNVar7->vtable)._23_set_color.methodPtr)
                  (fVar10,fVar11,fVar8,fVar9,pNVar2,(pNVar7->vtable)._23_set_color.method);
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__GINCEPGBOIC(__this,method_00);
        return;
      }
    }
  }
LAB_036ae464:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EGNLFEGLGPK()  [RVA 0x35AE0B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$EGNLFEGLGPK @ RVA 0x35AE0B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__EGNLFEGLGPK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  SFButton_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  __this_00 = (__this->fields)._blameButton;
  if (__this_00 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._blameIcon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0,0,0x3f800000,pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._blameIcon;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar1,1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35AE510]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$.cctor @ RVA 0x35AE510

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *__this;
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o **ppSVar1;
  
  if ((DAT_04568e6c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    FUN_01bab630(&StringLiteral_9089/*"MiscSprites.indicatorRed"*/);
    FUN_01bab630(&StringLiteral_9085/*"MiscSprites.indicatorGreen"*/);
    FUN_01bab630(&StringLiteral_10932/*"RaidMisc.swords"*/);
    DAT_04568e6c = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->CNEFGALKDDI = StringLiteral_9089/*"MiscSprites.indicatorRed"*/
  ;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields,
                     StringLiteral_9089/*"MiscSprites.indicatorRed"*/);
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->CBOLBCCOBLA = StringLiteral_9085/*"MiscSprites.indicatorGreen"*/
  ;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->NKHHIFKCKBB =
       StringLiteral_10932/*"RaidMisc.swords"*/;
  thunk_FUN_01c20e04();
  __this = (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TypeInfo);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>__ctor__);
  ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->JLLAGIOFBAI;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}


// ===== private void DJNONHNFKCN(string MAFOJGJOMLG)  [RVA 0x35AE62C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$DJNONHNFKCN @ RVA 0x35AE62C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__DJNONHNFKCN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,System_String_o *MAFOJGJOMLG,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  
  __this_00 = (__this->fields)._canvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._playerStatusIcon;
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,MAFOJGJOMLG,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JNHCLDEMMOM()  [RVA 0x35AE670]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$JNHCLDEMMOM @ RVA 0x35AE670

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__JNHCLDEMMOM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar2;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_01;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568e6d & 1) == 0) {
    FUN_01bab630(&StringLiteral_18787/*"hintRaidWinnerPrize"*/);
    DAT_04568e6d = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pNVar2 = (__this->fields)._hintPrefab;
    if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
      DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_045660f3 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
        DAT_045660f3 = '\x01';
      }
      __this_01 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH
      ;
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        HOKHHGFLMNA = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._chestHintMountRoot;
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          HHPABFGHALF = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                             (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,5.0,-1.0,-1.0,(MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
            Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                      (pNVar2,StringLiteral_18787/*"hintRaidWinnerPrize"*/,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NHNIKKNAAPF()  [RVA 0x35AE768]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$NHNIKKNAAPF @ RVA 0x35AE768

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NHNIKKNAAPF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  RaidPlayerInfoHelper_o *__this_01;
  MethodInfo *method_00;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_04568e6e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568e6e = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
        (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) &&
       (__this_01 != (RaidPlayerInfoHelper_o *)0x0)) {
      RaidPlayerInfoHelper__JDONKPBCNLL(__this_01,(pGVar3->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AENLKMEMLLP()  [RVA 0x35AE884]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$AENLKMEMLLP @ RVA 0x35AE884

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AENLKMEMLLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  IFFFKKMMKFO_o *pIVar2;
  
  if ((DAT_04568e6f & 1) == 0) {
    FUN_01bab630(&StringLiteral_10863/*"RaidInfo.select_me"*/);
    DAT_04568e6f = 1;
  }
  pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
     (pNVar1 = (__this->fields)._bgPic, pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    if ((pIVar2->fields)._FPBBMLACBJE_k__BackingField == false) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_036ae918;
      value = false;
    }
    else {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,StringLiteral_10863/*"RaidInfo.select_me"*/,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._bgPic;
      if ((pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036ae918;
      value = true;
    }
    UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_036ae918:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJFHNCGHAPF(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x35AE91C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$CJFHNCGHAPF @ RVA 0x35AE91C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CJFHNCGHAPF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               MethodInfo *method)

{
  ClanLogoImage_o **ppCVar1;
  bool bVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04568e70 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e70 = 1;
  }
  pCVar3 = (__this->fields).FDOKACGMDHB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppCVar1 = &(__this->fields).FDOKACGMDHB;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    UnityEngine_TransformExtensions__DeleteAllChildrenObjects
              ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,(MethodInfo *)0x0);
    pCVar3 = KFCFGKEHPNK__LEIGOOFFFPE
                       ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,PBNPKBJKFHE,
                        false,1.0,(MethodInfo *)0x0);
    (__this->fields).FDOKACGMDHB = pCVar3;
    thunk_FUN_01c20e04(ppCVar1,pCVar3);
    return;
  }
  KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar1,PBNPKBJKFHE,false,1.0,(MethodInfo *)0x0);
  return;
}


// ===== private void POPLOFFOHJL()  [RVA 0x35AE9E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$POPLOFFOHJL @ RVA 0x35AE9E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__POPLOFFOHJL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  IFFFKKMMKFO_o *pIVar7;
  GKLPDMLELJF_o *pGVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined1 auVar12 [16];
  long lVar5;
  
  if ((DAT_04568e71 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_JCBKPGMPLBK__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_11503/*"SEND"*/);
    FUN_01bab630(&StringLiteral_3503/*"BlameDialogHeader"*/);
    FUN_01bab630(&StringLiteral_3504/*"BlameMessage"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e71 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = method;
  auVar12 = auVar12 << 0x40;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar3 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    auVar12 = FUN_01bab718(string___TypeInfo,1);
    lVar5 = auVar12._0_8_;
    pIVar7 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (((pIVar7 != (IFFFKKMMKFO_o *)0x0) &&
        (pGVar8 = (pIVar7->fields)._IPNPNPOLCFO_k__BackingField, pGVar8 != (GKLPDMLELJF_o *)0x0)) &&
       (lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar5 + 0x20) = (pGVar8->fields).LLBEKLPKDHK;
      auVar12 = thunk_FUN_01c20e04();
      uVar2 = StringLiteral_3504/*"BlameMessage"*/;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar4->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
              goto LAB_036aeb60;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036aeb60:
        EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        DialogsOpener__JNDPLPKDPCP
                  (StringLiteral_3503/*"BlameDialogHeader"*/,EHNFGMGKCHO,StringLiteral_11503/*"SEND"*/,StringLiteral_3640/*"CANCEL"*/,IELDNEAAPBE
                   ,1,0,false,false,StringLiteral_1/*""*/,false,true,true,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar12._0_8_,auVar12._8_8_);
}


// ===== private void FDFHMHPOHKA()  [RVA 0x35AEC2C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$FDFHMHPOHKA @ RVA 0x35AEC2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FDFHMHPOHKA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *extraout_x1;
  System_String_o *MAFOJGJOMLG;
  MethodInfo *in_x2;
  IFFFKKMMKFO_o *pIVar3;
  
  if ((DAT_04568e72 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568e72 = 1;
    method = extraout_x1;
  }
  pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar3 != (IFFFKKMMKFO_o *)0x0) {
    iVar1 = (pIVar3->fields).FPPPAMFABJP;
    if (iVar1 != 3) {
      iVar2 = (pIVar3->fields).IEONGHCHNNA;
      if (iVar2 - 2U < 2) {
        if (iVar1 == 2) {
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo,method);
          }
          MAFOJGJOMLG = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->
                        NKHHIFKCKBB;
        }
        else {
          if (iVar1 != 1) {
            return;
          }
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo,method);
          }
          MAFOJGJOMLG = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->
                        CBOLBCCOBLA;
        }
      }
      else {
        if (iVar2 != 1) {
          return;
        }
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo,method);
        }
        MAFOJGJOMLG = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->CNEFGALKDDI;
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__DJNONHNFKCN(__this,MAFOJGJOMLG,in_x2);
      return;
    }
    __this_00 = (__this->fields)._playerStatusIcon;
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._canvasGroup;
      if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(__this_02,0.5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HBBGAJGBIJG()  [RVA 0x35AED64]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$HBBGAJGBIJG @ RVA 0x35AED64

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__HBBGAJGBIJG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  int32_t *piVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar4;
  SFButton_o *pSVar5;
  IFFFKKMMKFO_o *pIVar6;
  GKLPDMLELJF_o *pGVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  
  if ((DAT_04568e73 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e73 = 1;
  }
  pSVar5 = (__this->fields)._damageHintButton;
  if ((pSVar5 != (SFButton_o *)0x0) &&
     (pUVar1 = (pSVar5->fields).super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._chestHintButton;
    if ((pSVar5 != (SFButton_o *)0x0) &&
       (pUVar1 = (pSVar5->fields).super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._canvasGroup;
      if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._chest;
        if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pMVar4 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,StringLiteral_1/*""*/,(MethodInfo *)0x0)
          ;
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AENLKMEMLLP(__this,method_00);
          pIVar6 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
          if (pIVar6 != (IFFFKKMMKFO_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__KJBGMCODLFB
                      (__this,(pIVar6->fields)._IPNPNPOLCFO_k__BackingField,pMVar4);
            pIVar6 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
            if ((pIVar6 != (IFFFKKMMKFO_o *)0x0) &&
               (pGVar7 = (pIVar6->fields)._IPNPNPOLCFO_k__BackingField,
               pGVar7 != (GKLPDMLELJF_o *)0x0)) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AFODJIOPDLD
                        (__this,(pGVar7->fields).LLBEKLPKDHK,pMVar4);
              pIVar6 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
              if (pIVar6 != (IFFFKKMMKFO_o *)0x0) {
                piVar2 = &(pIVar6->fields).KOPODBECOEJ;
                pMVar4 = extraout_x1;
                if (-1 < *piVar2) {
                  pNVar8 = (__this->fields)._playerPosition;
                  pSVar3 = System_Int32__ToString((int32_t)piVar2,(MethodInfo *)0x0);
                  if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036aee90;
                  (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                            (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
                  pMVar4 = extraout_x1_00;
                }
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FDFHMHPOHKA(__this,pMVar4);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NCMPNFLGPPE(__this,method_01);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__OENMKDCFDIF(__this,method_02);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NJBBDBHJKNN(__this,method_03);
                Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD(__this,method_04);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_036aee90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LJMBMPFNCLC(IFFFKKMMKFO CJNHFNHJHPE)  [RVA 0x35AF298]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$LJMBMPFNCLC @ RVA 0x35AF298

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__LJMBMPFNCLC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,IFFFKKMMKFO_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LAIJDPOGGKB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._LAIJDPOGGKB_k__BackingField);
  return;
}


// ===== public void Init(IFFFKKMMKFO CIBAPJNKHGA, SimpleScroll MGFBPKIBNJI)  [RVA 0x35AF2A8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$Init @ RVA 0x35AF2A8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,IFFFKKMMKFO_o *CIBAPJNKHGA,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,MethodInfo *method)

{
  PlayerData_o *__this_00;
  int64_t iVar1;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *__this_02;
  RaidClansManager_o *__this_03;
  System_Action_KEFHDOHHHML__o *CPECAEHDDDB;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_StaticFields *pNVar4;
  OJEHKJHEBID_o *local_38;
  
  if ((DAT_04568e74 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TryGetValue__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_KCDLGNNCNIC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568e74 = 1;
  }
  local_38 = (OJEHKJHEBID_o *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (PlayerData_o *)0x0) {
    iVar1 = PlayerData__DHLIBNAGDAD(__this_00,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    }
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields;
    if (pNVar4->PNKHCOIIPLL != iVar1) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
        pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields;
      }
      pNVar4->PNKHCOIIPLL = iVar1;
      if (pNVar4->JLLAGIOFBAI == (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)0x0)
      goto LAB_036af4e8;
      System_Collections_Generic_Dictionary<long,_object>__Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pNVar4->JLLAGIOFBAI,
                 Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_Clear__);
    }
    (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
    thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,MGFBPKIBNJI);
    (__this->fields)._LAIJDPOGGKB_k__BackingField = CIBAPJNKHGA;
    thunk_FUN_01c20e04(&(__this->fields)._LAIJDPOGGKB_k__BackingField,CIBAPJNKHGA);
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FBBEKIIDDNM(__this,method_00);
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__HBBGAJGBIJG(__this,method_01);
      pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
      if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
         (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
        iVar1 = (pGVar3->fields).ADEIKPGDIPM.fields.value;
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->JLLAGIOFBAI;
        if (__this_02 != (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)0x0) {
          method_02 = (MethodInfo *)&stack0xffffffffffffffc8;
          System_Collections_Generic_Dictionary<long,_object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,iVar1,
                     (Il2CppObject **)method_02,
                     Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TryGetValue__);
          if (local_38 == (OJEHKJHEBID_o *)0x0) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_03 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
            CPECAEHDDDB = (System_Action_KEFHDOHHHML__o *)
                          thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
            System_Action<object>___ctor();
            if (__this_03 == (RaidClansManager_o *)0x0) goto LAB_036af4e8;
            RaidClansManager__ADNALKOMLMF(__this_03,iVar1,CPECAEHDDDB,(MethodInfo *)0x0);
          }
          else {
            Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CJFHNCGHAPF(__this,local_38,method_02);
          }
          return;
        }
      }
    }
  }
LAB_036af4e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FBBEKIIDDNM()  [RVA 0x35AF4EC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$FBBEKIIDDNM @ RVA 0x35AF4EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FBBEKIIDDNM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_01;
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_04568e75 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_POPLOFFOHJL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e75 = 1;
  }
  pSVar1 = (__this->fields)._blameButton;
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar1->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._blameButton;
    if (pSVar1 != (SFButton_o *)0x0) {
      __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._blameButton;
        if ((pSVar1 != (SFButton_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar1,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OENMKDCFDIF()  [RVA 0x35AF098]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$OENMKDCFDIF @ RVA 0x35AF098

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__OENMKDCFDIF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  RaidConfig_FNILDHLJBBJ_o *__this_01;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  IFFFKKMMKFO_o *pIVar1;
  JKDFEBLBMOF_o *pJVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  
  if ((DAT_04568e76 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568e76 = 1;
    method = extraout_x1;
  }
  pIVar1 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar1 != (IFFFKKMMKFO_o *)0x0) {
    if ((pIVar1->fields).AMAMLPJLCFG == (JKDFEBLBMOF_o *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pIVar1 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (((pIVar1 != (IFFFKKMMKFO_o *)0x0) &&
        (pJVar2 = (pIVar1->fields).AMAMLPJLCFG, pJVar2 != (JKDFEBLBMOF_o *)0x0)) &&
       (__this_00 != (RaidConfig_o *)0x0)) {
      __this_01 = RaidConfig__OJOIAONADNG(__this_00,(pJVar2->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
      ;
      if (__this_01 == (RaidConfig_FNILDHLJBBJ_o *)0x0) {
        return;
      }
      __this_02 = (__this->fields)._chest;
      CJNHFNHJHPE = RaidConfig_FNILDHLJBBJ__PCPJDHIAAHO(__this_01,false,(MethodInfo *)0x0);
      if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35AF5B4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$.ctor @ RVA 0x35AF5B4

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KJBGMCODLFB(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x35AEE94]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$KJBGMCODLFB @ RVA 0x35AEE94

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__KJBGMCODLFB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  RaidLeaderboardsManager_o *__this_00;
  System_String_o *pSVar1;
  HCKCBFOGMMJ_o *__this_01;
  GKLPDMLELJF_o *pGVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  int32_t local_24;
  
  if ((DAT_04568e77 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568e77 = 1;
  }
  __this_02 = (__this->fields)._danBg;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (((HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) && (__this_00 != (RaidLeaderboardsManager_o *)0x0)) &&
     (pSVar1 = RaidLeaderboardsManager__PAHKCILGFIK
                         (__this_00,(HEHMPFLAEGE->fields).ANAJGHJEEOC,(MethodInfo *)0x0),
     __this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_02,pSVar1,(MethodInfo *)0x0);
    local_24 = (HEHMPFLAEGE->fields).PEBHLKLGDBM;
    __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
      pGVar2 = HCKCBFOGMMJ__LLEJFHJIBHC
                         (__this_01,(HEHMPFLAEGE->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
      if (pGVar2 != (GKLPDMLELJF_o *)0x0) {
        local_24 = (pGVar2->fields).PEBHLKLGDBM;
      }
      pNVar4 = (__this->fields)._danLbl;
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,pSVar1,(pNVar4->klass->vtable)._75_set_text.method);
        pNVar4 = (__this->fields)._danLbl;
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                     (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
                     (pNVar4->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GINCEPGBOIC()  [RVA 0x35AE468]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$GINCEPGBOIC @ RVA 0x35AE468

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__GINCEPGBOIC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568e78 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_ShowDamageHint__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e78 = 1;
  }
  pSVar1 = (__this->fields)._damageHintButton;
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar1->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._damageHintButton;
    if (pSVar1 != (SFButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowDamageHint()  [RVA 0x35AF5BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$ShowDamageHint @ RVA 0x35AF5BC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__ShowDamageHint
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *pNVar2;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_01;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  IFFFKKMMKFO_o *pIVar3;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Vector3_o HHPABFGHALF;
  
  if ((DAT_04568e79 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8315/*"LackOfDamageHint"*/);
    DAT_04568e79 = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (pIVar3 != (IFFFKKMMKFO_o *)0x0) {
      if ((pIVar3->fields).ECNFDCBBAEN <= (pIVar3->fields).JOAHABGBLEF) {
        return;
      }
      pNVar2 = (__this->fields)._hintPrefab;
      if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
        DKIDCBPNMPD = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        if (DAT_045660f3 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
          DAT_045660f3 = '\x01';
        }
        __this_01 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->
                    FFOLFLCMFCH;
        if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          HOKHHGFLMNA = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._damageHintMountRoot;
          if (__this_02 != (UnityEngine_Transform_o *)0x0) {
            HHPABFGHALF = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
            pNVar2 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                               (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,5.0,-1.0,-1.0,(MethodInfo *)0x0)
            ;
            if (pNVar2 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
              Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                        (pNVar2,StringLiteral_8315/*"LackOfDamageHint"*/,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NJBBDBHJKNN()  [RVA 0x35AF154]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$NJBBDBHJKNN @ RVA 0x35AF154

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NJBBDBHJKNN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  SFButton_o *pSVar4;
  IFFFKKMMKFO_o *pIVar5;
  UnityEngine_Events_UnityEvent_o *__this_02;
  float AOGPHAIDFAA;
  
  if ((DAT_04568e7a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_JNHCLDEMMOM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    DAT_04568e7a = 1;
  }
  pNVar3 = (__this->fields)._chest;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pNVar3->fields)._TexturePath,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._chest;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,!bVar1,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = (__this->fields)._chestHintButton;
        if ((pSVar4 == (SFButton_o *)0x0) ||
           (__this_01 = (pSVar4->fields).super.m_OnClick,
           __this_01 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_036af294;
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._chestHintButton;
        if (pSVar4 == (SFButton_o *)0x0) goto LAB_036af294;
        __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_036af294;
        UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
      }
      pIVar5 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
      if (pIVar5 != (IFFFKKMMKFO_o *)0x0) {
        AOGPHAIDFAA = 1.0;
        if ((pIVar5->fields).JOAHABGBLEF <= (pIVar5->fields).ECNFDCBBAEN) {
          pNVar2 = (__this->fields)._playerPosition;
          if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036af294;
          (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                    (pNVar2,StringLiteral_1223/*"-"*/,(pNVar2->klass->vtable)._75_set_text.method);
          AOGPHAIDFAA = 0.5;
        }
        LJLLAKHOFFF__IFBBIDIEBEL
                  ((UnityEngine_UI_Graphic_o *)(__this->fields)._chest,AOGPHAIDFAA,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
LAB_036af294:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AFODJIOPDLD(string KGLJICLJHEL)  [RVA 0x35AEFD0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$AFODJIOPDLD @ RVA 0x35AEFD0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AFODJIOPDLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,System_String_o *KGLJICLJHEL,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568e7b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_NHNIKKNAAPF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e7b = 1;
  }
  pNVar1 = (__this->fields)._name;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,KGLJICLJHEL,(pNVar1->klass->vtable)._75_set_text.method);
    pSVar2 = (__this->fields)._nameButton;
    if ((pSVar2 != (SFButton_o *)0x0) &&
       (__this_00 = (pSVar2->fields).super.m_OnClick,
       __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._nameButton;
      if (pSVar2 != (SFButton_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCBKPGMPLBK(object HPACPFLKHPK)  [RVA 0x35AF6C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$JCBKPGMPLBK @ RVA 0x35AF6C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__JCBKPGMPLBK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,Il2CppObject *HPACPFLKHPK,
               MethodInfo *method)

{
  int64_t DLMKDLJEAPM;
  System_String_o *PMPGMNGKNFO;
  int *piVar1;
  Core_Network_ServerProvider_o *__this_00;
  System_Action_bool__o *CGLKNMPIAJF;
  MethodInfo *method_00;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_04568e7c & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_PCLBFNCCDDO__);
    DAT_04568e7c = 1;
  }
  if (HPACPFLKHPK != (Il2CppObject *)0x0) {
    if ((HPACPFLKHPK->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(HPACPFLKHPK);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 != 1) {
      return;
    }
    __this_00 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
    pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
       (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
      DLMKDLJEAPM = (pGVar3->fields).ANAJGHJEEOC;
      PMPGMNGKNFO = (pGVar3->fields).FFOIEHLJLDA;
      CGLKNMPIAJF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (__this_00 != (Core_Network_ServerProvider_o *)0x0) {
        Core_Network_ServerProvider__BlameUser
                  (__this_00,DLMKDLJEAPM,PMPGMNGKNFO,CGLKNMPIAJF,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PCLBFNCCDDO(bool IBEBJHMKFGE)  [RVA 0x35AF7E0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$PCLBFNCCDDO @ RVA 0x35AF7E0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PCLBFNCCDDO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,bool IBEBJHMKFGE,
               MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04568e7d & 1) == 0) {
    FUN_01bab630(&StringLiteral_17756/*"dlgAlertTitle"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3505/*"BlameResultMessage"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e7d = 1;
  }
  if (IBEBJHMKFGE) {
    DialogsOpener__JNDPLPKDPCP
              (StringLiteral_17756/*"dlgAlertTitle"*/,StringLiteral_3505/*"BlameResultMessage"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
               (MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  else {
    DialogsOpener__OMGIOGLBKCH((System_Action_object__o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__PHMCJLDOJPD(__this,method_00);
  return;
}


// ===== public bool get_IsPlayer()  [RVA 0x35AE09C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$get_IsPlayer @ RVA 0x35AE09C

bool Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__get_IsPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  IFFFKKMMKFO_o *pIVar1;
  
  pIVar1 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar1 != (IFFFKKMMKFO_o *)0x0) {
    return (pIVar1->fields)._FPBBMLACBJE_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFFFKKMMKFO get_PlayerInfo()  [RVA 0x35AF8C4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$get_PlayerInfo @ RVA 0x35AF8C4

IFFFKKMMKFO_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__get_PlayerInfo
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._LAIJDPOGGKB_k__BackingField;
}


// ===== private void KCDLGNNCNIC(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x35AF8CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$KCDLGNNCNIC @ RVA 0x35AF8CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__KCDLGNNCNIC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *PBNPKBJKFHE;
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *__this_00;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  int64_t key;
  
  if ((DAT_04568e7e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_set_Item__);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568e7e = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    PBNPKBJKFHE = (MethodInfo *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    if (PBNPKBJKFHE == (MethodInfo *)0x0) {
      return;
    }
    pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
       (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
      key = (pGVar3->fields).ADEIKPGDIPM.fields.value;
      if (0 < key) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->JLLAGIOFBAI;
        if (__this_00 == (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)0x0)
        goto LAB_036af9d8;
        method = PBNPKBJKFHE;
        System_Collections_Generic_Dictionary<long,_object>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                   (Il2CppObject *)PBNPKBJKFHE,
                   Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_set_Item__);
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CJFHNCGHAPF
                (__this,(OJEHKJHEBID_o *)PBNPKBJKFHE,method);
      return;
    }
  }
LAB_036af9d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

