// Nekki.SF2.GUI.Dialogs.StoryDialog$$NDGMODGKNEG @ RVA 0x32C22A0

void Nekki_SF2_GUI_Dialogs_StoryDialog__NDGMODGKNEG
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  pNVar1 = (__this->fields)._text;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._text;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (pUVar2,UVar4.fields.x + (__this->fields).CILDLHDCCLG.fields.x,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._text;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._text;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar2,UVar4.fields.y + (__this->fields).CILDLHDCCLG.fields.y,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

