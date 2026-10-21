// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$NFEHJDIAOOD @ RVA 0x3256608

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__NFEHJDIAOOD
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *pNVar4;
  WideScreenController_StaticFields *pWVar5;
  
  if ((DAT_04567163 & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04567163 = 1;
  }
  pNVar4 = (__this->fields)._chatContent;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0) {
    if (((pNVar4->fields).super._DDIEMKPIMAJ_k__BackingField == false) &&
       ((pNVar4->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
      if ((pNVar4->fields).super._JHGIPNHGGOK_k__BackingField == false) {
        bVar1 = (pNVar4->fields).super._LDBEGKGOHKI_k__BackingField != false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    Util__IHPDCBOFHPA((__this->fields)._optimizeChatRenderRoot,bVar1,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._leftChatHider;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._chatContent;
      if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0) {
        if ((((pNVar4->fields).super._HLLLGIDPLEN_k__BackingField == false) &&
            ((pNVar4->fields).super._JHGIPNHGGOK_k__BackingField == false)) &&
           ((pNVar4->fields).super._LDBEGKGOHKI_k__BackingField == false)) {
          bVar1 = false;
        }
        else {
          if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = WideScreenController__ShouldRenderBorders((MethodInfo *)0x0);
        }
        Util__IHPDCBOFHPA(pUVar3,bVar1,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._leftChatHider;
        if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          pWVar5 = WideScreenController_TypeInfo->static_fields;
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    ((pWVar5->BorderColor).fields.r,(pWVar5->BorderColor).fields.g,
                     (pWVar5->BorderColor).fields.b,(pWVar5->BorderColor).fields.a,pUVar2,
                     (pUVar2->klass->vtable)._23_set_color.method);
          pUVar2 = (__this->fields)._moveButtonHider;
          if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._chatContent;
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *)0x0) {
              if ((((pNVar4->fields).super._DDIEMKPIMAJ_k__BackingField == false) ||
                  ((pNVar4->fields).super._JHGIPNHGGOK_k__BackingField != false)) ||
                 (((pNVar4->fields).super._HLLLGIDPLEN_k__BackingField != false ||
                  ((pNVar4->fields).super._LDBEGKGOHKI_k__BackingField != false)))) {
                if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar1 = WideScreenController__ShouldRenderBorders((MethodInfo *)0x0);
              }
              else {
                bVar1 = false;
              }
              Util__IHPDCBOFHPA(pUVar3,bVar1,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._moveButtonHider;
              if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                pWVar5 = WideScreenController_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x033567cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                          ((pWVar5->BorderColor).fields.r,(pWVar5->BorderColor).fields.g,
                           (pWVar5->BorderColor).fields.b,(pWVar5->BorderColor).fields.a,pUVar2,
                           (pUVar2->klass->vtable)._23_set_color.method);
                return;
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

