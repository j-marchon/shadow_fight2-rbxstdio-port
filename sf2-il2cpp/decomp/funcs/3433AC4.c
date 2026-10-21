// Nekki.SF2.GUI.Shop.ShopScene$$HideUI @ RVA 0x3433AC4

void Nekki_SF2_GUI_Shop_ShopScene__HideUI(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *__this_00;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  CLMJPODNPKB_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  
  if ((DAT_0456817e & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_0456817e = 1;
    method = extraout_x1;
  }
  if ((__this->fields).AIAODGKGPEI - 1U < 2) {
    return;
  }
  __this_01 = (__this->fields)._Background;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  if (__this_01 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
    Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
              (__this_01,
               (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->IDLNHECBHND).fields,
               (MethodInfo *)0x0);
    DG_Tweening_DOTweenModuleUI__DOFade((__this->fields)._ShopUIGroup,0.0,0.7,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._ShopUIGroup;
    if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,false,(MethodInfo *)0x0);
      bVar2 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar3 != (CLMJPODNPKB_o *)0x0) {
        pCVar5 = pCVar3->klass;
        uVar1._0_1_ = (pCVar5->_2).rank;
        uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar4 = pCVar5->vtable + (*piVar7 + 2);
              goto LAB_03533bfc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,2);
LAB_03533bfc:
                    /* WARNING: Could not recover jumptable at 0x03533c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pCVar3,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

