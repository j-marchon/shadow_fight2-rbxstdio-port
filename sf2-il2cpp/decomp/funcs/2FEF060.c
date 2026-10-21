// Nekki.SF2.GUI.Shop.Forge.RecipePropertyUI$$Refresh @ RVA 0x2FEF060

void Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertyUI_o *__this,System_String_o *HHHAAGDPOKH,
               float MMMPFDKCLIP,float KJIKHPEEMFC,bool OAEJFDBIHPO,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  float local_38;
  float local_34;
  
  if ((DAT_04565a55 & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_22293);
    DAT_04565a55 = 1;
  }
  __this_00 = (__this->fields)._Icon;
  (__this->fields).PDOCIKAGKFH = MMMPFDKCLIP;
  (__this->fields).MNFJGKCJFEH = KJIKHPEEMFC;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,HHHAAGDPOKH,(MethodInfo *)0x0);
    local_34 = (__this->fields).PDOCIKAGKFH;
    pNVar2 = (__this->fields)._ValueRangeLabel;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_34);
    local_38 = (__this->fields).MNFJGKCJFEH;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_38);
    pSVar1 = System_String__Format(StringLiteral_22293,arg0,arg1,(MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
      pNVar2 = (__this->fields)._ValueRangeLabel;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,OAEJFDBIHPO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

