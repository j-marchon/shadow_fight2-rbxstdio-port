// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$FPGFFBKLIPP @ RVA 0x326F0AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__FPGFFBKLIPP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar7;
  ACHLOMELAJE_o *__this_01;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *method_00;
  OHDDKGHEEPA_o *pOVar11;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar12;
  Il2CppClass *pIVar13;
  int32_t *piVar14;
  LabelButton_o *pLVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  int64_t local_38;
  
  if ((DAT_04567212 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_19370);
    FUN_01bab630(&StringLiteral_2426);
    DAT_04567212 = 1;
  }
  pOVar11 = (__this->fields).LGHANMDEKPA;
  if (pOVar11 == (OHDDKGHEEPA_o *)0x0) {
    return;
  }
  pOVar12 = (pOVar11->fields).OJPLGFNIGBC;
  if (pOVar12 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    uVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o)
                       (pOVar12->fields).OAFBLBIBJBG.fields,(MethodInfo *)0x0);
    pOVar11 = (__this->fields).LGHANMDEKPA;
    if ((pOVar11 != (OHDDKGHEEPA_o *)0x0) &&
       (pOVar12 = (pOVar11->fields).OJPLGFNIGBC, pOVar12 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      uVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o)
                         (pOVar12->fields).DCOMFGPIBOE.fields,(MethodInfo *)0x0);
      if ((uVar5 != 0) && (uVar16 = (ulong)(uVar6 * 1000), uVar6 * 1000 != 0)) {
        __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if ((__this_00 == (KKLJIDJBFEI_o *)0x0) ||
           (pPVar7 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
           pPVar7 == (PGICCMFLDPI_o *)0x0)) goto LAB_0336f3c8;
        uVar18 = (__this->fields).HODAIAEDHBL - (pPVar7->fields).GDKPGIBMFPA;
        if ((long)uVar18 < 1) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BPKMFPHJDPM(__this,2,method_00);
          (__this->fields).LIIAOOJGEML = 0;
        }
        else {
          Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BPKMFPHJDPM(__this,1,method_00);
          uVar2 = 0;
          if (uVar16 != 0) {
            uVar2 = uVar18 / uVar16;
          }
          if (uVar18 != uVar2 * uVar16) {
            uVar2 = uVar2 + 1;
          }
          lVar17 = uVar2 * uVar5;
          if ((__this->fields).LIIAOOJGEML != lVar17) {
            pLVar15 = (__this->fields)._btnSkipCooldown;
            local_38 = lVar17;
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
            __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_01 != (ACHLOMELAJE_o *)0x0) {
              bVar4 = ACHLOMELAJE__MIFEPGNGDON(__this_01,lVar17,(MethodInfo *)0x0);
              if (bVar4) {
                fVar22 = 1.0;
                fVar19 = 0.0;
                fVar20 = 0.0;
                fVar21 = 0.0;
              }
              else {
                if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UVar23 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                fVar22 = UVar23.fields.a;
                fVar21 = UVar23.fields.b;
                fVar20 = UVar23.fields.g;
                fVar19 = UVar23.fields.r;
              }
              if (pLVar15 != (LabelButton_o *)0x0) {
                UVar23.fields.g = fVar20;
                UVar23.fields.r = fVar19;
                UVar23.fields.a = fVar22;
                UVar23.fields.b = fVar21;
                LabelButton__set_Color(pLVar15,UVar23,(MethodInfo *)0x0);
                pLVar15 = (__this->fields)._btnSkipCooldown;
                pIVar8 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                   (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                lVar17 = FUN_01bab718(string___TypeInfo,2);
                if (lVar17 != 0) {
                  if (*(int *)(lVar17 + 0x18) != 0) {
                    *(undefined8 *)(lVar17 + 0x20) = StringLiteral_2426;
                    thunk_FUN_01c20e04((undefined8 *)(lVar17 + 0x20));
                    pSVar9 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
                    if (1 < *(uint *)(lVar17 + 0x18)) {
                      *(System_String_o **)(lVar17 + 0x28) = pSVar9;
                      thunk_FUN_01c20e04();
                      uVar3 = StringLiteral_19370;
                      if (pIVar8 != (Il2CppObject *)0x0) {
                        pIVar13 = pIVar8->klass;
                        uVar1._0_1_ = (pIVar13->_2).rank;
                        uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
                        uVar16 = (ulong)uVar1;
                        if (uVar16 != 0) {
                          piVar14 = &((pIVar13->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType
                                == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                              pVVar10 = pIVar13->vtable + (*piVar14 + 0xc);
                              goto LAB_0336f384;
                            }
                            uVar16 = uVar16 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar16 != 0);
                        }
                        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar8,BLEFOFGCKEF_TypeInfo,0xc)
                        ;
LAB_0336f384:
                        pSVar9 = (System_String_o *)
                                 (*pVVar10->methodPtr)(pIVar8,uVar3,lVar17,pVVar10->method);
                        if (pLVar15 != (LabelButton_o *)0x0) {
                          LabelButton__set_Text(pLVar15,pSVar9,(MethodInfo *)0x0);
                          (__this->fields).LIIAOOJGEML = local_38;
                          return;
                        }
                      }
                      goto LAB_0336f3c8;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
              }
            }
            goto LAB_0336f3c8;
          }
        }
      }
      return;
    }
  }
LAB_0336f3c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

