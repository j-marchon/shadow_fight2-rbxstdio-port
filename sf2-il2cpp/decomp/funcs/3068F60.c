// Nekki.SF2.Core.Fights.Controls.Stick$$Start @ RVA 0x3068F60

/* WARNING: Removing unreachable block (ram,0x0316916c) */

void Nekki_SF2_Core_Fights_Controls_Stick__Start
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float local_48;
  float fStack_44;
  
  if ((DAT_04565f19 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    FUN_01bab630(&StringLiteral_12411);
    DAT_04565f19 = 1;
    method = extraout_x1;
  }
  pNVar6 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)__this,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_12411,(MethodInfo *)0x0);
    }
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK = __this;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields,__this);
  if (DAT_04565f34 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f34 = '\x01';
  }
  Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField = false
  ;
  pUVar2 = (__this->fields)._extensionZone;
  if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar12 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._extensionZone;
    (__this->fields).KHMNGINLJJG.fields.x = UVar12.fields.x;
    (__this->fields).KHMNGINLJJG.fields.y = UVar12.fields.y;
    (__this->fields).KHMNGINLJJG.fields.z = UVar12.fields.z;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (0,0,0,0,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        fVar10 = *(float *)((long)&pIVar3[2].monitor + 4);
        if ((DAT_04565f26 & 1) == 0) {
          FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
          DAT_04565f26 = 1;
        }
        if (fVar10 < 0.9) {
          fVar10 = 0.9;
        }
        Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA = fVar10;
        fVar10 = *(float *)((long)&pIVar3[2].klass + 4);
        fVar9 = 90.0 - fVar10;
        fVar10 = (fVar10 * 3.1415927) / 180.0;
        (__this->fields).POPGDHFBMGG = fVar9;
        (__this->fields).MAHPPCLAKLP = fVar10;
        fVar9 = (fVar9 * 3.1415927) / 180.0;
        (__this->fields).PPNPFHAJCMF = fVar9;
        sincosf(fVar10 * 0.5,&fStack_44,&local_48);
        (__this->fields).ADFFHMIGKMD = local_48;
        (__this->fields).EJBINLNPDJN = fStack_44;
        fVar10 = tanf(fVar9);
        (__this->fields).JMBOIACABNF = fVar10;
        Nekki_SF2_Core_Fights_Controls_Stick__EENKMFJAMNL(__this,method_00);
        pUVar2 = (__this->fields)._selectedTexture;
        if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
           (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pUVar2,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar11 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
          fVar9 = UVar11.fields.m_Width * 0.5;
          fVar10 = fVar9 * 0.5;
          (__this->fields).KDNCFIDDAKC = fVar9 * fVar9;
          (__this->fields).DANNCCNEPKF = fVar9;
          (__this->fields).EHKCCCMFBDL = fVar9;
          (__this->fields).FGKJMFGPODB = fVar10;
          (__this->fields).JFCALENOAKP = fVar10 * fVar10;
          pUVar2 = (__this->fields)._selectedTexture;
          fVar9 = fVar9 * *(float *)&pIVar3[2].monitor;
          uVar8 = (ulong)(uint)(fVar9 * fVar9);
          (__this->fields).KPEIOMADOJN = fVar9;
          (__this->fields).HAEFCMAPGCO = fVar9 * fVar9;
          if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            method_01 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,false,method_01);
            pUVar2 = (__this->fields)._flashing;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pUVar2 = (__this->fields)._flashing;
            if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
              uVar7 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                                (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
              pUVar5 = (__this->fields)._flashing;
              if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                          (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
                pUVar5 = (__this->fields)._flashing;
                if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                  (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                            (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
                  (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                            (uVar7,uVar8,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
                  pUVar2 = (__this->fields)._flashing;
                  if ((pUVar2 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive
                              (pUVar4,(__this->fields).IEFGAHDEMCC,(MethodInfo *)0x0);
                    return;
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

