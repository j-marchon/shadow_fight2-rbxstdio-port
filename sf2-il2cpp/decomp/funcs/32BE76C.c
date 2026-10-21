// Nekki.SF2.GUI.Dialogs.StoryDialog$$EMNMKABDINP @ RVA 0x32BE76C

void Nekki_SF2_GUI_Dialogs_StoryDialog__EMNMKABDINP
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,System_String_o *CJBJLOPIGFH,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_01;
  UnityEngine_Vector3_array *x;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  System_String_o *local_38;
  float local_24;
  
  if ((DAT_045674bb & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    DAT_045674bb = 1;
  }
  local_24 = 0.0;
  local_38 = (System_String_o *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__FDEPCEJJGLO(CJBJLOPIGFH,&local_24,&local_38,(MethodInfo *)0x0);
  __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._portrait;
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) {
      Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(__this_01,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._portrait;
    }
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    *(System_String_o **)&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier = pSVar3;
    thunk_FUN_01c20e04(&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier);
    pNVar4 = (__this->fields)._portrait;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,local_38,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._portrait;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        x = (pNVar4->fields).super.super.m_Corners;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pNVar4 = (__this->fields)._portrait;
          if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033bea20;
          *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = pSVar3;
          thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
          pNVar4 = (__this->fields)._portrait;
          if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033bea20;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,local_38,(MethodInfo *)0x0);
        }
        pNVar4 = (__this->fields)._portrait;
        if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.y = (__this->fields).MKENJPJCDMO;
          value.fields.x = (__this->fields).BNJJNFFCCCA + -500.0;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(pUVar5,value,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._portrait;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
            if (DAT_0455fb9d == '\0') {
              FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
              DAT_0455fb9d = '\x01';
            }
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__Rotate
                        (pUVar5,(UnityEngine_Vector3_o)
                                (UnityEngine_Vector3_TypeInfo->static_fields->forwardVector).fields,
                         (__this->fields).EMEOGGLKCEB,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._portrait;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
                          (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
                pNVar4 = (__this->fields)._portrait;
                if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                   (pUVar5 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                   pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                  value_00.fields.y = (__this->fields).NBGPOPHLIFC * 1.8;
                  value_00.fields.x = value_00.fields.y * local_24;
                  value_00.fields.z = 0.0;
                  UnityEngine_Transform__set_localScale(pUVar5,value_00,(MethodInfo *)0x0);
                  pNVar4 = (__this->fields)._portrait;
                  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                     (__this_00 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive
                              (__this_00,(__this->fields).FKDKFGIFBIJ,(MethodInfo *)0x0);
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
LAB_033bea20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

