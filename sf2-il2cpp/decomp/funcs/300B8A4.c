// Nekki.SF2.GUI.Shop.InfoPanelContent$$JMKIPMNGBEG @ RVA 0x300B8A4

void Nekki_SF2_GUI_Shop_InfoPanelContent__JMKIPMNGBEG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t EMJHGPFHPEG,
               int64_t IPGOFHMGFOI,int32_t EBJIEEKBHDK,bool IBHEJHNKABF,
               UnityEngine_Color_o HOGGDIKLIPB,UnityEngine_Color_o NEPACPNPKHJ,
               UnityEngine_Color_o JNBIEOHKMMI,MethodInfo *method)

{
  int64_t iVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  IconLabelButton_o *pIVar4;
  int64_t local_78;
  int64_t iStack_28;
  
  local_78 = IPGOFHMGFOI;
  iStack_28 = EMJHGPFHPEG;
  if ((DAT_04565b67 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20992,EMJHGPFHPEG,IPGOFHMGFOI,EBJIEEKBHDK);
    DAT_04565b67 = 1;
  }
  pIVar4 = (__this->fields).BMHDNILOKHO;
  if (pIVar4 != (IconLabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pIVar4,IBHEJHNKABF,(MethodInfo *)0x0);
    if (-1 < EMJHGPFHPEG) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar4,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0310ba64;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      LabelButton__set_Color((LabelButton_o *)pIVar4,HOGGDIKLIPB,(MethodInfo *)0x0);
      if (EMJHGPFHPEG < 1) {
        LabelButton__set_Alias((LabelButton_o *)pIVar4,StringLiteral_20992,(MethodInfo *)0x0);
      }
      else {
        pSVar3 = System_Int64__ToString((int64_t)&iStack_28,(MethodInfo *)0x0);
        LabelButton__set_Text((LabelButton_o *)pIVar4,pSVar3,(MethodInfo *)0x0);
      }
    }
    pIVar4 = (__this->fields).KCFECNOELAA;
    if (pIVar4 != (IconLabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pIVar4,IBHEJHNKABF,(MethodInfo *)0x0);
      iVar1 = local_78;
      if (-1 < local_78) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar4,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0310ba64;
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        LabelButton__set_Color((LabelButton_o *)pIVar4,NEPACPNPKHJ,(MethodInfo *)0x0);
        if (iVar1 < 1) {
          LabelButton__set_Alias((LabelButton_o *)pIVar4,StringLiteral_20992,(MethodInfo *)0x0);
        }
        else {
          pSVar3 = System_Int64__ToString((int64_t)&local_78,(MethodInfo *)0x0);
          LabelButton__set_Text((LabelButton_o *)pIVar4,pSVar3,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
LAB_0310ba64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

