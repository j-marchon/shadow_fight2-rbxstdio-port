// Nekki.SF2.GUI.Menu.MainMenu$$UpdateNewItems @ RVA 0x356C36C

void Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  DOPEEDABNEK_o *__this_00;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04568c35 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c35 = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar1 = (__this->fields)._newPerksLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._newItemsCircle;
      if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._newItemsEllipse;
        if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (__this_00 != (DOPEEDABNEK_o *)0x0) {
            local_24 = DOPEEDABNEK__JMPINBGBLNI(__this_00,(MethodInfo *)0x0);
            if (local_24 < 1) {
              return;
            }
            if (local_24 < 10) {
              pNVar1 = (__this->fields)._newPerksLabel;
            }
            else {
              pNVar1 = (Nekki_SF2_GUI_LabelAlias_o *)(__this->fields)._newItemsCircle;
            }
            if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._newItemsEllipse;
              pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar3->klass->vtable)._75_unknown.methodPtr)
                          (pUVar3,pSVar4,(pUVar3->klass->vtable)._75_unknown.method);
                pUVar3 = (__this->fields)._newItemsEllipse;
                if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar2 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                   pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
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
  return;
}

