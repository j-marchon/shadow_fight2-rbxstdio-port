// Nekki.SF2.GUI.Map.RaidQuestsButton$$ICECOGOGGJE @ RVA 0x3486534

void Nekki_SF2_GUI_Map_RaidQuestsButton__ICECOGOGGJE
               (Nekki_SF2_GUI_Map_RaidQuestsButton_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  GALHNMPIEHA_o *pGVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  long lVar7;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int32_t local_24;
  
  if ((DAT_045683b2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9093);
                    /* try { // try from 03586584 to 0368658f has its CatchHandler @ 03585cbc */
    FUN_01bab630(&StringLiteral_9092);
    DAT_045683b2 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03586590 to 03686597 has its CatchHandler @ 03586598 */
  pNVar8 = (__this->fields)._label;
                    /* catch() { ... } // from try @ 0358651c with catch @ 03586598
                       catch() { ... } // from try @ 03586590 with catch @ 03586598 */
                    /* try { // try from 0358659c to 03686873 has its CatchHandler @ 0358659c
                       catch() { ... } // from try @ 0358659c with catch @ 0358659c
                       catch() { ... } // from try @ 03586e0c with catch @ 0358659c
                       catch() { ... } // from try @ 03586fd8 with catch @ 0358659c
                       catch() { ... } // from try @ 0358719c with catch @ 0358659c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pNVar8 = (__this->fields)._label;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (pGVar3 != (GALHNMPIEHA_o *)0x0) {
      local_24 = (pGVar3->fields)._BADKBIBHMEJ_k__BackingField;
      pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,pSVar4,(pNVar8->klass->vtable)._75_set_text.method);
        pNVar5 = (__this->fields)._image;
        if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
          pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
          if ((pGVar3 != (GALHNMPIEHA_o *)0x0) && (pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive
                      (pUVar6,0 < (pGVar3->fields)._BADKBIBHMEJ_k__BackingField,(MethodInfo *)0x0);
            pNVar8 = (__this->fields)._label;
            if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
              pGVar3 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
              if ((pGVar3 != (GALHNMPIEHA_o *)0x0) && (pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar6,0 < (pGVar3->fields)._BADKBIBHMEJ_k__BackingField,
                           (MethodInfo *)0x0);
                pNVar5 = (__this->fields)._image;
                if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
                  if (!bVar2) {
                    return;
                  }
                  pNVar8 = (__this->fields)._label;
                  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pNVar5 = (__this->fields)._image;
                    lVar7 = (*(pNVar8->klass->vtable)._74_get_text.methodPtr)
                                      (pNVar8,(pNVar8->klass->vtable)._74_get_text.method);
                    if ((lVar7 != 0) && (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                      puVar1 = &StringLiteral_9092;
                      if (1 < *(int *)(lVar7 + 0x10)) {
                        puVar1 = &StringLiteral_9093;
                      }
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (pNVar5,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields)._image;
                      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
                        return;
                      }
                    }
                  }
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
  return;
}

