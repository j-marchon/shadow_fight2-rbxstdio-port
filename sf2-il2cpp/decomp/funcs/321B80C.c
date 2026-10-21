// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$SetCurrency @ RVA 0x321B80C

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__SetCurrency
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,HBNENINHPGF_o *OAOLCGAIILM,
               int64_t GNDOPGAILNK,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Transform_o *transform;
  Il2CppObject *arg0;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  int64_t local_38;
  
  method_00 = (MethodInfo *)OAOLCGAIILM;
  if ((DAT_04566f06 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&StringLiteral_22054);
    DAT_04566f06 = 1;
    method_00 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__MBKCJEFAPMO(__this,method_00);
  pNVar4 = (__this->fields)._icon;
  if (OAOLCGAIILM == (HBNENINHPGF_o *)0x0) {
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._text;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pSVar1 = OFFIONDOEPM__HHJFGJLPHCH
                       ((OAOLCGAIILM->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,pSVar1,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._icon;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalScale(transform,0.5,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._text;
        local_38 = GNDOPGAILNK;
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_38);
        pSVar1 = System_String__Format(StringLiteral_22054,arg0,(MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,pSVar1,(pNVar3->klass->vtable)._75_set_text.method);
          pNVar4 = (__this->fields)._icon;
          if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            pNVar3 = (__this->fields)._text;
            if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
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

