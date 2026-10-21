// Nekki.SF2.GUI.Common.Credits.CreditsScreenElement$$Refresh @ RVA 0x310CC00

void Nekki_SF2_GUI_Common_Credits_CreditsScreenElement__Refresh
               (Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *__this,
               System_String_o *MMOEIJAAIIF,System_String_o *OPIPLFKCFPA,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_04566554 & 1) == 0) {
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_22469);
    DAT_04566554 = 1;
  }
  if (MMOEIJAAIIF != (System_String_o *)0x0) {
    pNVar7 = (__this->fields)._RoleLabel;
    pSVar5 = System_String__Replace
                       (MMOEIJAAIIF,StringLiteral_22469,StringLiteral_47,(MethodInfo *)0x0);
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
      if (OPIPLFKCFPA != (System_String_o *)0x0) {
        pNVar7 = (__this->fields)._NamesLabel;
        pSVar5 = System_String__Replace
                           (OPIPLFKCFPA,StringLiteral_22469,StringLiteral_47,(MethodInfo *)0x0);
        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                    (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
          pNVar7 = (__this->fields)._RoleLabel;
          if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            iVar3 = UnityEngine_UI_Text__get_fontSize
                              ((UnityEngine_UI_Text_o *)pNVar7,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._NamesLabel;
            if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              iVar4 = UnityEngine_UI_Text__get_fontSize
                                ((UnityEngine_UI_Text_o *)pNVar7,(MethodInfo *)0x0);
              pNVar7 = (__this->fields)._NamesLabel;
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                transform = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                pNVar7 = (__this->fields)._RoleLabel;
                    /* try { // try from 0320cd1c to 0330cdab has its CatchHandler @ 0320cd1c
                       catch() { ... } // from try @ 0320cd1c with catch @ 0320cd1c
                       catch() { ... } // from try @ 0320cdf4 with catch @ 0320cd1c
                       catch() { ... } // from try @ 0320ce1c with catch @ 0320cd1c
                       catch() { ... } // from try @ 0320ce48 with catch @ 0320cd1c
                       catch() { ... } // from try @ 0320ce78 with catch @ 0320cd1c */
                if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                   (__this_00 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
                   __this_00 != (UnityEngine_Transform_o *)0x0)) {
                  UVar9 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
                  iVar2 = iVar3 - iVar4;
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (transform,UVar9.fields.y - (float)iVar2,(MethodInfo *)0x0);
                  pUVar6 = (__this->fields)._LayoutElement;
                  if (DAT_04561c43 == '\0') {
                    FUN_01bab630(&System_Math_TypeInfo);
                    DAT_04561c43 = '\x01';
                  }
                  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pNVar7 = (__this->fields)._NamesLabel;
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    fVar8 = (float)(*(pNVar7->klass->vtable)._82_get_preferredHeight.methodPtr)
                                             (pNVar7,(pNVar7->klass->vtable)._82_get_preferredHeight
                                                     .method);
                    if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* try { // try from 0320cdac to 0330cdb3 has its CatchHandler @ 0320ce2c */
                      iVar1 = -iVar2;
                      if (-1 < iVar2) {
                        iVar1 = iVar2;
                      }
                    /* try { // try from 0320cdc0 to 0330cdc7 has its CatchHandler @ 0320ce28 */
                    /* WARNING: Could not recover jumptable at 0x0320cdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(pUVar6->klass->vtable)._34_set_minHeight.methodPtr)
                                (fVar8 + (float)iVar1,pUVar6,
                                 (pUVar6->klass->vtable)._34_set_minHeight.method);
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
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0320cdd0 to 0330cdf3 has its CatchHandler @ 0320ce24 */
  FUN_01bab8c8();
}

