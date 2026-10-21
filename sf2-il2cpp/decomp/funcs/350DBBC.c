// Nekki.SF2.GUI.Dialogs.NewsDialog$$GLANJNFACKI @ RVA 0x350DBBC

void Nekki_SF2_GUI_Dialogs_NewsDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).super._topStripe;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 0360dbd4 to 0370dc53 has its CatchHandler @ 0360dd54 */
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,640.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super._bottomStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,-640.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

