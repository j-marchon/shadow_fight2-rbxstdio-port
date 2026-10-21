// Nekki.SF2.GUI.Shop.PerksPanel$$AMKNLFPFLPK @ RVA 0x336F110

void Nekki_SF2_GUI_Shop_PerksPanel__AMKNLFPFLPK
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,HEFOANCOHDC_o *CDEABOAKDEJ,
               UnityEngine_GameObject_o *OKOHDENADGD,bool DBKMEBGOHLP,bool LCPACBDHJCH,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  KBCOFHAJOCK_o *__this_00;
  MMDPHPGAGAP_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  CLMJPODNPKB_o *pCVar4;
  VirtualInvokeData *pVVar5;
  DOPEEDABNEK_o *pDVar6;
  UnityEngine_Vector2_Fields UVar7;
  CLMJPODNPKB_c *pCVar8;
  UnityEngine_Events_UnityEvent_bool__bool__o *__this_03;
  ulong uVar9;
  int32_t *piVar10;
  UnityEngine_GameObject_o **ppUVar11;
  UnityEngine_Vector3_o UVar12;
  
  if ((DAT_04567b09 & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    FUN_01bab630(&MMDPHPGAGAP_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool,_bool>_Invoke__);
    DAT_04567b09 = 1;
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
  pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar6 != (DOPEEDABNEK_o *)0x0) &&
     (__this_00 = (pDVar6->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0))
  {
    bVar2 = KBCOFHAJOCK__CPKKHCAIGLN(__this_00,CDEABOAKDEJ,(MethodInfo *)0x0);
    if (!bVar2) {
      JJPNLEPEAFM__CMMCCNHIIOP(CDEABOAKDEJ,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (MMDPHPGAGAP_o *)thunk_FUN_01bda818(MMDPHPGAGAP_TypeInfo);
    MMDPHPGAGAP___ctor(__this_01,(MethodInfo *)0x0);
    if (((__this_01 != (MMDPHPGAGAP_o *)0x0) &&
        (MMDPHPGAGAP__CJEEDJHKDBE(__this_01,CDEABOAKDEJ,(MethodInfo *)0x0),
        OKOHDENADGD != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_02 = UnityEngine_GameObject__get_transform(OKOHDENADGD,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UVar12 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      (__this_01->fields).NMFDFHKAIHG.fields.x = UVar12.fields.x;
      (__this_01->fields).NMFDFHKAIHG.fields.y = UVar12.fields.y;
      UVar7 = (__this->fields)._HintOffset.fields;
      ppUVar11 = &(__this_01->fields).LLMLOCGKBHH;
      *ppUVar11 = OKOHDENADGD;
      (__this_01->fields).BOICIIOEOKN.fields = UVar7;
      thunk_FUN_01c20e04(UVar12.fields.x,UVar12.fields.y,UVar12.fields.z,ppUVar11,OKOHDENADGD);
      (__this_01->fields).HDNPGLLCNEF = DBKMEBGOHLP;
      pCVar4 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar4 != (CLMJPODNPKB_o *)0x0) {
        pCVar8 = pCVar4->klass;
        uVar1._0_1_ = (pCVar8->_2).rank;
        uVar1._1_1_ = (pCVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pCVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar5 = pCVar8->vtable + (*piVar10 + 3);
              goto LAB_0346f2e0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CLMJPODNPKB_TypeInfo,3);
LAB_0346f2e0:
        bVar3 = (*pVVar5->methodPtr)(pCVar4,__this_01,pVVar5->method);
        __this_03 = (UnityEngine_Events_UnityEvent_bool__bool__o *)
                    (__this->fields)._OnPerkHintShowed;
        if (__this_03 != (UnityEngine_Events_UnityEvent_bool__bool__o *)0x0) {
          UnityEngine_Events_UnityEvent<bool,_bool>__Invoke
                    (__this_03,(bool)(bVar3 & 1),LCPACBDHJCH,
                     Method_UnityEngine_Events_UnityEvent<bool,_bool>_Invoke__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

