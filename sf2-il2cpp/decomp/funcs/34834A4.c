// Nekki.SF2.GUI.Dialogs.SettingsDialog$$JBFCMIMJLCF @ RVA 0x34834A4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__JBFCMIMJLCF
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *transform;
  UnityEngine_GameObject_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar3;
  ACHLOMELAJE_o *pAVar4;
  System_String_o *pSVar5;
  
  if ((DAT_0456838e & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15826);
    DAT_0456838e = 1;
  }
  pNVar2 = (__this->fields).lblUserId;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar2,0x65,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).lblUserId;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(transform,-516.0,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).lblUserId;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                   (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar2,
                   (pNVar2->klass->vtable)._23_set_color.method);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
          pSVar5 = (pAVar4->fields).super.GEONGCPLLFJ;
          bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar5,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).lblUserId;
          if (bVar1) {
            if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              bVar1 = false;
LAB_03583630:
              UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pSVar5 = System_String__Concat(StringLiteral_15826,pSVar5,(MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,pSVar5,(MethodInfo *)0x0);
              pNVar2 = (__this->fields).lblUserId;
              if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                bVar1 = true;
                goto LAB_03583630;
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

