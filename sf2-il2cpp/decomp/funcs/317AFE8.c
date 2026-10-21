// Nekki.SF2.GUI.Dialogs.StrangerDialog$$NDGMODGKNEG @ RVA 0x317AFE8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__NDGMODGKNEG
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  pUVar1 = (__this->fields).super._textsSprite;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super._textsSprite;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (pUVar2,UVar4.fields.x + (__this->fields).super.CILDLHDCCLG.fields.x,
                 (MethodInfo *)0x0);
      pUVar1 = (__this->fields).super._textsSprite;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).super._textsSprite;
        if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar2,UVar4.fields.y + (__this->fields).super.CILDLHDCCLG.fields.y,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

