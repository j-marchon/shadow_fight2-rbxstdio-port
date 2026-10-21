// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowImage @ RVA 0x3006C94

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowImage
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,bool DLOGMDGABJH,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_04565b4e & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04565b4e = 1;
  }
  pNVar1 = (__this->fields)._image;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._image;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      *(System_String_o **)&(pNVar1->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
      thunk_FUN_01c20e04(&(pNVar1->fields).super.m_PixelsPerUnitMultiplier);
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        pNVar1 = (__this->fields)._image;
        pSVar2 = OFFIONDOEPM__CNLBHLNMCCI
                           ((pHVar4->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,pSVar2,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._headerLayout;
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._34_set_minHeight.methodPtr)
                      (0x43340000,pUVar3,(pUVar3->klass->vtable)._34_set_minHeight.method);
            (__this->fields).BGODGJNKGOE = DLOGMDGABJH;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

