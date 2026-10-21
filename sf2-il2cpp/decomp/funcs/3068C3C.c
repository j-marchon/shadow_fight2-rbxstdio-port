// Nekki.SF2.Core.Fights.Controls.Stick$$Update @ RVA 0x3068C3C

void Nekki_SF2_Core_Fights_Controls_Stick__Update
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  MethodInfo *extraout_x1;
  int iVar4;
  UnityEngine_UI_Image_o *pUVar5;
  undefined8 uVar6;
  float fVar8;
  UnityEngine_Vector3_o value;
  ulong uVar7;
  
  if ((DAT_04565f17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f17 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields)._extensionZone;
  if (DAT_04565f33 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo,method);
    DAT_04565f33 = '\x01';
  }
  uVar1 = 0;
  if (Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->_GBNDCFANILC_k__BackingField !=
      false) {
    uVar1 = 0x3f800000;
  }
  if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              ((ulong)uVar1,0,0,(ulong)uVar1,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
    pUVar5 = (__this->fields)._extensionZone;
    if ((pUVar5 != (UnityEngine_UI_Image_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      fVar8 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA;
      value.fields.z = fVar8 * (__this->fields).KHMNGINLJJG.fields.z;
      value.fields.y = fVar8 * (__this->fields).KHMNGINLJJG.fields.y;
      value.fields.x = fVar8 * (__this->fields).KHMNGINLJJG.fields.x;
      uVar7 = (ulong)(uint)value.fields.y;
      UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._flashing;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pUVar5 = (__this->fields)._flashing;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        uVar6 = (*(pUVar5->klass->vtable)._22_get_color.methodPtr)
                          (pUVar5,(pUVar5->klass->vtable)._22_get_color.method);
        pUVar3 = (__this->fields)._flashing;
        if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                    (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
          pUVar3 = (__this->fields)._flashing;
          if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (uVar6,uVar7,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
            iVar4 = (__this->fields).PDGNMHLGFJC;
            if ((__this->fields).GOINPGAFMAJ == false) {
              if (iVar4 < 1) {
                (__this->fields).GOINPGAFMAJ = true;
                if (iVar4 == 0) {
                  return;
                }
                (__this->fields).PDGNMHLGFJC = 0;
                return;
              }
              iVar4 = iVar4 - (__this->fields).FIMMBOGJCFD;
            }
            else if (iVar4 < 0xfa) {
              iVar4 = (__this->fields).FIMMBOGJCFD + iVar4;
            }
            else {
              (__this->fields).GOINPGAFMAJ = false;
              if (iVar4 == 0xfa) {
                return;
              }
              iVar4 = 0xfa;
            }
            (__this->fields).PDGNMHLGFJC = iVar4;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

