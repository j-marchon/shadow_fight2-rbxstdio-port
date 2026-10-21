// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CDLEAKKGPKD @ RVA 0x3190538

void Nekki_SF2_GUI_Shop_ShopTableViewCell__CDLEAKKGPKD
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((DAT_04566a40 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10876);
    DAT_04566a40 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    fVar4 = 0.0;
    if (!bVar1) {
      pNVar2 = (__this->fields).TicketLabel;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03290624;
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      fVar4 = UVar5.fields.y;
    }
    if ((__this->fields).IJHMEPALLGA == false) {
      pNVar2 = (__this->fields).TicketLabel;
      if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03290624;
      UVar6 = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
      (__this->fields).BLIEELLLKIP.fields.x = UVar6.fields.x;
      (__this->fields).BLIEELLLKIP.fields.y = UVar6.fields.y;
      (__this->fields).BLIEELLLKIP.fields.z = UVar6.fields.z;
      (__this->fields).IJHMEPALLGA = true;
    }
    pNVar2 = (__this->fields).TicketLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6.fields.z = (__this->fields).BLIEELLLKIP.fields.z + 0.0;
      UVar6.fields.y = fVar4 + (__this->fields).BLIEELLLKIP.fields.y;
      UVar6.fields.x = (__this->fields).BLIEELLLKIP.fields.x + 0.0;
      UnityEngine_Transform__set_localPosition
                ((UnityEngine_Transform_o *)pUVar3,UVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03290624:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

