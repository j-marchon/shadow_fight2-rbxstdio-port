// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$GLJGIJNALCA @ RVA 0x3152844

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  pUVar1 = (__this->fields).super.super.super._content;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_StrangerDialog__GLJGIJNALCA
              ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.super.super._content;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,UVar6.fields.y,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                         ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                           ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            UVar5.fields.y = UVar5.fields.y + 200.0;
            UVar5.fields.x = UVar4.fields.x;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_StrangerBigDialog__IEIGNFCOIOF(__this,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

