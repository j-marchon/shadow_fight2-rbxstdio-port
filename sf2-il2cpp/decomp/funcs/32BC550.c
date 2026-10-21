// MainMenuRaidRatingPanel$$MHNENMANPGF @ RVA 0x32BC550

void MainMenuRaidRatingPanel__MHNENMANPGF(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  
  if ((DAT_045674ab & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8957);
    FUN_01bab630(&StringLiteral_3576);
    DAT_045674ab = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).CEFPNGJALDO;
  pNVar6 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_3576,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._btnTop100;
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._btnTop100;
      if ((pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         ((pUVar3 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
        UnityEngine_Transform__set_parent(pUVar2,pUVar3,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetAsFirstSibling(pUVar2,(MethodInfo *)0x0);
          pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_00,
                              Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
          *ppNVar5 = pNVar6;
          thunk_FUN_01c20e04(ppNVar5,pNVar6);
          if (*ppNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (*ppNVar5,StringLiteral_8957,(MethodInfo *)0x0);
            if (*ppNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalScale(pUVar2,1.3,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._btnTop100;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                (pNVar4->fields).super.FlashingImage = (__this->fields).CEFPNGJALDO;
                thunk_FUN_01c20e04(&(pNVar4->fields).super.FlashingImage);
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

