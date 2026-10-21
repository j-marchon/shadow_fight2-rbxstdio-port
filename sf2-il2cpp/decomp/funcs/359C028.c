// Nekki.SF2.GUI.Profile.SubItem$$IAPFLEBPOJL @ RVA 0x359C028

void Nekki_SF2_GUI_Profile_SubItem__IAPFLEBPOJL
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._lockPicture;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).GMEDAKHGMME,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive
                (pUVar2,(__this->fields).GMEDAKHGMME == false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

