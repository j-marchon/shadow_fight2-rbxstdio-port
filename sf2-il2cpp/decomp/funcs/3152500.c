// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$GLANJNFACKI @ RVA 0x3152500

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  
  Nekki_SF2_GUI_Dialogs_StrangerDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).super.super.super._bottomStripe;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super.super._bottomStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar2,UVar3.fields.y + -20.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

