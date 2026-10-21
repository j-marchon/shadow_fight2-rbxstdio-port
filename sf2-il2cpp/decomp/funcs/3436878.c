// Nekki.SF2.GUI.Shop.ShopScene$$PBDGFBENHDK @ RVA 0x3436878

void Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  uint uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  LabelButton_o *pLVar4;
  undefined8 *puVar5;
  bool local_28 [4];
  bool local_24 [4];
  
  if ((DAT_04568196 & 1) == 0) {
    FUN_01bab630(&StringLiteral_16818);
    FUN_01bab630(&StringLiteral_16820);
    FUN_01bab630(&StringLiteral_16821);
    FUN_01bab630(&StringLiteral_10876);
    DAT_04568196 = 1;
  }
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    pLVar4 = (__this->fields)._TryItemButton;
    if ((pLVar4 != (LabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._RestorePurchasesButton;
      if ((pLVar4 != (LabelButton_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pLVar4 = (__this->fields)._ForgeButton;
        if ((pLVar4 != (LabelButton_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    local_24[0] = false;
    local_28[0] = false;
    HCAICJLDDJO__IOJJNFJDFEJ(local_24,local_28,CNDPGGAFHEA,(MethodInfo *)0x0);
    uVar1 = (__this->fields).AIAODGKGPEI;
    bVar2 = HCAICJLDDJO__HDHHJBFCPJK
                      ((bool)((byte)(0x5f >> (ulong)(uVar1 & 0x1f)) & uVar1 < 7),CNDPGGAFHEA,
                       (MethodInfo *)0x0);
    pLVar4 = (__this->fields)._TryItemButton;
    if ((pLVar4 != (LabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._TryItemButton;
      if (pLVar4 != (LabelButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pLVar4,true,(MethodInfo *)0x0);
        pLVar4 = (__this->fields)._RestorePurchasesButton;
        if (pLVar4 != (LabelButton_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
          bVar2 = Nekki_SF2_GUI_Shop_ShopScene__GBEFFGHDIFF(__this,method_00);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
            pLVar4 = (__this->fields)._ForgeButton;
            if (pLVar4 != (LabelButton_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
              bVar2 = Nekki_SF2_GUI_Shop_ShopScene__ALKCCLEIKCF(__this,method_01);
              if ((bVar2) &&
                 (bVar2 = System_String__op_Inequality
                                    ((CNDPGGAFHEA->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_10876,(MethodInfo *)0x0), bVar2)) {
                bVar2 = HCAICJLDDJO__MINAKLNNDBL(CNDPGGAFHEA,true,(MethodInfo *)0x0);
              }
              else {
                bVar2 = false;
              }
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
                if (local_28[0] == false) {
                  if ((local_24[0] != false) ||
                     (bVar2 = System_String__op_Equality
                                        ((CNDPGGAFHEA->fields)._GMPAEDFIIHF_k__BackingField,
                                         StringLiteral_10876,(MethodInfo *)0x0), bVar2)) {
                    pLVar4 = (__this->fields)._TryItemButton;
                    if (pLVar4 != (LabelButton_o *)0x0) {
                      puVar5 = &StringLiteral_16818;
                      goto LAB_03536a9c;
                    }
                  }
                  else {
                    pLVar4 = (__this->fields)._TryItemButton;
                    if (pLVar4 != (LabelButton_o *)0x0) {
                      puVar5 = &StringLiteral_16820;
LAB_03536a9c:
                      LabelButton__set_Alias(pLVar4,(System_String_o *)*puVar5,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  pLVar4 = (__this->fields)._TryItemButton;
                  if (pLVar4 != (LabelButton_o *)0x0) {
                    puVar5 = &StringLiteral_16821;
                    goto LAB_03536a9c;
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

