// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$AMKNLFPFLPK @ RVA 0x312F0AC

void Nekki_SF2_GUI_Shop_Forge_RecipeUI__AMKNLFPFLPK
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,UnityEngine_GameObject_o *OKOHDENADGD,
               bool DBKMEBGOHLP,MethodInfo *method)

{
  ushort uVar1;
  MMDPHPGAGAP_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CLMJPODNPKB_o *pCVar2;
  VirtualInvokeData *pVVar3;
  CLMJPODNPKB_c *pCVar4;
  UnityEngine_Vector2_Fields UVar5;
  ulong uVar6;
  int32_t *piVar7;
  UnityEngine_GameObject_o **ppUVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_045666bc & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    FUN_01bab630(&MMDPHPGAGAP_TypeInfo);
    DAT_045666bc = 1;
  }
  __this_00 = (MMDPHPGAGAP_o *)thunk_FUN_01bda818(MMDPHPGAGAP_TypeInfo);
  MMDPHPGAGAP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (MMDPHPGAGAP_o *)0x0) {
    MMDPHPGAGAP__CJEEDJHKDBE
              (__this_00,(__this->fields).PHAGOJCOMPN,(__this->fields).AIGNPODKOAH,(MethodInfo *)0x0
              );
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      (__this_00->fields).NMFDFHKAIHG.fields.x = UVar9.fields.x;
      (__this_00->fields).NMFDFHKAIHG.fields.y = UVar9.fields.y;
      UVar5 = (__this->fields).MKEPHECGCNP.fields;
      ppUVar8 = &(__this_00->fields).LLMLOCGKBHH;
      *ppUVar8 = OKOHDENADGD;
      (__this_00->fields).BOICIIOEOKN.fields = UVar5;
      (__this_00->fields).KEBFGEPCBMC = 0x3c;
      (__this_00->fields).CPPABOCOPAD = 3;
      thunk_FUN_01c20e04(0x30000003c,UVar9.fields.y,UVar9.fields.z,ppUVar8,OKOHDENADGD);
      (__this_00->fields).HDNPGLLCNEF = DBKMEBGOHLP;
      pCVar2 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar2 != (CLMJPODNPKB_o *)0x0) {
        pCVar4 = pCVar2->klass;
        uVar1._0_1_ = (pCVar4->_2).rank;
        uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pCVar4->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar3 = pCVar4->vtable + (*piVar7 + 3);
              goto LAB_0322f1d4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar2,CLMJPODNPKB_TypeInfo,3);
LAB_0322f1d4:
                    /* WARNING: Could not recover jumptable at 0x0322f1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar3->methodPtr)(pCVar2,__this_00,pVVar3->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

