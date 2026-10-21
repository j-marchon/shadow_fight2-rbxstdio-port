// Nekki.SF2.GUI.Shop.ShopScene$$AFLOKAHKLFA @ RVA 0x3433C78

void Nekki_SF2_GUI_Shop_ShopScene__AFLOKAHKLFA
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  ushort uVar2;
  bool bVar3;
  CLMJPODNPKB_o *pCVar4;
  VirtualInvokeData *pVVar5;
  DG_Tweening_Sequence_o *t;
  CLMJPODNPKB_c *pCVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568192 & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04568192 = 1;
  }
  bVar3 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
  if (bVar3) {
    pCVar4 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
    if (pCVar4 == (CLMJPODNPKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar6 = pCVar4->klass;
    uVar2._0_1_ = (pCVar6->_2).rank;
    uVar2._1_1_ = (pCVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pCVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
          pVVar5 = pCVar6->vtable + (*piVar8 + 2);
          goto LAB_03532f6c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CLMJPODNPKB_TypeInfo,2);
LAB_03532f6c:
    (*pVVar5->methodPtr)(pCVar4,pVVar5->method);
  }
  t = (__this->fields).OOIFAHNCKAO;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).OOIFAHNCKAO;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

