// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetItem @ RVA 0x321B4A0

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetItem
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               int32_t GNDOPGAILNK,
               System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *GJBLBEALOBO,MethodInfo *method
               )

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  HOOAAGABMBL_o *extraout_x1;
  HOOAAGABMBL_o *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_34;
  
  method_00 = IKKAMAMLIKA;
  if ((DAT_04566f02 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_22054);
    DAT_04566f02 = 1;
    method_00 = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,(MethodInfo *)method_00);
    pNVar1 = (__this->fields)._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._text;
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pNVar1 = (__this->fields)._icon;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar1,(IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._icon;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(transform,1.0,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__BMGBHKLPKDE(__this,GJBLBEALOBO,method_01);
        pNVar4 = (__this->fields)._text;
        local_34 = GNDOPGAILNK;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        pSVar2 = System_String__Format(StringLiteral_22054,arg0,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
          pNVar1 = (__this->fields)._icon;
          if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._text;
            if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

