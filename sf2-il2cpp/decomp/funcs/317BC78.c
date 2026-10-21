// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GKPJMHOFIOO @ RVA 0x317BC78

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  
  Nekki_SF2_GUI_Dialogs_StrangerDialog__DBAFLMPFDKB(__this,method);
  Nekki_SF2_GUI_Dialogs_StoryDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields).KGEDEAGBKGB == false) {
    return;
  }
  pUVar1 = (__this->fields).super.super._content;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.super._content;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar2,UVar3.fields.y + 50.0 + 20.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

