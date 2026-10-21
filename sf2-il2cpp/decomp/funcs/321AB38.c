// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$AMKNLFPFLPK @ RVA 0x321AB38

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__AMKNLFPFLPK
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,
               UnityEngine_GameObject_o *LKMJPHDHCID,bool GPHFIAMCCJI,bool LHAADIKDNFO,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  KBCOFHAJOCK_o *__this_00;
  MMDPHPGAGAP_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  DOPEEDABNEK_o *pDVar5;
  UnityEngine_Vector2_Fields UVar6;
  CLMJPODNPKB_c *pCVar7;
  ulong uVar8;
  int32_t *piVar9;
  UnityEngine_GameObject_o **ppUVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_04566eff & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    FUN_01bab630(&MMDPHPGAGAP_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566eff = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 != (DOPEEDABNEK_o *)0x0) &&
     (__this_00 = (pDVar5->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0))
  {
    bVar2 = KBCOFHAJOCK__CPKKHCAIGLN(__this_00,EIKFGOCCOIE,(MethodInfo *)0x0);
    if (!bVar2) {
      JJPNLEPEAFM__CMMCCNHIIOP(EIKFGOCCOIE,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (MMDPHPGAGAP_o *)thunk_FUN_01bda818(MMDPHPGAGAP_TypeInfo);
    MMDPHPGAGAP___ctor(__this_01,(MethodInfo *)0x0);
    if (((__this_01 != (MMDPHPGAGAP_o *)0x0) &&
        (MMDPHPGAGAP__CJEEDJHKDBE(__this_01,EIKFGOCCOIE,(MethodInfo *)0x0),
        LKMJPHDHCID != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_02 = UnityEngine_GameObject__get_transform(LKMJPHDHCID,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UVar11 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      (__this_01->fields).NMFDFHKAIHG.fields.x = UVar11.fields.x;
      (__this_01->fields).NMFDFHKAIHG.fields.y = UVar11.fields.y;
      UVar6 = (__this->fields)._hintOffset.fields;
      ppUVar10 = &(__this_01->fields).LLMLOCGKBHH;
      *ppUVar10 = LKMJPHDHCID;
      (__this_01->fields).BOICIIOEOKN.fields = UVar6;
      thunk_FUN_01c20e04(UVar11.fields.x,UVar11.fields.y,UVar11.fields.z,ppUVar10,LKMJPHDHCID);
      (__this_01->fields).HDNPGLLCNEF = GPHFIAMCCJI;
      pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar3 != (CLMJPODNPKB_o *)0x0) {
        pCVar7 = pCVar3->klass;
        uVar1._0_1_ = (pCVar7->_2).rank;
        uVar1._1_1_ = (pCVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pCVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar4 = pCVar7->vtable + (*piVar9 + 3);
              goto LAB_0331acf8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,3);
LAB_0331acf8:
                    /* WARNING: Could not recover jumptable at 0x0331ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pCVar3,__this_01,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

