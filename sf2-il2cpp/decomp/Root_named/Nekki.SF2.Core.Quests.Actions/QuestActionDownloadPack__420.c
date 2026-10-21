// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionDownloadPack  (obfuscated OICHGEFJHDF)
// TypeDefIndex 420
// Namespace: 
// public class QuestActionDownloadPack : QuestAction
// Fields:
//   private LCKCDEKNLOA JLAFBNCHHFO; // 0x68
//   private LCKCDEKNLOA NBOGMHIMLEC; // 0x70
//   private string MOMNHMKOKAN; // 0x78
//   private string HPIMKAKCJMM; // 0x80
//   private CCLKPGBIBOP KJAPDIOFGHP; // 0x88
//   private DownloadingScreen AMCHMHHIMPO; // 0x90

// ===== private void OADNADAAIFL(NJIEBADJPEJ HPACPFLKHPK)  [RVA 0x3488D50]
// QuestActionDownloadPack$$OADNADAAIFL @ RVA 0x3488D50

void QuestActionDownloadPack__OADNADAAIFL(QuestActionDownloadPack_o *__this,NJIEBADJPEJ_o *HPACPFLKHPK,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *CJFAPGEEPLM;
  bool bVar1;
  bool bVar2;
  AAPGCAPGBLG_o *pAVar3;
  CFGLKHFFEKA_o *pCVar4;
  System_String_o *CEHOJOFLMFF;
  LCKCDEKNLOA_o *__this_00;
  CCLKPGBIBOP_o *pCVar5;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o **ppNVar6;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *exists;
  
  if ((DAT_045683c7 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&ModelLoader_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683c7 = 1;
  }
  if (HPACPFLKHPK == (NJIEBADJPEJ_o *)0x0) goto LAB_03588ee0;
  bVar1 = NJIEBADJPEJ__BOJJBGPIKDP(HPACPFLKHPK,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar1 = NEHNBJKKABI__HALDCNGHJCO
                        ((HPACPFLKHPK->fields)._MLEPHDNBABJ_k__BackingField,(MethodInfo *)0x0),
     bVar1)) {
    pAVar3 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    pCVar5 = (__this->fields).KJAPDIOFGHP;
    if (pCVar5 == (CCLKPGBIBOP_o *)0x0) goto LAB_03588ee0;
    KGLJICLJHEL = (pCVar5->fields)._COIPKAKHDFP_k__BackingField;
    CJFAPGEEPLM = (pCVar5->fields)._HOHLBKMCIDD_k__BackingField;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    if (pCVar4 == (CFGLKHFFEKA_o *)0x0) goto LAB_03588ee0;
    CEHOJOFLMFF = (System_String_o *)
                  (*(pCVar4->klass->vtable)._3_ToString.methodPtr)
                            (pCVar4,(pCVar4->klass->vtable)._3_ToString.method);
    pCVar5 = (__this->fields).KJAPDIOFGHP;
    if ((pCVar5 == (CCLKPGBIBOP_o *)0x0) || (pAVar3 == (AAPGCAPGBLG_o *)0x0)) goto LAB_03588ee0;
    AAPGCAPGBLG__OPHDBLMDKJD
              (pAVar3,KGLJICLJHEL,CJFAPGEEPLM,CEHOJOFLMFF,-1,
               (pCVar5->fields)._BNIHGHLPOHB_k__BackingField,
               (pCVar5->fields)._JKGLJFGKPNN_k__BackingField,0,(MethodInfo *)0x0);
    pAVar3 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    pCVar5 = (__this->fields).KJAPDIOFGHP;
    if ((pCVar5 == (CCLKPGBIBOP_o *)0x0) || (pAVar3 == (AAPGCAPGBLG_o *)0x0)) goto LAB_03588ee0;
    bVar1 = AAPGCAPGBLG__JPLEKDCHPDL
                      (pAVar3,(pCVar5->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
  }
  else {
    bVar1 = false;
  }
  ppNVar6 = &(__this->fields).AMCHMHHIMPO;
  exists = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar2) {
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy((MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  if (bVar1 == false) {
    __this_00 = (__this->fields).NBOGMHIMLEC;
  }
  else {
    if ((ModelLoader_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ModelLoader__DACAKKGACEM((MethodInfo *)0x0);
    __this_00 = (__this->fields).JLAFBNCHHFO;
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_03588ee0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x3488F08]
// QuestActionDownloadPack$$PKIFMKGDJJN @ RVA 0x3488F08

void QuestActionDownloadPack__PKIFMKGDJJN(QuestActionDownloadPack_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).JLAFBNCHHFO;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).NBOGMHIMLEC;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x3488F40]
// QuestActionDownloadPack$$NDJAJHFFPKP @ RVA 0x3488F40

void QuestActionDownloadPack__NDJAJHFFPKP(QuestActionDownloadPack_o *__this,MethodInfo *method)

{
  AAPGCAPGBLG_o *pAVar1;
  CCLKPGBIBOP_o *pCVar2;
  
  pCVar2 = (__this->fields).KJAPDIOFGHP;
  if ((pCVar2 != (CCLKPGBIBOP_o *)0x0) && ((pCVar2->fields)._CELECOKJPDJ_k__BackingField != false))
  {
    pAVar1 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pAVar1 == (AAPGCAPGBLG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pAVar1->fields)._KDBLLEPMIPL_k__BackingField = true;
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3488F80]
// QuestActionDownloadPack$$MAHFCKJGBPP @ RVA 0x3488F80

void QuestActionDownloadPack__MAHFCKJGBPP(QuestActionDownloadPack_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  MethodInfo *KGLJICLJHEL;
  MethodInfo *method_00;
  GCPFDLNAFDF_o *pGVar7;
  VirtualInvokeData *pVVar8;
  DADDKDFBPIJ_T__o *__this_00;
  CCLKPGBIBOP_o *pCVar9;
  System_String_o *pSVar10;
  DialogsManager_o *__this_01;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar11;
  Il2CppObject *pIVar12;
  System_TimeSpan_o method_01;
  CFOCLEDKNKL_o *pCVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  System_Object_array *args;
  long lVar16;
  LCKCDEKNLOA_o *__this_02;
  MethodInfo_27FB8F4 *method_02;
  GCPFDLNAFDF_c *pGVar17;
  CFOCLEDKNKL_c *pCVar18;
  ulong uVar19;
  int32_t *piVar20;
  PKHMIGFEJCL_o *pPVar21;
  System_String_o *pSVar22;
  CCLKPGBIBOP_o **ppCVar23;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o **ppNVar24;
  System_Nullable_TimeSpan__o __this_03;
  undefined8 local_60;
  undefined8 uStack_58;
  int32_t local_44;
  
  if ((DAT_045683c8 & 1) == 0) {
    FUN_01bab630(&System_Action<float>_TypeInfo);
    FUN_01bab630(&System_Action<NJIEBADJPEJ>_TypeInfo);
    FUN_01bab630(&CFOCLEDKNKL_TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&Method_OICHGEFJHDF_KNAPKCEKINL__);
    FUN_01bab630(&Method_OICHGEFJHDF_OADNADAAIFL__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_10655/*"QuestActionDownloadPack: can't find pack by name - '{0}'!"*/);
    FUN_01bab630(&StringLiteral_2484/*"?"*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045683c8 = 1;
  }
  local_44 = 0;
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pPVar21 = (__this->fields).super.IJOKKFKPBEP;
  pSVar22 = (__this->fields).MOMNHMKOKAN;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KGLJICLJHEL = (MethodInfo *)MFBNFJGBPBB__ACJKLBMNMEJ(pPVar21,pSVar22,(MethodInfo *)0x0);
  method_00 = KGLJICLJHEL;
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MethodInfo *)thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
  }
  pGVar7 = IFAMAAGNCBJ__AEJPBJCBICK(method_00);
  if (pGVar7 != (GCPFDLNAFDF_o *)0x0) {
    pGVar17 = pGVar7->klass;
    uVar3._0_1_ = (pGVar17->_2).rank;
    uVar3._1_1_ = (pGVar17->_2).minimumAlignment;
    uVar19 = (ulong)uVar3;
    if (uVar19 != 0) {
      piVar20 = &((pGVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar8 = pGVar17->vtable + *piVar20;
          goto LAB_03589178;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pGVar7,HHMDFAMGHPB_TypeInfo,0);
LAB_03589178:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar8->methodPtr)(pGVar7,pVVar8->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pCVar9 = (CCLKPGBIBOP_o *)
               DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,(System_String_o *)KGLJICLJHEL,
                          Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      ppCVar23 = &(__this->fields).KJAPDIOFGHP;
      *ppCVar23 = pCVar9;
      thunk_FUN_01c20e04(ppCVar23,pCVar9);
      if (*ppCVar23 == (CCLKPGBIBOP_o *)0x0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args != (System_Object_array *)0x0) {
          if ((KGLJICLJHEL != (MethodInfo *)0x0) &&
             (lVar16 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
             lVar16 == 0)) {
            uVar14 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar14,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
          thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10655/*"QuestActionDownloadPack: can't find pack by name - '{0}'!"*/,args,(MethodInfo *)0x0);
          __this_02 = (__this->fields).NBOGMHIMLEC;
          if (__this_02 != (LCKCDEKNLOA_o *)0x0) {
            LCKCDEKNLOA__MAHFCKJGBPP(__this_02,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
      else {
        pSVar22 = ((*ppCVar23)->fields)._HOHLBKMCIDD_k__BackingField;
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_44 = LIIFLGALGNK__HLMBDJOGONJ(1000000,(MethodInfo *)0x0);
        pSVar10 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        pSVar22 = System_String__Concat(pSVar22,StringLiteral_2484/*"?"*/,pSVar10,(MethodInfo *)0x0);
        pPVar21 = (__this->fields).super.IJOKKFKPBEP;
        pSVar10 = (__this->fields).HPIMKAKCJMM;
        if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
        }
        pSVar10 = MFBNFJGBPBB__ACJKLBMNMEJ(pPVar21,pSVar10,(MethodInfo *)0x0);
        __this_01 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_01 != (DialogsManager_o *)0x0) {
          DialogsManager__DEAPPIKAHEP(__this_01,(MethodInfo *)0x0);
          pNVar11 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Instance((MethodInfo *)0x0);
          ppNVar24 = &(__this->fields).AMCHMHHIMPO;
          *ppNVar24 = pNVar11;
          thunk_FUN_01c20e04(ppNVar24,pNVar11);
          if (*ppNVar24 != (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleAlias
                      (*ppNVar24,pSVar10,(MethodInfo *)0x0);
            if (*ppNVar24 != (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress(*ppNVar24,0.0,(MethodInfo *)0x0)
              ;
              if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pIVar12 = IFAMAAGNCBJ__GPBMELHDADN<object>
                                  (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
              if (pIVar12 != (Il2CppObject *)0x0) {
                iVar1 = *(int *)((long)&pIVar12[5].klass + 4);
                if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
                }
                method_01 = System_TimeSpan__FromMilliseconds((double)iVar1,(MethodInfo *)0x0);
                pCVar13 = IFAMAAGNCBJ__FJMALJPIMBO((MethodInfo *)method_01.fields._ticks);
                if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(SF2Paths_TypeInfo);
                }
                pSVar10 = SF2Paths__JKLFLNNFEMP((MethodInfo *)0x0);
                if (*ppCVar23 != (CCLKPGBIBOP_o *)0x0) {
                  pSVar10 = System_String__Concat
                                      (pSVar10,StringLiteral_1492/*"/"*/,
                                       ((*ppCVar23)->fields)._COIPKAKHDFP_k__BackingField,
                                       (MethodInfo *)0x0);
                  uVar14 = thunk_FUN_01bda818(System_Action<NJIEBADJPEJ>_TypeInfo);
                  System_Action<object>___ctor();
                  uVar15 = thunk_FUN_01bda818(System_Action<float>_TypeInfo);
                  method_02 = (MethodInfo_27FB8F4 *)0x0;
                  System_Action<float>___ctor();
                  pCVar9 = (__this->fields).KJAPDIOFGHP;
                  if (pCVar9 != (CCLKPGBIBOP_o *)0x0) {
                    uVar2 = (pCVar9->fields)._JCPEHHNNEII_k__BackingField;
                    local_60 = 0;
                    uStack_58 = 0;
                    __this_03.fields.value.fields._ticks = method_01.fields._ticks;
                    __this_03.fields._0_8_ = &local_60;
                    System_Nullable<TimeSpan>___ctor
                              (__this_03,
                               (System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
                               method_02);
                    uVar6 = uStack_58;
                    uVar5 = local_60;
                    if (pCVar13 != (CFOCLEDKNKL_o *)0x0) {
                      pCVar18 = pCVar13->klass;
                      uVar4._0_1_ = (pCVar18->_2).rank;
                      uVar4._1_1_ = (pCVar18->_2).minimumAlignment;
                      uVar19 = (ulong)uVar4;
                      if (uVar19 != 0) {
                        piVar20 = &((pCVar18->_1).interfaceOffsets)->offset;
                        do {
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                              (Il2CppClass *)CFOCLEDKNKL_TypeInfo) {
                            pVVar8 = pCVar18->vtable + (*piVar20 + 3);
                            goto LAB_035894b8;
                          }
                          uVar19 = uVar19 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar19 != 0);
                      }
                      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pCVar13,CFOCLEDKNKL_TypeInfo,3);
LAB_035894b8:
                      (*pVVar8->methodPtr)
                                (pCVar13,pSVar22,pSVar10,uVar14,uVar15,(ulong)uVar2,1,1,uVar5,uVar6,
                                 1,0,pVVar8->method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3489520]
// QuestActionDownloadPack$$.ctor @ RVA 0x3489520

void QuestActionDownloadPack___ctor(QuestActionDownloadPack_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683c9 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_045683c9 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).JLAFBNCHHFO;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).NBOGMHIMLEC;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KNAPKCEKINL(float IKJIPFLDNGG)  [RVA 0x34895B0]
// QuestActionDownloadPack$$KNAPKCEKINL @ RVA 0x34895B0

void QuestActionDownloadPack__KNAPKCEKINL(QuestActionDownloadPack_o *__this,float IKJIPFLDNGG,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar2;
  
  if ((DAT_045683ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683ca = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).AMCHMHHIMPO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).AMCHMHHIMPO;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress(pNVar2,IKJIPFLDNGG,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3489648]
// QuestActionDownloadPack$$HNIHOIAMDPC @ RVA 0x3489648

void QuestActionDownloadPack__HNIHOIAMDPC
               (QuestActionDownloadPack_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  CCLKPGBIBOP_o **ppCVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Action_o *pSVar6;
  LCKCDEKNLOA_o *pLVar7;
  
  if ((DAT_045683cb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_OICHGEFJHDF_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_10068/*"Pack"*/);
    FUN_01bab630(&StringLiteral_10521/*"ProgressBarTitle"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    DAT_045683cb = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10068/*"Pack"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).MOMNHMKOKAN = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10521/*"ProgressBarTitle"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).HPIMKAKCJMM = pSVar3;
        thunk_FUN_01c20e04();
        ppCVar4 = &(__this->fields).KJAPDIOFGHP;
        *ppCVar4 = (CCLKPGBIBOP_o *)0x0;
        thunk_FUN_01c20e04(ppCVar4,0);
        pSVar5 = (System_Xml_XmlNode_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                           (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                            (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        pLVar7 = (__this->fields).JLAFBNCHHFO;
        pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar5,pLVar7,pSVar6,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlNode_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                           (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                            (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        pLVar7 = (__this->fields).NBOGMHIMLEC;
        pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar5,pLVar7,pSVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

