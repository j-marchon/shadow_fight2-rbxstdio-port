// Nekki.SF2.GUI.Glyphs.Glyph$$Refresh @ RVA 0x336ED8C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Glyphs_Glyph__Refresh
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,
               System_Collections_Generic_List_Bounds__o *PBEBNABDPFF,float COKDAPPLGKH,
               bool KLJAOIEBNHL,MethodInfo *method)

{
  int iVar1;
  BOGDEGPCIJI_o *pBVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  MethodInfo_27FC88C *method_00;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  System_Nullable_Vector2__o __this_01;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector2_o OCHLLMNLADJ;
  UnityEngine_Bounds_o UStack_88;
  ulong local_70;
  float local_68;
  
  method_00 = (MethodInfo_27FC88C *)(ulong)KLJAOIEBNHL;
  if ((DAT_04567b05 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_get_Item__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    DAT_04567b05 = 1;
  }
  if (((__this->fields)._HEJNKDEACJE_k__BackingField < 0) ||
     (uVar4._0_1_ = (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue,
     uVar4._1_3_ = *(undefined3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1,
     uVar4._4_4_ = (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x,
     (uVar4 & 0xff) == 0)) {
    pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      value = false;
LAB_0346efa4:
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    local_68 = (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y;
    __this_01.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
    __this_01.fields._0_8_ = &local_70;
    local_70 = uVar4;
    UVar8 = System_Nullable<Vector2>__get_Value(__this_01,method_00);
    pBVar2 = (__this->fields)._FAPFIEABBBO_k__BackingField;
    if (pBVar2 != (BOGDEGPCIJI_o *)0x0) {
      UVar9 = BOGDEGPCIJI__GEPJOMPBPBI(pBVar2,COKDAPPLGKH,(MethodInfo *)0x0);
      if (PBEBNABDPFF != (System_Collections_Generic_List_Bounds__o *)0x0) {
        System_Collections_Generic_List<Bounds>__get_Item
                  (&UStack_88,PBEBNABDPFF,(__this->fields)._HEJNKDEACJE_k__BackingField,
                   Method_System_Collections_Generic_List<Bounds>_get_Item__);
        pBVar2 = (__this->fields)._FAPFIEABBBO_k__BackingField;
        if (pBVar2 != (BOGDEGPCIJI_o *)0x0) {
          iVar1 = (pBVar2->fields)._COIENECLAAM_k__BackingField;
          if (iVar1 == 0) {
            fVar6 = UStack_88.fields.m_Center.fields.y + UStack_88.fields.m_Extents.fields.y +
                    UVar9.fields.y * -0.5;
          }
          else if (iVar1 == 2) {
            fVar6 = UVar9.fields.y * 0.5 +
                    (UStack_88.fields.m_Center.fields.y - UStack_88.fields.m_Extents.fields.y);
          }
          else {
            fVar6 = UVar8.fields.y;
            if (iVar1 == 1) {
              fVar6 = UStack_88.fields.m_Center.fields.y;
            }
          }
          pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            fVar7 = (pBVar2->fields)._BNFHGCOJLAL_k__BackingField.fields.x;
            fVar5 = (pBVar2->fields)._BNFHGCOJLAL_k__BackingField.fields.y;
            UVar10 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
            if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            OCHLLMNLADJ.fields.x =
                 UVar10.fields.x -
                 (Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->static_fields->NLPAOHIMPNA).fields.x;
            OCHLLMNLADJ.fields.y =
                 UVar10.fields.y -
                 (Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->static_fields->NLPAOHIMPNA).fields.y;
            UVar9.fields.y = (float)((ulong)UVar9.fields >> 0x20);
            UVar9 = Util__EFCELKPKECC(UVar9,OCHLLMNLADJ,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.y = fVar6 + fVar5 + UVar9.fields.y;
              value_00.fields.x = UVar8.fields.x + fVar7 + UVar9.fields.x;
              value_00.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition
                        ((UnityEngine_Transform_o *)pUVar3,value_00,(MethodInfo *)0x0);
              pBVar2 = (__this->fields)._FAPFIEABBBO_k__BackingField;
              if (pBVar2 != (BOGDEGPCIJI_o *)0x0) {
                pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
                UVar8 = BOGDEGPCIJI__GEPJOMPBPBI(pBVar2,COKDAPPLGKH,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar8.fields.y = (float)((ulong)UVar8.fields >> 0x20);
                  UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar8,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
                  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
                     (__this_00 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    value = true;
                    goto LAB_0346efa4;
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

